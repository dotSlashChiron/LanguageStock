#include <iostream>
#include <vector>
#include <map>
#include <array>
class BookShop
{
    std::vector<std::string> book_authors = {"Shakespeare", "Dostoyevsky", "Tolstoy", "Kafka", "Dante"};
    std::vector<std::string> book_names = {"Hamlet", "The Brothers Karamazov", "The Great Gatsby", "The Brothers Karamazov", "Divine Comedy"};
    std::vector<std::string> book_publishers = {"Oxford University Press", "Oxford University Press", "Penguin", "Penguin", "Penguin"};
    std::vector<int> book_prices = {10, 15, 20, 15, 25};
    std::vector<int> book_quantities = {10, 5, 20, 5, 10};
    std::vector<bool> book_availability = {true, true, true, false, true};
    std::vector<int> book_Quantity = {5, 4, 5, 0, 3};
    std::vector<std::string> errorList = {"Book not found", "Book already exists", "Book added", "Book deleted", "Changes made", "No changes made", "Author not Found", "Something went wrong!"};
    std::vector<std::string> infoList = {"Author Added Successfully...", "Book Added Successfully...", "Price Added Successfully...", "Book Found!", "Author Found!"};
    int userBalance;
    int transactions;
    void giveBack(int a);
    void updatePrice(int a, int index)
    {
        book_prices[index] = a;
    }

public:
    BookShop()
    {
        this->userBalance = 50;
    }
    BookShop(int balance)
    {
        if (balance > 90)
        {
            int returnAmount = balance - 90;
            this->userBalance = balance - returnAmount;
            // giveBack(returnAmount);
        }
        else
        {
            this->userBalance = 50;
        }
    }
    BookShop(int a, int index, short balance = 90)
    {
        updatePrice(a, index);
        if (balance > 90)
        {
            int returnAmount = this->userBalance - 90;
            this->userBalance = balance - returnAmount;
            // giveBack(returnAmount);
        }
        else
        {
            this->userBalance = balance;
        }
    }
    std::vector<std::string> dispalyAuthors()
    {
        std::vector<std::string> authors;
        for (int i = 0; i < book_authors.size(); i++)
        {
            authors.push_back(book_authors[i]);
        }
        return authors;
    };
    std::vector<std::string> dispalyAuthors(std::string book_name)
    {
        std::vector<std::string> authors;
        for (int i = 0; i < book_authors.size(); i++)
        {
            if (book_names[i] == book_name)
            {
                authors.push_back(book_authors[i]);
            }
        }
        return authors;
    };
    std::vector<std::string> displayBooks()
    {
        std::vector<std::string> books;
        for (int i = 0; i < book_names.size(); i++)
        {
            books.push_back(book_names[i]);
        }
        return books;
    };
    std::vector<std::string> displayBooks(std::string author)
    {
        std::vector<std::string> books;
        for (int i = 0; i < book_authors.size(); i++)
        {
            if (book_authors[i] == author)
            {
                books.push_back(book_names[i]);
            }
        }
        return books;
    };
    short displayPrice(std::string book_name)
    {
        short price;
        try
        {
            for (int i = 0; i < book_names.size(); i++)
            {
                if (book_names[i] == book_name)
                {
                    price = book_prices[i];
                }
            }
        }
        catch (int err)
        {
            std::cout << errorList[0];
        }
        return price;
    };
    bool checkAvailability(std::string book_name)
    {
        for (int i = 0; i < book_names.size(); i++)
        {
            if (book_name == book_names[i])
            {
                return true;
            }
        }
        return false;
    }
    bool checkAuthorAvailability(std::string author)
    {
        for (int i = 0; i < author.size(); i++)
        {
            if (author == book_authors[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    std::string searchBookByAuthorName(std::string author)
    {
        try
        {
            for (int i = 0; i < book_authors.size(); i++)
            {
                if (author == book_authors[i])
                {
                    return book_names[i];
                }
                else
                {
                    std::cout << "Book Not Found!" << std::endl;
                }
            }
        }
        catch (int err)
        {
            std::cout << errorList[0];
            return errorList[0];
        }
    };
    std::string searchAuthorByBookName(std::string book_name)
    {
        try
        {
            for (int i = 0; i < book_names.size(); i++)
            {
                if (book_name == book_names[i])
                {
                    return book_authors[i];
                }
                else
                {
                    return errorList[6];
                }
            }
        }
        catch (int err)
        {
            std::cout << errorList[6];
            return errorList[6];
        }
    };
    short myBalance()
    {
        return this->userBalance;
    }
    int buyBook(std::string a)
    {
        if (checkAvailability(a) == true)
        {
            std::cout << infoList[3] << std::endl;
            for (int i = 0; i < this->book_names.size(); i++)
            {
                if (a == book_names[i])
                {
                    if (this->book_quantities[i] != 0)
                    {
                        int price = this->book_prices[i];
                        std::cout << "Book: " << a << " costs $" << price << std::endl;
                        std::cout << "Are you sure to buy? (y/n)(default n):";
                        char user__choice;
                        std::cin >> user__choice;
                        if (user__choice == 'y' or user__choice == 'Y')
                        {
                            this->userBalance = this->userBalance - this->book_prices[i];
                            this->book_quantities[i]--;
                            this->transactions++;
                            std::cout << "$" << book_prices[i] << " deducted from your balance" << std::endl;
                            std::cout << "Book Purchased!" << std::endl;
                        }
                        else
                        {
                            std::cout << "Abort!" << std::endl;
                            return 0;
                        }
                    }
                }
            }
        }
        else if (this->checkAuthorAvailability(a) == true)
        {
            std::cout << infoList[4] << std::endl;
            for (int i = 0; i < this->book_authors.size(); i++)
            {
                if (a == this->book_authors[i])
                {
                    short price = this->book_prices[i];
                    std::cout << "Book: " << a << " costs $" << price << std::endl;
                    std::cout << "Are you sure to buy? (y/n)(default n):";
                    char user__choice;
                    std::cin >> user__choice;
                    if (user__choice == 'y' or user__choice == 'Y')
                    {
                        this->userBalance = this->userBalance - this->book_prices[i];
                        this->book_quantities[i]--;
                        std::cout << "$" << book_prices[i] << " deducted from your balance" << std::endl;
                        std::cout << "Book Purchased!" << std::endl;
                    }
                }
            }
        }
    }
    void printAuthors()
    {
        try
        {
            for (int i = 0; i < book_authors.size(); i++)
            {
                std::cout << i << ". " << book_authors[i] << std::endl;
            }
        }
        catch (int err)
        {
            std::cout << errorList[7];
        }
    }
    void printBooks()
    {
        try
        {
            for (int i = 0; i < book_names.size(); i++)
            {
                std::cout << i << ". " << book_names[i] << std::endl;
            }
        }
        catch (int err)
        {
            std::cout << errorList[7];
        }
    };
    void addEntry(std::string book_name, std::string author, short price)
    {
        try
        {
            book_authors.push_back(author);
            std::cout << infoList[0]<<std::endl;
            book_names.push_back(book_name);
            std::cout << infoList[1]<<std::endl;
            book_prices.push_back(price);
            std::cout << infoList[2]<<std::endl;
            std::cout << errorList[4]<<std::endl;
        }
        catch (int err)
        {
            std::cout << errorList[5];
        }
    };
};
int gspmain()
{
    try
    {
        BookShop b(100);
        int myBalance = b.myBalance();
        std::cout << myBalance << "\n";
        std::cout << "Welcome to BookShop" << std::endl;
        std::cout << "1. Show the list of Available Authors" << std::endl;
        std::cout << "2. Show the list of Available Books" << std::endl;
        std::cout << "3. Show the price of a book" << std::endl;
        std::cout << "4. Check the availability of a book" << std::endl;
        std::cout << "5. Add a book" << std::endl;
        std::cout << "6. Remove a book" << std::endl;
        int user_choice;
        std::cout << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> user_choice;
        while (true)
        {
            if (user_choice == 1)
            {
                std::cout << " " << std::endl;
                b.printAuthors();
                std::cout << "Wanna restart? (y/n)";
                char choice;
                std::cin >> choice;
                if (choice == 'y' or choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (user_choice == 2)
            {
                std::cout << " " << std::endl;
                b.printBooks();
                std::cout << "Wanna restart? (y/n)";
                char choice;
                std::cin >> choice;
                if (choice == 'y' or choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (user_choice == 3)
            {
                std::string bookName;
                std::cout << "Enter the name of the book: ";
                std::cin.ignore();
                getline(std::cin, bookName);
                short price = b.displayPrice(bookName);
                std::cout << "Price of the Book is: $" << price << std::endl;
                std::cout << "Wanna restart? (y/n)";
                char choice;
                std::cin >> choice;
                if (choice == 'y' or choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (user_choice == 4)
            {
                std::string bookName;
                std::cout << "Enter the name of the book: ";
                std::cin.ignore();
                std::cin.ignore();
                getline(std::cin, bookName);
                if (b.checkAvailability(bookName) == true)
                {
                    std::cout << "Book is available" << std::endl;
                }
                else
                {
                    std::cout << "Book is not available" << std::endl;
                }
                std::cout << "Wanna restart? (y/n)";
                char choice;
                std::cin >> choice;
                if (choice == 'y' or choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (user_choice == 5)
            {
                std::string bookName, authorName;
                short price;
                std::cout << "Enter the name of the book: ";
                std::cin.ignore();
                getline(std::cin, bookName);
                std::cout << "Enter the name of the author: ";
                std::cin.ignore();
                getline(std::cin, authorName);
                std::cout << "Enter the price of the book: ";
                std::cin.ignore();
                std::cin >> price;
                b.addEntry(bookName, authorName, price);
                std::cout << "Wanna restart? (y/n)";
                char choice;
                std::cin >> choice;
                if (choice == 'y' or choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else
            {
                std::cout << "Invalid Choice" << std::endl;
                // Ask user if he wants to continue
                std::cout << "Do you want to restart or exit? (y/n)" << std::endl;
                char user_choice;
                std::cin >> user_choice;
                if (user_choice == 'y' or user_choice == 'Y')
                {
                    continue;
                }
                else
                {
                    break;
                    std::cout << "Thank you for using BookShop" << std::endl;
                }
            }
        }
    }
    catch (int err)
    {
        std::cout << "BSOD" << std::endl;
    }
    return 0;
}

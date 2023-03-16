#include <iostream>
const int m = 50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    inline void CNT(void)
    {
        count = 0;
    }
    void getItem(void);
    void displaySum(void);
    void removeItem(void);
    void displayItem(void);
};
void ITEMS::getItem(void)
{
    std::cout << "Enter item code: ";
    std::cin >> itemCode[count];
    std::cout << "Enter item cost: ";
    std::cin >> itemPrice[count];
    count++;
}
void ITEMS::displaySum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
        std::cout << "\nTotal Value: " << sum << "\n";
    }
}
void ITEMS::removeItem(void)
{
    int a;
    std::cout << "Enter Item Code To Be Removed: ";
    std::cin >> a;

    for (int i = 0; i < count; i++)
        if (itemCode[i] == a)
            itemPrice[i] == 0;
}
void ITEMS::displayItem(void)
{
    std::cout << "\n Code Price\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << "\n"
                  << itemCode[i];
        std::cout << "" << itemPrice[i];
    }
}
//==============================
int mainfaafaf()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        std::cout << "\nYou can do the following; "
                  << "Enter Appropriate Number \n";
        std::cout << "\n1 : Add an item ";
        std::cout << "\n2 : Display Total Value";
        std::cout << "\n3 : Delete an Item from The Cart";
        std::cout << "\n4 : Display Final List";
        std::cout << "\n5 : Quit!";
        std::cout << "\n\nWhat is your opinion ?\n";
        std::cin >> x;

        switch (x)
        {
        case 1:
            order.getItem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.removeItem();
            break;
        case 4:
            order.displayItem();
            break;
        case 5:
            break;
        default:
            std::cout << "Error in Input,try again\n";
        }

    } while (x != 5);
    return 0;
}
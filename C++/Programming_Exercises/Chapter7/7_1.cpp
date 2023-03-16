#include <iostream>
class float_t{
    float data;
    public:
    float_t(){
        this->data = 0.0;
    }
    float_t(float n){
        this->data = n;
    }
    float operator+(float_t s){
        // std::cout<<"YOYO"<<std::endl;
        return float(this->data+s.data);
    }
    float operator-(float_t s){
        return float(this->data-s.data);
    }
    float operator*(float_t s){
        return float(this->data*s.data);
    }
    float operator/(float_t s){
        return float(this->data/s.data);
    }
    float operator+(float s){
        return float(this->data+s);
    }
    float operator-(float s){
        return float(this->data-s);
    }
    float operator*(float s){
        return float(this->data*s);
    }
    float operator/(float s){
        return float(this->data/s);
    }
};
int aasthamain(){
    float_t a = 23;
    float_t b = 2;
    float x = a+b;
    std::cout<<"$"<< x << std::endl;
    return 0;
}
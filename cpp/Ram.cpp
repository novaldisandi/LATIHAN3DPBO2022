#include <iostream>
using namespace std;

class Ram
{
    private:
        string capacity = "";
        int price = 0;

    public:
        Ram(){}

        Ram(string capacity, int price)
        {
            this->capacity = capacity;
            this->price = price;
        }

        void setCapacity(string capacity)
        {
            this->capacity = capacity;
        }

        string getCapacity()
        {
            return this->capacity;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        void showRam()
        {
            cout << "RAM Capacity    : " << this->getCapacity() << endl;
            cout << "RAM Price       : " << this->getPrice() << endl;
        }

        ~Ram(){}
};
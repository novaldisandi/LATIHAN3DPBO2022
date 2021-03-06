#include <iostream>
using namespace std;

class Processor
{
    private:
        string name = "";
        int price = 0;

    public:
        Processor(){}

        Processor(string name, int price)
        {
            this->name = name;
            this->price = price;
        }

        void setName(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return this->name;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        void showProcessor()
        {
            cout << "Processor name  : " << this->getName() << endl;
            cout << "Processor Price : " << this->getPrice() << endl;
        }

        ~Processor(){}
};
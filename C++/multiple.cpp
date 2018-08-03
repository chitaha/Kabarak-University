#include <iostream>

using namespace std;

class liquid
{
    float specific_gravity;
    public:
        void input()
        {
            cout<<"Specific gravity: ";
            cin>>specific_gravity;
        }
        void output()
        {
            cout<<"Specific gravity: "<<specific_gravity<<endl;
        }
};

class fuel
{
    float rate;
    public:
        void input()
        {
            cout<<"Rate(per liter): $";
            cin>>rate;
        }
        void output()
        {
            cout<<"Rate(per liter): $"<<rate<<endl;
        }
};

class petrol: public liquid, public fuel
{
    public:
        void input()
        { 
            liquid::input();
            fuel::input();
        }
        void output()
        {
            liquid::output();
            fuel::output();
        }
};

int main()
{
    petrol p;
    cout<<"Enter data"<<endl;
    p.input();
    cout<<endl<<"Displaying data"<<endl;
    p.output();
    // getch();
    return 0;
}
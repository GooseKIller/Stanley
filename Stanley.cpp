#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    char office,you;
    int a;
    while (true)
    {
        a=rand()%82+33;
        switch(a)
        {
            case 95:
                a++;
                break;
            default:
                break;
        }
        office=a;
        cout<<"Press button "<<office<<">";
        while(you!=office)
        {
            cin>>you;
            if(you!=office)
            {
                cout<<"Try again!\nPress button "<<office<<">";
            }
        }
        cout<<"Great!\n";
    }
}
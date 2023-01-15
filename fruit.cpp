#include<iostream>
using namespace std;
float Fruit(string fruit,string day,float quantity);
main()
{
    string fruit;
    string day;
    float quantity;
    float result;
    cout << "Enter the name of fruit...";
    cin >> fruit;
    cout << "Enter day(Mondoy/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday)...";
    cin >> day;
    cout << "Enter quantity of fruit....";
    cin >> quantity;
    result = Fruit(fruit,day,quantity);
    cout << "Total cost is..." << result;
}
float Fruit(string fruit,string day,float quantity)
{
    float price;
    if(day == "Monday"||day == "Tuesday"||day == "Wednesday"||day == "Thursday"||day == "Friday")
    {
        if(fruit=="banana")
        {
            price = quantity*2.50;
        }
        if(fruit=="apple")
        {
            price = quantity*1.20;
        }
        if(fruit=="orange")
        {
            price = quantity*0.85;
        }
        if(fruit=="grapefruit")
        {
            price = quantity*1.45;
        }
        if(fruit=="kiwi")
        {
            price = quantity*2.70;
        }
        if(fruit=="pineapple")
        {
            price = quantity*5.50;
        }
        if(fruit=="grapes")
        {
            price = quantity*3.85;
        }
        
    }
    if(day == "Saturday"||day == "Sunday")
    {
        if(fruit=="banana")
        {
            price = quantity*2.70;
        }
        if(fruit=="apple")
        {
            price = quantity*1.25;
        }
        if(fruit=="orange")
        {
            price = quantity*0.90;
        }
        if(fruit=="grapefruit")
        {
            price = quantity*1.60;
        }
        if(fruit=="kiwi")
        {
            price = quantity*3.00;
        }
        if(fruit=="pineapple")
        {
            price = quantity*5.60;
        }
        if(fruit=="grapes")
        {
            price = quantity*4.20;
        }
        
    }
    return price;
}
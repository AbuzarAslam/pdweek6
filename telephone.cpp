#include<iostream>
using namespace std;
float Telephone(string type,string time,float min);
main()
{
    string type;
    string time;
    float min;
    float result;
    cout << "Enter type(regular/premium)....";
    cin >> type;
    cout << "Enter time(day/night).....";
    cin >> time;
    cout << "Enter number of minutes you used.....";
    cin >> min;
    result = Telephone(type,time,min);
    cout << "The charges are " << result << "$";
}
float Telephone(string type,string time,float min)
{
    float charges;
    float minute;

    if(type == "regular")
    {
        minute = min - 50;
        if(min>50)
        {
            charges=(minute*0.20)+10;
        }
        if(min<=50)
        {
            charges=10.0;
        }
    }  
    if((type=="premium")&&(time=="day"))
    {
        minute=min-75;
        if(min>75)
        {
            charges=(minute*0.10)+25.00;
        }
        if(min<75)
        {
            charges=25.00;
        }
    }
    if((type=="premium")&&(time=="night"))
    {
        minute=min-100;
        if(min>75)
        {
            charges=(minute*0.05)+25.00;
        }
        if(min<100)
        {
            charges=25.00;
        }
    }
    return charges;
}
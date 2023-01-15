#include<iostream>
using namespace std;
float Studio(string month,float stay);
float Appartment(string month,float stay);
main()
{
    string month;
    float stay;
    float result1;
    float result2;
    cout << "Enter month (May/June/July/August/September/Octuber)....";
    cin >> month;
    cout << "Enter number of stays....";
    cin >> stay;
    result1 = Studio(month,stay);
    cout << "For studio cost is..." << result1 << endl;
    result2 = Appartment(month,stay);
    cout << "For appartment cost is..." << result2 << endl;
}
float Studio(string month,float stay)
{
    float rent;
    float discount=0;
    if(month=="Octuber" || month=="May")
    {
        
        if(stay > 7)
        {
            discount = (50*5/100.0);
            cout<<discount;
        }
        if(stay > 14)
        {
            discount = (50*30/100.0);
        }
        rent = (50-discount)*stay;
    }
    if(month=="June" || month=="September")
    {
        if(stay > 14)
        {
            discount = (75.20*20/100.0);
        }
        rent = (75.20-discount)*stay;
    }
    if(month=="July" || month=="August")
    {
        rent = 76*stay;
    }
    return rent;
}
float Appartment(string month,float stay)
{
    {
    float rent;
    float discount=0;
    if(month=="Octuber" || month=="May")
    {
        if(stay > 14)
        {
            discount = (65*10/100.0);
        }
        rent = (65-discount)*stay;
    }
    if(month=="June" || month=="September")
    {
        if(stay > 14)
        {
            discount = (68.70*10/100.0);
        }
        rent = (68.70-discount)*stay;
    }
    if(month=="July" || month=="August")
    {
       if(stay > 14)
        {
            discount = (77*10/100.0);
        }
        rent = (77-discount)*stay;
    }
    return rent;
    }
}

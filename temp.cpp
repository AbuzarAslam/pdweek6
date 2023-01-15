#include<iostream>
using namespace std;
string Temp(string temperature,string humidity);
main()
{
    string temperature;
    string humidity;
    string result;
    cout << "Enter temperature(warm/cold).....";
    cin >> temperature;
    cout << "Enter humidity(dry/humid)...";
    cin >> humidity;
    result = Temp(temperature,humidity);
    cout << "" << result;

}
string Temp(string temperature,string humidity)
    {
        string activity;
        if(temperature == "warm" && humidity == "dry")
        {
            activity = "Play Tennis";
        }
        if(temperature == "warm" && humidity == "humid")
        {
            activity = "swim";
        }
        if(temperature == "cold" && humidity == "dry")
        {
            activity = "play basketball";
        }
        if(temperature == "cold" && humidity == "humid")
        {
            activity = "watch TV";
        }
        return activity;
    }

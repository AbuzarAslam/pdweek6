#include<iostream>
using namespace std;
string Symbol(int day,string month);
main()
{
    int day;
    string month;
    string result;
    string sign;
    cout << "Enter day.....";
    cin >> day;
    cout << "Enter month...";
    cin >> month;
    result = Symbol(day,month);
    cout << "People born on this data have " << result << " symbol";
}
string Symbol(int day,string month)
{
    string symbol;
    if((day>=21 && month =="march") || (day<=19 && month== "april"))
    {
    	cout << "Aries"<< endl;
        symbol = "The Ram";
    }
    if((day>=20 && month =="april") || (day<=20 && month== "may"))
    {
    	cout << "Taurus" << endl;
        symbol = "The Bull";
    }
    if((day>=21 && month =="may") || (day<=20 && month== "june"))
    {
    	cout << "Gemini" << endl;
        symbol = "The Twins";
    }
    if((day>=21 && month =="june") || (day<=19 && month== "july"))
    {
    	cout << "Cancer" << endl;
        symbol = "The Crab";
    }
    if((day>=21 && month =="july") || (day<=22 && month== "august"))
    {
    	cout << "Leo" << endl;
        symbol = "The Lion";
    }
    if((day>=23 && month =="august") || (day<=22 && month== "sepetember"))
    {
    	cout << "Virgo" << endl;
        symbol = "The Virgin";
    }
    if((day>=23 && month =="september") || (day<=22 && month== "octuber"))
    {
    	cout << "Libra" << endl;
        symbol = "The Scales";
    }
    if((day>=23 && month =="octuber") || (day<=21 && month== "november"))
    {
    	cout << "Scorpio" << endl;
        symbol = "The Scorpion";
    }
    if((day>=22 && month =="november") || (day<=21 && month== "december"))
    {
    	cout << "Sagittarius" << endl;
        symbol = "The Archer";
    }
    if((day>=22 && month =="december") || (day<=19 && month== "january"))
    {
    	cout << "Capricorn" << endl;
        symbol = "The Goat";
    }
    if((day>=20 && month =="january") || (day<=18 && month== "february"))
    {
    	cout << "Aquarius" << endl;
        symbol = "The Water Bearer";
    }
    if((day>=19 && month =="february") || (day<=20 && month== "march"))
    {
    	cout <<"Pisces" << endl;
        symbol = "The Ram";
    }

    return symbol;
}

#include<iostream>
using namespace std;
string Grade(float english,float math,float chem,float ss,float bio);
main()
{
    float english;
    float math;
    float chem;
    float ss;
    float bio;
    string result;
    cout << "Enter marks in English..." ;
    cin >> english;
    cout << "Enter marks in Maths...." ;
    cin >> math;
    cout << "Enter marks in Social Studies...." ;
    cin >> ss;
    cout << "Enter marks in Chemistry....." ;
    cin >> chem;
    cout << "Enter marks in Biology...." ;
    cin >> bio;
    result = Grade(english,math,chem,ss,bio);
    cout << "Your Grade is....." << result;
}
string Grade(float english,float math,float chem,float ss,float bio)
{
    float total;
    string grade;
    total = english+math+chem+ss+bio;
    cout << "Marks obtained is " << total<< endl;
    float percentage;
    percentage = (total/500)*100;
    cout << "Percentage is " << percentage << endl;
    if (percentage>=90)
    {
        grade = "A+";
    }
    else if (percentage>=80)
    {
        grade = "A";
    }
    else if (percentage>=70)
    {
        grade = "B+";
    }
    else if (percentage>=60)
    {
        grade = "B";
    }
    else if (percentage>=50)
    {
        grade = "C";
    }
    return grade;
}
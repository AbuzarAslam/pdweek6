#include<iostream>
using namespace std;
void Exam(int hour1,int min1,int hour2,int min2);
main()
{
    int hour1;
    int hour2;
    int min1;
    int min2;
    cout << "Enter exam starting time(Hour)...";
    cin >> hour1;
    cout << "Enter exam starting time(Minute)...";
    cin >> min1;
    cout << "Enter student arriving time(Hour)...";
    cin >> hour2;
    cout << "Enter student arriving time(Minute)...";
    cin >> min2;
    Exam(hour1,min1,hour2,min2);

}
void Exam(int hour1,int min1,int hour2,int min2)
{
    string result;
        int min3,min4;
        int difference,hour=0,min;
        min4= (hour2*60) + min2;
        min3 = (hour1*60) + min1;
        difference = min4 - min3;
          if(difference>0)
          {
             if(difference>59)
             {
                    
                    min = difference - 60;
                    hour = hour +1;
                    cout<<hour<<":"<<min<<" hours Late"<<endl;
                    
             }
             else
             {
                 cout<<"You are "<<difference<<" minutes late";
             }
             
          }

          else if(difference<0 && difference<=-30)
          {
             if(difference<-59)
             {
                    
                    min = difference + 60;
                    hour = hour +1;
                    cout<<hour<<":"<<(-1)*min<<" hours before the start"<<endl;
                    
             }
             else
             {
                cout<<"You are "<<(-1)*difference<<" minutes early ";  
             }   
          }

          else
          {
             cout<<"You are on time...."<<endl;
          }
          
}
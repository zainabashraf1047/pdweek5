#include<iostream>
using namespace std;
int neededhours;
int days;
int hoursrequired;
int workers;
int percentDays;
int time(int days , int neededhours , int workers);
main()
{
  int result;
  cout<<"Enter hours : ";
  cin >>neededhours;
  cout<<"Enter working days : ";
  cin >>days;
  cout <<"Enter number of workers : ";
  cin >>workers;
 
   

  hoursrequired =  time(days , neededhours , workers);

    if(hoursrequired > neededhours)
    {
        cout <<"Yes" <<hoursrequired - neededhours <<" hour left .";
    }
        if(hoursrequired < neededhours)
    {
        cout <<"Not enough" <<neededhours - hoursrequired <<" hour needed .";
    }
}
int time(int days , int hours , int workers)
{
  int percentDays;
  int totalhour;
   percentDays = days * 10;
   percentDays = percentDays*0.9;
   totalhour = percentDays * workers;
   return totalhour;
}
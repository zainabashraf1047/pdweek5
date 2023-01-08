#include<iostream>
using namespace std;

float calculatetax(float price , char type);

float taxamount;
float taxrate;
float finalprice;
float result;
main()
{
    float price;
char type;
  cout <<"Enter vehicle price : ";
  cin >> price;
  cout <<"Enter vehicle type : ";
  cin >> type;
  taxamount = price *( taxrate/100);
  finalprice = price + taxamount;
  result = calculatetax(price , type);
  cout <<"The final PRICE IS : " <<result;
}
float calculatetax(float price, char type)
{

  if(type == 'M')
  {
    taxrate = 6;
  }

    if(type == 'E')
  {
    taxrate = 8;
  }


  if(type == 'S')
  {
    taxrate = 10;
  }


  if(type == 'V')
  {
    taxrate = 12;
  }


  if(type == 'T')
  {
    taxrate = 15;
  }
    taxamount = price *( taxrate/100);
    finalprice = price + taxamount;
        result=finalprice;
  return result;




}
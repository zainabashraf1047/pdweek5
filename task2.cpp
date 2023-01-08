#include<iostream>
using namespace std;

float volume(float length, float width , float height ,string unit);

float calculatevolume;
main()
{
  float length , height , width;
  string unit;
  cout <<"Enter length : ";
  cin >>length;
  cout <<"Enter width : ";
  cin >>width;
  cout <<"Enter height : ";
  cin >>height;
  cout<<"Enter unit : ";
  cin >>unit;
  calculatevolume = volume(length , width , height , unit);
  cout <<"volume is : " << calculatevolume;

}
float volume(float length, float width , float height , string unit)
{
   if(unit == "centimeters")
   {
      length = length*100;
      width =  width*100;
      height =  height*100;
      calculatevolume= length * width * height;

   }
      if(unit == "kilometers")
   {
      length =  length / 1000;
      width  =  width / 1000;
      height =  height / 1000;
       calculatevolume= length * width * height;
   }
      if(unit == "millimeters")
   {
      length = 1000 * length;
      width = 1000 * width;
      height = 1000 * height;
      calculatevolume= length * width * height;
   }
    return calculatevolume;

}
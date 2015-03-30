#include"class.h"
//using namespace std;
   void BMI::setheight(float height){n=height;}
   void BMI::setmass(float mass){m=mass;}
   void BMI::setrange(float bmi){c=bmi;}
   float BMI::getheight(){return n;}
   float BMI::getmass(){return m;}
   float BMI::getrange(){return c;}
   float BMI::range(){
                      getheight();
                      getmass();
                       float d;
                       d=m/(n*n/10000);
                      return d;
                      }
   string BMI::cat()
   {
     getrange();
     string u;
     if(c<15)
                u="Very severely underweight";
        else if(c<16)
                u="Severely underweight";
        else if(c<18.5)
                u="Underweight";
        else if(c<25)
                u="Normal";
        else if(c<30)
                u="Overweight";
        else if(c<35)
                u="Obese Class I(Moderately obese)";
        else if(c<40)
                u="Obese Class II(Severely obese)";
        else if(c>=40)
                u="Obese Class III(Very severely obese)";
                return u;
         };




   

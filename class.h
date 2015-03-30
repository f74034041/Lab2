//#ifndef BMI_H
//#define BMI_H
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;
class BMI{
         public:
       void setheight(float );
       void setmass(float );
       void setrange(float );
       float getheight();
       float getmass();
       float getrange();
       float range();
       string cat(); 
      

         private:
                 float m;
                 float n;
                 float c; 
         };

//#endif

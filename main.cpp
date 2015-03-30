

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include"class.h"
using namespace std;
/*class BMI{
         public:
           float range(float m,float n)
            {
             float d;
             d=m/(n*n);
             return d;
            }
         };*/
int main(){
           float height,c;
           float mass;
           string g;
           fstream file;
           fstream file1;
           file.open("filein.txt",ios::in);
           file1.open("fileout.txt",ios::out);
           if(!file)
           {
            cerr<<"Can't open file!\n";
            exit(1);
           }
           file1<<"Height  "<<"Mass"<<"    Bmi"<<"   	Category"<<endl;
file1<<"--------------------------\n";
           BMI bmi;
           //bmi.setheight(height);
           //bmi.setmass(mass);
           //bmi.setrange(bmi.range());
           //bmi.range(mass,height);
           //c=bmi.range(mass,height);
           //g=bmi.cat(c);
while(file>>height>>mass)
{
           bmi.setheight(height);
           bmi.setmass(mass);
           c=bmi.range();
           bmi.setrange(bmi.range());
           g=bmi.cat();
  file1<<setw(4)<<setiosflags(ios::right)<<height<<setw(8)<<setiosflags(ios::right)<<mass<<"\t"<< bmi.range()<<"\t" <<g<<endl;

file>>height>>mass;
}
           return 0;
}







            

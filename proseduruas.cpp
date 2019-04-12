#include <iostream>
using namespace::std;

double input(string text){
double angka;
cout<<"input nilai "<<text<<" : ";
cin>>angka;
return angka;
}
void grade(double total){
char nHURUF;

if (total>=81)
    nHURUF = 'A';
else if (total>=61)
    nHURUF = 'B';
else if (total>=41)
    nHURUF = 'C';
else if (total>=21)
    nHURUF = 'D';
else
    nHURUF = 'E';
    cout<<"grade nilai :"<<nHURUF;
}
main (){
double uts,uas,tugas,absen,total;
uts=input("UTS");
uas=input("UAS");
tugas=input("TUGAS");
absen=input("ABSEN");

total= uts*0.2 + uas*0.3 + tugas*0.35 + absen*0.15;
cout<<"nilai total :"<<total<<endl;
grade(total);
}

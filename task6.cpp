#include <iostream>
using namespace std;

main()
{

string name;
float matricmarks;
float intermarks;
float ecatmarks;
float matricpercent;
float interpercent;
float ecatpercent;
float matricweight;
float interweight;
float ecatweight;
float aggregate;

cout << "Please enter your name" << endl;
cin >> name;

cout <<"Enter your matric marks" << endl;
cin >> matricmarks;

cout <<"Enter your inter marks" << endl;
cin >> intermarks;

cout <<"Enter your ecat marks" << endl;
cin >> ecatmarks;


matricpercent = matricmarks/1100*100;
interpercent = intermarks/550*100;
ecatpercent = ecatmarks/400*100;

matricweight = matricpercent/100*10;
interweight = interpercent/100*40;
ecatweight = ecatpercent/100*50;

aggregate = matricweight+ecatweight+interweight;

cout << name << " your aggregate is:" << aggregate;




}

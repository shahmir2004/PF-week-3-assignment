#include <iostream>
using namespace std;

main()

{

float current;
float charge;
float time;

cout << "Please enter the charge" << endl;
cin >> charge;

cout << " Please enter the time" << endl;
cin >> time;

current =charge/time;

cout << "the current in the circuit is:" << current;
}
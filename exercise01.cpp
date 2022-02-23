#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  int x;

  cout<< setw(5)<<"No" <<setw(15)<<"Name"<<setw(10)<<"Marks"<<endl;

  for(x=0;x<5;x++){
    cout<<setw(5)<< x+1
      <<setw(15)<<names[x]
      <<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<marks[x]<<endl;
      
  }
  return 0;
  }

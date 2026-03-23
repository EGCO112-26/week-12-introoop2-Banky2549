#include <iostream>
#include <string>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  int N=(argc-1)/2;
  if (N < 1) {
    return 0;
  }
  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    /*cout<<"Student "<<i<<endl;
    cout<<"name";
    cin>>n;*/
    a[i].set_name(argv[i * 2 + 1]);
    /*cout<<"age";
    cin>>age;*/
    a[i].set_age(stoi(argv[i * 2 + 2]));
  }
  //2. Print name and age of all N ppl
  /*for(i=0;i<N;i++){
    a[i].display();
  }*/

  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  // Print all info for the youngest person
  int min_age = a[0].get_age();
    for (int i = 1; i < N; i++) {
        if (a[i].get_age() < min_age) {
            min_age = a[i].get_age();
        }
    }
  //4. Change input from cin to argv
  cout << "Youngest student" << endl;
    for (int i = 0; i < N; i++) {
        if (a[i].get_age() == min_age) {
            a[i].display();
        }
    }

  
 return 0;

    
  }
  
  



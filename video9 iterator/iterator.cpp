// Implementing Binary tree in C++ [Part-1]
#include<bits/stdc++.h>

using namespace std;

int main(){  
    vector<string> solar_sys = {"mer","venus","earth","mars","jupitor","satrun","uranus","naptune"};

    vector<string>::iterator shrey = solar_sys.begin();
    vector<string>::iterator chandrakar = solar_sys.begin();

    // cout<<"shrey is at "<<*shivam<<endl;
    advance(shrey,3);
    // cout<<*next(shrey,5)<<endl;

    cout<<"Distance from shrey "<<distance(chandrakar,shrey)<<endl;



    // cout<<*shrey<<endl;
    // cout<<"let's go to earth "<<*(shrey+2)<<endl;


  return 0;
}
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(){

    string name;
    cin>>name;
    int len = name.length();
    if(len <= 4){
        cout<<"GRUPO A"<<endl;
    }
    else if(len >= 5 && len < 10){
        cout<<"GRUPO B"<<endl;
    }
    else if(len > 10){
        cout<<"GRUPO C"<<endl;
    }
    return 0;
}
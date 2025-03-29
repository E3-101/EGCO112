#ifndef C_H
#define C_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void Interface();
string Count(string );

int temp=0;

class User{
    int ID;
    string name;
    string faculty;
    public:
    User(int id,string n,string f) : ID(id), name(n), faculty(f) {}
    void info(){
        cout<<"Name : "<<name;
    }
};

void Interface(){
    int i,n;
    cout<<setfill('-')<<setw(52)<<"\n";
    cout<<"|"<<Count(" Info: ")<<setfill(' ')<<setw(temp)<<"|"<<endl;
    for(i=0;i<29;i++){
        cout<<"|"<<setfill(' ')<<setw(50)<<"|"<<endl;
    }
    cout<<setfill('-')<<setw(52)<<"\n";
}

string Count(string word){
    temp=50;
    temp=50-word.size();
    return word;
}
#endif
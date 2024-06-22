#include<iostream>
using namespace std;

int main()
{
    int age = 20;
    try{
        if(age >= 24){
            cout<<"You have the access to apply t0 DL";
    }
    else {
        throw(age);
    }
    return 0;
    }
    catch(int age){
        cout<<"You are not eligible to apply for DL. You are only "<<age<<" years old";
    }
    return 0;
}
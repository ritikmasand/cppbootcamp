#include<iostream>
using namespace std;


class Animal {
    public:
    Animal(){
        cout << "Animal constructor called" << endl;
    }
    
    void eat(){
        cout<<"I can eat"<<endl;
    }
        void getsleep(){
        sleep();
    }
     ~Animal(){
        cout << "Animal destructor called" << endl;
    }
    private:
    void sleep(){
        cout<<"I can sleep"<<endl;
    }

};

class Animaltwo : public Animal{
    public:
    void bark(){
        cout<<"I can bark"<<endl;
    }
};
int main()
{
    Animaltwo dog;
    dog.eat();
    dog.getsleep();
    dog.bark();
    // Animal cat;
    // cat.eat();
    // cat.sleep();
    // string str = "Letsupgrad";
    // string str1 = "Hello";
    // string res = str + " " + str1;
    // // cout<<res;
    // // . append method . 
    // cout<<str[1];
    // // charat method

    return 0;
}
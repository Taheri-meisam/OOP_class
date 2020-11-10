//Session 11

#include <iostream>
#include <thread>
#include "Player.h"
// inheritance Example 1

class Parent {
public :
    int id;
    std::string name;
    Parent() : id{ 0 }, age{ 0 } {

    }

private:
    int age;

protected:
    int saving;

};

class Child:public Parent{
public:
    int numofkid;
    void accessToParentMembers() {
        id = 202;
        saving = 300000; // protected so the child can have access to the (parent) super class
       // age = 33; compiler error

    }
    Child() :Parent{}, numofkid{ 0 }, brithID{ 0 } {

    }
protected:
    int brithID;
    
};

class person : public Parent {

};


//void Fun1(int a) {
//    std::cout << "Fun 1" << std::endl;
//}
//
//void Fun2() {
//    std::cout << "Fun 2" << std::endl;
//}



int main()
{
 
   /* std::thread T1(Fun1, 1000);
    std::thread T2(Fun2);

    T1.join();
    T2.join();*/


    Parent P1;
    P1.id = 100;
    P1.name = "John";
    //P1.age = 30;  //compiler error
    //p1.saving = 20000; //compiler error


    Child C1;
    C1.id = 12;
    C1.name = "OJ";
    C1.numofkid = 1;
   // C1.brithID = 100; // compiler error
   
    C1.accessToParentMembers();
    /////

    Player* player1 = new Player("John");
    std::cout << player1->name;


}


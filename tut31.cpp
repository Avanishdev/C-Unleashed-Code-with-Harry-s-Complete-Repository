#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(){//default constructor
a=0;
b=0;
}
complex(int x){
    a=x;
    b=0;

}
complex(int x,int y){
    a=x;
    b=y;

}
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main(){
complex c1;
c1.printNumber();

complex c2(1);
c2.printNumber();

complex c3(1,1);
c3.printNumber();

return 0;
}
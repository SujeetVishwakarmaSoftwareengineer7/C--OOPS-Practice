#include<iostream>
using namespace std;

class addition{
    public:
    int a;
    int b;
    int sum;
};
    void getsum();

int main(){
addition s1;
s1.a=5;
s1.b=10;

s1.sum=s1.a+s1.b;
cout<<"the sum of a and b is "<<s1.sum<<endl;

};

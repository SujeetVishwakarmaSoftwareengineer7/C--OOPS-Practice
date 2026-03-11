#include<iostream>
using namespace std;

class sujeet{
public:
    int a;
    int b;
    int sum;
    void print(){
        cout<<a<<" "<<b<<endl;
        cout<<sum<<endl;
         
    }

    };

    int main(){
        sujeet s1;
        s1.a =10;
        s1.b =20;
        s1.sum = s1.a + s1.b;
            cout<<"sum is"<< s1.sum <<endl;
         
       return 0;

    };

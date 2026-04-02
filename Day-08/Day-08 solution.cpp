 #include<iostream>
 using namespace std;
 

 //class means /blueprint

class student{
  public:  
 int id ;
 string  name;
 int  age;
 int  nos;

// parametrise constructor
student(int id, string name, int age,int nos){
    cout<<"student parametrise values"<<endl;

    this->id= id;
    this->name = name;
  
    this->age= age;
  
    this->nos=nos;
    
}

// constructor called
student(){
    cout<<"student default constructor called"<<endl;
}

//behaviour/functions
void study(){
    cout<<this->name<<" "<<"studing"<<endl;

}

void sleep(){
    cout<<this->name<<" "<<"sleeping"<<endl;

}

void bunk(){
    cout<<this->name<<" "<<"bunking"<<endl;
}

// destructor callled 

~student(){
    cout<<"student default destructor called"<<" " <<endl;
}


};


//object defining
 int main(){

 
student a(1,"ranu",15,5);
student b(2,"rahul",20,6);
cout<<a.name<<" " <<a.age<<endl;
cout<<b.name<<" "<<b.age<<endl;;

 a.bunk();
 a.sleep();
 a.study();
 b.sleep();
 b.study();
 b.bunk();
 }
 

#include<iostream>
using namespace std;


// base class
class vehicle{
protected:
    string name;
    string model;
    int nos;
 
    
// constructor call vehicle ka
public:
vehicle(string _name, string _model, int _nos){
      
    cout<<"i am iside vehicle constructor"<<endl;
   this->name=_name;
   this->model=_model;
   this->nos=_nos;
}

     // functions
    public:
    
    void startengine(){
        cout<<"engine is starting"<<" "<<name<<model<<endl;

    }

    void stopengine(){
        cout<<"engine is stoping"<<name<<model<<endl;
    }

    // vehicle ka distructor hai
    ~vehicle(){
         cout<<"i am iside vehicle destructor"<<endl;
    }
};

// child class inherit of parent class vehicle
class car: public vehicle{

public:
      int noofdoor;
      string transemissiontype;


      // constructor of car
      car(string _name, string _model, int _nos,int noofdoor,string transemissiontype):vehicle(_name,_model,_nos){
        cout<<"i am inside car constructor"<<endl;
        this->noofdoor=noofdoor;
        this->transemissiontype=transemissiontype;
      }
    
//behavior
   void ac_start(){
    cout<<"ac is starting"<<name<<endl;

   }

//car ka distructor hai 
~car(){
 cout<<"i am iside car distructor"<<endl;
}
    

};

class motorcycle :public vehicle{
public:
       string handelbar;
       string suspensiontype;

 
 
  motorcycle(string _name, string _model, int _nos,  string _handelbar, string _suspensiontype ):  vehicle (_name, _model, _nos){
    cout<<"motorcycle constructor called"<<endl;
    this->handelbar=_handelbar;
    this->suspensiontype=_suspensiontype;

  }

  void wheelie(){
    cout<<"wheelie kar rhi hai bmw"<<name<<endl;
  }

  // motorcycle ka distructor hai

  ~motorcycle(){
 cout<<"i am iside car distructor"<<endl;
  }

};
int main(){
    // car a functiom
    car a("  maruti 800 ", "  lxi  ",4 , 4, "manual" );
    a.startengine();
    a.ac_start();
    a.stopengine();

    cout<<endl;
    // motorcycle m function
motorcycle m(" bmw " , " vxi ", 2 ," u " , " hard " ) ;
m.startengine();
m.wheelie();
m.stopengine();

    return 0;
};

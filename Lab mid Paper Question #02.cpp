#include<iostream>
using namespace std;
class Vehicle{
	private:
		int enginecapacity;
		int seatcapacity;
		public:
			Vehicle(){
				cout<<"Default constructor of Vehicle :"<<endl;
			
			}
			Vehicle(int eng,int seatcap){
				enginecapacity=eng;
				seatcapacity=seatcap;
			}
			cout<<"Parameterized constructor of Vehicle :"<<endl;
			void display(Vehicle){
			cout<<"New EngineCapacity: "<<endl;
			}
};
class Car:public Vehicle{
	int windscreensize;
	int steeringsize;
	public:
		Car(){
			cout<<"Default constructor of Car: "<<endl;
		}
		Car(int windS,int steeringS){
		windscreensize=windS;
		steeringsize=steeringS;
		}
		cout<<"Parameterized constructor of car :"<<endl;
		~Car(){
			cout<<"Destructor of Car :"<<endl;
		}
		 void display(Car){
        
		 	
		 }
};
class Bike:public Vehicle{
	int handlesize;

	public:
		Bike(){
			cout<<" Default constructor of Bike :"<<endl;
		}
		Car(int handS){
	handlesize=handS;
		}
		~Bike(){
			cout<<"Destructor of bike: "<<endl;
		}
		cout<<"Parameterized Constructor of Vehicle :"<<endl;
		
		 void display(Bike){
		 }
};

#include<iostream>
using namespace std;



class IPhone13{
	int weight;
	double camera;
	double display;
	public:
		IPhone(int w,double c,double d){
		weight=w;
		camera=c;
		display=d;
			
		}
		
		IPhone13(int weight,double camera,double display){
			weight=174;
			camera=12 ;
			display=6.1;
            cout<<"Weight of IPhone13 = "<<endl;
			cout<<"Camera of IPhone13 = "<<endl;
			cout<<"display of IPhone13 = "<<endl;			
		}
			~IPhone13(){
			cout<<"Given Value is Wrong :"<<endl;
			}
		
};
class IPhone13pro:public IPhone13{
		public:
		IPhone13pro(int w,double c,double d){
		weight=w;
		camera=c;
		display=d;
			
		}
		
		IPhone13pro(int w,double c,double d){
			weight= 204 gram;
			camera=12 mp;
			display=6.1;
            cout<<"Weight of IPhone13 = "<<endl;
			cout<<"Camera of IPhone13 = "<<endl;
			cout<<"display of IPhone13 = "<<endl;			
		}
			~IPhone13pro(){
			cout<<"Given Value is Wrong :"<<endl;
			}
		
	
};
class IPhone13ProMax:public public IPhone13{
	public:
		IPhone13ProMax(int w,double c,double d){
		weight=w;
		camera=c;
		display=d;
			
		}
		
		IPhone13ProMax(int weight ,double camera,double display){
			weight= 240 gram;
			camera=12 mp;
			display=6.7;
            cout<<"Weight of IPhone13 = "<<endl;
			cout<<"Camera of IPhone13 = "<<endl;
			cout<<"display of IPhone13 = "<<endl;			
		}
			~IPhone13ProMax(){
			cout<<"Given Value is Wrong :"<<endl;
			}
		
};
int main(){
	int iphone13,iphone13pro,iphone13proMax;

}

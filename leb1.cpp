#include<iostream>
using namespace std;

class Demo{
	public:
		
		int x;
		int y;
		
		void set (int x,int y){
			
			this-> x = x;
			this-> y = y;
			
		}
		void get (){
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
			
		}
		
		Demo operator+ (Demo n){
			Demo temp;
			temp.x = this->x +n.x;
			temp.y = this->y +n.y;
			return temp;
		}
		Demo operator- (Demo n){
			Demo temp;
			temp.x = this->x - n.x;
			temp.y = this->y - n.y;
			return temp;
	}
	Demo operator* (Demo n){
			Demo temp;
			temp.x = this->x * n.x;
			temp.y = this->y * n.y;
			return temp;
}
	
};

int main(){
	
	Demo d1,d2,d3,d4,d5;
	
	d1.set(9,8);
	d1.get();
	d2.set(9,8);
	d2.get();
	d3 = d1=d2;
	d3.get();
	d4 = d1-d2;
	d4.get();
	d5 = d1*d2;
	d5.get();
	
	return 0;
}







#include<iostream>
using namespace std;
class HinhTron{
	private:
		double r;
	public:
	    HinhTron(int b=0):r(b){
		}
		void nhap(){
			cin>>r;
		}
		double dientich() const{
			return 3.14*r*r;
		}
		double chuvi()const{
			return 2*3.14*r;
		}
		void xuat()const{
		cout<<"Ban:"<<r<<endl;
		cout<<"dientich:"<<dientich()<<endl;
		cout<<"chu vi"<<chuvi()<<endl;
		}
	
		HinhTron& operator=(const HinhTron& other){
			if (this!=&other){
				r=other.r;
			}
			return *this;
		}
	
		
};
int main(){
	HinhTron h1,h2;
	h1.nhap();
	h1.xuat();
	h2=h1;
	h2.xuat();
	return 0;
}
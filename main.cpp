#include <iostream>
#include <cmath>
using namespace std;
class ToanHoc{
	private:
		int n,f[100];
		
	public :
	void Nhap(){
		cout<<"Nhap vao so phan tu trong mang: ";
		cin>>n;
	}
	void Fibonaci(){
		f[0]=1;
		f[1]=1;
		for(int i=2;i<n;i++){
		f[i]=f[i-1]+f[i-2];
		}
		cout<<"Day fibo nho hon "<<n<<" la: ";
		for(int i=0;i<n;i++){
			cout<<f[i]<<"\t";
		}
		
	}
	void GiaiThua(){
		int tam=1;
		for(int i=1;i<=n;i++){
			tam=tam*i;
			
		}
		cout<<"\nGiai thua cua "<<n<<" la "<<tam;
	}
};
int main(){
	ToanHoc toanhoc;
	toanhoc.Nhap();
	toanhoc.Fibonaci();
	toanhoc.GiaiThua();
	
}

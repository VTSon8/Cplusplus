// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
// thu vien
#include<iostream>
using namespace std;
// ham
int main(){
	int m;
	int s=0,s1=1;
	do{
		cout<<"Nhap m:";
		cin>>m;
		if(m<1){
			cout<<"So m phai lon hon hoac bang 1, vui long nhap lai!";
		}
		while(m<1);
			for(int i=0;i<=m;i++){
				s1 = s1 * i;
				s = s + s1; 
			}
		
		cout<<s;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int num,a,sum=0;
	cout<<"enter any number = ";
	cin>>num;
	while (num>0){
		sum+=num%10;
		num=int(num/10);
	}
	cout<<sum;
}

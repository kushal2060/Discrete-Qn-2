#include<iostream>
using namespace std;
int main(){
	int a[5],b[5],n,m;
	cout<<"Enter no of elements for set A:";
	cin>>n;
	cout<<"Enter for set A:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"For element "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"Enter no of elements for set B:";
	cin>>m;
	cout<<"Enter for set B:"<<endl;
	for(int j=0;j<m;j++){
		cout<<"For element "<<j+1<<":";
		cin>>b[j];
	}
	cout<<"Cartesian product is: ";
	cout<<"{ ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"("<<a[i]<<","<<b[j]<<")"<<",";
			
		}
	}
	cout<<" }";
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int n,i;
	int arr[n];
	int odd=0,even=0;
	cout<<"enter array size";
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even=even+arr[i];
			
		}
		else 
		odd = odd+arr[i];
		
	}
	cout<<"sum of even numbers"<<even;
	cout<<"sum of odd numbers"<<odd;
	
	return 0;
}
	

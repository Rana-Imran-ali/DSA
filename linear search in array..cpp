#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
	for(int i=0;i<size;i++){
		if(arr[i]=target)
		return i;
	}
	return -1;  // when not found the value.
}

int main(){
       int arr[]={12,45,65,75,8};
	   int size=7;
	   int target=45;
	  cout<< linearSearch(arr,size,target)<<endl;	
	 return 0;
}

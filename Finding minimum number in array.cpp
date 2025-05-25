#include <iostream>
using namespace std;
int main(){
	int num[]={12,45,56,-5,7};
	int size=5;
	int smallest= INT_MAX;
	for (int i=0;i<size;i++){
		if (num[i]<smallest){
			smallest=num[i];
		}
	}
	cout<<"The smallest number "<<smallest<<endl;
	return 0;
}

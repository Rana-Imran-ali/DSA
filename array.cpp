#include <iostream>
using namespace std;
int main () {
    //int marks[5] = {12,13,14,15,16};
    int size=5;
    int marks[size];
    for (int i=0;i<size;i++){
    	cin>>marks[i];
	}
    
    for(int i=0;i<size;i++){
        cout<<"Marks is "<<marks[i]<<endl;
    
    }
   
    return 0;
}

#include <iostream>
using namespace std;
int main () {
    int num[]={12,45,67,-23,56};
    int size=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        smallest=min(num[i],smallest);
        largest=max(num[i],largest);
    }
    cout<<"The largest value ="<<largest<<endl;
    cout<<"The minimum value ="<<smallest<<endl;
    return 0;
}

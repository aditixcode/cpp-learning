#include <iostream>
using namespace std;
int main () {
    int num;
    int count[10]={0};
    cout<<"enter the number";
    cin>>num;
    if (num==0){
        count[0]++;
    }
    else{
        while (num!=0){
            int digit=num%10;
            count[digit]++;
            num=num/10;
        }
    }
    for (int i=0;i<10;i++){
        if (count[i]>0){
        cout<<"The number of "<<i<<" in the number is "<<count[i]<<"\n";
        }

    }
    return 0;
}

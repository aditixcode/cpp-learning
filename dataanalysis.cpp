#include <iostream>
using namespace std;
int main () {
    int data[10];
    int i, max,min,count1=0,count2=0;
    float avg=0;
    cout <<"Enter the incoming readings from the sensor";
    for ( i=0;i<10;i++){
        cin>>data[i];
    }
    max=data[0];
    min=data[0];
    for (i=0;i<10;i++){
        if(data[i]>max){
            max=data[i];
        }
        if(data[i]<min){
            min=data[i];
        }
        if(data[i]<20){
            count1++;
        }
        if(data[i]>100){
            count2++;
        }
        avg=avg+data[i];
        
    }
    avg=avg/10;
cout<<"The maximum distance is "<<max<<"\n";
cout<<"The mininmum distance is"<<min<<"\n";
cout<<"The average distance is"<<avg<<"\n";
cout<<"The number of readings with distance less than 20 is "<<count1<<"\n";
cout<<"The number of readings with distance greater than 100 is "<<count2<<"\n";        
}

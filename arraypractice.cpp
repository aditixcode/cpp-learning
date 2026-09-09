#include <iostream>
int main () {
    using namespace std;
    int size, i;
    int marks[size];
    cout<<"enter the size of array";
    cin>>size;
    for ( i=0; i<size; i++){
        cout<<"enter the marks of student";
        cin>>marks[i];
    }
    cout<<"the marks of students are ";
    for ( i=0; i<size; i++){
    cout<<marks[i]<<" ";
}
}
#include <iostream>
int multiplyandlog (int a, int b) {
    int result = a*b;
    std::cout<<result<<std::endl;
    return result;
}
int main () {
    multiplyandlog(46,28);
    multiplyandlog(6,7);
    multiplyandlog(10,-10);
    return 0;
}
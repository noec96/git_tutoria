#include<iostream>
#include<vector>
int main(){
    int x  = 4;
    int *ptr = &x;

    std::cout << "WTF DO I DO FOR A CONFLICT GARAJO" << std::endl;
    std::cout << x*x*x*x*x+ (*ptr) << std::endl;
    return 0;
}

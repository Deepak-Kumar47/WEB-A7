#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i = 0, count=0;
    cout<<"Enter a integer : ";
    cin>>n;
    while(i<sqrt(n)) {
        if (n%i==0) {
            count++;
    }
    i++;
    }if (count == 1){
        cout<<"The given number"<<n<<"is a prime number\n";
    }
}
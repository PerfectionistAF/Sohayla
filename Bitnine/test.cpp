#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//function
int add(int a, int b) {
    return a + b;
}
//pointer to function
int (*add_ptr)(int, int) = add;

int main(){
    int result = (*add_ptr)(2, 3);
    cout<<"result:"<<result<<endl;
    for (int i=1;i<=1;i++){
        cout<<"test"<<endl;
    }
    return 0;
}


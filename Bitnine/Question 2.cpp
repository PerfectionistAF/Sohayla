#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX 100

int F_1(int n)
{//recursive programming
	n = abs(n);
	if(n > MAX){
		n = n - MAX;}
	if (n == 1 || n == 0)
		return 1;
	else if (n == 2)
		return 2;
	else
		return F_1(n - 3) + F_1(n - 2);
}
int F_2(int n)
{//dynamic programming
	n = abs(n);
	if(n > MAX){
		n = n - MAX;}
	int f[n+1] = {0};
	f[0] = 0;//function 0
	f[1] = 1;//function 1
	f[2] = 2;//function 2
	for(int i = 3; i<=n; i++){
		f[i] = f[i-3] + f[i-2];
	}
	return f[n];
}
int F_3(int n)
{//iterative programming
	n = abs(n);
	if(n > MAX){
		n = n - MAX;}
	int f[n+1] ={0};
	f[0] = 0;
	f[1] = 1;
	f[2] = 2;
	int f_min;
	int f_max;
	for(int j = 3; j<=n; j++){
		for(int i = 1; i<=3; i++){
			f_min = f[j - i];
		}
		for(int k = 1; k<=2; k++){
			f_max = f[j - k];
		} 
	}
	return f_max + f_min ;
	//F[n] = F[(n-1)-2] + F[(n-1)-1]
}

int main()
{
	//Method 1 of piecewise recurrence relation: F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2
	cout<<F_1(101)<<endl;
	//Method 2 of piecewise recurrence relation: F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2
	cout<<F_2(-4)<<endl;
	//Method 3 of piecewise recurrence relation: F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2
	cout<<F_3(4)<<endl;
	return 0;
}
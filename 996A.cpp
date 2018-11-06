#include<bits/stdc++.h>
using namespace std;

int main ()
{
	long long int a;
	cin>>a;
	long long int count=0;
	count=count+a/100;
	a=a%100;
	count=count+a/20;
	a=a%20;
	count=count+a/10;
	a=a%10;
	count=count+a/5;
	a=a%5;
	count=count+a;
	cout<<count;
	return 0;
 } 

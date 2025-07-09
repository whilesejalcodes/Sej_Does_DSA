// Problem : https://www.naukri.com/code360/problems/reverse-of-a-number_624652?leftPanelTabValue=PROBLEM
// Description : Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N;
	cin>>N;
	int rev_num=0;
	while (N>0){
		rev_num=rev_num*10+(N%10); //N%10 gives the last digit of number
		N=N/10;
	}
	cout<<rev_num;
	
}

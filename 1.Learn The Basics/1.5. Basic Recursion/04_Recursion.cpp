//Sum of first N numbers
//Parameterised way
#include <bits/stdc++.h>
using namespace std;

void addNum(int sum, int n){
    if (n==0){
        cout<<sum;
        return;
    }
    addNum(sum+n,n-1);    
}

int main() {
	// your code goes here
	int sum=0;
	int n;
	cout<<"Please enter the number till which you want to calculate the sum";
	cin>>n;
	addNum(sum,n);
}

//Functional Way
#include <bits/stdc++.h>
using namespace std;

int addNum(int num){
    if (num==0) return 0;
    return num+addNum(num-1);
    
}

int main() {
	// your code goes here
	int n;
	cout<<"Please enter the number till which you want to calculate the sum";
	cin>>n;
	cout<<addNum(n);
}

//factorial of a number
//parameterised way
#include <bits/stdc++.h>
using namespace std;

void factorial(int fact,int n){
    if (n<2){
        cout<<fact;
        return;
    }
    factorial(fact*n,n-1);
    
}

int main() {
	// your code goes here
	int fact=1;
	int num;
	cout<<"Please enter the number";
	cin>>num;
	factorial(fact,num);

}

//functional way
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==1) return 1;
    return n*factorial(n-1);
    
}

int main() {
	// your code goes here
	int num;
	cout<<"Please enter the number";
	cin>>num;
	cout<<factorial(num);

}

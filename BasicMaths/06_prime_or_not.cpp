// Problem : https://www.geeksforgeeks.org/problems/check-prime/1
// Description : Given an integer n check if n is prime or not. A prime number is a number that is divisible by 1 and itself only.
// User function Template for C++

bool prime(int n) {
    // Write your code here
    int count=0;
    if (n==1) return false;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            count++;
            if ((n/i)!=i){
                count++;
            }
            if (count>2) break;
        }
    }
    if (count>2) return false;
    else return true;
    // returns a boolean value
}

// Even Better Approach (ChatGPT)
// Instead of starting from i = 1, you can skip checking 1, because it’s always a divisor. Start from i = 2, and initialize count = 2 for 1 and n:
bool prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;  // found a divisor → not prime
        }
    }
    return true;  // no divisors found → prime
}

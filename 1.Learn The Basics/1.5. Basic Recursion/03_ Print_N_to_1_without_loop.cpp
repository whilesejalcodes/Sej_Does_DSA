// Problem : https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1
// Description : Print numbers from N to 1 (space separated) without the help of loops.

class Solution {
  public:
    void printNos(int N) {
        // code here
        if (N<1) return;
        cout<<N<<" ";
        printNos(N-1);
        
    }
};

//NOTE:
// class Solution {
//   public:
//     void printNos(int N, int i=N) {
//         // code here
//         if (i<1) return;
//         cout<<i<<" ";
//         printNos(N,i-1);
        
//     }
// };
//This Throws error cause we're trying to use N as the default value for i, but N is not yet in scope at the time of default value evaluation.

// void printNos(int N) {
//     int i = N;
//     if (i < 1) return;
//     cout << i << " ";
//     i = i - 1;
//     printNos(N);
// }
// Every time printNos(N) is called:
// re-initialize i to N.
// So, i is always equal to N, and i = i - 1 has no real effect.
// The base condition i < 1 is never reached, and it keeps printing the same number (N) infinitely.
// And we can't intitialise int i=N before the function, cause it is out of scope.

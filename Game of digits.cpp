Given a number N, find the smallest number K, such that product of digits of K is equal to N.

Input:
First line of input contains number of testcases T. For each testcase, there will be a single line containing N.

Output:
For each testcase, print K. If K is not possible, print -1.
 

Your Task: 
Your task is to complete the function smallestK() which takes the value N as input parameter and return the value K.
 

Constraints:
1 <= T <= 105
1 <= N <= 1015
 

Example:
Input:
2
12
5

Output:
26
5

Explanation:
Testcase 1: 26 is the smallest number, and product of 2 and 6 is 12.
Testcase 2: 5 is the smallest number which is itself equal to 5.

 // shruti raj
 
 // { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

string smallestK(long long n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long n;
        cin>>n;
        cout<< smallestK(n) << endl;
	}
	return 1;
}
// } Driver Code Ends


//User function Template for C++


   string smallestK(long long n)
{
    if(n==1) return "1";
    
    int count[10];
    for(int i=0; i<10; i++)
        count[i]=0;
    
    for(int divisor=9; divisor>1; divisor--)
        while(n%divisor == 0)
        {
            count[divisor]++;
            n=n/divisor;
        }
    
    if(n>1) return "-1";
    
    string ret;
    for(int divisor=2; divisor<10; divisor++)
        while(count[divisor]--)
            ret.push_back('0'+divisor);
    
    return ret;
}
 



 


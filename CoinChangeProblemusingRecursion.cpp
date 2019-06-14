//Coin change problem using recursion
//distinct ways
//Rahul jha
#include<iostream>
using namespace std;

int count(int S[],int n,int N)
{
	//if total is 0 return 1
	if(N == 0)
		return 1;
  
    //
    if(N < 0)
		return 0;
    //intialize total no of way to 0
	int res = 0;

	// do for each coin
	for(int i=0 ; i<n ; i++)
	{
		//recur to see if total can be reached including
		//current coin S[i]
		res += count(S, n, N - S[i]);
	}

	//return total no of ways
	return res;

}
int main()
{
	//n coins of given demoniations
	int S[]={ 1 , 2 , 3 };
	int n=sizeof(S) / sizeof(S[0]);

	//Total change reguired
	int N=4;

	cout << "Total no of ways to get the desired changes is " << count(S,n,N);

	return 0;
}

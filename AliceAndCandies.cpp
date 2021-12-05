/*
Alice loves candies, so she went into a candy shop. Now the shopkeeper sells candies in packets and all packets contain an odd number of candies (1, 3, 5, 7.....). Alice wants exactly  candies but she also loves patterns so she decided to buy candies only if the number of candies in the packets is consecutive and distinct (means she cannot buy the same candy packet more than once) and the sum of all the candies in those packets is exactly .

Alice has an infinite amount of money and the shopkeeper also has infinite amount candy packets, so Alice wonders how many different sets of candy packets she can buy.

Find the number of different sets of candy packets that Alice can buy.

Input format

The first and the only line contains a single integer .

Output format

Print a single integer denoting the number of different sets of candy packets Alice can buy.
*/

//Solution :-
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n;
    cin>>n;

    long long ans = 0;
    /*
      Concept of Arithmetic Progression that is since two series cannot have same sum considering the quantity of elements taken as same i.e, we will suppose the 
      number of elements as 'i' and then for each number of element we will check if their is possible solution for such a amount of 'i' and them up to get required result.
    */
    
    for(long long i=1;i<=min(100000ll,n);i++)
    {
        if(((2*n)%i)==0 && ((((2*n)/i)-(i-1)*2)%2) ==0 && (((((2*n)/i)-(i-1)*2)/2)%2)==1 && (((2*n)/i)-(i-1)*2)/2 <= n)
        {
            ans++;
        }
    }

    cout<<ans;
}

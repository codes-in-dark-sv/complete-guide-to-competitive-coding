#include <iostream>
using namespace std;
typedef long long ll;
//logn implementation of the power finding
/*
logic of this program 
for larger values of n for computing  of a to the power n
Since it takes O(n) time complexity. I have found the logic to do it in O(logn)
for example  
    3 to the power 13 
    we need to do it 13 times 
    13 in base 2 is 1101  -> (number of digits in expansion is ceil[log n  base 2] + 1 )
    1   	       1     		         0   		           1
    pow(3, 1 * pow(2, 3))  pow(3, 1*pow(2, 2))	pow(3, 0*pow(2, 1))	pow(3, 1*pow(2, 0))
     

*/
ll res(ll a,ll n )
{
  if(n==0)
    return 1;
  if(n%2==0){
    int b =res(a,n/2);
    cout<<"b = "<<b<<endl; 
    return b*b;
    }
  else{
    cout<<"a= "<<a<<" n  = "<<n<<endl;
    return a*res(a,n-1);
    }
}
int main()
{
  ll a,b;
  cin>>a>>b;
  cout<<res(a,b);
}

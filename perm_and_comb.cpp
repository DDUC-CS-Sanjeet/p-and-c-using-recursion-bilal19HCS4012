#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(n==0||r==0)
	return 1;
	else if(n==r)
	return n;
	else
	return n*permutation(n-1,r-1);
	return 0;
}

int combination(int n, int r)
{
	if(n==0||r==0)
	return 1;
	else if(n==r)
	return n;
	else
	return n*combination(n-1,r-1)/r;
  return 0;
}

int main()
{
	int n,r,P,C;
	cout<<"enter n: ";
	cin>>n;
	cout<<"\nenter r: ";
	cin>>r;
	try
	{
	if(n<0||r<0)
	throw "invalid value!!";
    }
	catch(const char*msg)
	{
		cout<<endl<<msg<<endl;
		exit(0);
	}
	P=permutation(n,r);
	C=combination(n,r);
	cout<<"\npermutations: "<<P;
	cout<<"\ncombinations: "<<C;
  return 0;
}

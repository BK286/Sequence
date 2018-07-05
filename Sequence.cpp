#include "Sequence.h"
#include <string>
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

Sequence::Sequence(string dna)
{
	ifstream a;
	a.open("data/dna.txt");
	char* buff = new char[1000];
	while(!a.eof())
	{
	a.getline(buff,1000);
	s = s + buff;
	}
//	cout << s << endl;
}

Sequence::~Sequence()
{

}

int Sequence::length()
{
	num = s.length();
	cout << s.length() << endl;
}

int Sequence::numberOf(char base)
{
	int counter=0;
	for(int n;n<=num;n++)
	{
		if(s[n]==base)
		counter++;
	}
	cout << counter << endl;
}

string Sequence::longestConsecutive()
{
	int n=0;
	string max;
	int counter=1;
	for(int m=0;m<=num;m++)
	{
	if(s[m+1]==s[m])
	{counter++;}
	else
{
	if(counter>n)
	{n=counter;
	max=s[m];
	counter=1;
	}
	else
	counter=1;
}
	
	}
	
	
	for(int q=0;q<=n;q++)
	{
	cout << max;
	}
	cout << endl << endl;
	cout << n;
	
}

int comlen(char *p,char *q)
{
	int n=0;
	while(*p && (*p++ == *q++))
	{
		n++;
	}
	return n;
}

int cmp(const void *p,const void *q)
{
	return strcmp(*(char* const*)p,*(char* const*)q);
}

string Sequence::longestRepeated()
{
	#define N 1180000	
	char *b;
	char * *a;
	a=new char *[N];
        b=new char [N];

	int x=0;
	int n=0;
	int length=0;

	for(int c=0;c<=num;c++)
	{
	if(c<num)
	{	b[c]=s[c];
		a[c]=&b[c];
	}
	if(c==num)
	{
	b[c]='\0';
	}
	
	
	}
	qsort(a,num,sizeof(char*),cmp);
	for(int d=0;d<num-1;d++)
	{
		x=comlen(a[d],a[d+1]);
		if(x>length)
		{
			length=x;
			n=d;
		}
	}
	delete []a;
	delete []b;
	
	return s.substr(n,length);
}	

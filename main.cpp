#include "Sequence.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	Sequence Sequence( "dna.txt");
	Sequence.length();
	char x;
	cin >> x;
	Sequence.numberOf(x);
	Sequence.longestConsecutive();
	cout << Sequence.longestRepeated();
};


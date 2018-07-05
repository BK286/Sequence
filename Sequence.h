#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <string>
#include <fstream>
using namespace std;

class Sequence
{
	public:
	Sequence(string filename);
	int length();
	int numberOf(char base);
	string longestConsecutive();
	string longestRepeated();
	~Sequence();
	private:
	string s;
	int num;
};
#endif

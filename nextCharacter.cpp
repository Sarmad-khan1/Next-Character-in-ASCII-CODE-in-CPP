#include <iostream>
using namespace std;
void nextletter(string &letter);
int main()
{
	string letter;
	cout<<"Enter Character: ";
	cin>>letter;
	nextletter(letter);
	cout<<"Output: "<<letter<<endl;
}
void nextletter(string &letter)
{
	for(int i=0; i<letter.length(); i++)
	{
		int asciicode = (int)letter[i];
		if(asciicode == 122)
		{
			letter[i] ='a';
			
		}
		else
		{
			letter[i] = (char)(asciicode + 1);
		}
	}
}
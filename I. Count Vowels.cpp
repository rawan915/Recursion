#include <iostream>
#include <string>
using namespace std;

int countVowels(string s, int i ) {
	if (i==s.length())
		return 0;
	char c = s[i];
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return 1 + countVowels(s, i + 1);
	else
		return countVowels(s, i + 1);


}

int main() {
	string s; 
	getline(cin, s);
	cout << countVowels(s , 0);

}


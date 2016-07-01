# include <iostream>
# include <conio.h>
using namespace std;
int i, j, k, p, n[16];

int main() {
	
	for (i = 8; i < 25; i++)
	{
		n[i - 8] = i;

	}
	while (k < 16)
	{
		cout << "the program will end once all required numbers were given.\n enter numbers between 8 and 23: ";
		cin >> p;
		 
		for (j = 8; j < 25; j++) {
			if (n[j - 8] == p) { k++; n[j - 8] = 0; }
		}
		

	}
		
	

	return 0;
}
// This program reverses the string that you enter
// Suppose you entered string: hello, then the string after reverse will be : olleh.
#include <iostream>
using namespace std;

int length(char input[]) {
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void reverseString(char input[]) {
	int len = length(input);
	int i = 0, j = len - 1;
	while(i < j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
}

int main() {
	char input[100];
	cout<<"Enter the string you want to reverese: ";
	cin.getline(input, 100);
	
	reverseString(input);
	cout<<"The reversed string is: "<<input;
}

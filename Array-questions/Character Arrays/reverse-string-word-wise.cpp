/* Here is the code for reversing the string word wise.
if your string is : I am a heavy coder.
Then the string after reverse will be : coder heavy a am I. */

#include <iostream>
using namespace std;

#include <iostream>
int length(char input[]) 
{
  int count = 0;
  for (int i = 0; input[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverseStr(char inpt[], int len, int fn) {
  int i = fn;
  int j = len - 1;
  while (i < j) {
    char temp = inpt[i];
    inpt[i] = inpt[j];
    inpt[j] = temp;
    i++;
    j--;
  }
}
void reverseStringWordWise(char input[]) {
  int len = length(input);
  reverseStr(input, len, 0);

  int j = 0;
  for (int i = 0; i <= len; i++) {
    if (input[i] == ' ' || input[i] =='\0') {
      reverseStr(input, i, j);
      j = i + 1;
    }
  }
}

int main() {
    char input[1000];
    cout<<"Enter the string:";
    cin.getline(input, 1000);
    cout<<"Sending the string for reversing "<<endl;
    cout<<"Here is your reversed string : ";
    reverseStringWordWise(input);
    cout << input << endl;
}
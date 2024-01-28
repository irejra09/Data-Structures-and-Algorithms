#include<iostream>
#include<string>
using namespace std;
void computeLPS(string &pat, int lps[], int M)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while(i < M)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

}

void search(string &txt, string &pat)
{
    int M = pat.size();
    int N = txt.size();

    //Intializing the lps array
    int lps[M];

    //Calculating the lps array
    computeLPS(pat,lps,M);

    int i = 0;
    int j = 0;

    while(i < N)
    {
        if(txt[i] == pat[j])
        {
            i++;
            j++;
        }
        if(j == M)
        {
            cout<<"Pattern found at index: "<<i-j<<endl;
            j = lps[j-1];
        }
        else if(i < N && txt[i] != pat[j])
        {
            if(j != 0)
            {
                j = lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    string txt,pat;
    cout<<"Enter the text string: ";
    cin>>txt;
    cout<<"Enter the pattern: ";
    cin>>pat;
    search(txt,pat);
    return 0;
}
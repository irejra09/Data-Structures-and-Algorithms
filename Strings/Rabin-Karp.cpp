#include<iostream>
#include<string>
#define d 256
using namespace std;

void search(string txt, string pat, int q)
{
    long long M = pat.size();; //length of pattern
    long long N = txt.size(); //length of text
    long long i,j;
    long long p = 0; //hash value of pattern
    long long t = 0; //hash value of text
    int h = 1;

    //The value of h would be pow(d,M-1)%q
    for(i = 0; i < M-1; i++)
    {
        h = (h*d)%q;
    }

    //Calculating the value of hash of pattern and first window of text
    for(i = 0; i < M; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }

    //Sliding the pattern over text one by one
    for(i = 0; i<= N-M; i++)
    {
        if(p==t)
        {
            for(j=0;j<M;j++)
            {
                if(txt[i+j] != pat[j])
                {
                    break;
                }
            }
            if(j== M)
            {
                cout<<"Pattern found at index "<<i<<endl;
            }
        }

        //Calculating the hash value for next window of text
        //Removing the leading digit and adding the trailing digit
        if(i < N-M)
        {
            t = (d*(t - txt[i]*h) + txt[i+M])%q;
            if(t < 0)
            {
                t = t+q;
            }
        }
    }

}

int main()
{
    string txt;
    cout<<"Enter the text string:";
    getline(cin,txt);
    string pat;
    cout<<"Enter the pattern string:";
    cin>>pat;
    long long q = INT_MAX;
    search(txt,pat,q);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
string rwo;
string h;
{
    int ho = (((int)s[0] - '0') * 10 + ((int)s[1] - '0') % 10);
    if (s[8] == 'A')
    {
        if (ho == 12)
        {
            h=h+ "00";
            for (int i=2; i <= 7; i++)
                h=h+ s[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                h=h+s[i];
        }
    }
    else
    {
        if (ho == 12)
        {
            h=h+ "12";
            for (int i=2; i <= 7; i++)
                h=h+s[i];
        }
        else
        {
            ho = ho + 12;
            stringstream ss;
ss << ho;
string str = ss.str();
            h=h+ str;
            for (int i=2; i <= 7; i++)
                h=h+s[i];
        }
    }
}
return h;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

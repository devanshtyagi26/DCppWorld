#include <bits/stdc++.h>
using namespace std;

int main(){
    const string first = "text1.txt";
    const string second = "text2.txt";
    string entry;
    ofstream file1(first);

    cout << "Enter the content you want to enter in file: ";
    getline(cin, entry);

    file1 << entry;
    file1.close();
    ifstream outfile(first);
    ofstream file2(second);
    char c;
    while (outfile.get(c))
    {
        if (!isspace(c))
        {
            file2.put(c);
        }
    }
    
    file2.close();
    outfile.close();
    return 0;
}
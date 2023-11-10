#include <iostream>
#include <string> 
#include <cctype> 
using namespace std;

int main()
{
    char ch;
    int vowelCount = 0;
    string sentence;

    cout << "Enter any sentence you wish and I will \n"
         << "display the sentence in uppercase.\n";

    getline(cin, sentence);

    for (int pos = 0; pos < sentence.length(); pos++)
    {
       
        ch = toupper(sentence[pos]);

       
        cout << ch;

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
    }

    cout << "\nThe number of vowels is: " << vowelCount << endl;

    return 0;
}
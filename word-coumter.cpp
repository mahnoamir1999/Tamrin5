#include <iostream>
using namespace std;
int main() {
    char sentence[100];
    int counter=1;
    cout << "type a sentence: ";
    gets(sentence);
    for (int i = 0; sentence[i] != NULL; ++i)
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
            counter++;
    cout << "the number of words is: "<< counter;
    return 0;
}
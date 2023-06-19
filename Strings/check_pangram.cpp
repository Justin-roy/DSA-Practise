#include <iostream>
using namespace std;

bool checkIfPangram(string sentence)
{
    int size = sentence.length();
    // length is less than 25
    if (size < 25)
    {
        return false;
    }
    int hashArr[26] = {0};
    for (int i = 0; i < size; i++)
    {
        int ascii = sentence[i] - 'a';
        int val = ascii % 26;
        hashArr[val]++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << hashArr[i] << " ";
    // }

    int count = 0;
    int extCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hashArr[i] >= 1)
            count++;
    }
    int alphCount = count + extCount;
    return alphCount == 26 ? true : false;
}

bool ContainApha(string abc)
{
    for (int i = 0; i < abc.length(); i++)
    {
        if (abc[i] == 'b')
            return true;
    }

    return false;
}

int main()
{
    string sentence = "jwtucoucmdfwxxqnxzkaxoglszmfrcvjoiunqqausaxxaaijyqdqgvdnqcaihwilqkpivenpnekioyqujrdrovqrlxovcucjqzjsxmllfgndfprctxvxwlzjtciqxgsxfwhmuzqvlksyuztoetyjugmswfjtawwaqmwyxmvo";
    cout << checkIfPangram(sentence);
    return 0;
}
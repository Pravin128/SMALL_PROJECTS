#include "encryption.h"
#include <fstream>
#include <cctype>

bool performCaesarCipher(string &content, bool encrypt)
{
    int shift = encrypt ? 10 : -10;

    for (char &ch : content)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }
    return true;
}

using namespace std;
bool encryptFile(const string &filename, bool encrypt)
{
    ifstream inFile(filename); // open input file
    if (!inFile)
    {
        return false;
    }
    // read the content of file
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if (performCaesarCipher(content, encrypt))
    {
        // create an opuput file writing the modified content
        ofstream outFile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
        if (!outFile)
        {
            return false;
        }
        outFile << content;
        outFile.close();
        return true;
    }
}
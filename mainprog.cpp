#include "iostream"
#include "encryption.h"
using namespace std;
int main()
{
    string filename;
    char mode;
    cout <<
	"\t\t\t<================================================================================>"
	<< endl;
      cout <<
	"\t\t\t|                        FILE ENCRYPTION AND DECRYPTION                          |"
	<< endl;
      cout <<
	"\t\t\t|             NOTE : THIS IS SIMPLE PROGRAM TO ENCRYPT OR DECRYPT TEXT FILES     |"
	<< endl;
      cout <<
	"\t\t\t<================================================================================>"
	<< endl;
    cout << "Enter The File Name: ";
    getline(cin >> ws, filename);

    cout << "Encrypt (e)\n----------------------------------------------------------\nDecrypt (d)";
    cin >> mode;

    if (mode == 'e' || mode == 'E')
    {
        if (encryptFile(filename, true))
        {
            cout << "Encryption Completed succesfully...";
            cout << endl;
        }
        else
        {
            cerr << "Error: Unable to perform encryption..!!" << endl;
        }
    }
    else if (mode == 'd' || mode == 'D')
    {
        if (encryptFile(filename, false))
        {
            cout << "Decryption complete successfully..." << endl;
        }
        else
        {
            cerr << "Error: Unable to perform decryption..";
        }
    }
    else
    {
        cerr << "Error: Invalid mode selection. Use (e) for encryption and (d) for decryption...";
    }
    return 0;
}
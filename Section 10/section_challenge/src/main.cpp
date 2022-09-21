/* Section 10 Challenge

Substitution Cipher

Each letter of the alphabet gets replaces by another letter of the alphabet.
'a' gets replaced with 'X', 'b' gets replaced with 'Z', etc.

Write a program that asks a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message,
then decrypt the encrpyted message back to the original message.

Use the 2 strings below for your substitution.

To encrpyt, replace the characted at position n in the alphabet
with the character at position n in key.

To decrypt, you can replace the character at position n in key
with the character at position n in alphabet.

*/


# include <iostream>

using namespace std;

int main(){
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string user_text;

    cout << "Enter a secret message: ";
    getline(cin, user_text);

    string encrypted_text = user_text;
    int cipher_index {0};

    for (size_t i{0}; i < user_text.size(); ++i) {
        if (isalpha(user_text[i])) {
            cipher_index = alphabet.find(user_text[i]);
            encrypted_text[i] = key[cipher_index];
        }
        else {
            encrypted_text[i] = user_text[i];
        }
    }

    cout << "Encrypted message: " << endl;
    cout << encrypted_text << endl;
    cout << "------------------------------" << endl;

    string decrypted_text = encrypted_text;

    for (size_t i{0}; i < encrypted_text.size(); ++i) {
        if (isalpha(encrypted_text[i])) {
            cipher_index = key.find(encrypted_text[i]);
            decrypted_text[i] = alphabet[cipher_index];
        }
        else {
            decrypted_text[i] = encrypted_text[i];
        }
    }

    cout << "Decrypted message: " << endl;
    cout << decrypted_text << endl;
    cout << "------------------------------" << endl;

    return 0;
}
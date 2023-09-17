// Entrainement_cryptage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Ccesar.h"

int main()
{
    string m;
    int i;
    int i2;
    Ccesar c;
    c.afficheMessage();
    cout << "Quel est le message " << endl;
    getline(cin, m);
    c.setMessage(m);
    m = c.getMessage();
    /*i = c.initMessageFromFile("test.txt");
    if (i==-1)
    {
        cerr << "le fichier ne s'est pas ouvert correctement" << endl;
    }*/
    c.criptedMessage(2);
    i2 = c.saveMessage("test2.txt");
    if (i2 == -1)
    {
        cerr << "le fichier ne s'est pas ouvert correctement" << endl;
    }
    c.decriptedMessage(2);
    

   

}


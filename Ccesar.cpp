#include "Ccesar.h"

Ccesar::Ccesar()
{
}

void Ccesar::afficheMessage()
{
	cout << message << endl;
}


void Ccesar::setMessage(string param_s)
{
	message = param_s;
	int taille = size(message);
	char carac = message.back();
	cout << "le message " << message << " contient " << taille << " caracteres et " << carac << " est le dernier caractere." << endl;
}
string Ccesar::getMessage()
{
	return message;
}

int Ccesar::initMessageFromFile(string File)
{
	ifstream monFlux(File); //1
	if (!monFlux.is_open()) {
		return -1;
	}

	while (getline(monFlux, message))
	{
		cout << message << endl;

	}
	monFlux.close();
return 0;
}

int Ccesar::saveMessage(string file2)
{
	ofstream MonFlux2(file2);
	if (MonFlux2) {
		MonFlux2 << messageCrypte << endl;
	}
	else
	{
		return -1;
	}
	return 0;
}


void Ccesar::criptedMessage(unsigned short cle)
{
	string crypte;
	crypte = message;

	for (string::iterator it = message.begin(); it != message.end(); it++) {
		if (isupper(*it))
		{
			crypte += (*it + cle - 'A') % 26 + 'A';
		}
		else
		{
			crypte += (*it + cle - 'a') % 26 + 'a';
		}
	}

	cout << crypte << " " << endl;
	messageCrypte += crypte;


	}


void Ccesar::decriptedMessage(unsigned short cle2)
{
	string decrypte;
	for (string::iterator it = messageCrypte.begin(); it != messageCrypte.end(); it++)
	{
		if (isupper(*it)) {
			char dec = ((*it - 'A' - cle2 + 26) % 26) + 'A';
			decrypte += dec;
		}
		else
		{
			char dec = ((*it - 'a' - cle2 + 26) % 26) + 'a';
			decrypte += dec;
		}

		cout << decrypte << " " << endl;
	}

}

Ccesar::~Ccesar()
{
}

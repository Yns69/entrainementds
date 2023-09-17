#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Ccesar
{
public:
	Ccesar();
	void afficheMessage();
	void criptedMessage(unsigned short cle);
	void decriptedMessage(unsigned short cle2);
	void setMessage(string);
	int initMessageFromFile(string File);
	int saveMessage(string file2);
	string getMessage();
	~Ccesar();

private:
	string message;
	string messageCrypte;

};


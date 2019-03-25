#include "Steganography.h"
#include<iostream>
#include<fstream>
#include<iomanip>

using std::string;
using std::ifstream;
using std::cerr;
using std::endl;


Steganography::Steganography(char * pixelList)
{

}

Steganography::~Steganography()
{
}

int Steganography:: findMessageLen(std::ifstream messageIFstream)
{
	// get length of file contents:
	messageIFstream.seekg(0, messageIFstream.end);
	int length = messageIFstream.tellg();
	messageIFstream.seekg(0, messageIFstream.beg);
	length -= 2;
	return length;
}

void Steganography::copyMessage(std::ifstream messageInfile, int & len, char * copy)
{
	
	
	if (messageInfile)//if the file opens find out how long the message contents
	{				  //are for reading and then copy them to the class member
					  //messageLength if it doesn't open then display an error.
		
		message = new char[messageLength];

		messageInfile.read(message, messageLength);
	}
	else
	{
		cerr << "The file containing the message could not be opened!" << endl;
	}

}

int Steganography::imageSize(char * path2image, char * pixelList)
{
	return ;
}

bool Steganography::willMessageFit()
{
	if ((messageLength *8) <= numPixels )
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int * Steganography::string2Ascii(char * message)
{
	return nullptr;
}

char * Steganography::Ascii2String(int * bitString)
{
	return nullptr;
}

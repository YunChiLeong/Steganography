#include<iostream>
#include<string>

class Steganography
{
protected:

	int messageLength;
	int numPixels;
	char* pixelList;
	char* message;

public:
	Steganography(char* pixelList);
	
	~Steganography();

	//find the length of the message
	int findMessageLen(std::ifstream);

	void copyMessage(std::ifstream, int & len, char * copy);

	// find the size of the image
	int imageSize(char* path2image, char* pixelList);

	// determine if the message will fit in the image
	bool willMessageFit();

	// convert the ascii or unicode characters to a bit string
	int * string2Ascii(char * message);

	char * Ascii2String(int * bitString);

};


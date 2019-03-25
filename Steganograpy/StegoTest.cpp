
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <bitset>
#include "Steganography.h"


int main()
{
	std::ifstream messageInFile;
	messageInFile.open("message.txt");
	char* inBuff;
	if (messageInFile)
	{
		//std::cout << "The file opened" << std::endl;
		
		// get length of file:
		messageInFile.seekg(0, messageInFile.end);
		int length = messageInFile.tellg();
		messageInFile.seekg(0, messageInFile.beg);

		length -= 2;
		
		inBuff = new char[length];

		messageInFile.read(inBuff, length);

	}
	

	/*std::string data = "0111010001100101011101101010100";
	std::stringstream sstream(data);
	std::string output;
	while (sstream.good())
	{
		std::bitset<8> bits;
		sstream >> bits;
		char c = char(bits.to_ulong());
		output += c;
	}

	std::cout << output;
	std::cout << std::endl;

	char a = "a";
	int aInt = static_cast<long>(a);
	std::bitset<8>*/

	
	

	std::cin.get();

	return 0;
}
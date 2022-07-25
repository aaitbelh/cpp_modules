#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

void replaceTheOccurence(std::string &str, std::string s1, std::string s2)
{
	int index = -1;
	while(1)
	{
		index = str.find(s1);
		if(index == std::string::npos)
			break;
		str.erase(index, index + s1.length());
		str.insert(index, s2);
	}
}

int main()
{
	std::fstream NewFile;
	NewFile.open("lol",std::fstream::in);
	if(!NewFile)
		std::cout << "ERROR" << std::endl;
	std::string buf;
	std::string line;
	while(getline(NewFile,buf))
	{
		buf.append("\n");
		line.append(buf);
		
	}
	std::string s1 = "mamellal";
	std::string s2 = "grboz";
	replaceTheOccurence(line, s1, s2);
	std::cout << line << std::endl;

}
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ofstream file;
	file.open("new_file.txt");
	file << "First line!\n";
	file << "Second line!\n";
	file << "Third line!\n";
	file << "Fourth line!\n";
	file.close();

	std::ifstream new_file("new_file.txt");

	if (new_file.is_open())
	{
		std::string line;
		while(getline(new_file, line))
		{
			std::cout << line;
		}

		new_file.close();

	}
	else {
		std::cout << "There was a problem opening the file" << std::endl;
	}

	return 0;
}
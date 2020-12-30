#pragma once
#include <vector>
#include <fstream>
class ShaderLoader
{
public:
	static std::vector<char> readFile(const std::string& filename);
};


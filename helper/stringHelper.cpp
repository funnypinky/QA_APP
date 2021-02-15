#include "stringHelper.h"
#include <sstream>
#include <cstring>


std::vector<std::string> Alg::splitStr(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

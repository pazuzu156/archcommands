#pragma once

#include <curl/curl.h>
#include <sstream>
#include <string>

class Url {
public:
  std::string encode(std::string input);
  std::string decode(std::string input);
private:
  std::string run(std::string input, bool escape);
};

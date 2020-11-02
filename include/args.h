// Copyright (c) 2020 kaleb
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#pragma once

#include <iostream>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

class Args {
public:
  Args(int argc, char* argv[]);
  ~Args();
  std::string get(int i);
  std::string toString();

private:
  std::vector<std::string> m_Args;
};

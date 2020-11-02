// Copyright (c) 2020 kaleb
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <args.h>
#include <iostream>
#include <sstream>
#include <url.h>

int main(int argc, char *argv[]) {
  Args args(argc, argv);
  Url url;

  std::stringstream ss;
  ss << "xdg-open https://aur.archlinux.org/packages/?K="
     << url.encode(args.toString());

  std::cout << "Searching AUR for: " << args.toString() << std::endl;
  system(ss.str().c_str());

  return 0;
}

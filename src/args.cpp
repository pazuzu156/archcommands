#include "args.h"

using namespace std;

/**
 * @brief  Processes arguments into std::vector.
 * @param  argc: Arg count
 * @param  argv[]: Arguments array
 */
Args::Args(int argc, char* argv[]) {
  if (argc > 1) {
    m_Args.assign(argv + 1, argv + argc);
  }
}

Args::~Args() {}

/**
 * @brief  Returns an argument from an index.
 * @param  i: Index to search with
 * @return Argument from args vector
 */
string Args::get(int i) {
  return m_Args[i];
}

/**
 * @brief  Converts arguments vector into a string.
 * @return Arguments as a string 
 */
string Args::toString() {
  string args = accumulate(m_Args.begin(), m_Args.end(), string{},
    [](string &ss, string &s) {
      return ss.empty() ? s : ss + " " + s;
    }
  );

  return args;
}

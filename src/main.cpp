#include <iostream>

using std::cout;

/**
 * Initialize the read-eval-print-loop (REPL).
 */
void repl() {}

/**
 * Run an Arc script located at the provided path.
 */
void run(const std::string &) {}

int main(int argc, char *argv[]) {
  switch (argc) {
  case 0:
    repl();
    break;
  case 1:
    run("");
    break;
  default:
    cout << "usage: arc [script]";
    return 64;
  }
}
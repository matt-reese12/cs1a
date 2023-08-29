#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "argparse/argparse.hpp"

typedef std::vector<std::string> string_vec;

struct AllArguments : public argparse::Args {
    bool &verbose            = flag("v,verbose", "A flag to toggle verbose");
    string_vec &test_files = kwarg("t,test", "A list of files to run tests on")
      .set_default(string_vec())
      .multi_argument();
    string_vec &test_combined_files = kwarg("tc,test-combined", "A list of files to compile together and test")
      .set_default(string_vec())
      .multi_argument();
};

void test_files_helper(string_vec files) {
  for(auto file : files) {
    std::cout << "Compiling " << file << " >>\033[38;5;124m" << std::endl;
    int exit_code  = std::system(("g++ -Wall " + file + " -o ./bin/test_exec").c_str());
    std::cout << (exit_code ? ("Exit code " + std::to_string(exit_code)) : ("\033[38;5;34m Success")) << "\033[0m" << std::endl;
    std::cout << "Running main function in " << file << " >>" << "\033[38;5;97m" << std::endl;
    std::system("./bin/test_exec");
    std::cout << "\033[0m";
    std::remove("./bin/test_exec");
  }
}
void test_files_combined_helper(string_vec files) {
  std::string test_files_cat = "";
  for(auto file : files) {
    test_files_cat += file + " ";
  }
  std::system(("g++ -Wall " + test_files_cat + "-o ./bin/test_exec").c_str());
}

int main(int argc, char* argv[]) {
  AllArguments args = argparse::parse<AllArguments>(argc, argv);

  // if(args.verbose)
  //       args.print();

  if(args.test_files.size() != 0) {
    test_files_helper(args.test_files);
  }

  return 0;
}

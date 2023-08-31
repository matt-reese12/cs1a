#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <optional>
#include "argparse/argparse.hpp"

typedef std::vector<std::string> string_vec;

struct AllArguments : public argparse::Args {
    bool &verbose
      = flag("v,verbose", "A flag to toggle verbose");

    std::string& behavior =
      arg("The action primary action to be preformed by the executable");

    std::optional<string_vec&> test_files
      = kwarg("t,test", "A list of files to run tests on")
      .multi_argument();
    std::optional<string_vec&> test_combined_files = 
      kwarg("tc,test-combined", "A list of files to compile together and test")
      .multi_argument();
    
    std::optional<std::string&> outputFile
      = kwarg("o,output", "The file to stream output to, if necessary")
};

void test_files_helper(string_vec files) {
  for(auto file : files) {
    std::cout << "Compiling " << file << " >>\033[38;5;124m" << std::endl;
    int exit_code  = std::system(("g++ -Wall " + file + " -o ./bin/test_exec").c_str());
    std::cout << (exit_code ? ("Exit code " + std::to_string(exit_code)) : ("\033[38;5;34m Success")) << "\033[0m" << std::endl;
    std::cout << "Running main function in " << file << " >>" << "\033[38;5;16m" << std::endl;
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
    

  if(args.test_files) {
    test_files_helper(args.test_files);
  }

  if(args.

  return 0;
}

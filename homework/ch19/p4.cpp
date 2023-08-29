#include <iostream>
#include <vector>

int recursive_sum(std::vector<int>,int);

int main() {
  int n, input;
  std::vector<int> list;
  std::cout << "Input the size of the list: ";
  std::cin >> n;
  std::cout << "Input the elements of the list: ";
  while(n--) {
    std::cin >> input;
    list.push_back(input);
  }

  std::cout << "Sum = " << recursive_sum(list, list.size() - 1) << std::endl;
  
  return 0;

}

int recursive_sum(std::vector<int> vec, int n) {
  if(n >= vec.size() || n < 0) return 0;

  return vec[n] + recursive_sum(vec, n-1);
}

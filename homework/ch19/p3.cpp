#include <iostream>
#include <vector>

static int operations = 0;

template<typename T>
void quicksort(std::vector<T>&,int,int);
template<typename T>
int partition(std::vector<T>&,int,int);

void print_list(std::vector<int> vec) {
  for(int i : vec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> unsorted;
  int input;
  std::cout << "Please input a list of integers: ";
  while(std::cin >> input)
    unsorted.push_back(input);
  print_list(unsorted);
  quicksort(unsorted, 0, unsorted.size() - 1);
  print_list(unsorted);
  std::cout << operations << " ops" << std::endl;
  return 0;
}


template <typename T>
void quicksort(std::vector<T>& list, int p, int q) {
  if(p >= q) return;
  
  // print_list(list);
  operations++;
  int partition_location = partition(list, p, q);
  quicksort(list, p, partition_location - 1);
  quicksort(list, partition_location + 1, q);
}

template<typename T>
int partition(std::vector<T>& list,int p,int q) {
  int partition_value = list[q];
  int low = p, high = q;

  for(; low < high; low++) {
    if(list[low] > partition_value) {
      for(; high > low; high--) {
        if(list[high] < partition_value) {
          std::swap(list[low], list[high]);
          std::cout << "\nSwapping (" << list[low] << "," << list[high] << ")\n\t";
          print_list(list);
          break;
        }
      }
    }
  }

  std::swap(list[q], list[high]);
  std::cout << "\nFinal Swapping (" << list[q] << "," << list[high] << ")\n\t";
  print_list(list);
  return high;
}

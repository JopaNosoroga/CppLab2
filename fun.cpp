#include <deque>
#include <iostream>
#include <list>
#include <vector>

template <typename T> T input(T a, std::string str = "Введите число: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int *inputArr(int *count) {
  std::cout << "Введите кол-во чисел в массиве: ";
  std::cin >> *count;
  int *arr{new int[*count]};
  for (int i = 0; i < *count; i++) {
    std::cout << "Введите элемент массива: ";
    std::cin >> arr[i];
  }
  return arr;
}

template <typename T>
void inputVector(std::vector<T> &V,
                 std::string str = "Введите число: ", bool min = false,
                 int min_k = 0) {
  int k;
  if (min)
    std::cout << "Введите количество не меньше " << min_k << '\n';
  do {
    k = input(k, "Введите количество элементов в векторе: ");
  } while (k < min_k || min);

  for (int i = 0; i < k; i++) {
    T num = input(num, str);
    V.push_back(num);
  }
}

template <typename T> void outputVector(std::vector<T> &V) {

  for (auto iter = V.begin(); iter != V.end(); ++iter)
    std::cout << *iter << ' ';
  std::cout << '\n';
}

template <typename T>
void inputDec(std::deque<T> &D,
              std::string str = "Введите число: ", bool min = false,
              int min_k = 0) {
  int k;
  if (min)
    std::cout << "Введите количество не меньше " << min_k << '\n';
  do {
    k = input(k, "Введите количество элементов в деке: ");
  } while (k < min_k || min);

  for (int i = 0; i < k; i++) {
    T num = input(num, str);
    D.push_back(num);
  }
}

template <typename T> void outputDec(std::deque<T> &D) {
  for (auto iter = D.begin(); iter != D.end(); ++iter)
    std::cout << *iter << ' ';
  std::cout << '\n';
}

template <typename T>
void inputList(std::list<T> &L,
               std::string str = "Введите число: ", bool min = false,
               int min_k = 0) {
  int k;
  if (min)
    std::cout << "Введите количество не меньше " << min_k << '\n';
  do {
    k = input(k, "Введите количество элементов в списке: ");
  } while (k < min_k || min);

  for (int i = 0; i < k; i++) {
    T num = input(num, str);
    L.push_back(num);
  }
}

template <typename T> void outputList(std::list<T> &L) {
  for (auto iter = L.begin(); iter != L.end(); ++iter)
    std::cout << *iter << ' ';
  std::cout << '\n';
}

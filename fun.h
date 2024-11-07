#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

template <typename T> T input(T a, std::string str = "Введите число: ");

int *inputArr(int &count);

template <typename T>
void inputVector(std::vector<T> &V,
                 std::string str = "Введите число: ", bool min = false,
                 int min_k = 0);

template <typename T> void outputVector(std::vector<T>);

template <typename T>
void inputDec(std::deque<T> &D,
              std::string str = "Введите число: ", bool min = false,
              int min_k = 0);

template <typename T> void outputDec(std::deque<T> &D);

template <typename T>
void inputList(std::list<T> &L,
               std::string str = "Введите число: ", bool min = false,
               int min_k = 0);

template <typename T> void outputList(std::list<T> &L);

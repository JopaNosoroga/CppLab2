#include "Lab2.h"
#include "fun.h"
#include <cmath>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main() {
  int choice;
  do {
    choice = input(choice, "Введите номер задания от 1 до 10: ");
    switch (choice) {
    case 0:
      break;
    case 1: {
      std::deque<int> D;
      inputDec(D);
      ReverseDec(D);
      break;
    }
    case 2: {
      std::vector<int> V;
      inputVector(V);
      outputVector(V);
      break;
    }
    case 3: {
      std::deque<int> D;
      inputDec(D);
      DeleteMiddleDec(D);
      outputDec(D);
      break;
    }
    case 4: {
      std::string file;
      int k;
      file = input(file, "Введите имя файла с его расширением: ");
      k = input(k, "Введите количество звездочек: ");
      WriteToFile(file, k);
      std::cout << "Звёздочки успешно записаны." << '\n';
      break;
    }
    case 5: {
      std::vector<int> V;
      std::list<int> L;
      inputVector(V);
      inputList(L);
      DuplicationFirst(V, L);
      outputList(L);
      break;
    }
    case 6: {
      int k;
      std::list<int> L1, L2;
      k = input(k, "Введите сдвиг: ");
      inputList(L1, "Введите число: ", true, 10);
      inputList(L2, "Введите число: ", true, 10);
      Shift(L1, L2, k);
      std::cout << "Новые списки: ";
      outputList(L1);
      outputList(L2);
      break;
    }
    case 7: {
      std::vector<int> V;
      inputVector(V);
      ThreeElem(V);
      break;
    }
    case 8: {
      std::list<int> L;
      std::vector<int> V;
      inputList(L);
      ArithmeticMean(V, L);
      std::cout << "Получившийся вектор: ";
      outputVector(V);
      break;
    }
    case 9: {
      int k;
      std::vector<int> V0;
      inputVector(V0);
      k = input(k, "Введите количество векторов: ");
      std::vector<std::vector<int>> Vi;
      for (int i = 0; i < k; i++) {
        inputVector(Vi[i]);
      }
      k = SearchCountVec(V0, Vi);
      std::cout << "Кол-во векторов содержащих все элементы V0: " << k << '\n';
      break;
    }
    case 10: {
      std::vector<std::string> V;
      std::map<char, int> M;
      inputVector(V, "Введите слово английскими заглавнми буквами: ");
      CountQuantities(V, M);
      break;
    }

    default:
      std::cout << "Ошибка! такого задания нет.";
    }
  } while (choice != 0);
}

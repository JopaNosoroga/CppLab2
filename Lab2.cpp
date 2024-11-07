#include <algorithm>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <vector>
// 1
void ReverseDec(std::deque<int> D) {
  int k = D.size();
  for (int i = k / 2; i >= 0; i--)
    std::cout << D.at(i) << ' ';

  for (int i = k; i > k / 2; i--)
    std::cout << D.at(i) << ' ';

  std::cout << '\n';
}
// 2
void InsertOne(std::vector<int> &ptr) {
  for (std::vector<int>::iterator i = ptr.begin(); i != ptr.end(); ++i)
    i = ptr.insert(++i, 1);
}
// 3
void DeleteMiddleDec(std::deque<int> &ptr) {
  ptr.erase(ptr.begin() + ptr.size() / 2);
}
// 4
void WriteToFile(std::string name, int k) {
  std::ofstream OutFile(name);
  std::fill_n(std::ostream_iterator<char>(OutFile), k, '*');
  OutFile.close();
}
// 5
void DuplicationFirst(std::vector<int> &V, std::list<int> &L) {
  std::list<int>::iterator iter = std::find_first_of(
      L.begin(), L.end(), V.begin(), V.begin() + V.size() / 2);
  if (iter != L.end())
    L.insert(L.end(), *iter);
}
// 6
void Shift(std::list<int> &L1, std::list<int> &L2, int K) {

  std::list<int>::iterator iter1 = L1.end();
  std::list<int>::iterator iter2 = L2.end();
  std::advance(iter2, K);
  std::advance(iter1, -K);
  std::rotate(L1.begin(), iter1, L1.end());
  std::rotate(L2.begin(), iter2, L2.end());
}

// 7
void ThreeElem(std::vector<int> &V) {
  sort(V.begin(), V.end());
  std::partial_sort(V.end() - 3, V.end(), V.begin(), std::greater<int>());
  std::cout << "Три последних числа отсортированных в порядке убывания: ";
  std::copy(V.end() - 3, V.end(), std::ostream_iterator<int>(std::cout, ""));
}
// 8

void ArithmeticMean(std::vector<int> &V, std::list<int> &L) {
  V.reserve(L.size() - 1);
  std::adjacent_difference(L.begin(), L.end(), std::back_inserter(V),
                           [](int a, int b) { return (a + b) / 2.0; });
  V.erase(V.begin());
}

// 9

int SearchCountVec(std::vector<int> &V0, std::vector<std::vector<int>> &Vi) {
  int k = 0;
  std::set<int> S0(V0.begin(), V0.end());
  for (int i = 0; i < Vi.size(); i++) {
    std::set<int> Si(Vi[i].begin(), Vi[i].end());
    if (std::includes(Si.begin(), Si.end(), S0.begin(), S0.end()))
      k++;
  }

  return k;
}
// 10

void CountQuantities(std::vector<std::string> &V, std::map<char, int> &M) {
  for (std::string &word : V)
    M[word[0]] += word.size();
  std::cout << "Результаты: " << '\n';
  for (auto &ask : M)
    std::cout << ask.first << ask.second << '\n';
}

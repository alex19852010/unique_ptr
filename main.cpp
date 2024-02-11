#include <iostream>
#include <vector>
#include <memory>
#include <unordered_set>

using namespace std;

 unique_ptr <vector<int>>removeDuplicat(const vector <int>& numbers)
 {

  unordered_set <int> uniqueNumbers;
  unique_ptr <vector <int>> result = make_unique <vector <int>>();

  for(const auto& number : numbers)
  {
    if(uniqueNumbers.find(number) == uniqueNumbers.end())
    {
       uniqueNumbers.insert(number);
       result->push_back(number);
    }

  }

  return result;

 }



int main()
{
  
vector <int> numbers = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
unique_ptr <vector <int>> uniqueNumbers = removeDuplicat(numbers);

cout << "unique numbers: ";

for(const auto& number : *uniqueNumbers)
{
   cout << number << " ";
}

cout << endl;

    return 0;
}
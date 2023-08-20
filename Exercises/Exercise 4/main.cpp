#include <algorithm>
#include <filesystem>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

#include "utils.h"

namespace fs = std::filesystem;
using WordVector = std::vector<std::string>;
using WordCountPair = std::pair<std::string, std::size_t>;
using CountedWordsMap = std::map<std::string, std::size_t>;

  void myPrint(const CountedWordsMap &map){

    for(const auto &[i,j] : map){

        std::cout << "The word is : " << i << "\n" << "The counted number is : " << j << "\n";

    }

  }

  CountedWordsMap count_words(const WordVector &words){

    auto results = CountedWordsMap{};

    for(const auto &word : words){

        results[word]++;

    }

    return results;

}

WordVector split_text(const std::string &text, char ch){

    auto words = WordVector{};

    auto iss  = std::istringstream{text};
    auto item = std::string{};

    while(std::getline(iss, item, ch)){

        words.push_back(item);

    }

    return words;

}


int main()
{
    auto current_path = fs::current_path();
    current_path /= "text.txt";

    auto text = readFile(current_path.string());
    std::cout << text << '\n' << '\n';

    auto splitted_text = split_text(text, ' ');
    print_vector(splitted_text);

    /* Your exercise here */
    auto counted_words = count_words(splitted_text);
    myPrint(counted_words);

    return 0;

}






/*CountedWordsMap count_words(const WordVector &words);
```

- count_words:
  - count the different words from the word vector and store the word, occurence pairs to the map
  - E.g. {"jan", "is", "my", "name"} {{"Jan": 1, "is": 1, "my": 1, "name": 1}}*/

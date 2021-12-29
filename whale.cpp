/*
This program converts text to whale language using loops and vectors.

There are a few simple rules for translating text to whale language:

 - There are no consonants. Only vowels excluding the letter y.
 - The u‘s and e‘s are extra long, so we must double them.
*/

#include <iostream>
#include <vector>
#include <string>
 
int main() {

 
  // Input string for the program to translate
  std::string input = "Turpentine and turtles";
  
  // Create a vector of vowels to be extracted from the input variable
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  // Create another vector to serve as a place to store the vowels from the input string
  std::vector<char> result;

  // Create a for loop that iterates through the input string and checks for vowels
  for (int i = 0; i < input.size(); i++) {
        
    // Create another for loop that iterates through the vowel vector
    for (int j = 0; j < vowels.size(); j++) {

      // Write an if statement that compares input with vowels
      if (input[i] == vowels[j]) {

        result.push_back(input[i]);
       
        // Write an if statement that checks if each letter in the input string is equal to e or u
        if (input[i] == 'e' || input [i] == 'u') {

        result.push_back(input[i]);
        
        }
      
      }
      
    }
  
  }
  
  for (int k = 0; k < result.size(); k++) {
    
    std::cout << result[k];
    
  }
  
  std::cout << "\n";
 
}

#include <bits/stdc++.h>
using namespace std;

void changeAllLetter(char par[]){
  cout << "Paragraph : ";
  char *ptr = par;
  while(*ptr != '\0'){
    cout << (char)toupper(*ptr);
    ptr++;
  }
  cout << "\n";
}

void changeFirstCharacterOfEachWord(char par[]){
  cout << "Paragraph : ";
  char *ptr = par;
  bool flag = true;
  while(*ptr != '\0'){
    if(flag && ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))) {
      cout << (char)toupper(*ptr); 
      flag = false;
    }
    else cout << *ptr;
    if(*ptr == ' ' || *ptr == '.') flag = true;
    ptr++;
  }
  cout << "\n";
}
void changeFirstCharacterOfEachSentence(char par[]){
  cout << "Paragraph : ";
  char *ptr = par;
  bool flag = true;
  while(*ptr != '\0'){
    if(flag && ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))) {
      cout << (char)toupper(*ptr); 
      flag = false;
    }
    else cout << *ptr;
    if(*ptr == '.') flag = true;
    ptr++;
  }
  cout << "\n";
}

void replaceIsByWasWord(char par[]){
  cout << "Paragraph : ";
  char *ptr = par;
  while(*ptr != '\0'){
    if(toupper(*ptr) == 'I' && (*(ptr + 1) != '\0') && toupper(*(ptr + 1)) == 'S')    {
      ptr++;
      cout << "was";
    }
    else 
      cout << *ptr;
    ptr++;
  }
  cout << "\n";
}

int main() {
    cout << "Enter a paragraph contains 100 character at maximum, please. \n";
    char input, c;
    char paragraph[100] = {'\0'};
  
    for(int i = 0;i < 100; ++i){
      char c = cin.get();
      if(c == '\n') break;
      paragraph[i] = c;
    }
  
    while(true){
      cout << "Enter any character from this menu : \n";
      cout << "c : change all letter in upper case.\n";
      cout << "w : change first character of each word in upper case.\n";
      cout << "s : change first character of each sentence in upper case.\n";
      cout << "d : replace 'is' word by 'was' word in the paragraph. \n";
      cout << "0 : to exit the program.\n";
      cin >> input;
      switch (input) {
        case 'c':  changeAllLetter(paragraph);
            break;
        case 'w':  changeFirstCharacterOfEachWord(paragraph);
            break;
        case 's':  changeFirstCharacterOfEachSentence(paragraph);
            break;
        case 'd': replaceIsByWasWord(paragraph);
            break;
        case '0': return 0;
            break;
        default:
            cout << "Error! The char is not correct\n";
            break;
      }
    }
    return 0;
}
#pragma once
#include <iostream>
#include <vector>

using namespace std;

class clsString {

    private:
    char _character;
    string _value;
    string _replace;
    string _replacement;

    static char _InvertCharacter(char character) {
    return isupper(character) ? tolower(character) : toupper(character);
    }
    static bool isCharVowel(char Char){
    char small =  tolower(Char);

    return (small == 'a') || (small == 'e') || (small == 'i') || (small == 'o') || (small == 'u');
}

static vector<string> Spliter(vector<string> &vWords, string str ,string delimeter){
    string word;
    short pos = 0;

    while((pos = str.find(delimeter)) != std::string::npos){
        word = str.substr(0, pos);

        if(!word.empty()){
            vWords.push_back(word);
        }

        str.erase(0, pos + delimeter.length());
    }
    if(!str.empty()){
        vWords.push_back(str);
    }

    return vWords;
}

static string Joiner(vector<string> &vWords, string delimeter){

    string result;

    for(string &word: vWords){
        result = result + word + delimeter;
    }


    return result.substr(0, result.length()-delimeter.length());
}

static string ToLower(string userInput){
    bool checkFirstLetter = true;
    for(short x = 0; x < userInput.length(); x++){
        if(userInput[x] != ' ' && checkFirstLetter){
            userInput[x] = tolower(userInput[x]);
        }
        checkFirstLetter = userInput[x] == ' ' ? true:false;
    }

    return userInput;
}

static vector<string> SplitAndStoreWords(string str, string delimeter){
    short position = 0;
    string word = "";
    vector <string> words;

    while((position = str.find(delimeter)) != std::string::npos){
        word = str.substr(0, position);

        if(!word.empty()){
            words.push_back(word);
        }

        str.erase(0, position+delimeter.length());
    }
    if(!str.empty()){
        words.push_back(str);
    }

    return words;
}

    public:

    clsString(string value){
        _value = value;
    }

    string& Value(){
        return _value;
    }
    static short Length(string value){
        return value.length();
    }

    short Length(){
        return Length(_value);
    }

    
   static string ConvertFirstLettersToUpper(string userInput){
    bool checkFirstLetter = true;
    for(short x = 0; x < userInput.length(); x++){
        if(userInput[x] != ' ' && checkFirstLetter){
            userInput[x] = toupper(userInput[x]);
        }
        checkFirstLetter = userInput[x] == ' ' ? true:false;
    }

    return userInput;
}

string ConvertFirstLettersToUpper(){
    return ConvertFirstLettersToUpper(_value);
}

 static string ConvertFirstLetterToLower(string userInput){
    bool checkFirstLetter = true;
    for(short x = 0; x < userInput.length(); x++){
        if(userInput[x] != ' ' && checkFirstLetter){
            userInput[x] = tolower(userInput[x]);
        }
        checkFirstLetter = userInput[x] == ' ' ? true:false;
    }

    return userInput;
}

string ConvertFirstLetterToLower(){
    return ConvertFirstLetterToLower(_value);
}

static string ConvertAllLettersToUpper(string userInput){
    for(short x = 0; x < userInput.length(); x++){
    
            userInput[x] = toupper(userInput[x]);
        
        
    }

    return userInput;
}

string ConvertAllLettersToUpper(){
    return ConvertAllLettersToUpper(_value);
}

static string ConvertAllLettersToLower(string userInput){
    for(short x = 0; x < userInput.length(); x++){
        
            userInput[x] = tolower(userInput[x]);
        
        
    }

    return userInput;
}


string ConvertAllLettersToLower(){
    return ConvertAllLettersToLower(_value);
}


static string InvertLetters(string str){
    for(int x = 0; x < str.length(); x++){
       
        str[x] = _InvertCharacter(str[x]);
    }

    return str;
}

string InvertLetters() {
    return InvertLetters(_value);
}

static short CharCountInString(string str, char CharInString, bool caseSensetive=true){
     short count = 0;
     
    for(int x = 0; x < str.length(); x++){
        if(caseSensetive){
            if(str[x] ==  CharInString){
                count++;
            }
        } else {if(tolower(str[x]) == tolower(CharInString)){
                count++;
            }
        }
    }
    return count;
}

short CharCountInString(){
    return CharCountInString(_value, _character);
}

static short VowelCount(string str){
    short count = 0;
    string vowels = "aeiou";
    for(char c: str){
      
        if(isCharVowel(c)) {
            count++;
        }
    }

  return count; 
}

short VowelCount(){
    return VowelCount(_value);
}

static void PrintEachWordInString(string S1) { 
    string delimeter = " ";
    short position = 0;
    string word;
    cout << "Your string word are \n\n";

    while((position = S1.find(delimeter)) != std::string::npos) {
        word = S1.substr(0, position);
        if(!word.empty()){
            cout << word << endl;
        }
        S1.erase(0, position + delimeter.length());
    }  
    if(!S1.empty() ){
        cout << S1 << endl;
    }
   }

  static short CountWordsInString(string str){
    short numOfWords = 0;
    string delim = " "; // delimiter 
    cout <<"\nYour string wrords are: "; 
    short pos = 0; 
    string sWord; // define a string variable // use find() function to get the position of the delimiters 
    
    while ((pos = str.find(delim)) != std::string::npos) { 
        sWord =str.substr(0, pos); // store the word 
        if (sWord !="") { 
            numOfWords++;
            } 
        str.erase(0, pos + delim.length()); 
        /* erase() until positon and move to next word. */ 
    } if (str!="") { numOfWords++;
    }
    return numOfWords;
}

short CountWordsInString(){
    return CountWordsInString(_value);
}

static string TrimLeft(string S1) { 
    for (short i = 0; i < S1.length(); i++){
         if (S1[i] != ' '){
             return S1.substr(i, S1.length() - i);      
            } 
    } return ""; 
} 

string TrimLeft(){
    return TrimLeft(_value);
}
    
static string TrimRight(string S1){
     for (short i = S1.length() - 1; i >= 0; i--){ 
           if (S1[i] != ' '){ 
            return S1.substr(0, i + 1);
             }
        } return ""; 
    } 

string TrimRight(){
    return TrimRight(_value);
}

static string Trim(string S1) { 
    return (TrimLeft(TrimRight(S1)));
    
} 

string Trim(){
    return Trim(_value);
}

static string ReverseWord(string str, string delimeter= " "){
    vector<string> strSplit;
    string reverse = "";

    strSplit = Spliter(strSplit, str, delimeter);

    vector<string>::iterator iter = strSplit.end();

    while(iter != strSplit.begin()){
        iter--;
        reverse += *iter + " ";
    }

    reverse = reverse.substr(0, reverse.length() - 1);

    return reverse;
}

string ReverseWord(){
    return ReverseWord(_value);
}




static string ReplaceWord(string str, string replaceWord, string replacingWord, bool matchCase = true){
    vector<string> wordStore;
    string finalResult = "";
    wordStore = SplitAndStoreWords(str, " ");

    for(string &word: wordStore){

        if(matchCase){
        if(word == replacingWord){
            word = replaceWord;
        }}else{
            if(ToLower(word) == ToLower(replacingWord)){
            word = replaceWord;
        }
        }

        
    }

    return Joiner(wordStore, " ");
}



string ReplaceWord(){
    return ReplaceWord(_value, _replace, _replacement);
}

static string RemoveSpecialChar(string str){
    string nospecial = "";
    for(int x = 0; x < str.length(); x++){
        if(!ispunct(str[x])){

            nospecial += str[x];
        }
        
    }

    return nospecial;
}

string RemoveSpecialChar(){
    return RemoveSpecialChar(_value);
}


    
};

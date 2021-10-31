/**
 * This is a program for a piglatin form
 * @author: Farida Eleshin
 * @version:1.0.1
 * @param: char* word
 */


#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX = 43;

char* convertToPL(char* word);

int main()
{
   // creation of 5 character strings, each length MAX
   char word[5][MAX];
   int i;				// loop counter

   cout << "Input 5 words: ";
   for (i = 0; i < 5; i++)
       cin >> word[i];

   cout << "\nPig Latin version of the 5 words:\n";
  /* for (i = 0; i < 3; i++)

      convertToPL(word[i]);
      cout << word[i] << ' ';
   }*/


   /* Note that the above outputs illustrate that the original
   string itself has been converted.  The outputs below illustrate
   that a pointer to this string is also being returned from the
   function.*/

   cout << convertToPL(word[0]) << ' '
        << convertToPL(word[1]) << ' '
        << convertToPL(word[2]) << ' '
        << convertToPL(word[3]) << ' '
        << convertToPL(word[4]) << '\n';

   return 0;
}

// Write your definition of the convertToPL function here

char* convertToPL(char* word){

    //assigning len to the length of the charstring
    int len = strlen(word);

    //creating an empty string or initilaizing a string
    string charstring = "";

    //iterating through the charstring
    for (int i = 0; i < len ; i++){

        //assigning the characters at the charstring to a string
        charstring = charstring + word[i];
    }

//check if the first letter is a vowel, then add way to the word
     if((charstring[0]=='a') ||(charstring[0]=='e') || (charstring[0]=='i') || (charstring[0]=='o')||(charstring[0]=='u') ){
         tolower(charstring[0]);
         charstring += "way";
         toupper(charstring[0]);
         cout<<charstring<<endl;

     }

     //check if the second letter is a vowel, then add way to the word
     else if((charstring[1]=='a') ||(charstring[1]=='e') || (charstring[1]=='i') || (charstring[1]=='o')||(charstring[1]=='u')||(charstring[1]=='y')){
          tolower(charstring[0]);

          //getting the substring of the string in the piglatin form deviod of the ay
          charstring = charstring.substr(1,charstring.length()-1) + charstring[0];

          //concatenating ay to the string
          charstring += "ay";

          //making the first letter a capitalword
          toupper(charstring[0]);
          cout<<charstring<<endl;

     }

     //check if the third letter is a vowel, then add way to the word
      else if((charstring[2]=='a') ||(charstring[2]=='e') || (charstring[2]=='i') || (charstring[2]=='o')||(charstring[2]=='u')||(charstring[2]=='y')){
          tolower(charstring[0]);

          //getting the substring of the string in the piglatin form deviod of the ay
          charstring = charstring.substr(2,charstring.length()-1) + charstring[0] + charstring[1] ;
          charstring += "ay";
          toupper(charstring[0]);
          cout<<charstring<<endl;

     }

     //check if the fourth letter is a vowel, then add way to the word
     else if((charstring[3]=='a') ||(charstring[3]=='e') || (charstring[3]=='i') || (charstring[3]=='o')||(charstring[3]=='u')||(charstring[3]=='y')){
          tolower(charstring[0]);

          //getting the substring of the string in the piglatin form deviod of the ay
          charstring = charstring.substr(3,charstring.length()-1) + charstring[0] + charstring[1] + charstring[2]  ;
          charstring += "ay";
          toupper(charstring[3]);
          cout<<charstring<<endl;
     }


    // copying the contents of the
    // string to char array
    strcpy(word, charstring.c_str());

}


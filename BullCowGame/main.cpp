//
//  main.cpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/11/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

#include <iostream> // Pre-Processor directive
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// the entry point of our application
int main(){
    
    PrintIntro();
    
    GetGuessAndPrintBack();
    GetGuessAndPrintBack();
    
    cout << "Adding new line" << endl;
    cout << endl;
    return 0;
}

void PrintIntro(){
    // Intro the game.
    constexpr int WORD_LENGTH = 8;
    cout << "Welcome to the Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the "<< WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

string GetGuessAndPrintBack(){
    // Get a guess from the player.
    string Guess = "";
    cout <<"Enter your Guess: ";
    getline(cin, Guess);
    
    cout << "You Guessed: " << Guess << endl;
    return Guess;
}

//
//  main.cpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/11/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

#include <iostream> // Pre-Processor directive
#include <string>
#include "main.h"
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();
void PlayGame();
bool AskToPlayAgain();

// the entry point of our application
int main(){
    PrintIntro();
    do{
        PlayGame();
    }while(AskToPlayAgain());
    return 0;
}

// Intro the game.
void PrintIntro(){
    constexpr int WORD_LENGTH = 8;
    cout << "Welcome to the Bulls and Cows: A fun word game.\n";
    cout << "Can you guess the "<< WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

// Get a guess from the player.
string GetGuess(){
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

// Play Game
void PlayGame(){
    constexpr int GuessTimes = 5;
    string Guess = "";
    for (int i = 0; i < GuessTimes; i++ ){
        cout << "Enter your Guess:";
        Guess = GetGuess();
        cout << "You Guessed: " << Guess << endl;
        cout << endl;
    }
}

bool AskToPlayAgain(){
    string Response = "";
    cout << "Do you want to play again (y/n)?";
    getline(cin, Response);
    return(Response[0] == 'y');
}

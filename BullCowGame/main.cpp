//
//  main.cpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/11/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

/* This is a console executable that makes use of the BullCow class. Also, this acts as view in a MVC pattern, and is reponsible for all user interaction. To see the game logic see the FBullCowGame class
 */

#include <iostream> // Pre-Processor directive
#include <string>
#include "FBullCowGame.hpp"

using int32 = int;
using FText = std::string;
void PrintIntro();
FText GetGuessAndPrintBack();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiate a new game

// the entry point of our application
int main(){
    //std::cout << BCGame.GetMaxTries() << std::endl;
    PrintIntro();
    do{
        PlayGame();
    }while(AskToPlayAgain());
    return 0;
}

// Intro the game.
void PrintIntro(){
    constexpr int32 WORD_LENGTH = 8;
    std::cout << "Welcome to the Bulls and Cows: A fun word game.\n";
    std::cout << "Can you guess the "<< WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

// Get a guess from the player.
FText GetGuess(){
    FText Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

// Play Game
void PlayGame(){
    BCGame.Reset();
    int32 CurrentGuess = BCGame.GetCurrentGuess();
    int32 GuessTimes = BCGame.GetMaxTries();
    FText Guess = "";
    //TODO change from for loop to while loop for validation tries
    for (int32 i = 1; i <= GuessTimes; i++ ){
        std::cout << "Guess" << CurrentGuess << ". Enter your Guess:";
        Guess = GetGuess(); // TODO make loop checking valid
        
        //Submit valid guess to the game
        //Print number of bulls and cows
        
        std::cout << "You Guessed: " << Guess << std::endl;
        std::cout << std::endl;
        
        //
    }
    
    // TODO summarize game
}

bool AskToPlayAgain(){
    FText Response = "";
    std::cout << "Do you want to play again (y/n)?";
    getline(std::cin, Response);
    return(Response[0] == 'y');
}

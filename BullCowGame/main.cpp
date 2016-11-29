//
//  main.cpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/11/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

#include <iostream> // Pre-Processor directive
#include <string>


void PrintIntro();
std::string GetGuessAndPrintBack();
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
    std::cout << "Welcome to the Bulls and Cows: A fun word game.\n";
    std::cout << "Can you guess the "<< WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

// Get a guess from the player.
std::string GetGuess(){
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

// Play Game
void PlayGame(){
    constexpr int GuessTimes = 5;
    std::string Guess = "";
    for (int i = 0; i < GuessTimes; i++ ){
        std::cout << "Enter your Guess:";
        Guess = GetGuess();
        std::cout << "You Guessed: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

bool AskToPlayAgain(){
    std::string Response = "";
    std::cout << "Do you want to play again (y/n)?";
    getline(std::cin, Response);
    return(Response[0] == 'y');
}

//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/28/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

#include "FBullCowGame.hpp"
using int32 = int;
FBullCowGame::FBullCowGame() { Reset();}

void FBullCowGame::Reset(){
    constexpr int32 MAX_TRIES = 5;
    MyMaxtTries = MAX_TRIES;
    
    // Guess a new word for matching.
    MyCurrentGuess = 1;
    
    return;
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxtTries; }
int32 FBullCowGame::GetCurrentGuess() const { return MyCurrentGuess; }

/*
bool FBullCowGame::IsGmaeWon(){
    
}

bool FBullCowGame::CheckGuessValidity(std::string){
    
}*/

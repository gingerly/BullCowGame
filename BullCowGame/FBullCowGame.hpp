//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Haris Jeelani on 11/28/16.
//  Copyright © 2016 Haris Jeelani. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp
#include <string>

class FBullCowGame{
public:
    void Reset(); // TODO Reset the game
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGmaeWon();
    bool CheckGuessValidity(std::string);
    
private:
    int MyCurrentTry;
    int MyMaxtTries;
};

#endif /* FBullCowGame_hpp */

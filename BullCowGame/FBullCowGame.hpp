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

using FString = std::string;
using int32 = int;

class FBullCowGame{
public:
    FBullCowGame();
    int32 GetMaxTries() const;
    int32 GetCurrentGuess() const;
    bool IsGmaeWon() const;
    
    void Reset(); // TODO Reset the game
    bool CheckGuessValidity(FString);
    // provide a method for counting bulls & cows, and increasing turn #
    
private:
    // See the respective Constructor
    int32 MyCurrentGuess;
    int32 MyMaxtTries;
};

#endif /* FBullCowGame_hpp */

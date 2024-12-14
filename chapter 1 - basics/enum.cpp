/**
 * Enumeration is a data type that is used to create a list of constants
 * Struct is an aggregate data type which contains variables of different data type
*/

enum CardSuits {
    Club,
    Diamond,
    Heart,
    Spade
};

enum CardElements {
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    King,
    Queen
};

struct Card {
    CardSuits suit;  // CardSuits type
    CardElements element; // CardElements type
};




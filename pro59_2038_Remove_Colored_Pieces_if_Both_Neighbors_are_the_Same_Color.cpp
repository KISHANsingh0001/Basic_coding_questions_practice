//LeetCode number _2038_Remove_Colored_Pieces_if_Both_Neighbors_are_the_Same_Color.
// There are n pieces arranged in a line, and each piece is colored either by 'A' or by 'B'. You are given a string colors
// of length n where colors[i] is the color of the ith piece.

// Alice and Bob are playing a game where they take alternating turns removing pieces from the line.
// In this game, Alice moves first.

//-> Alice is only allowed to remove a piece colored 'A' if both its neighbors are also colored 'A'. She is not allowed to remove pieces that are colored 'B'.
//-> Bob is only allowed to remove a piece colored 'B' if both its neighbors are also colored 'B'. He is not allowed to remove pieces that are colored 'A'.
//-> Alice and Bob cannot remove pieces from the edge of the line.
//-> If a player cannot make a move on their turn, that player loses and the other player wins.
//-> Assuming Alice and Bob play optimally, return true if Alice wins, or return false if Bob wins.
#include<iostream>
#include<string>
using namespace std;
bool winnerOfGame(string& colors){
    int aliceScore = 0 , bobScore = 0;

    for (int i = 1; i < colors.length()-1; i++)
    {
        char currentColor = colors[i];
        char previousColor = colors[i-1];
        char nextColor = colors[i+1];

        if(currentColor == 'A' && previousColor == 'A' && nextColor == 'A'){
            aliceScore++;
        }
        else if(currentColor == 'B' && previousColor == 'B' && nextColor == 'B'){
            bobScore++;
        }
    }
    return aliceScore>bobScore;
    
}
int main()
{
    string colors = "AAABABAAABBBABBBABBAAABBBAAABBBB";
    bool ans = winnerOfGame(colors);
    if(ans){
        cout<<"Alice is Winner of the game."<<endl;
    }
    else{
        cout<<"Bob is Winner of the game."<<endl;
    }
    return 0;
}
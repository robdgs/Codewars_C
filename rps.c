/*
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"
*/

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  enum tool sasso = ROCK;
  enum tool carta = PAPER;
  enum tool forbici = SCISSORS;
  
  enum outcome p1_won = P1_WON;
  enum outcome p2_won = P2_WON;
  enum outcome draw = DRAW;
  
  if(p1 == p2)
	  return draw;
  else if ( p1 == carta &&  p2 == sasso)
    return p1_won;
  else if ( p1 == forbici &&  p2 == carta)
    return p1_won;
  else if ( p1 == sasso && p2 == forbici)
    return p1_won;
  else if (p1 == sasso &&  p2 == carta)
    return p2_won;
    else if ( p1 == carta &&  p2 == forbici)
    return p2_won;
  else if ( p1 == forbici &&  p2 == sasso)
    return p2_won;
  else if ( !p1 || !p2)
    return 0;
}
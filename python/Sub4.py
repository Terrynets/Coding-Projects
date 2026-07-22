#Rock Paper scizzors

Player1=input()
Player2=input()
if Player1=='rock' and Player2=='scissors' or Player1=='scissors' and Player2=='paper' or Player1=='paper'and Player2=='rock':
    print('Player 1 wins')
elif Player1==Player2:
    print('Tie')
else :
    print('Player 2 wins')

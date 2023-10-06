#include <iostream>
#include <cmath>
#include <ctime>


void draw(char *board);
void playerMove(char *board, char player);
void computerMove(char *board, char computer);
bool checkWinner(char *board, char player, char computer);
bool checkTie(char *board);



int main(){

char board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
char player = 'X';
char computer = 'O';
bool running = true;

draw(board);
while (running)
{
    
    playerMove(board, player);
    draw(board);
    if(checkWinner(board,player, computer)){
        running = false;
        break;
    }
    else if(checkTie(board)){
        running = false;
        break;
    }
    computerMove(board, computer);
    draw(board);
    if(checkWinner(board,player, computer)){
        running = false;
        break;
    }
    else if(checkTie(board)){
        running = false;
        break;
    }
}

std::cout << "GG! \n";

return 0;

}



void draw(char *board){

    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";
    
}

void playerMove(char *board, char player){

    int number;
    
     while (!number > 0 || !number < 8 ){
        std::cout << "Please Enter the corresponding box you want to mark (1-9): ";
        std::cin >> number;
        number--;                   // number - 1 = index;
         if(board[number] == ' '){
            board[number] = player;
            break;
     }

} 
    
    
}
void computerMove(char *board, char computer)
{
    int number;
    srand(time(NULL));

    while(true)
    {
        number = rand() % 9 ;
        if(board[number] == ' '){
            board[number] = computer;
            break;
        }
    }
    
};
bool checkWinner(char *board, char player, char computer){

    if( board[0] != ' ' && board[0] == board[1] && board[1] == board[2]){
        board[0] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[3] != ' ' && board[3] == board[4] && board[4] == board[5]){
        board[3] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[6] != ' ' && board[6] == board[7] && board[7] == board[8]){
        board[6] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[0] != ' ' && board[0] == board[3] && board[3] == board[6]){
        board[0] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[1] != ' ' && board[1] == board[4] && board[4] == board[7]){
        board[1] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[2] != ' ' &&board[2] == board[5] && board[5] == board[8]){
        board[2] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[0] != ' ' && board[0] == board[4] && board[4] == board[8]){
        board[0] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else if( board[2] != ' ' && board[2] == board[4] && board[4] == board[6]){
        board[2] == player ? std::cout << "You WIN!\n" : std::cout << "You lose!\n";
    }
    else{
        return false;
    }
    return true;


};
bool checkTie(char *board){
    for(int i =0; i < 9; i++){
        if(board[i] == ' '){
            return false;
        }
    }
    std::cout << "IT IS A TIE! \n";

    return true;
};


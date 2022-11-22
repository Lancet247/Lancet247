#define ROW 3
#define COL 3

//ÉùÃ÷
void InitBoard(int row, int  col, char board[ROW][COL]);
void Show(int row, int  col, char board[ROW][COL]);
void Playermove(int row, int  col, char board[ROW][COL]);
void Commove(int row, int  col, char board[ROW][COL]);
char Iswin(int row, int  col, char board[ROW][COL]);

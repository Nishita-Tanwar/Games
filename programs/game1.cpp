#include <iostream.h>
#define X 'X'
#define O 'O'
#define yes 1
#define no 0

int check (char[][3], int, int);
void counteratk (char x[][3], char turn);
void progress (char x[][3]);
void main()
{
        char x[3][3];
        int row,col,correct=yes,turn,game=yes,counter=0,r,c,d;
        for (row=0; row<3; row++)
        {
                for (col=0; col<3; col++)
                {
                        x[row][col]=' ';
                }
        }
        cout << "You, are about to witness the program of the century.\n\n" <<
                "COMMENCE TIC TAC TOE!!!!\n\n";
        cout << "Ladies first, please pick the row then the column.\n\n";
        progress(x);
        do
        {
                do
                {
                        turn=X;
                        cout << "Row:\n";
                        cin >> row;
                        cout << "Column:\n";
                        cin >> col;
                        row--;
                        col--;
                        x[row][col];
                        correct=check (x,row,col);
                        if (!correct)
                }while (!correct);
                x[row][col]=X;
                counter++;
                game=winlose(x, game);
                turn=O;
                if (!game)
                {
                        progress(x);
                        cout << "\nYou win!!!\n\n" << endl;
                        cin >> game;
                        game=go_on(game);
                        if (!game)
                                break;
                }
                if (game)
                {
                        counteratk (x, turn);
                        game=winlose(x,game);
                }
                if (game==2)
                {
                        cout << "\n You lost...how lame >.>\n\n" << endl;
                        cout << "Play again\n" << "1.yes\n" << "0.no\n" << endl;
                        cin >> game;
                        game=go_on(game);
                        if(!game)
                                break;
                }
                if (counter==5 && game)
                {
                        cout << "\nIt's a tie!!\n\n" << endl;
                        cin >> game;
                        game=go_on(game);
                        if(!game)
                                break;
                }
        }while (game);
}

int go_on (int game)
{
        if (game)
        {
                main();
        {
                return no;
}}
int check (char x[][3], int row, int col)
                return no;
}

int winlose (char x[][3], int game)
{
        int row, col, r, c, d, ro, co, dO;
        for (row=0; row<3; row++)
        {
                r=0;
                c=0;
                d=0;
                ro=0;
                co=0;
                dO=0;
                for (col=0; col<3; col++)
                {
                        if(x[row][col]==X)
                                r++;
                        if(x[row][col]==O)
                                ro++;
                        if(x[col][row]==X)
                                c++;
                        if(x[col][row]==O)
                                co++;
                        if(x[col][col]==X)
                                d++;
                        if(x[col][col]==O)
                                dO++;
                        if (ro==3 || co==3 || dO==3)
                                game=2;

                }
        }
        if (x[0][2]==X && x[1][1]==X && x[2][0]==X)
                d=3;
        if (x[0][2]==O && x[1][1]==O && x[2][0]==O)
                game=2;
        if (r==3 || c==3 || d==3)
                game=no;
        return game;
}


void counteratk (char x[][3], char turn)
{
        int a,b,game;
        for (a=0; a<3; a++)
                for (b=0; b<3; b++)
                        if (x[a][b]==' ' && turn==O)
                        {
                                x[a][b]=O;
                                turn=X;
                        }
        progress(x);
}
void progress (char x[][3])
{
        cout << " _________________\n";
        cout << "|     |     |     | \n";
        cout << "|  " << x[0][0] << "  |  " << x[0][1] << "  |  " << x[0][2] <<
"  |\n";
        cout << "|_____|_____|_____|\n";
        cout << "|     |     |     |\n";
        cout << "|  " << x[1][0] << "  |  " << x[1][1] << "  |  " << x[1][2] <<
"  |\n";
        cout << "|_____|_____|_____|\n";
        cout << "|     |     |     |\n";
        cout << "|  " << x[2][0] << "  |  " << x[2][1] << "  |  " << x[2][2] <<
"  |\n";
        cout << "|_____|_____|_____|\n";

}

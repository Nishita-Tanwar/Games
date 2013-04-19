#include <iostream.h>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <iomanip.h>
#include <ctime>

int rollWhip (void);
int rollBounce (void);
int rollNormal (void);
int houseRoll (void);

int main ()
{
//Declaring Variables
string yn;
int point = 0;
int result = 0;
int cash = 100;
int bet = 0;
int houseResult = 0;
string response;
srand(time(NULL));
enum stat {CON, WIN, LOS};
stat gameStat;
gameStat = CON;

//Idiot proofing - Do/While loop
do
{
   cout << "         ____________   ________       _________       _________     _______
   cout << "        /  _____    /  /  ____  \     /  ____   |     /  _____  \   /  ____/" << endl;
   cout << "       /  /     /  /  /  /   /  /    /  /    |  |    /  /    /  /  /  /     " << endl;
   cout << "      /  /     /  /  /  /___/  /    /  /_____|  |   /  /____/  /  /  /___   " << endl;
   cout << "     /  /     /__/  /    _____/    /  ______    /  /  ________/   \____  \  " << endl;
   cout << "    /  /     __    /  _  \        /  /      /  /  /  /                 \  \ " << endl;
   cout << "   /  /     /  /  /  / \  \      /  /      /  /  /  /                  /  / " << endl;
   cout << "  /  /_____/  /  /  /   \  \    /  /      /  /  /  /            ______/  /  " << endl;
   cout << " /___________/  /__/     \__\  /__/      /__/  /__/            /________/   " << endl;
   cout << "\fCraps v. 4.01 - Based on the game from \"C++ How to Program\""<< endl;
   cout << "\nThis program will play a game of Craps with you." << endl;
   cout << "\nYou will be given $100 to begin with. You may bet up to $50 per roll. You can 
enter $0 to pass" << endl;
   cout << "\nDo you know how to play Craps? [y/n]: ";
   cin >> yn;
}
while (yn != "n" && yn != "N" && yn != "y" && yn != "Y");

//Idiot proofing - Do/While loop, If/Else answer verification
if (yn == "n" || yn == "N")
{
   do
   {
      cout << "\fTwo dice are thrown, if the sum of the two dice is equal to 7 or 11 on the
first toss the player wins. If the sum of the dice are equal to 2, 3, or 12 on
the first toss the house wins (these numbers are called the craps). If the sum
is 4, 5, 6, 8, 9, or 10 for the first toss, the sum rolled becomes the plays
\"point.\" To win the game you must roll your \"point\" again before you roll a sum
of 7, in which case the house wins." << endl;

      cout << "\nAre you ready to play? [y/n]: ";
      cin >> yn;
   }
   while (yn != "y" && yn != "Y" && yn != "n" && yn != "N");
}

//Idiot proofing - Do/While loop, If/Else answer verification
do
{
   if (yn == "y" || yn == "Y")
   {
      string toss;
      string firstToss;

//Idiot proofing - Do/While loop, If/Else answer verification
      do
      {
         cout << "\fPress Ctrl-C to exit this program at anytime." << endl;

         do
         {
            cout << "\nCurrent cash: $" << cash << endl;
            cout << "Enter bet (no more than $50, enter 0 to pass): ";
            cin >> bet;
         }
         while (bet > 50 || bet < 0 && bet < 0 && bet > 50);

         cout << "\nPlease select a rolling technique [1/2/3]: \n\n1. Whip          2. Bounce          3. Normal" << endl;
         cout << "\n[Hint: choose multiple rolling techniques to improve your odds!]" << endl;
         cout << "Enter your rolling technique: ";
         cin >> toss;
         cout << "\f==============================\n\n";

      }
      while (toss != "1" && toss != "2" && toss != "3");

      if (toss == "1")
         result = rollWhip();

      if (toss == "2")
         result = rollBounce();

      if (toss == "3")
         result = rollNormal();

      houseResult = houseRoll();

//Switch statements, first part of quasi-game engine, changes enumerated gameStat value, dependant on first roll
      switch (result)
      {
         case 7:
         case 11:
            gameStat = WIN;
            break;
         default:
            gameStat = CON;
            point = result;
            cout << "\nYour point is " << point << endl;
            break;
      }

      switch (houseResult)
      {
         case 2:
         case 3:
         case 12:
            gameStat = LOS;
            break;
         default:
            break;
      }

//While loop to run game, dependant on the the enumerated gameStat value
      while (gameStat == CON)
      {

         string toss;
         string firstToss;
         int secResult = 0;

//Do/While statement to idiot proof the second and on roll
         do
         {
            cout << "\n\n==============================";
            cout << "\nPress Ctrl-C to quit anytime." << endl;
            cout << "\nCurrent cash: $" << cash << endl;
            cout << "Current bid: $" << bet << endl;
            cout << "\nYour point is " << point << endl;
            cout << "\nPlease select a rolling technique [1/2/3]: \n\n1. Whip          2. Bounce          3. Normal" << endl;
            cout << "\n[Hint: Choose multiple rolling techniques to improve your odds!]" << endl;
            cout << "Enter your rolling technique: ";
            cin >> toss;
            cout << "\f==============================\n\n";

         }
         while (toss != "1" && toss != "2" && toss != "3");

         if (toss == "1")
            secResult = rollWhip();

         if (toss == "2")
            secResult = rollBounce();

         if (toss == "3")
            secResult = rollNormal();

         houseResult = houseRoll();

//If/Else statements, second part of quasi-game engine, changes enumerated gameStat value, dependant on last roll
         if (secResult == point)
            gameStat = WIN;
         else
            gameStat = CON;

         if (houseResult == 7)
            gameStat = LOS;
      }

      if (gameStat == LOS)
         cash -= bet;

      if (gameStat == WIN)
         cash += bet;

      if (gameStat == WIN || gameStat == LOS)
         cout << "\nCurrent cash: " << cash << endl;

//If/Else statements, acts if gameStat declares the game a Win or Loss
      if (gameStat == WIN)
         cout << "Congrats, you win!" << endl;

      if (gameStat == LOS)
         cout << "Hahaha. Fail." << endl;
   } 
   else
   {
      cout << "Play again soon.\n" << endl;
      return 0;
   }

//First part of program Do/While loop to keep playing
   cout << "Would you like to keep playing? [y/n] ";
   cin >> response;

//Idiot proofing - Do/While loop, If/Else answer verification
   if (response != "y" && response != "Y" && response != "n" && response != "N")
      do
      {
         cout << "\n\nIncorrect answer." << endl;
         cout << "\nWould you like to keep playing? [y/n] ";
         cin >> response;
      }
      while (response != "y" || response != "Y" || response != "n" || response != "N");

   if (response == "n" || response == "N")
   {
      cout << "Play again soon.\n" << endl;
      return 0;
   }

//End of program Do/While loop, runs program again if user desires
}
while (response == "y" || response == "Y");
return 0;
}


//Function for the players 'Whip' type roll (generates lower numbers)
int rollWhip (void)
{
   int dOne;
   int dTwo;
   int pRoll;
   dOne = 1 + rand() % 5;
   dTwo = 1 + rand() % 5;
   pRoll = dOne + dTwo;
   cout << "\nYou rolled a " << dOne << " and " << dTwo << " for a sum of " << pRoll << endl;
   return pRoll;
}

//Function for the players 'Bounce' type roll (generates higher numbers)
int rollBounce (void)
{
   int dOne;
   int dTwo;
   int pRoll;
   dOne = 2 + rand() % 6;
   if (dOne > 5)
      dOne -= 1;
   dTwo = 2 + rand() % 6;
   if (dTwo > 5)
      dTwo -= 1;
   pRoll = dOne + dTwo;
   cout << "\nYou rolled a " << dOne << " and " << dTwo << " for a sum of " << pRoll << endl;
   return pRoll;
}

//Function for the players 'Normal' type roll (generates regular numbers)
int rollNormal (void)
{
   int dOne;
   int dTwo;
   int pRoll;
   dOne = 1 + rand() % 6;
   dTwo = 1 + rand() % 6;
   pRoll = dOne + dTwo;
   cout << "\nYou rolled a " << dOne << " and " << dTwo << " for a sum of " << pRoll << endl;
   return pRoll;
}

//Function for the houses dice roll, equivalent of players 'Normal' roll 
int houseRoll (void)
{
   int dOne;
   int dTwo;
   int hRoll;
   dOne = 1 + rand() % 6;
   dTwo = 1 + rand() % 6;
   hRoll = dOne + dTwo;
   if (hRoll < 7)
      hRoll += 1;
   if (hRoll > 7)
      hRoll -= 1;
   cout << "The house rolled " << dOne << " and " << dTwo << " for a sum of " << hRoll << endl;
   return hRoll;
}
ISME SHAYAD ERROR HAI TRY DIS CHANGE
 missing " << endl; at the end of line 36 and if you want to draw a '\', you will have to type '\\'...



program for snake game
//start food function
void food()
{
     int difrencex = 10 - 630;
     int difrencey = 30 - 470;
     int salma = 0;
     int foodx;
     int foody;
     time_t t;
     srand((unsigned) time(&t));
     for(int i=0;i<salma;i++)
     rand();
     foodx = (rand() % difrencex);
     foody = (rand() % difrencey); 
     for(int i=0; 630>foodx>10 && 470>foody>30;i++) 
     {
     foodx = (rand() % difrencex);
     foody = (rand() % difrencey);    
     }       
     putpixel(foodx,foody,15);
     salma++; 
     static int foodcount = 0;
     score = 0;
     int nextx;
     int nexty;
     nextx = snake.head_x;
     nexty = snake.head_y;
     if(snake.head_dir == RIGHT)
     {
                       nextx++;
     }
     if(snake.head_dir == LEFT)
     {
                       nextx--;
     }
     if(snake.head_dir == UP)
     {
                       nexty--;
     }
     if(snake.head_dir == DOWN)
     {
                       nexty++;
     }
     int nextpixel;
     nextpixel = getpixel(nextx,nexty);
     if(nextpixel==15) 
     {
                  
     if (snake.tail_dir == UP)
           {
             for ( int i = 0; i<101;i++) 
             putpixel (snake.tail_x,snake.tail_y+i,15); 
             snake.tail_y +=100;
           }
        if (snake.tail_dir == DOWN)
          {
            for (int i = 0; i<101;i++) 
            putpixel (snake.tail_x,snake.tail_y-i,15); 
            snake.tail_y -=100;
          } 
        if (snake.tail_dir == LEFT)
          {
            for (int i = 0; i<101;i++)
            putpixel (snake.tail_x+i,snake.tail_y,15); 
            snake.tail_x +=100;
            //printf ("LEFT");
          }
        if (snake.tail_dir == RIGHT)
          {
             for ( int i = 0; i<101;i++)
             putpixel (snake.tail_x-i,snake.tail_y,15); 
             snake.tail_x -=100;
             //printf ("RIGHT");
          } 
   

                  foodcount--;
                  score+=10;
                  settextstyle(3,0,2);
                  sprintf(scorestring,"score : %d ",score);
                  outtextxy(1,0,scorestring);
     }
}

//start function bouns
/*void bouns()
{
     int difrencex = 620 - 20;
     int difrencey = 460 - 40;
     int salma = 0;
     int bounsx;
     int bounsy;
     time_t t;
     srand((unsigned) time(&t));
     for(int i=0;i<salma;i++)
     rand();
     bounsx = (rand() % difrencex);
     bounsy = (rand() % difrencey);
     int j = 20;
     setcolor(LIGHTBLUE);
     circle(bounsx+j,bounsy+j,1);
     salma++;
}*/

//Game Over
void GameOver()
{
     if(snake.head_x <= 10 || snake.head_x >= 630 || snake.head_y <= 30 || snake.head_y >= 470)
     {
                     settextstyle(3,0,2);
                     outtextxy(290,220,"Game Over");
                     delay(3000);
                     exit(1);
     }
     int nextx;
     int nexty;
     nextx = snake.head_x;
     nexty = snake.head_y;
     if(snake.head_dir == RIGHT)
     {
                       nextx++;
     }
     if(snake.head_dir == LEFT)
     {
                       nextx--;
     }
     if(snake.head_dir == UP)
     {
                       nexty--;
     }
     if(snake.head_dir == DOWN)
     {
                       nexty++;
     }
     int nextpixel;
     nextpixel = getpixel(nextx,nexty);
     if(nextpixel == LIGHTGREEN)
     {
                 settextstyle(3,0,2);
                 outtextxy(290,220,"Game Over");
                 delay(3000);
                 exit(1);
     }
}

//start function Game
void Game()
{
     food();
     //bouns();
     while(1)
     {
             move();
             GameOver();
     }
}

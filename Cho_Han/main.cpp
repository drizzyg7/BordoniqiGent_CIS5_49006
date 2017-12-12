/* 
 * File:   main.
 * Author: Gent
 * Created on Oct 19 2017, 11:07 AM
 * Purpose: Project 2
 */
//System Libraries Here
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;


//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
   {
       
      
        int Die1, Die2, ttld;
        int key = 0, key2 = 0, end = 0;
        int stake;//money being betted
        int x;
        int name;
        int n =0;
	srand(time(NULL));  // call this only once – seed the random generator
        
          // vector for final list of scores <scores, name>
        
   vector<pair<int, string>> playerScores;
   
   /* Welcome message and title */
   std::cout << "\n\t\t   ********** Welcome To Cho Han! **********\n\n";
   std::cout << "\n    RULES: This is a Japanese gambling game.";
   std::cout << "\n    the rules to the game are there are two dice.";
   cout << "\n    Before the dice are rolled the game will ask each player ";
   cout << "\n    Cho or Han. Cho is even and han is negative, once you ";
   cout << "\n    pick Cho or Han the two dice are rolled and they are added up";
   cout << "\n    if you guessed right then you win mone if you guess wrong then you lose your money.";
   cout << "\n\n                       Good luck, and have fun!!!" << endl;
    //outputing the directions to the game
   // Game loop. Initialize playAgain to "Y" to start game. At the end of the game, user may select Y to restart the game or "N" to end the game.
   string playAgain = "Y";
   while(playAgain == "Y")
   {
       // Prompt for, and input number of players
       int numOfPlayers = 0;
       cout << "\n\n\tPlease enter the number of players for this game(1-4): ";
       cin >> numOfPlayers;
      
       // If player(s) have entered invalid number of players, prompt to enter again.
       while((numOfPlayers >= 5) || (numOfPlayers <= 0))
       {      
           cout << "\n\tSorry, but only 1 to 4 people may play in a game.";
           cout << "\n\tPlease enter the number of players for this game (1-4): ";
           cin >> numOfPlayers;
           cin.ignore(1024, '\n');
       }
       
       // Create vector to store current player's names
       vector<string> names;
      
       // If this is a solo game.
       if(numOfPlayers == 1)
       {
           string name;
           cout << "\n\tChoosing to go it alone, huh? Play the game, earn a score, then";
           cout << "\n\tchallenge yourself: Try again to beat your high score!";
           cout << "\n\tPlease enter your name: ";
           cin >> name;
           names.push_back(name);
       }
      
       // If playing with group of people (no more than four)
       else if(numOfPlayers > 1)
       {
            // Users enter okay when ready to roll for who starts. string message used to ensure user enters OK correctly.
           string message;
          
           // Explains initial roll situation to players.
           std::cout << "\n\"there are "<<numOfPlayers<<" playing";
           cout << "\n\ty each will get a turn to guess";
           cout << "\n\n\tType 'OK' when each player has a guess: ";
           cin >> message;
           
           for(int i = 0; i < numOfPlayers; i++)
           {   
         
            int x;
             cout<<" cho(1) or han(2) please use numbers"<<endl;
            cin>>x;
            cout<<endl;
               
            if (x<1|| x>2){
            cout<<"invalid entry" <<endl;
            cin>>x;
            
           }
            
          }
            
             
	{
		Die1 = rand() % 6 + 1;  // in the range of 1 - 6
		Die2 = rand() % 6 + 1;  // in the range of 1 - 6

		cout<<"Dice #1 is "<<Die1<<endl;
		cout<<"Dice #2 is "<<Die2<<endl;

		ttld = Die1+Die2;
		cout<<"The total of both dice is "<<ttld<<endl;

		switch (ttld)  {
                    
		case 2:
                    cout<<"CHO!!"<<endl;
			key2 = 2;
			break;
                          //2  even so its cho
                        
		case 3:
			 cout<<"HAN!!"<<endl;
			key2 = 3;
			break;
                          //9  odd so its han
                        
		case 4:
                     cout<<"CHO!!"<<endl;
			key = 4;
			break;
                           //2  even so its cho
                        
		case 5:
                     cout<<"HAN!!"<<endl;
			key = 5;
			break;
                          //9  odd so its han
                        
		case 6:
                     cout<<"CHO!!"<<endl;
			key = 6;
			break;
                         //2  even so its cho
                        
		case 7:
                     cout<<"HAN!!"<<endl;
                         key = 7;         
			break;
                          //9  odd so its han
                        
		case 8:
                     cout<<"CHO!!"<<endl;
			key = 8;
			break;
                          //2  even so its cho
                        
		case 9:
                     cout<<"HAN!!"<<endl;
			key = 9;
			break;
                      //9  odd so its han
                        
		case 10:
                     cout<<"CHO!!"<<endl;
			key = 10;
			break;
                           //2  even so its cho
                        
		case 11:
		     cout<<"HAN!!"<<endl;
			key2 = 11;
			break;
                          //9  odd so its han
                        
		case 12:
		     cout<<"CHO!!"<<endl;
			key2 = 12;
			break;
                           //2  even so its cho
		}
	} while (ttld == key2);
    //Output Located Here
         
        //if project is even its cho and if its odd its han 
        {      
  if ( ttld % 2 == 0) 
        cout << ttld << " It's Cho";
  
    else
        cout << ttld << "It's Han";
        
}
       //if guessed right it will output good guess if not it will say try again
        {
         if ( x=1, ttld % 2 == 0) 
        cout <<  x<< " Good Guess "<<name<<endl;
         
         else if ( x=1, ttld % 2 == 1) 
               cout <<  x<< " try again "<<name<<endl;
         
         else if ( x=2, ttld % 2 == 0) 
        cout <<  x << " Try Again"<<name<<endl;
         
           else if ( x=2, ttld % 2 == 1) 
        cout <<  x << "good guess"<<name<<endl;
         }
  
           // If players have entered anything other than ok or OK
           while((message != "OK") && (message != "ok"))
           {
               cout << "\n\tType 'OK' when ready: ";
               cin >> message;
           }
      
       }

        
    //Process/Calculations Here
   
     int x; 
       cout<<" cho(1) or han(2) please use numbers"<<endl;
        cin>>x;
       cout<<endl;
      
     
    
  
         //cout<<" cho(1) or han(2) please use numbers"<<endl;
            //cin>>x;
     
         if (x<1|| x>2){
            cout<<"invalid entry" <<endl;
            cin>>x;
         }
            
         else
             
	{
		Die1 = rand() % 6 + 1;  // in the range of 1 - 6
		Die2 = rand() % 6 + 1;  // in the range of 1 - 6

		cout<<"Dice #1 is "<<Die1<<endl;
		cout<<"Dice #2 is "<<Die2<<endl;

		ttld = Die1+Die2;
		cout<<"The total of both dice is "<<ttld<<endl;

		switch (ttld)  {
                    
		case 2:
                    cout<<"CHO!!"<<endl;
			key2 = 2;
			break;
                          //2  even so its cho
                        
		case 3:
			 cout<<"HAN!!"<<endl;
			key2 = 3;
			break;
                          //9  odd so its han
                        
		case 4:
                     cout<<"CHO!!"<<endl;
			key = 4;
			break;
                           //2  even so its cho
                        
		case 5:
                     cout<<"HAN!!"<<endl;
			key = 5;
			break;
                          //9  odd so its han
                        
		case 6:
                     cout<<"CHO!!"<<endl;
			key = 6;
			break;
                         //2  even so its cho
                        
		case 7:
                     cout<<"HAN!!"<<endl;
                         key = 7;         
			break;
                          //9  odd so its han
                        
		case 8:
                     cout<<"CHO!!"<<endl;
			key = 8;
			break;
                          //2  even so its cho
                        
		case 9:
                     cout<<"HAN!!"<<endl;
			key = 9;
			break;
                      //9  odd so its han
                        
		case 10:
                     cout<<"CHO!!"<<endl;
			key = 10;
			break;
                           //2  even so its cho
                        
		case 11:
		     cout<<"HAN!!"<<endl;
			key2 = 11;
			break;
                          //9  odd so its han
                        
		case 12:
		     cout<<"CHO!!"<<endl;
			key2 = 12;
			break;
                           //2  even so its cho
		}
	} while (ttld == key2);
    //Output Located Here
         
        //if project is even its cho and if its odd its han 
        {      
  if ( ttld % 2 == 0) 
        cout << ttld << " It's Cho";
  
    else
        cout << ttld << "It's Han";
        
}
       //if guessed right it will output good guess if not it will say try again
        {
         if ( x=1, ttld % 2 == 0) 
        cout <<  x<< " Good Guess "<<name<<endl;
         
         else if ( x=1, ttld % 2 == 1) 
               cout <<  x<< " try again "<<name<<endl;
         
         else if ( x=2, ttld % 2 == 0) 
        cout <<  x << " Try Again"<<name<<endl;
         
           else if ( x=2, ttld % 2 == 1) 
        cout <<  x << "good guess"<<name<<endl;
         }
        
    //Exit the Program
    return 0;
}
}
}










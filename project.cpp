#include <iostream>
#include <cstdlib>
#include <time.h>
#include <bits/stdc++.h>
#include <string>                                       //header files
#include <cstdlib>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;


class body{                     //the main class from which all the other classes are inherited

    public:

    int random(){
        srand(time(0));
        int r;
        r=rand();
        return r;
    }

    void intro(){   //the first main screen of the game
        cout<<"*********************************"<<endl;
        cout<<"                                WELCOME TO THE ARCADE ZONE                                         "<<endl;
        cout<<"*********************************"<<endl<<endl;
        cout<<"PRESS THE NUMBER TO CONTINUE"<<endl;
        cout<<"1. PLAY THE GAMES."<<endl;
        cout<<"2. CREDITS."<<endl;
        cout<<"3. EXIT."<<endl;
        cout<<"Your choice --> "<<endl;
    }

    void credits(){    //names of the project group members
        cout<<"*********************************"<<endl;
        cout<<"                                            CREDITS                                                "<<endl;
        cout<<"*********************************"<<endl<<endl;
        cout<<"     BATCH-B6                YEAR-1                   SEMESTER-2                 CAMPUS-JIIT62   "<<endl<<endl;
        cout<<"                      This is our Project for SDF-II for the second semester                       "<<endl<<endl;
        cout<<"                      GROUP MEMBERS -->                                                            "<<endl<<endl;
        cout<<"                      1. PARRI TANISHQ KUMAR - 23103177                                            "<<endl;
        cout<<"                      2. ABHYUDAY SINGH - 23103168                                                "<<endl;
        cout<<"                      3. VARUN JAIN - 23103171                                          "<<endl;
        cout<<"                      4. SAKSHAM TRIPATHI - 23103180                                                "<<endl<<endl;
        cout<<"*********************************"<<endl<<endl;
    }

    void main_exit(){                  //end screen of the game
        cout<<"*********************************"<<endl;
        cout<<"                                   THANKS FOR PLAYING                                        "<<endl;
        cout<<"*********************************"<<endl<<endl;
        exit(0);
    }

    void main_menu(){                        //main menu screen of the game
        cout<<"---------------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                        MAIN MENU                                                  "<<endl;
        cout<<"---------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"PRESS THE NUMBER TO CONTINUE"<<endl;
        cout<<"1. PLAY ROCK-PAPER-SCISSOR"<<endl;
        cout<<"2. THE LOTTERY"<<endl;
        cout<<"3. MATH-O-METER"<<endl;
        cout<<"4. SNAKE & LADDER"<<endl;
        cout<<"5. EXIT"<<endl;
        cout<<"Your choice --> "<<endl;
    }
};


class RPS:public body{         //the class for the game "rock-paper-scissor"

    public:

    string comp;
    string you;
    int compPoint=0;
    int youPoint=0;

    void getCOMP(){
        int num= 1+(random()%3);
        if(num==1)
            comp='r';
        else if(num==2)
            comp='p';
        else if(num==3)
            comp='s';
    }

    void menuRPS(){                         //menu for "rock-paper-scissor"
    cout << ("**************************\n");
    cout << ("                           ROCK PAPER SCISSORS \n                             \n");
    cout << ("**************************\n");
    cout << ("* 1. Play the game *\n");
    cout << ("* 2. About the game *\n");
    cout << ("* 3. Exit *\n");
    cout << ("**************************\n");
    cout << "ENTER YOUR CHOICE : \n";
    }

    void AboutRPS(){                             //about the game "rock-paper-scissor"
    cout << ("***************************\n");
    cout << ("                               ABOUT THE GAME  \n");
    cout << ("***************************\n");
    cout << ("* Rock-Paper-Scissors *\n");
    cout << ("* Rock paper scissors is and intransitive hand game,usually played between *\n");
    cout << ("* two people, in which player simultaneously forms one of three shaped with an  *\n");
    cout << ("* outstretched hand.These shapes are rock,paper and scissors. *\n");
    cout << ("* This game was originated in China and later imported to Japan. *\n");
    cout << ("* *\n");
    cout << ("***************************\n\n\n");
    }

    void getYou(){                     //function for user choice
    while( you!="r" && you!="p" && you!="s" && you!="R" && you!="P" && you!="S"){
        cout<<"***First to 5 points win******"<<endl<<endl;
        cout<<"YOUR CHOICE -->"<<endl;
        cout<<"Enter 'r' for rock"<<endl;
        cout<<"Enter 'p' for paper"<<endl;
        cout<<"Enter 's' for scissor"<<endl;
        cin>>you;
      }
    }

    void calcGame(){             //function for computer choice
        if( ( you=="r" && comp=="s") || ( you=="R" && comp=="s") ){
            cout<<"You won this point"<<endl;
            youPoint++;
        }
        else if( (you=="s" && comp=="p") || (you=="S" && comp=="p") ){
            cout<<"You won this point"<<endl;
            youPoint++;
        }
        else if( (you=="p" && comp=="r") || (you=="P" && comp=="r") ){
            cout<<"You won this point"<<endl;
            youPoint++;
        }
        else if( (you=="r" && comp=="p") || (you=="R" && comp=="p") ){
            cout<<"\nComputer won this point\n"<<endl;
            compPoint++;
        }
        else if( (you=="s" && comp=="r") || (you=="S" && comp=="r") ){
            cout<<"\nComputer won this point\n"<<endl;
            compPoint++;
        }
        else if( (you=="p" && comp=="s") || (you=="P" && comp=="s") ){
            cout<<"\nComputer won this point\n"<<endl;
            compPoint++;
        }
    }

    void checkWin(){                 //function for checking the game
        you="";
        if(youPoint==5){
            cout<<"*******CONGRATULATIONS!!!!!! YOU WON THE GAME********"<<endl<<endl;
            exit(0);
        }
        else if(compPoint==5){
            cout<<"********YOU LOST THE GAME . BETTER LUCK NEXT TIME*********"<<endl<<endl;
            exit(0);
        }
    }

    void details(){                  //function to show the points
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Your choice -> "<<you<<endl<<endl;
        cout<<"Computer choice -> "<<comp<<endl<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"your points -> "<<youPoint<<endl<<endl;
        cout<<"Computer points -> "<<compPoint<<endl<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
    }

    int workRPS(){             //working function for the game
        int mainrps;
        MAINRPS:
            menuRPS();
            cin>>mainrps;
            system("cls");
            if(mainrps==1){
                while( youPoint!=5 || compPoint!=5 ){
                getCOMP();
                getYou();
                calcGame();
                details();
                checkWin();
                }
            }
            else if(mainrps==2){
                AboutRPS();
                goto MAINRPS;
            }
            else if(mainrps==3){
                return 1;
            }
            else{
                cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
                goto MAINRPS;
            }
    }
};


class lottery:public body{          //class for the game "lottery"

public:

    int n,*arr,lott,yourNum,flag;

    ~lottery(){
        delete arr;
    }

    void inDET(){                         //function to enter the details
        cout<<"ENTER THE NUMBER OF PARTICIPANTS(MAX 5) : ";
        cin>>n;
        cout<<endl<<endl;
        if(n>5 || n<1){
            cout<<"\nXXXX Input a valid value for number of participants.   XXXX\n\n\n";
            inDET();
        }
        else{
            arr=new int[n];
            cout<<"You can choose the number for lottery between 1-20 "<<endl<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter the lottery number for participant "<<i+1<<" : ";
                cin>>arr[i];
            }
        }
    }

    void menuLott(){             //menu for the game
    cout << ("**************************\n");
    cout << ("               CHECK YOUR LUCK WITH THE LOTTERY GAME *\n");
    cout << ("**************************\n");
    cout << ("* 1. Play the game *\n");
    cout << ("* 2. About the game *\n");
    cout << ("* 3. Exit *\n");
    cout << ("**************************\n");
    cout << "ENTER YOUR CHOICE : \n";
    }

    void AboutLott(){                   //about the game
    cout << ("***************************\n");
    cout << ("                            ABOUT THE GAME  \n");
    cout << ("***************************\n");
    cout << ("* The Lottery Game *\n");
    cout << ("* This game is a game of luck, where you choose a number  *\n");
    cout << ("* and if the chosen number is the same as the lottery     *\n");
    cout << ("* number you will win. The number of participants can be *\n");
    cout << ("* one or more .                                          *\n");
    cout << ("* *\n");
    cout << ("***************************\n\n\n");
    }

    void lottNum(){           //function to generate lottery winning number
        lott=1+(random()%20);
    }

    void checkLott(){            //function to check the win condition
        for(int i=0;i<n;i++){
            if(arr[i]==lott){
                flag=1;
                yourNum=i+1;
                break;
            }
            else
                flag=0;
        }
    }

    void print(){                           //function to tell the results
        cout<<"*******THE RESULTS ARE HERE*******"<<endl<<endl;
        for(int i=0;i<n;i++){
            cout<<"The number choosen by participant "<<i+1<<" is "<<arr[i]<<endl;
        }
        cout<<endl<<"THE LOTTERY NUMBER IS "<<lott<<endl<<endl;
        if(flag==1){
            cout<<"***CONGRATULATIONS PARTICPANT "<<yourNum<<" has won the lottery******"<<endl<<endl;
        }
        else if(flag==0){
            cout<<"****OOPS ! BETTER LUCK NEXT TIME*********"<<endl<<endl;
        }
    }

    int workLott(){                     //working function for the game
        int mainlott;
        MAINLOTT:
        menuLott();
        cin>>mainlott;
        system("cls");
        if(mainlott==1){
            inDET();
            lottNum();
            checkLott();
            print();
        }
        else if(mainlott==2){
            AboutLott();
            goto MAINLOTT;
        }
        else if(mainlott==3){
            return 1;
        }
        else{
            cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
            goto MAINLOTT;
        }
    }
};


class math:public body{                   //class for the game "math-o-meter"

public:

    int q,a,List[10],temp1=0,i,point=0;
    string Q,A;

    void ques(){                   //function to generate questions in random order
        q=1+(random()%10);
    }

    void Ques(){                   //function to check no question repeats
        while(List[q]==-1){
            q=1+(random()%10);
        }
    }

    void menumath(){              //menu for the game
    cout << ("**************************\n");
    cout << ("                              MATH-O-METER \n");
    cout << ("**************************\n");
    cout << ("* 1. Play the game *\n");
    cout << ("* 2. About the game *\n");
    cout << ("* 3. Exit *\n");
    cout << ("**************************\n");
    cout << "ENTER YOUR CHOICE : \n";
    }

    void Aboutmath(){                //about the game
    cout << ("***************************\n");
    cout << ("                              ABOUT THE GAME \n");
    cout << ("***************************\n");
    cout << ("* The Math-o-Meter *\n");
    cout << ("* This game is a simple maths game where you will be     *\n");
    cout << ("* asked simple maths school level problems and you have  *\n");
    cout << ("* to answer them in least possible time . you will be    *\n");
    cout << ("* awarded points for every correct answer.               *\n");
    cout << ("* *\n");
    cout << ("***************************\n\n\n");
    }

    void qlist(){           //function containing the list of questions
        if(q==1){
            cout<<"--> What is cos(0)*cos(1)*cos(2).....cos(179)*cos(180)\n"<<endl<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==2){
            cout<<"--> 3 = 18\n    4 = 32\n    5 = 5=\n    6 = 72\n    7 = ?\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==3){
            cout<<"--> Find the missing number\n\n22,21,23,22,24,23,__\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==4){
            cout<<"--> You are a point A. You go 1m North then 5m East then\n2m North then 1m West. At what distance are you from A?\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==5){
            cout<<"--> What is the smallest perfect number?\n\nHint : A perfect number is a positive integer that is equal to the \nthe sum of its proper divisors.\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==6){
            cout<<"--> There are 50 dogs signed up for a dog show. There are 36 \nmore small dogs than large dogs,how many smalls dogs are there?\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";

            cin>>A;
        }
        else if(q==7){
            cout<<"--> There is a 3-digit number where the first and third digit is same\nbut the second digit is 4 times the first digit\nand third digit if 3 less than the second digit?\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==8){
            cout<<"--> Find the missing number\n\n1,4,9,16,25,__,49\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==9){
            cout<<"--> Solve : -15+(-5x)=0\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
        else if(q==10){
            cout<<"--> Find the next number in sequence\n36,34,30,28,24,__\n"<<endl;
            List[q]=-1;
            cout<<"Your answer --> ";
            cin>>A;
        }
    }

    void alist(){             //function containing the list of answers
        if(q==1){
            Q="0";
        }
        else if(q==2){
            Q="98";
        }
        else if(q==3){
            Q="25";
        }
        else if(q==4){
            Q="5";
        }
        else if(q==5){
            Q="6";
        }
        else if(q==6){
            Q="43";
        }
        else if(q==7){
            Q="141";
        }
        else if(q==8){
            Q="36";
        }
        else if(q==9){
            Q="-3";
        }
        else if(q==10){
            Q="22";
        }
    }

    void checkans(){         //function to check the correctness of answer
        if(Q==A){
            point++;
            cout<<"Your answer is correct"<<endl<<endl;
        }
        else
            cout<<"You are incorrect"<<endl<<endl;
    }

    void dispP(){
        cout<<"Your total points are : "<<point<<endl<<endl;
        if(point>=8)
            cout<<"Congratulations ! Your performance was good ";
        else if(point>=5)
            cout<<"You did it good but you have to practice more";
        else
            cout<<"Your performance was not good . Go study maths";
    }

    int workMath(){              //working function for the game
    int mainmath;
    MAINMATH:
        menumath();
        cin>>mainmath;
        system("cls");
        if(mainmath==1){
            for(int i=0;i<10;i++){
            ques();
            Ques();
            qlist();
            alist();
            checkans();
            }
            dispP();
        }
        else if(mainmath==2){
            Aboutmath();
            goto MAINMATH;
        }
        else if(mainmath==3){
            return 1;
        }
        else{
            cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
            goto MAINMATH;
        }
    }
};


class SnakeLadd:public body{                 //class for the game "snake & ladders"

    public:

    int mainMenuOption, win, subMenuoption;
    string x;

    int DiceFunction()                //function to get random dice number
    {
    int i = 1;
    int dicevalue = 1;
    int randomNumber = random();
    dicevalue = abs(dicevalue + (randomNumber % 10 - 4));
    if (dicevalue == 0)
    {
        dicevalue = dicevalue + randomNumber % 10;
    }
    cout << "*************" << endl;
    cout << " Roll of dice gives the value of: " << dicevalue << " *" << endl;
    cout << "*************" << endl;
    return dicevalue;
    }

    void BoardDisplay(int positionnumberP1, int positionnumberP2){          //function to display the board when two real players are playing
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for (int row = 10; row > 0; row--)
    {
        cout << "* ";
        int valuetoprint;
        if (row % 2 == 0)
        {
            valuetoprint = 10 * row;
        }
        else
        {
            valuetoprint = 10 * (row - 1) + 1;
        }

        for (int col = 1; col <= 10; col++)
        {

            {
                if (row % 2 == 0)
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "P2"
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << " ";
                    }
                    valuetoprint--;
                }
                else
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "P2"
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << " ";
                    }
                    valuetoprint++;
                }
            }
        }
        cout << "*";
        cout << endl;
        cout << "* *";
        cout << endl;
    }
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
}

    void BoardDisplayComputer(int positionnumberP1, int positionnumberP2){        //function to display the board when computer is playing
        for (int i = 1; i < 28; i++)
        {
        cout << "* ";
        }
    cout << endl;

    for (int row = 10; row > 0; row--)
    {
        cout << "* ";
        int valuetoprint;
        if (row % 2 == 0)
        {
            valuetoprint = 10 * row;
        }
        else
        {
            valuetoprint = 10 * (row - 1) + 1;
        }

        for (int col = 1; col <= 10; col++)
        {

            {
                if (row % 2 == 0)
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "C "
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << " ";
                    }
                    valuetoprint--;
                }
                else
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "C "
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << " ";
                    }
                    valuetoprint++;
                }
            }
        }
        cout << "*";
        cout << endl;
        cout << "* *";
        cout << endl;
    }
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
}

int SimpleTurn(int currentPosition, int valueOfDice){    //function updating the current position
    currentPosition = currentPosition + valueOfDice;
    return currentPosition;
}

int SnakeTurn(int currentPosition){                    //function checking the snake position

    switch (currentPosition)
    {
    case (96):
        currentPosition = 42;
        cout << "********\n";
        cout << "* SNAKE : 96>42 *\n";
        cout << "********\n";
        break;
    case (47):
        currentPosition = 16;
        cout << "********\n";
        cout << "* SNAKE : 47>16 *\n";
        cout << "********\n";
        break;
    case (26):
        currentPosition = 10;
        cout << "********\n";
        cout << "* SNAKE : 26>10 *\n";
        cout << "********\n";
        break;
    }
    return currentPosition;
}

int LadderTurn(int currentPosition){                 //function checking the ladder position

    switch (currentPosition)
    {
    case (21):
        cout << "********\n";
        cout << "* LADDER : 21>32 *\n";
        cout << "********\n";
        currentPosition = 32;
        break;
    case (3):
        currentPosition = 16;
        cout << "********\n";
        cout << "* LADDER : 3>16 *\n";
        cout << "********\n";
        break;
    case (54):
        currentPosition = 88;
        cout << "********\n";
        cout << "* LADDER : 54>88 *\n";
        cout << "********\n";
        break;
    }
    return currentPosition;
}

void MainMenuText(){                //menu for the game

    cout << ("**************************\n");
    cout << ("                           SNAKES AND LADDERS \n");
    cout << ("**************************\n");
    cout << ("* 1. Play the game *\n");
    cout << ("* 2. About the game *\n");
    cout << ("* 3. Exit *\n");
    cout << ("**************************\n");
    cout << "ENTER YOUR CHOICE : \n";
}

void Sub1MenuText(){                //submenu for the game

    cout << ("**************************\n");
    cout << ("                           SNAKES AND LADDERS \n");
    cout << ("**************************\n");
    cout << ("* 1. Play with computer *\n");
    cout << ("* 2. Play with person *\n");
    cout << ("* 3. Back *\n");
    cout << ("**************************\n");
    cout << "ENTER YOUR CHOICE : \n";
}

void AboutTheGame(){                       //about the game
    cout << ("***************************\n");
    cout << ("                             ABOUT THE GAME \n");
    cout << ("***************************\n");
    cout << ("* Snakes and Ladders *\n");
    cout << ("* A worldwide classic board game! Navigate your piece from start to finish, *\n");
    cout << ("* avoid the snakes, and take shortcuts going up the ladders. The origins of *\n");
    cout << ("* this game are found in ancient India were it was known as Moksha-Patamu. *\n");
    cout << ("* A player moving up the board represented life's spiritual journey, *\n");
    cout << ("* complicated by virtues - the ladders, and vices - the snakes. *\n");
    cout << ("* *\n");
    cout << ("***************************\n\n\n");
}

void SubMenuText(){        //details of board
    cout << ("**************************\n");
    cout << ("* *\n");
    cout << ("* POSITION OF SNAKES : 96>42 , 47>16 , 26>10 *\n");
    cout << ("* POSITION OF LADDERS: 21>32 , 3>16 , 54>88 *\n");
    cout << ("* Player1-P1, Player2-P2, Computer-C *\n");
    cout << ("* Both Players at same position:BP *\n");
    cout << ("* *\n");
    cout << ("**************************\n");
}

void PlayForP1Text(){          //function to notify player 1
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "***************\n";
    cout << "* It is Player1(P1)'s turn. *\n";
    cout << "***************\n"
         << endl;
    cout << "Enter any number to roll the dice. \n";
}

void PlayForP2Text(){                   //function to notify player 2
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "***************\n";
    cout << "* It is Player2(P2)'s turn. *\n";
    cout << "***************\n"
         << endl;
    cout << "Enter any numberto roll the dice. \n";
}

void PlayForOnlyPlayerText(){                ////function to notify player when computer is playing with him/her
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"<< endl;
    cout << "***************\n";
    cout << "* It is Player 's turn. *\n";
    cout << "***************\n"
         << endl;
    cout << "Enter any number to roll the dice. \n";
}

void PlayForComputerText(){               //function to notify it's computer's turn
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "***************\n";
    cout << "* It is Computers 's turn. *\n";
    cout << "***************\n"
         << endl;
}

int wincheck(int valueofposition){                //function checking the win conditon
    if (valueofposition == 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int workSnake(){          //working function for the game
    MainMenuTextLabel:
    MainMenuText();
    cin >> mainMenuOption;
    system("cls");
    if (mainMenuOption == 3)
    {
        return 1;
    }
    else if (mainMenuOption == 2)
    {
        AboutTheGame();
        goto MainMenuTextLabel;
    }
    else if (mainMenuOption == 1)
    {
    SubMenuTextLabel:
        Sub1MenuText();
        cin >> subMenuoption;
        if (subMenuoption == 3)
        {
            goto MainMenuTextLabel;
        }
        else if (subMenuoption == 2)
        {
            int livePositionP1 = 1;
            int livePositionP2 = 1;
            BoardDisplay(livePositionP1, livePositionP2);

            win = 0;
            while (win == 0)
            {
                PlayForP1Text();
                cin >> x;
                int diceroll;
                diceroll = DiceFunction();
                if ((livePositionP1 + diceroll) < 101)
                {

                    livePositionP1 = livePositionP1 + diceroll;
                    if (livePositionP1 == 21 || livePositionP1 == 3 || livePositionP1 == 54)
                    {
                        livePositionP1 = LadderTurn(livePositionP1);
                    }
                    else if (livePositionP1 == 96 || livePositionP1 == 47 || livePositionP1 == 26)
                    {
                        livePositionP1 = SnakeTurn(livePositionP1);
                    }
                    BoardDisplay(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP1) == 1)
                    {
                        win == 1;
                        cout << "\n************\n";
                        cout << "* PLAYER1(P1) WON THE GAME *\n";
                        cout << "**********\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }

                PlayForP2Text();
                cin >> x;
                Sleep(1000);
                int diceroll2;
                diceroll2 = DiceFunction();
                if ((livePositionP2 + diceroll2) < 101)
                {
                    livePositionP2 = livePositionP2 + diceroll2;
                    if (livePositionP2 == 21 || livePositionP2 == 3 || livePositionP2 == 54)
                    {
                        livePositionP2 = LadderTurn(livePositionP2);
                    }
                    else if (livePositionP2 == 96 || livePositionP2 == 47 || livePositionP2 == 26)
                    {
                        livePositionP2 = SnakeTurn(livePositionP2);
                    }
                    BoardDisplay(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP2) == 1)
                    {
                        win == 1;
                        cout << "\n************\n";
                        cout << "* PLAYER2(P2) WON THE GAME *\n";
                        cout << "**********\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else if (subMenuoption == 1)
        {
            int livePositionP1 = 1;
            int livePositionP2 = 1; // Make Player2 computer
            BoardDisplay(livePositionP1, livePositionP2);

            win = 0;
            while (win == 0)
            {
                PlayForOnlyPlayerText();
                cin >> x;
                int diceroll;
                diceroll = DiceFunction();
                if ((livePositionP1 + diceroll) < 101)
                {

                    livePositionP1 = livePositionP1 + diceroll;
                    if (livePositionP1 == 21 || livePositionP1 == 3 || livePositionP1 == 54)
                    {
                        livePositionP1 = LadderTurn(livePositionP1);
                    }
                    else if (livePositionP1 == 96 || livePositionP1 == 47 || livePositionP1 == 26)
                    {
                        livePositionP1 = SnakeTurn(livePositionP1);
                    }
                    BoardDisplayComputer(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP1) == 1)
                    {
                        win == 1;
                        cout << "\n************\n";
                        cout << "* PLAYER WON THE GAME *\n";
                        cout << "**********\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }

                PlayForComputerText();


                int diceroll2;
                diceroll2 = DiceFunction();
                if ((livePositionP2 + diceroll2) < 101)
                {
                    livePositionP2 = livePositionP2 + diceroll2;
                    if (livePositionP2 == 21 || livePositionP2 == 3 || livePositionP2 == 54)
                    {
                        livePositionP2 = LadderTurn(livePositionP2);
                    }
                    else if (livePositionP2 == 96 || livePositionP2 == 47 || livePositionP2 == 26)
                    {
                        livePositionP2 = SnakeTurn(livePositionP2);
                    }
                    BoardDisplayComputer(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP2) == 1)
                    {
                        win == 1;
                        cout << "\n************\n";
                        cout << "* Computer won the game *\n";
                        cout << "**********\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
            goto SubMenuTextLabel;
        }
    }
    else
    {
        cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
        goto MainMenuTextLabel;
    }

}
};


int main(){    //main() function

  int choice1,choice2,Temp;
  body b;
  SnakeLadd s;
  RPS r;
  math m;
  lottery l;
  MAINMENU:         //main menu label
      b.intro();                     //game screening starts here
      cin>>choice1;
      system("cls");
      if(choice1==3)              //choice for exiting
        b.main_exit();
      else if(choice1==2){                  //choice for credits
        b.credits();
        goto MAINMENU;
      }
      else if(choice1==1){                   //choice to play games
        SUBMENU:
            b.main_menu();
            cin>>choice2;
            system("cls");
            if(choice2==5){                              //exiting the sub menu
                goto MAINMENU;
            }
            else if(choice2==1){                        //playing rock-paper-scissor
                Temp=r.workRPS();
                if(Temp==1)
                    goto SUBMENU;
            }
            else if(choice2==2){                             //playing lottery game
                Temp=l.workLott();
                if(Temp==1)
                    goto SUBMENU;
            }
            else if(choice2==3){                             //playing math-o-meter
                Temp=m.workMath();
                if(Temp==1)
                    goto SUBMENU;
            }
            else if(choice2==4){                         //playing snake & ladder
                Temp=s.workSnake();
            }
            else{
                cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
                goto SUBMENU;
            }
      }
      else{
            cout<<"\n\nThere is no choice for this number . You may have did it by mistake . Please try again !!!\n\n";
            goto MAINMENU;
        }

    return 0;
}
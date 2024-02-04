#include<iostream>
using namespace std;

  // declaring global variables
  //create multidimensional char array
    char space[3][3] = {{'1','2','3'}, {'4','5','6'},{'7','8','9'}};  // rows & col nos. for spaces, :-{(00,01,02), (10,11,12),(20,21,22)}
    int row, col;
    char token = 'x';
    bool tie = false;
    string n1 = "", n2 = "";      // (players names) 
        

    void functionOne()
    {
    //creating structure of game
    cout<< "      |     |           \n";
    cout<<" "<<space[0][0]<<"    | "<<space[0][1]<<"   | "<<space[0][2]<<" \n";   //Whenever we click a particular element/digit(ex:- 2/3/0),then the mark of (0, x) should be placed on that particular element.
    cout<< "  ____|_____|____       \n";
    cout<< "      |     |           \n";
    cout<<" "<<space[1][0]<<"    | "<<space[1][1]<<"   | "<<space[1][2]<<" \n";
    cout<< "  ____|_____|____        \n";
    cout<< "      |     |            \n";
    cout<<" "<<space[2][0]<<"    | "<<space[2][1]<<"   | "<<space[2][2]<<" \n";
    cout<< "      |     |             \n";
    cout<<endl;
    
    }
    void functionTwo()
    {
        int digit;
        if(token == 'x')
        {
            cout<<n1<<" please enter: \n";
           // cin>>digit;
        }
        else if(token == '0')
        {
            cout<<n2<<" please enter: \n";
           // cin>>digit;
        }
        cin >> digit;

       if(digit == 1){
            row = 0;
            col = 0;
        }
        if(digit == 2){
            row = 0;
            col = 1;
        }
        if(digit == 3){
            row = 0;
            col = 2;
        }
        if(digit == 4){
            row = 1;
            col = 0;
        }
        if(digit == 5){
            row = 1;
            col = 1;
        }
        if(digit == 6){
            row = 1;
            col = 2;
        }
        if(digit == 7){
            row = 2;
            col = 0;
        }
        if(digit == 8){
            row = 2;
            col = 1;
        }
        if(digit == 9){
            row = 2;
            col = 2;
        }

         if(digit<1 || digit>9){
            cout<<"invalid! Please enter a number between 1 and 9"<<endl;
            return ;
        }

        if(token == 'x' && space[row][col]!='x' && space[row][col]!='0'){    // Here we are checking if there is any "unused space" which is left in the structure to fill.
        space[row][col] = 'x';   // if the value of token is 'x' ,that means now player 1 turn is there & at a particular place there is not 'x' and '0' as well , so player 1's value 'x' will be assigned there(line 87).  
        token = '0';               //After that player 2 turn is there.
        }
        else if(token == '0' && space[row][col]!='x' && space[row][col]!='0'){
        space[row][col] = '0';   // if the value of token is 'x' ,that means now player 1 turn is there & at a particular place there is not 'x' and '0' as well , so player 1's value 'x' will be assigned there(line 87).  
        token = 'x';
        }
        else{
            cout<<"There is no empty space!"<<endl;
            functionTwo();
        }
            functionOne();
       }

        bool functionThree()
        {   // Conditions to win the game.
            for (int i = 0; i < 3; i++)
            {  
                // (To check if first row is creating a horizontal similar line or not)
                if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i]) //and if these conditions are true the player wins.
        
                return true;                                            // (To check if the first column is creating a  vertical line or not)                                  
                }

                if(space[0][0]==space[1][1] && space[1][1]==space[2][2] ||space[0][2]==space[1][1] && space[1][1]==space[2][0]) // To check if the line is diagonal or not.
                {
                return true;
                }
            
           // Conditions to check whether the game is still going on or is it finished.
           for(int i=0; i<3; i++)
           {
            for(int j=0; j<3; j++)
            {
              if(space[i][j] != 'x' && space[i][j] != '0')  //if any position in game is not filled totally that means the game is still going on.
              {
                return false;
              }
            }
           }
           // Condition to check if theres a draw;
           tie = true;
           return false;
       }

       int main()
       {
         cout<<"Enter the name of first player : \n";
         getline(cin, n1);       // for input
         cout<<"Enter the name of second player : \n";
         getline(cin, n2);
         cout<<n1<<"is player 1 so he/she will play first \n";
         cout<<n2<<"is player 2 so he/she will play second \n";

        while(!functionThree())
        {
            functionOne();
            functionTwo();
            functionThree();
        }
        if(token == 'x' && tie == false)
        {
            cout<<n2<<"Wins!!"<<endl;
        }
       else if(token == '0' && tie == false)
       {
            cout<<n1<<"Wins!!"<<endl;
       }
       else{
        cout<<"It's a draw"<<endl;
       }
       }
#include <iostream>
#include <cstdlib>
#include <ctime>


std::string versionNumber = "1.1.0";
char special[] = { '!', '@', '#', '$', '%', '^', '&', '*' };
char capital[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char lower[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

char number[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };



bool hasSpecial;
bool hasCapital; 
bool hasNumber; 
char randPw[7]; 
int randNum;
int genCount = 0; 
char againChar;
bool again = 1; 

void randomPasswordGenerator()
{
    std::cout << "Now generating your random password . . .";
    

    while (genCount < 8)
        { // Begin Loop
            /* Generate a random number to decide whether the character
            will be a special, capital, lower, or number.
            0 = special, 1 = capital, 2 = lower, 3 = number */
            randNum = ( rand() % 4 );

            switch (randNum)
                {
                    case 0 :
                    // Generate a random number to pull from the 'special' array
                    randNum = ( rand() % 8 );
                    // Assign a random value from the 'special' array to randPw array
                    randPw[genCount] = special[randNum];
                    hasSpecial = 1;
                    break;

                    case 1 :
                    // Generate a random number to pull from the 'capital' array
                    randNum = ( rand() % 26 );
                    // Assign a random value from the 'capital' array to randPw array
                    randPw[genCount] = capital[randNum];
                    hasCapital = 1;
                    break;

                    case 2 :
                    // Generate a random number to pull from the 'lower' array
                    randNum = ( rand() % 26 );
                    // Assign a random value from the 'lower' array to randPw array
                    randPw[genCount] = lower[randNum];
                    break;

                    case 3 :
                    // Generate a random number to pull from the 'number' array
                    randNum = ( rand() % 10 );
                    // Assign a random value from the 'number' array to randPw array
                    randPw[genCount] = number[randNum];
                    hasNumber = 1;
                    break;

                    default :
                    randPw[genCount] = 'x';
                }

                /* Once 8 characters have been randomly assigned, check to ensure
                password requirements have been met.*/
                if (genCount == 7 and hasSpecial and hasCapital and hasNumber)
                {
                    genCount = 8;
                    hasSpecial = 0;
                    hasCapital = 0;
                    hasNumber = 0;
                }
                else if (genCount == 7)
                {
                    std::cout << " . . .";
                    genCount = 0;
                    hasSpecial = 0;
                    hasCapital = 0;
                    hasNumber = 0;
                }
            genCount = genCount + 1;
        } // End Loop
}

int main()
{
    // Seed the random number!
    srand( (int) time(0) );

    std::cout << "Welcome to Random Password Generator\n";
    
    std::cout << "Version " << versionNumber << "\n";
    
    std::cout << "Written by UDITANGSHU DEY\n\n";
    
    std::cout << "This program will generate a random 8 character password.\n"
    << "Generated passwords contain at least 1 special character, capital letter, and number.\n\n";
    
    system("pause");
    while (again) {
        randomPasswordGenerator();
        std::cout << "\nYour random password is: " << randPw << "\n";

        againChar = 'Q'; 
        while (againChar == 'Q')
        { 
            std::cout << "\nDo you want to generate another password? (Y/N)\n";
            std::cin >> againChar;
            if (againChar == 'N' or againChar == 'n')
            {
                again = 0;
            }
            else if (againChar == 'Y' or againChar == 'y')
            {
                genCount = 0;
            }
            else
            {
                std::cout << "User Input Error: Please enter either Y or N.\n";
                againChar = 'Q';
            }
        } // End Again Loop
    } // End Main Loop

    return 0;
}

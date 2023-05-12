#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    srand(time(0));
    int die1, die2, roll1, roll2;
    char answer, answer1, answer2;
    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        roll1 = die1 + die2;
        if(roll1 == 2 || roll1 == 12)
        {
            std::cout << "LOSER!!\n";
        }
        else if(die1 + die2 == 7)
        {
            std::cout << "CHEATER!!\n";
        }
        else
        {
            std::cout << "Your first roll is " << roll1 << "\n";
            std::cout << "Do you wish to continue?\n";
            std::cout << "(a)Roll again!\n";
            std::cout << "(b)Exit\n";
            std::cin >> answer2;
            switch(answer2)
            {
                case 'a':
                    for(int i = 0; i < 10; i++)
                    {
                        die1 = rand() % 6 + 1;
                        die2 = rand() % 6 + 1;
                        roll2 = die1 + die2;
                        std::cout << "You have " << (9 - i) << " rolls left\n";
                        std::cout << "Your second roll is " << roll2 << "\n";
                        if (i == 9)
                        {
                            std::cout << "You have ran out of tries\n" << "Loser!!!\n";
                        }
                        if (roll2 == 7)
                        {
                            std::cout << "Loser!!\n";
                            break;
                        }
                        else if (roll1 == roll2)
                        {
                            std::cout << "Winner!!\n";
                            break;
                        }
                        else
                        {
                            if (i < 9)
                            {
                                std::cout << "Would you like to roll again? y/n\n";
                                std::cin >> answer1;
                                switch (answer1)
                                {
                                    case 'y':
                                        std::cout << "ok\n";
                                        break;
                                    case 'n':
                                        std::cout << "BYE\n";
                                        break;
                                    default:
                                        std::cout << "Invalid Input\n";
                                }
                                if(answer1 == 'n' || answer1 == 'N')
                                {
                                    break;
                                }
                                if(answer1 != 'y' && answer1 != 'n' && answer1 != 'Y' && answer1 != 'N')
                                {
                                    break;
                                }
                            }

                        }
                    }
                    break;
                case 'b':
                    break;
                default:
                    std::cout << "Invalid Input\n";
                    break;
            }
        }
        std::cout << "Would you like to play again? y/n:\n";
        std::cin >> answer;
    }while(answer == 'y' || answer == 'Y');

    return 0;
}

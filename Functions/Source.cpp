// Question 2 //
//#include <iostream>
//using namespace std;
//
//int TwoFloat(float Float1, float Float2)
//{
//	float result;
//
//	if (Float1 < Float2)
//	{
//		result = Float1;
//	}
//	else if (Float2 < Float1)
//	{
//		result = Float2;
//	}
//	else
//	{
//		return 0;
//	}
//
//	return result;
//}
//
//void main()
//{
//	float userValue1;
//	float userValue2;
//	float mainResult;
//
//	cout << "Enter value 1: " << endl;
//	cin >> userValue1;
//
//	cout << "Enter value 2: " << endl;
//	cin >> userValue2;
//
//	mainResult = TwoFloat(userValue1, userValue2);
//	cout << "The smaller number is: " << mainResult << endl << endl;
//
//	system("pause");
//}
// Question 2 //

// Question 3 //
//#include <iostream>
//using namespace std;
//
//int TwoFloat(float Float1, float Float2, float Float3)
//{
//	float result;
//
//	if (Float1 < Float2 || Float3)
//	{
//		result = Float1;
//	}
//	else if (Float2 < Float1 || Float3)
//	{
//		result = Float2;
//	}
//	else if (Float3 < Float1 || Float2)
//	{
//		result = Float3;
//	}
//	else
//	{
//		return 0;
//	}
//
//	return result;
//}
//
//void main()
//{
//	float userValue1;
//	float userValue2;
//	float userValue3;
//	float mainResult;
//
//	cout << "Enter value 1: " << endl;
//	cin >> userValue1;
//
//	cout << "Enter value 2: " << endl;
//	cin >> userValue2;
//
//	cout << "Enter value 3: " << endl;
//	cin >> userValue3;
//
//	mainResult = TwoFloat(userValue1, userValue2, userValue3);
//	cout << "The smaller number is: " << mainResult << endl << endl;
//
//	system("pause");
//}
// Question 3 //

// Question 4 //
//#include <iostream>
//using namespace std;
//
//float Half(float number)
//{
//	return number / 2;
//}
//
//void main()
//{
//	float number = 16.721f;
//	float result = Half(number);
//
//	cout << result;
//
//	system("pause");
//}
// Question 4 //

// Question 5 //
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void CoinToss(int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		cout << rand() % 2;
//	}
//}
//
//void main()
//{
//	srand(time(0));
//
//	int x;
//	cout << "How many times do you want to flip the coin?";
//	cin >> x;
//
//	CoinToss(x);
//
//	system("pause");
//}
// Question 5 //

// Question 7 //
//#include <iostream>
//
//using namespace std;
//
//int SumTo(int N)
//{
//	return ((N * (N + 1)) / 2);
//}
//
//void main()
//{
//	int result;
//	int N;
//
//	cout << "Please enter a number";
//	cin >> N;
//	result = SumTo(N);
//	cout << result;
//
//	system("pause");
//}
// Question 7 //

// Question 8 //
//#include <iostream>
//
//using namespace std;
//
//int PowerTo(int x, int y)
//{
//	int result = x;
//
//	for (int i = 1; i < y; i ++)
//	{
//		result *= x;
//	}
//
//	return result;
//}
//
//void main()
//{
//	int result;
//	int x;
//	int y;
//
//	cout << "Enter a number to power by another number";
//
//	cin >> x;
//	cin >> y;
//
//	result = PowerTo(x, y);
//
//	cout << result;
//
//	system("pause");
//}
// Question 8 //

// Question 9 //
#include <iostream>
#include <ctime>

using namespace std;

void ComputerResult(int AIHand)
{
	if (AIHand == 1)
	{
		cout << "Computer: Rock" << endl;
	}
	else if (AIHand == 2)
	{
		cout << "Computer: Paper" << endl;
	}
	else if (AIHand == 3)
	{
		cout << "Computer: Scissors" << endl;
	}
}

int Winner(int player1, int player2, int winner)
{
	if (player2 == 1 && player1 == 2)
	{
		return winner = 1;
	}
	else if (player2 == 1 && player1 == 3)
	{
		return winner = 2;
	}
	else if (player2 == 2 && player1 == 1)
	{
		return winner = 2;
	}
	else if (player2 == 2 && player1 == 3)
	{
		return winner = 1;
	}
	else if (player2 == 3 && player1 == 1)
	{
		return winner = 1;
	}
	else if (player2 == 3 && player1 == 2)
	{
		return winner = 2;
	}
	else if (player1 > 3)
	{
		return winner = 3;
	}
	else
	{
		return 0;
	}
}

bool Restart(char restartHand, bool gamerunning)
{
	cout << "Would you like to play again?" << endl << "[Y] or [N]" << endl;

	cin >> restartHand;

	if (restartHand == 'n')
	{
		return gamerunning = false;
	}
	else
	{
		return gamerunning = true;
	}
}

void main()
{
	bool GameRunning = true;

	while (GameRunning)
	{
		srand(time(0));
		int AIHand = rand() % 3;
		int userHand;
		int winner = 0;
		int result = 0;
		char restartHand = 'y';

		cout << "[1]Rock, [2]Paper, [3]Scissors?" << endl;
		cin >> userHand;
		
		ComputerResult(AIHand);
		result = Winner(userHand, AIHand, winner);

		if (result == 1)
		{
			cout << "You win!" << endl;
			GameRunning = Restart(restartHand, GameRunning);
		}
		else if (result == 2)
		{
			cout << "You lose.." << endl;
			GameRunning = Restart(restartHand, GameRunning);
		}
		else if (result == 3)
		{
			cout << "Please make a valid choice, this isnt Rock, Paper, Scissors, Lizard, Spock.." << endl;
		}
		else
		{
			cout << "No winner, go again." << endl;
		}
	}

	system("pause");
}
// Question 9 //
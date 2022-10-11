#include "TicTacToe.h"

int main(int argc, char* argv[])
{
	TicTacToe ticTacToe;

	while(ticTacToe.Running)
		ticTacToe.Run();

	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
void player1wins()
{
	printf("Congratulations Player 1! You Win!\n");
	exit(-1);
}
void player2wins()
{
	printf("Congratulations Player 2! You Win!\n");
	exit(-1);
}
int ask1()
	{
		int pos;
		printf("Player 1, enter the position you wish to mark with an X: ");
		scanf("%d",&pos);
		return pos;
	}
int ask2()
	{
		int pos;
		printf("Player 2, enter the position you wish to mark with an O: ");
		scanf("%d",&pos);
		return pos;
	}
int main()
	{	
		printf("Welcome to tic_tac_toe! Player1 gets X, Player2 gets O.\n");
		char arr[3][3], num='1';
		int input;
		void print(char arr[3][3]);
		void check1(int input, char arr[3][3]);
		void check2(int input, char arr[3][3]);
		void winornot1(char arr[3][3]);
		void winornot2(char arr[3][3]);
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
					{
						arr[i][j]=num;
						num++;
					}
			}		
		print(arr);
		for(int i=0;i<4;i++)
			{
				input=ask1();
				check1(input,arr);
				input=ask2();
				check2(input,arr);
			}
		input=ask1();
		check1(input,arr);
		printf("Its a draw! Please try again.\n");
		return 0;
	}
void print(char arr[3][3])
	{
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
					{
						printf("%c ",arr[i][j]);
					}
				printf("\n");
			}
	}	
void winornot1(char arr[3][3])
	{
			for(int i=0;i<3;i++)
				{
					if(arr[i][0]=='X'&&arr[i][1]=='X'&&arr[i][2]=='X')
					player1wins();
					if(arr[0][i]=='X'&&arr[1][i]=='X'&&arr[2][i]=='X')
					player1wins();
				}
			if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')
			player1wins();
			if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X')
			player1wins();
	}
void winornot2(char arr[3][3])
	{
			for(int i=0;i<3;i++)
				{
					if(arr[i][0]=='O'&&arr[i][1]=='O'&&arr[i][2]=='O')
					player2wins();
					if(arr[0][i]=='O'&&arr[1][i]=='O'&&arr[2][i]=='O')
					player2wins();
				}
			if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')
			player2wins();
			if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O')
			player2wins();
	}
void check1(int input, char arr[3][3])
	{
		switch(input)
		{
			case 1: if(arr[0][0]=='X'||arr[0][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
						
					}
				else
					{
						arr[0][0]='X';
						print(arr);
						winornot1(arr);
					}
				break;

			case 2: if(arr[0][1]=='X'||arr[0][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[0][1]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 3: if(arr[0][2]=='X'||arr[0][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[0][2]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 4: if(arr[1][0]=='X'||arr[1][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[1][0]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 5: if(arr[1][1]=='X'||arr[1][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[1][1]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 6: if(arr[1][2]=='X'||arr[1][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[1][2]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 7: if(arr[2][0]=='X'||arr[2][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[2][0]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 8: if(arr[2][1]=='X'||arr[2][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[2][1]='X';
						print(arr);
						winornot1(arr);
					}
				break;
			case 9: if(arr[2][2]=='X'||arr[2][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask1();
						check1(input,arr);
					}
				else
					{
						arr[2][2]='X';
						print(arr);
						winornot1(arr);
					}
				break;
		       default: printf("Enter numbers from 1 to 9\nRetry\n");
				input=ask1();
				check1(input,arr);
		}
	}
void check2(int input, char arr[3][3])
	{
		switch(input)
		{
			case 1: if(arr[0][0]=='X'||arr[0][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[0][0]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 2: if(arr[0][1]=='X'||arr[0][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[0][1]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 3: if(arr[0][2]=='X'||arr[0][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[0][2]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 4: if(arr[1][0]=='X'||arr[1][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[1][0]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 5: if(arr[1][1]=='X'||arr[1][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[1][1]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 6: if(arr[1][2]=='X'||arr[1][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[1][2]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 7: if(arr[2][0]=='X'||arr[2][0]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[2][0]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 8: if(arr[2][1]=='X'||arr[2][1]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[2][1]='O';
						print(arr);
						winornot2(arr);
					}
				break;
			case 9: if(arr[2][2]=='X'||arr[2][2]=='O')
					{
						printf("Already Occupied\nRetry\n");
						input=ask2();
						check2(input,arr);
					}
				else
					{
						arr[2][2]='O';
						print(arr);
						winornot2(arr);
					}
				break;
		     default: printf("Enter numbers from 1 to 9\nRetry\n");
			      input=ask2();
			      check2(input,arr);
		}
	}
//Program by Yash Jakhotiya
//Contact- jakhotiyays16.comp@coep.ac.in for any queries regarding this program.	

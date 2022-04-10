#include <iostream>
#include <string>

using namespace std;


void board();
void choice();

char bp[6][8]
{
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
};

int checkwin();

int x; //choice of column
int a,b,c,d,e,f,g = 0;

char coin;
int player = 1;

int i;


int main()
{

	do{

	board();

	player = (player % 2) ? 1:2 ;
	coin = (player == 1) ? 'X':'O';

	cout << "\nPlayer " << player << "'s turn: ";

	choice();

	i = checkwin();

	player++;// important that player++ is placed after checkwin() or it wont check win status properly
	}
	while(i == -1);

	board();

	player--;
	if(i == 1){
		cout << "\nPlayer " << player << " wins!!\n";
	}
	else{
		cout << "\nGame Draw!!\n";
	}

	return 0;
}


int checkwin()
{
	//Winning in rows
	//First row (bottom row)
	if(bp[0][1]==coin && bp[0][2]==coin && bp[0][3]==coin && bp[0][4]==coin){

		bp[0][1] = tolower(coin);
		bp[0][2] = tolower(coin);
		bp[0][3] = tolower(coin);
		bp[0][4] = tolower(coin);

		return 1;
	}
	else if(bp[0][2]==coin && bp[0][3]==coin && bp[0][4]==coin && bp[0][5]==coin){

		bp[0][2] = tolower(coin);
		bp[0][3] = tolower(coin);
		bp[0][4] = tolower(coin);
		bp[0][5] = tolower(coin);

		return 1;
	}
	else if(bp[0][3]==coin && bp[0][4]==coin && bp[0][5]==coin && bp[0][6]==coin){

		bp[0][3] = tolower(coin);
		bp[0][4] = tolower(coin);
		bp[0][5] = tolower(coin);
		bp[0][6] = tolower(coin);

		return 1;
	}
	else if(bp[0][4]==coin && bp[0][5]==coin && bp[0][6]==coin && bp[0][7]==coin){

		bp[0][4] = tolower(coin);
		bp[0][5] = tolower(coin);
		bp[0][6] = tolower(coin);
		bp[0][7] = tolower(coin);

		return 1;
	}

	//Second row
	else if(bp[1][1]==coin && bp[1][2]==coin && bp[1][3]==coin && bp[1][4]==coin){

		bp[1][1] = tolower(coin);
		bp[1][2] = tolower(coin);
		bp[1][3] = tolower(coin);
		bp[1][4] = tolower(coin);

		return 1;
	}
	else if(bp[1][2]==coin && bp[1][3]==coin && bp[1][4]==coin && bp[1][5]==coin){

		bp[1][2] = tolower(coin);
		bp[1][3] = tolower(coin);
		bp[1][4] = tolower(coin);
		bp[1][5] = tolower(coin);

		return 1;
	}
	else if(bp[1][3]==coin && bp[1][4]==coin && bp[1][5]==coin && bp[1][6]==coin){

		bp[1][3] = tolower(coin);
		bp[1][4] = tolower(coin);
		bp[1][5] = tolower(coin);
		bp[1][6] = tolower(coin);

		return 1;
	}
	else if(bp[1][4]==coin && bp[1][5]==coin && bp[1][6]==coin && bp[1][7]==coin){

		bp[1][4] = tolower(coin);
		bp[1][5] = tolower(coin);
		bp[1][6] = tolower(coin);
		bp[1][7] = tolower(coin);

		return 1;
	}

	//third row
	else if(bp[2][1]==coin && bp[2][2]==coin && bp[2][3]==coin && bp[2][4]==coin){

		bp[2][1] = tolower(coin);
		bp[2][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[2][4] = tolower(coin);

		return 1;
	}
	else if(bp[2][2]==coin && bp[2][3]==coin && bp[2][4]==coin && bp[2][5]==coin){

		bp[2][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[2][5] = tolower(coin);

		return 1;
	}
	else if(bp[2][3]==coin && bp[2][4]==coin && bp[2][5]==coin && bp[2][6]==coin){

		bp[2][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[2][6] = tolower(coin);

		return 1;
	}
	else if(bp[2][4]==coin && bp[2][5]==coin && bp[2][6]==coin && bp[2][7]==coin){

		bp[2][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[2][6] = tolower(coin);
		bp[2][7] = tolower(coin);

		return 1;
	}

	//fourth row
	else if(bp[3][1]==coin && bp[3][2]==coin && bp[3][3]==coin && bp[3][4]==coin){

		bp[3][1] = tolower(coin);
		bp[3][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[3][4] = tolower(coin);

		return 1;
	}
	else if(bp[3][2]==coin && bp[3][3]==coin && bp[3][4]==coin && bp[3][5]==coin){

		bp[3][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[3][5] = tolower(coin);

		return 1;
	}
	else if(bp[3][3]==coin && bp[3][4]==coin && bp[3][5]==coin && bp[3][6]==coin){

		bp[3][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[3][6] = tolower(coin);

		return 1;
	}
	else if(bp[3][4]==coin && bp[3][5]==coin && bp[3][6]==coin && bp[3][7]==coin){

		bp[3][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[3][6] = tolower(coin);
		bp[3][7] = tolower(coin);

		return 1;
	}

	//fifth row
	else if(bp[4][1]==coin && bp[4][2]==coin && bp[4][3]==coin && bp[4][4]==coin){

		bp[4][1] = tolower(coin);
		bp[4][2] = tolower(coin);
		bp[4][3] = tolower(coin);
		bp[4][4] = tolower(coin);

		return 1;
	}
	else if(bp[4][2]==coin && bp[4][3]==coin && bp[4][4]==coin && bp[4][5]==coin){

		bp[4][2] = tolower(coin);
		bp[4][3] = tolower(coin);
		bp[4][4] = tolower(coin);
		bp[4][4] = tolower(coin);

		return 1;
	}
	else if(bp[4][3]==coin && bp[4][4]==coin && bp[4][5]==coin && bp[4][6]==coin){

		bp[4][3] = tolower(coin);
		bp[4][4] = tolower(coin);
		bp[4][5] = tolower(coin);
		bp[4][6] = tolower(coin);

		return 1;
	}
	else if(bp[4][4]==coin && bp[4][5]==coin && bp[4][6]==coin && bp[4][7]==coin){

		bp[4][4] = tolower(coin);
		bp[4][5] = tolower(coin);
		bp[4][6] = tolower(coin);
		bp[4][7] = tolower(coin);

		return 1;
	}

	//sixth row (Top row)
	else if(bp[5][1]==coin && bp[5][2]==coin && bp[5][3]==coin && bp[5][4]==coin){

		bp[5][1] = tolower(coin);
		bp[5][2] = tolower(coin);
		bp[5][3] = tolower(coin);
		bp[5][4] = tolower(coin);

		return 1;
	}
	else if(bp[5][2]==coin && bp[5][3]==coin && bp[5][4]==coin && bp[5][5]==coin){

		bp[5][2] = tolower(coin);
		bp[5][3] = tolower(coin);
		bp[5][4] = tolower(coin);
		bp[5][5] = tolower(coin);

		return 1;
	}
	else if(bp[5][3]==coin && bp[5][4]==coin && bp[5][5]==coin && bp[5][6]==coin){

		bp[5][3] = tolower(coin);
		bp[5][4] = tolower(coin);
		bp[5][5] = tolower(coin);
		bp[5][6] = tolower(coin);

		return 1;
	}
	else if(bp[5][4]==coin && bp[5][5]==coin && bp[5][6]==coin && bp[5][7]==coin){

		bp[5][4] = tolower(coin);
		bp[5][5] = tolower(coin);
		bp[5][6] = tolower(coin);
		bp[5][7] = tolower(coin);

		return 1;
	}

	//Column win check
	//First column(Left)
	else if(bp[0][1]==coin && bp[1][1]==coin && bp[2][1]==coin && bp[3][1]==coin){

		bp[0][1] = tolower(coin);
		bp[1][1] = tolower(coin);
		bp[2][1] = tolower(coin);
		bp[3][1] = tolower(coin);

		return 1;
	}
	else if(bp[1][1]==coin && bp[2][1]==coin && bp[3][1]==coin && bp[4][1]==coin){

		bp[1][1] = tolower(coin);
		bp[2][1] = tolower(coin);
		bp[3][1] = tolower(coin);
		bp[4][1] = tolower(coin);

		return 1;
	}
	else if(bp[2][1]==coin && bp[3][1]==coin && bp[4][1]==coin && bp[5][1]==coin){

		bp[2][1] = tolower(coin);
		bp[3][1] = tolower(coin);
		bp[4][1] = tolower(coin);
		bp[5][1] = tolower(coin);

		return 1;
	}

	//second column
	else if(bp[0][2]==coin && bp[1][2]==coin && bp[2][2]==coin && bp[3][2]==coin){

		bp[0][2] = tolower(coin);
		bp[1][2] = tolower(coin);
		bp[2][2] = tolower(coin);
		bp[3][2] = tolower(coin);

		return 1;
	}
	else if(bp[1][2]==coin && bp[2][2]==coin && bp[3][2]==coin && bp[4][2]==coin){

		bp[1][2] = tolower(coin);
		bp[2][2] = tolower(coin);
		bp[3][2] = tolower(coin);
		bp[4][2] = tolower(coin);

		return 1;
	}
	else if(bp[2][2]==coin && bp[3][2]==coin && bp[4][2]==coin && bp[5][2]==coin){

		bp[2][2] = tolower(coin);
		bp[3][2] = tolower(coin);
		bp[4][2] = tolower(coin);
		bp[5][2] = tolower(coin);

		return 1;
	}

	//third column
	else if(bp[0][3]==coin && bp[1][3]==coin && bp[2][3]==coin && bp[3][3]==coin){

		bp[0][3] = tolower(coin);
		bp[1][3] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[3][3] = tolower(coin);

		return 1;
	}
	else if(bp[1][3]==coin && bp[2][3]==coin && bp[3][3]==coin && bp[4][3]==coin){

		bp[1][3] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[4][3] = tolower(coin);

		return 1;
	}
	else if(bp[2][3]==coin && bp[3][3]==coin && bp[4][3]==coin && bp[5][3]==coin){

		bp[2][3] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[4][3] = tolower(coin);
		bp[5][3] = tolower(coin);

		return 1;
	}

	//fourth column
	else if(bp[0][4]==coin && bp[1][4]==coin && bp[2][4]==coin && bp[3][4]==coin){

		bp[0][4] = tolower(coin);
		bp[1][4] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[3][4] = tolower(coin);

		return 1;
	}
	else if(bp[1][4]==coin && bp[2][4]==coin && bp[3][4]==coin && bp[4][4]==coin){

		bp[1][4] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[4][4] = tolower(coin);

		return 1;
	}
	else if(bp[2][4]==coin && bp[3][4]==coin && bp[4][4]==coin && bp[5][4]==coin){

		bp[2][4] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[4][4] = tolower(coin);
		bp[5][4] = tolower(coin);

		return 1;
	}

	//fifth column
	else if(bp[0][5]==coin && bp[1][5]==coin && bp[2][5]==coin && bp[3][5]==coin){

		bp[0][5] = tolower(coin);
		bp[1][5] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[3][5] = tolower(coin);

		return 1;
	}
	else if(bp[1][5]==coin && bp[2][5]==coin && bp[3][5]==coin && bp[4][5]==coin){

		bp[1][5] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[4][5] = tolower(coin);

		return 1;
	}
	else if(bp[2][5]==coin && bp[3][5]==coin && bp[4][5]==coin && bp[5][5]==coin){

		bp[2][5] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[4][5] = tolower(coin);
		bp[5][5] = tolower(coin);

		return 1;
	}

	//sixth column
	else if(bp[0][6]==coin && bp[1][6]==coin && bp[2][6]==coin && bp[3][6]==coin){

		bp[0][6] = tolower(coin);
		bp[1][6] = tolower(coin);
		bp[2][6] = tolower(coin);
		bp[3][6] = tolower(coin);

		return 1;
	}
	else if(bp[1][6]==coin && bp[2][6]==coin && bp[3][6]==coin && bp[4][6]==coin){

		bp[1][6] = tolower(coin);
		bp[2][6] = tolower(coin);
		bp[3][6] = tolower(coin);
		bp[4][6] = tolower(coin);

		return 1;
	}
	else if(bp[2][6]==coin && bp[3][6]==coin && bp[4][6]==coin && bp[5][6]==coin){

		bp[2][6] = tolower(coin);
		bp[3][6] = tolower(coin);
		bp[4][6] = tolower(coin);
		bp[5][6] = tolower(coin);

		return 1;
	}

	//seventh column(right)
	else if(bp[0][7]==coin && bp[1][7]==coin && bp[2][7]==coin && bp[3][7]==coin){

		bp[0][7] = tolower(coin);
		bp[1][7] = tolower(coin);
		bp[2][7] = tolower(coin);
		bp[3][7] = tolower(coin);

		return 1;
	}
	else if(bp[1][7]==coin && bp[2][7]==coin && bp[3][7]==coin && bp[4][7]==coin){

		bp[1][7] = tolower(coin);
		bp[2][7] = tolower(coin);
		bp[3][7] = tolower(coin);
		bp[4][7] = tolower(coin);

		return 1;
	}
	else if(bp[2][7]==coin && bp[3][7]==coin && bp[4][7]==coin && bp[5][7]==coin){

		bp[2][7] = tolower(coin);
		bp[3][7] = tolower(coin);
		bp[4][7] = tolower(coin);
		bp[5][7] = tolower(coin);

		return 1;
	}

	//Winning in foward diagonal /
	// Row 0 - 3
	else if(bp[0][1]==coin && bp[1][2]==coin && bp[2][3]==coin && bp[3][4]==coin){

		bp[0][1] = tolower(coin);
		bp[1][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[3][4] = tolower(coin);

		return 1;
	}
	else if(bp[0][2]==coin && bp[1][3]==coin && bp[2][4]==coin && bp[3][5]==coin){

		bp[0][2] = tolower(coin);
		bp[1][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[3][5] = tolower(coin);

		return 1;
	}
	else if(bp[0][3]==coin && bp[1][4]==coin && bp[2][5]==coin && bp[3][6]==coin){

		bp[0][3] = tolower(coin);
		bp[1][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[3][6] = tolower(coin);

		return 1;
	}
	else if(bp[0][4]==coin && bp[1][5]==coin && bp[2][6]==coin && bp[3][7]==coin){

		bp[0][4] = tolower(coin);
		bp[1][5] = tolower(coin);
		bp[2][6] = tolower(coin);
		bp[3][7] = tolower(coin);

		return 1;
	}

	//row 1-4
	else if(bp[1][1]==coin && bp[2][2]==coin && bp[3][3]==coin && bp[4][4]==coin){

		bp[1][1] = tolower(coin);
		bp[2][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[4][4] = tolower(coin);

		return 1;
	}
	else if(bp[1][2]==coin && bp[2][3]==coin && bp[3][4]==coin && bp[4][5]==coin){

		bp[1][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[4][5] = tolower(coin);

		return 1;
	}
	else if(bp[1][3]==coin && bp[2][4]==coin && bp[3][5]==coin && bp[4][6]==coin){

		bp[1][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[4][6] = tolower(coin);

		return 1;
	}
	else if(bp[1][4]==coin && bp[2][5]==coin && bp[3][6]==coin && bp[4][7]==coin){

		bp[1][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[3][6] = tolower(coin);
		bp[4][7] = tolower(coin);

		return 1;
	}

	//row 2-5
	else if(bp[2][1]==coin && bp[3][2]==coin && bp[4][3]==coin && bp[5][4]==coin){

		bp[2][1] = tolower(coin);
		bp[3][2] = tolower(coin);
		bp[4][3] = tolower(coin);
		bp[5][4] = tolower(coin);

		return 1;
	}
	else if(bp[2][2]==coin && bp[3][3]==coin && bp[4][4]==coin && bp[5][5]==coin){

		bp[2][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[4][4] = tolower(coin);
		bp[5][5] = tolower(coin);

		return 1;
	}
	else if(bp[2][3]==coin && bp[3][4]==coin && bp[4][5]==coin && bp[5][6]==coin){

		bp[2][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[4][5] = tolower(coin);
		bp[5][6] = tolower(coin);

		return 1;
	}
	else if(bp[2][4]==coin && bp[3][5]==coin && bp[4][6]==coin && bp[5][7]==coin){

		bp[2][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[4][6] = tolower(coin);
		bp[5][7] = tolower(coin);

		return 1;
	}

	// winning in backward diagonal \
	//row 0-3
	else if(bp[3][1]==coin && bp[2][2]==coin && bp[1][3]==coin && bp[0][4]==coin){

		bp[3][1] = tolower(coin);
		bp[2][2] = tolower(coin);
		bp[1][3] = tolower(coin);
		bp[0][4] = tolower(coin);

		return 1;
	}
	else if(bp[3][2]==coin && bp[2][3]==coin && bp[1][4]==coin && bp[0][5]==coin){

		bp[3][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[1][4] = tolower(coin);
		bp[0][5] = tolower(coin);

		return 1;
	}
	else if(bp[3][3]==coin && bp[2][4]==coin && bp[1][5]==coin && bp[0][6]==coin){

		bp[3][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[1][5] = tolower(coin);
		bp[0][6] = tolower(coin);

		return 1;
	}
	else if(bp[3][4]==coin && bp[2][5]==coin && bp[1][6]==coin && bp[0][7]==coin){

		bp[3][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[1][6] = tolower(coin);
		bp[0][7] = tolower(coin);

		return 1;
	}

	//row 1-4
	else if(bp[4][1]==coin && bp[3][2]==coin && bp[2][3]==coin && bp[1][4]==coin){

		bp[4][1] = tolower(coin);
		bp[3][2] = tolower(coin);
		bp[2][3] = tolower(coin);
		bp[1][4] = tolower(coin);

		return 1;
	}
	else if(bp[4][2]==coin && bp[3][3]==coin && bp[2][4]==coin && bp[1][5]==coin){

		bp[4][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[2][4] = tolower(coin);
		bp[1][5] = tolower(coin);

		return 1;
	}
	else if(bp[4][3]==coin && bp[3][4]==coin && bp[2][5]==coin && bp[1][6]==coin){

		bp[4][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[2][5] = tolower(coin);
		bp[1][6] = tolower(coin);

		return 1;
	}
	else if(bp[4][4]==coin && bp[3][5]==coin && bp[2][6]==coin && bp[1][7]==coin){

		bp[4][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[2][6] = tolower(coin);
		bp[1][7] = tolower(coin);

		return 1;
	}

	//row 2-5
	else if(bp[5][1]==coin && bp[4][2]==coin && bp[3][3]==coin && bp[2][4]==coin){

		bp[5][1] = tolower(coin);
		bp[4][2] = tolower(coin);
		bp[3][3] = tolower(coin);
		bp[2][4] = tolower(coin);

		return 1;
	}
	else if(bp[5][2]==coin && bp[4][3]==coin && bp[3][4]==coin && bp[2][5]==coin){

		bp[5][2] = tolower(coin);
		bp[4][3] = tolower(coin);
		bp[3][4] = tolower(coin);
		bp[2][5] = tolower(coin);

		return 1;
	}
	else if(bp[5][3]==coin && bp[4][4]==coin && bp[3][5]==coin && bp[2][6]==coin){

		bp[5][3] = tolower(coin);
		bp[4][4] = tolower(coin);
		bp[3][5] = tolower(coin);
		bp[2][6] = tolower(coin);

		return 1;
	}
	else if(bp[5][4]==coin && bp[4][5]==coin && bp[3][6]==coin && bp[2][7]==coin){

		bp[5][4] = tolower(coin);
		bp[4][5] = tolower(coin);
		bp[3][6] = tolower(coin);
		bp[2][7] = tolower(coin);

		return 1;
	}

	//game draw
	else if(

		bp[0][1]!=' ' && bp[0][2]!=' ' && bp[0][3]!=' ' && bp[0][4]!=' ' && bp[0][5]!=' ' && bp[0][6]!=' ' && bp[0][7]!=' ' &&
		bp[1][1]!=' ' && bp[1][2]!=' ' && bp[1][3]!=' ' && bp[1][4]!=' ' && bp[1][5]!=' ' && bp[1][6]!=' ' && bp[1][7]!=' ' &&
		bp[2][1]!=' ' && bp[2][2]!=' ' && bp[2][3]!=' ' && bp[2][4]!=' ' && bp[2][5]!=' ' && bp[2][6]!=' ' && bp[2][7]!=' ' &&
		bp[3][1]!=' ' && bp[3][2]!=' ' && bp[3][3]!=' ' && bp[3][4]!=' ' && bp[3][5]!=' ' && bp[3][6]!=' ' && bp[3][7]!=' ' &&
		bp[4][1]!=' ' && bp[4][2]!=' ' && bp[4][3]!=' ' && bp[4][4]!=' ' && bp[4][5]!=' ' && bp[4][6]!=' ' && bp[4][7]!=' ' &&
		bp[5][1]!=' ' && bp[5][2]!=' ' && bp[5][3]!=' ' && bp[5][4]!=' ' && bp[5][5]!=' ' && bp[5][6]!=' ' && bp[5][7]!=' '

		){
			return 0;
		}

	//game in progress
	else{
		return -1;
	}
}


void choice()
{
	cin >> x;

	switch (x){
		case 1:
			bp[a][x] = coin;
			a++;
			break;

		case 2:
			bp[b][x] = coin;
			b++;
			break;

		case 3:
			bp[c][x] = coin;
			c++;
			break;

		case 4:
			bp[d][x] = coin;
			d++;
			break;

		case 5:
			bp[e][x] = coin;
			e++;
			break;

		case 6:
			bp[f][x] = coin;
			f++;
			break;

		case 7:
			bp[g][x] = coin;
			g++;
			break;

		default:
			cout << "Invalid choice\n";
			player--;
			cin.ignore();
			cin.get();
	}

	//Prevents player to place coin on filled column
	if(a > 6){
		cout << "Invalid choice\n";
		player--;
		a--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( b > 6){
		cout << "Invalid choice\n";
		player--;
		b--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( c > 6){
		cout << "Invalid choice\n";
		player--;
		c--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( d > 6){
		cout << "Invalid choice\n";
		player--;
		d--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( e > 6){
		cout << "Invalid choice\n";
		player--;
		e--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( f > 6){
		cout << "Invalid choice\n";
		player--;
		f--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}
	else if( g > 6){
		cout << "Invalid choice\n";
		player--;
		g--;
		cin.ignore();
		cin.get();
		cout << "\n\n";
	}

}


void board()
{
	system("cls"); // Clears screen on windows OS

	cout << "    ====  Connect 4  ====\n\n";

	cout << "|===|===|===|===|===|===|===|" << endl;

	cout << "| " << bp[5][1]<< " | " << bp[5][2] << " | " << bp[5][3] << " | " << bp[5][4] << " | " << bp[5][5] << " | " << bp[5][6] << " | " << bp[5][7] << " |" << endl;

	cout << "|---|---|---|---|---|---|---|" << endl;

	cout << "| " << bp[4][1]<< " | " << bp[4][2] << " | " << bp[4][3] << " | " << bp[4][4] << " | " << bp[4][5] << " | " << bp[4][6] << " | " << bp[4][7] << " |" << endl;

	cout << "|---|---|---|---|---|---|---|" << endl;

	cout << "| " << bp[3][1]<< " | " << bp[3][2] << " | " << bp[3][3] << " | " << bp[3][4] << " | " << bp[3][5] << " | " << bp[3][6] << " | " << bp[3][7] << " |" << endl;

	cout << "|---|---|---|---|---|---|---|" << endl;

	cout << "| " << bp[2][1]<< " | " << bp[2][2] << " | " << bp[2][3] << " | " << bp[2][4] << " | " << bp[2][5] << " | " << bp[2][6] << " | " << bp[2][7] << " |" << endl;

	cout << "|---|---|---|---|---|---|---|" << endl;

	cout << "| " << bp[1][1]<< " | " << bp[1][2] << " | " << bp[1][3] << " | " << bp[1][4] << " | " << bp[1][5] << " | " << bp[1][6] << " | " << bp[1][7] << " |" << endl;

	cout << "|---|---|---|---|---|---|---|" << endl;

	cout << "| " << bp[0][1]<< " | " << bp[0][2] << " | " << bp[0][3] << " | " << bp[0][4] << " | " << bp[0][5] << " | " << bp[0][6] << " | " << bp[0][7] << " |" << endl;

	cout << "|===|===|===|===|===|===|===|" << endl;
	cout << "- 1 - 2 - 3 - 4 - 5 - 6 - 7 -\n";
}

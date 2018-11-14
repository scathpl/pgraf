#include <iostream>
using namespace std;
float det = 0;
int size = 0;
int i, j;



int main() {
	int ster; //zmiena sterujaca switchem

	do{
		cout << endl << "_________________" << endl << "Wybierz rozmiar macierzy do odwrocenia:" << endl << endl;
		cout << "1x1" << endl << "2x2" << endl << "3x3" << endl << "4x4" << endl;
		cout << "5 - Wyjscie" << endl;
		cin >> ster;

		switch (ster)
		{
		case 1:
		{
				  system("cls");
				  float mat[1][1];

				  cout << "Wpisz element macierzy: " << endl;
				  cin >> mat[0][0];
				  system("cls");

				  cout << "Podana macierz:" << endl << mat[0][0];
				  if (mat[0][0] != 0) cout << endl << "macierz odwrotna:" << endl << (1 / mat[0][0]);
				  else cout << endl << "Nie mozna odwrocic macierzy o wyznaczniku rownym 0";

				  break;
		}

		case 2:
		{
				  system("cls");
				  float mat[2][2];


				  cout << "\nWpisz elementy macierzy 2x2:\n";
				  for (i = 0; i<2; i++){
					  for (j = 0; j<2; j++)
						  cin >> mat[i][j];
				  }
				  system("cls");

				  cout << "\nPodana macierz 2x2:\n";
				  for (i = 0; i<2; i++){
					  cout << "\n";
					  for (j = 0; j<2; j++)
						  cout << mat[i][j] << "\t";
				  }

				  det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

				  cout << "\n\nWyznacznik: " << det;

				  if (det == 0) cout << endl << "Nie mozna odwrocic macierzy o wyznaczniku rownym 0";
				  else{
					  cout << "\n\nMacierz odwrotna:\n\n";
					  float odwmat[2][2]; //odwrocona

					  odwmat[0][0] = mat[1][1] / det;
					  odwmat[0][1] = -1 / det*mat[0][1];
					  odwmat[1][0] = -1 / det*mat[1][0];
					  odwmat[1][1] = mat[0][0] / det;

					  for (i = 0; i<2; i++){
						  cout << "\n";
						  for (j = 0; j<2; j++)
							  cout << odwmat[i][j] << "\t";
					  }
				  }

				  break;
		}
		case 3:
		{
				  system("cls");
				  float mat[3][3];

				  cout << "Wprowadz elementy macierzy 3x3:\n";
				  for (i = 0; i < 3; i++)
				  for (j = 0; j < 3; j++)
					  cin >> mat[i][j];
				  system("cls");

				  cout << "Wprowadzona macierz 3x3:\n";
				  for (i = 0; i < 3; i++){
					  cout << "\n";

					  for (j = 0; j < 3; j++)
						  cout << mat[i][j] << "\t";
				  }
				  det = 0;
				  //wyznacznik
				  for (i = 0; i < 3; i++)
					  det = det + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));

				  cout << "\n\nWyznacznik: " << det;

				  cout << "\n\nMacierz odwrocona: \n";
				  for (i = 0; i < 3; i++){
					  for (j = 0; j < 3; j++)
						  cout << ((mat[(j + 1) % 3][(i + 1) % 3] * mat[(j + 2) % 3][(i + 2) % 3]) -
						  (mat[(j + 1) % 3][(i + 2) % 3] * mat[(j + 2) % 3][(i + 1) % 3])) / det << "\t";

					  cout << "\n";
				  }
				  break;

		}
		case 4:
		{

				  system("cls");
				  size = 4;
				  float mat[4][4];

				  cout << "Wprowadz elementy macierzy 4x4:\n";
				  for (i = 0; i < 4; i++)
				  for (j = 0; j < 4; j++)
					  cin >> mat[i][j];
				  system("cls");

				  cout << "Wprowadzona macierz 4x4:\n";
				  for (i = 0; i < 4; i++){
					  cout << "\n";

					  for (j = 0; j < 4; j++)
						  cout << mat[i][j] << "\t";
				  }

				  //wyznacznik
				  det = mat[0][0] *
					  (mat[1][1] * mat[2][2] * mat[3][3] + mat[1][2] * mat[2][3] * mat[3][1] + mat[1][3] * mat[2][1] * mat[3][2] - mat[1][3] * mat[2][2] * mat[3][1] -
					  mat[1][1] * mat[2][3] * mat[3][2] - mat[1][2] * mat[2][1] * mat[3][3])
					  -
					  mat[0][1] *
					  (mat[1][0] * mat[2][2] * mat[3][3] + mat[1][2] * mat[2][3] * mat[3][0] + mat[1][3] * mat[2][0] * mat[3][2] - mat[1][3] * mat[2][2] * mat[3][0] -
					  mat[1][0] * mat[2][3] * mat[3][2] - mat[1][2] * mat[2][0] * mat[3][3])
					  +
					  mat[0][2] *
					  (mat[1][0] * mat[2][1] * mat[3][3] + mat[1][1] * mat[2][3] * mat[3][0] + mat[1][3] * mat[2][0] * mat[3][1] - mat[1][3] * mat[2][1] * mat[3][0] -
					  mat[1][0] * mat[2][3] * mat[3][1] - mat[1][1] * mat[2][0] * mat[3][3])
					  -
					  mat[0][3] *
					  (mat[1][0] * mat[2][2] * mat[3][2] + mat[1][1] * mat[2][2] * mat[3][0] + mat[1][2] * mat[2][0] * mat[3][1] - mat[1][2] * mat[2][1] * mat[3][0] -
					  mat[1][0] * mat[2][2] * mat[3][1] - mat[1][1] * mat[2][0] * mat[3][2])
					  ;


				  cout << "\n\nWyznacznik: " << det;


				  cout << "\n\nMacierz odwrocona: \n";
				  for (i = 0; i < 4; i++){
					  for (j = 0; j < 4; j++)
					  {

						  cout << (
							  (mat[(j + 1) % 4][(i + 1) % 4] * mat[(j + 2) % 4][(i + 2) % 4] * mat[(j + 3) % 4][(i + 3) % 4])
							  +
							  (mat[(j + 1) % 4][(i + 2) % 4] * mat[(j + 2) % 4][(i + 3) % 4] * mat[(j + 3) % 4][(i + 1) % 4])
							  +
							  (mat[(j + 1) % 4][(i + 3) % 4] * mat[(j + 2) % 4][(i + 1) % 4] * mat[(j + 3) % 4][(i + 2) % 4])
							  -
							  (mat[(j + 1) % 4][(i + 3) % 4] * mat[(j + 2) % 4][(i + 2) % 4] * mat[(j + 3) % 4][(i + 1) % 4])
							  -
							  (mat[(j + 1) % 4][(i + 1) % 4] * mat[(j + 2) % 4][(i + 3) % 4] * mat[(j + 3) % 4][(i + 2) % 4])
							  -
							  (mat[(j + 1) % 4][(i + 2) % 4] * mat[(j + 2) % 4][(i + 1) % 4] * mat[(j + 3) % 4][(i + 3) % 4])
							  ) / det << "\t";
					  }
					  cout << "\n";
				  }


				  break;
		}
		default:
			break;
		}
} while (ster != 5);

return 0;
}
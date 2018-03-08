#include <iostream> 
#include <fstream>
#include <stdlib.h>

using namespace std;
void InsertionSort(int array[], int tam){

	int menor = 0, aux = 0, aux3 = 0; 
	int j;
	for (int i = 0; i <= tam - 1; ++i) {
		menor = array[i];

		for (j = i-1; (j >= 0) && (menor < array[j]); --j){
			array[j+1] = array[j];
		}
		array[j+1] = menor;
	}

	for (int i = 0; i < tam; ++i)
	{
		cout << "Order: " << i+1 << " - Number: " << array[i] << endl;
		
	}


};


int main() {

	char casodeteste[20]; 
	cout << "Digite um caso de teste: " << endl;
	cin >> casodeteste;

	int array[100000]; 
	int linhas = 0; 

	 ifstream myReadFile;
	 myReadFile.open(casodeteste);
	 char output[1000];
	 if (myReadFile.is_open()) {
	 while (!myReadFile.eof()) {


	    myReadFile >> output;
	    array[linhas] = atoi(output);
	   	linhas++;

	 }
	}
	myReadFile.close();  

	InsertionSort(array, linhas);

	return 0;
}
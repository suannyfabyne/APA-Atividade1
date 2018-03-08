#include <iostream> 
#include <fstream>
#include <stdlib.h>
using namespace std;
void SelectionSort(int array[], int tam){

	int menor = 0, aux = 0, aux3 = 0, lock = 0; 

	for (int i = 0; i <= tam -1; ++i) {
		menor = array[i];
		for (int j = i+1; j <= tam -1; ++j){

			if(menor > array[j]){ 
				
				menor = array[j]; 
				aux3 = j; 
			}
		}
		if (array[i] != menor){
			aux = array[i]; 
			array[i] = menor; 
			array[aux3] = aux;
		}
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

	

	SelectionSort(array, linhas);

	return 0;
}
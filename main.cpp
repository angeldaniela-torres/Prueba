#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    /* PRIMERO CARGAMOS NUESTRO ABECEDARIO
    EN UN ARREGLO DE STRINGS PARA CADA LETRA*/
    
    char abc[27][100];                          // MATRIZ DE ABECEDARIO
    const string nombre_archivo = "abc.txt";    // NOMBRE DE ARCHIVO DE TEXTO
    ifstream archivo;                           // VARIABLE TIPO ARCHIVO
    int contador = 0;                           // CONTADOR DE RENGLONES
    archivo.open(nombre_archivo.c_str());       //ABRIMOS EL ARCHIVO
    if(!archivo.fail())
    {    // Si el archivo no marca error al abrir..
        archivo.getline(abc[contador],100,'\n'); // Separa los caracteres hasta encontrar un salto de linea
        contador+= 1;
        while(archivo.eof()== false)
        { // Mientras no llegues al final del archivo...
            archivo.getline(abc[contador],100,'\n'); // Separa los caracteres hasta encontrar un salto de linea
            contador+= 1;
        }
        archivo.close(); // Cerramos archivo contenedor del ASCIIart
    }
    
    char palabra[40];
    int indice[40];
    cout << " > Ingrese la palabra o frase: ";
    cin.getline(palabra,40);
    
    /* AQUI SE SELECCIONAN LOS INDICES
    CORRESPONDIENTES A CADA CARACTER DE LA
    PALABRA/FRASE DENTRO DEL ABECEDARIO PARA
    SABER QUE LETRA SON*/
    
    for(int n=0; n<strlen(palabra); n++)
    {
        palabra[n] = tolower(palabra[n]);
    	switch( palabra[n] )
    	{
    	    case 'a':
    	        indice[n]= 0;
    	        break;
            case 'b':
    	        indice[n]= 1;
    	        break;
            case 'c':
    	        indice[n]= 2;
    	        break;
            case 'd':
    	        indice[n]= 3;
    	        break;
            case 'e':
    	        indice[n]= 4;
    	        break;
            case 'f':
    	        indice[n]= 5;
    	        break;
            case 'g':
    	        indice[n]= 6;
    	        break;
            case 'h':
    	        indice[n]= 7;
    	        break;
            case 'i':
    	        indice[n]= 8;
    	        break;
            case 'j':
    	        indice[n]= 9;
    	        break;
            case 'k':
    	        indice[n]= 10;
    	        break;
            case 'l':
    	        indice[n]= 11;
    	        break;
    	    case 'm':
    	        indice[n]= 12;
    	        break;
            case 'n':
    	        indice[n]= 13;
    	        break;
            case 'o':
    	        indice[n]= 14;
    	        break;
            case 'p':
    	        indice[n]= 15;
    	        break;
            case 'q':
    	        indice[n]= 16;
    	        break;
            case 'r':
    	        indice[n]= 17;
    	        break;
    	    case 's':
    	        indice[n]= 18;
    	        break;
            case 't':
    	        indice[n]= 19;
    	        break;
            case 'u':
    	        indice[n]= 20;
    	        break;
            case 'v':
    	        indice[n]= 21;
    	        break;
            case 'w':
    	        indice[n]= 22;
    	        break;
            case 'x':
    	        indice[n]= 23;
    	        break;
    	    case 'y':
    	        indice[n]= 24;
    	        break;
            case 'z':
    	        indice[n]= 25;
    	        break;
            default: // en caso de no detectarse caracter, se toma el espacio
                indice[n]= 26;
                break;
        }
	}
	
	/* EN ESTA PARTE, VAMOS IMPRIMIENDO
    CADA RENGLÓN EN NUESTRO ARREGLO DE
    9*9 CARACTERES PARA CADA LETRA QUE
    DETECTÓ DENTRO DE LA PALABRA/FRASE*/
    cout << endl;
    
	for(int r = 0; r<8; r++)                    //...CADA RENGLON..
    {
        for(int k = 0; k<strlen(palabra); k++)  //... DE CADA LETRA..
        {
            for(int m = 0; m<9; m++)            //... CADA 9 CARACTERES.
            {
                cout << abc[indice[k]][(r*9)+m];
            }
            cout << " ";    //espacio entre letras
        }
        cout << endl; //fin de renglón
    }
	
    return 0;
}

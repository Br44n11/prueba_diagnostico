#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    //se crean las variables que luego se utilizaran
    string palabra,palabraf="";
    int i=0, cont=0;
    //pide por pantalla una palabra
    cout<<"ingrese una palabra: "<<endl;
    //ingresa la palabra a variable palabra
    cin>>palabra;
    //se inicia un recorrido a la palabra desde el inicio hasta el final de su largo
    for(i=0 ; i<palabra.length() ; i++){
        //cuando ya avanzo el recorrido comprueba si es que se repite la letra anterior,contador suma 1 por cada vez
        if((i!=0) && (palabra[i]==palabra[i-1])){
            cont++;
        }
        /*se comprueba si la letra actual es distinta a la aterior, de ser asi se suma la ultima cuenta se agrega la letra y el 
        valor de cont a la variable palabraf, se reinicia el contador*/
        if((palabra[i]!=palabra[i-1]) && (i!=0)){
            cont++;
            palabraf += palabra[i-1] + to_string(cont);
            cont=0;
        }
        /*cuando llega al final se aumenta por ultima vez el contador, se guarda la letra y el valor de cont a palabraf*/
        if(i==(palabra.length()-1)){
            cont++;
            palabraf += palabra[i] + to_string(cont);
        }
    }
    //se despliega palabraf con los valores alamcenados
    cout<<palabraf<<endl;
    system("pause");
}

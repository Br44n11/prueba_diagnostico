#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string palabra,palabraf="";
    int i=0, cont=0;
    cout<<"ingrese una palabra: "<<endl;
    cin>>palabra;
    for(i=0 ; i<palabra.length() ; i++){
        if((i!=0) && (palabra[i]==palabra[i-1])){
            cont++;
        }
        if((palabra[i]!=palabra[i-1]) && (i!=0)){
            cont++;
            palabraf += palabra[i-1] + to_string(cont);
            cont=0;
        }
        if(i==(palabra.length()-1)){
            cont++;
            palabraf += palabra[i] + to_string(cont);
        }
    }
    cout<<palabraf<<endl;
    system("pause");
}

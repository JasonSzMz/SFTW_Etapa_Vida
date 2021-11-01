#include <iostream>
using namespace std;

/*int main()
{
    int edad;                                                   //Declaramos variable que almacenara el numero que ingresemos (edad)
    printf("Ingresa la edad para determinar la etapa de vida"); //Mostrara en pantalla el texto que esta dentro de los parentesis
    cout << "\nEdad: ";
    cin >> edad;                //Cin sirve para leer el numero que escribamos y guardarlo en la varibale "edad"
    if (edad >= 0 && edad <= 3) //Evaluamos la edad ingresada, si tiene mas de 0 años y menos o igual a 3, decimos que es un bebe
    {
        printf("Etapa: Bebe");
    }
    if (edad >= 4 && edad <= 12) //Evaluamos la edad ingresada, si tiene 4 años o mas y menos o igual a 12, decimos que es un niño
    {
        printf("Etapa: Ni%co(a)", 164); //Usamos el %c para poder usar un caracter especial que no admite nuestra consola, al finalizar ponemos el numero (ascii) del caracter a poner  Ejemplo: 164 = ñ
    }
    if (edad >= 13 && edad < 18) //Evaluamos la edad ingresada, si tiene 13 años o mas y menos que 18, decimos que es un adolescente
    {
        printf("Etapa: Adolescente");
    }
    if (edad >= 18) //Evaluamos la edad ingresada, si tiene de 18 años en adelante entonces decimos que es un adulto
    {
        printf("Etapa: Adulto");
    }
}*/

int main()
{
    int age;
    cout << "Enter your age to determine your life stage";
    cout << "\n\nAge: ";
    cin >> age;
    if (age >= 0 && age <= 3)
    {
        cout << "Stage: Baby";
    }
    if (age >= 4 && age <= 12)
    {
        cout << "Stage: Child";
    }
    if (age >= 13 && age < 18)
    {
        cout << "Stage: Teenager";
    }
    if (age >= 18)
    {
        cout << "Stage: Adult";
    }
}

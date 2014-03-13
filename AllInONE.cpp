/*
    @Author - Edward Fco. Mireles Pérez
    @Matrícula - 2013-1521
    @Sección - 01
    @Materia - Lógica de programación
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/*


                            ALTURA DE UN CONO

*/



float alturaCono(float volumen, float radio) {

float altura;
int h;
const float PI = 3.1415926;

altura = (3 * volumen) / (pow(radio,2) * PI);

return altura;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////
/*

                            CONVSERIÓN DE TEMPERATURAS

*/

float conversionCF(int vt, float grados) {


if(vt == 1) {
    return ((grados-32)*5)/9;
} else if(vt == 2) {
    return ((grados*9)/5+32);
}
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////
/*

                                CÁLCULO DE EDAD


*/


void CalculoEdad(int yearA, int dateBirth) {

    cout << "\nYou are " << (yearA - dateBirth) << " years old\n";

}




///////////////////////////////////////////////////////////////////////////////////////////////////////






///////////////////////////////////////////////////////////////////////////////////////////////////////
/*

                            PORCENTAJE DE INVERSIÓN DE 3 PERSONAS

*/

void inversion(int persona1, int persona2, int persona3) {

int suma = persona1+persona2+persona3;

double per1 = (persona1*100) / suma;
double per2 = (persona2*100) / suma;
double per3 = (persona3*100) /suma;

cout << "\nLa persona 1 invirtio RD$" << persona1 << " con un porcentaje de " << per1 << "%\n";
cout << "La persona 2 invirtio RD$" << persona2 << " con un porcentaje de " << per2 << "%\n";
cout << "La persona 3 invirtio RD$" << persona3 << " con un porcentaje de " << per3 << "%\n\n";

cout << "Con um monto total de RD$" << suma << ", para un porcentaje total de " << per3+per2+per1 << "%\n\n";

}
///////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////
/*

                        CONVERSIÓN DE cm a mm, m a Km

*/

void conversionCmtom_MtoKm(int opcion, float valor) {

    double val=0;

    switch (opcion) {

    case 1:

        val = (valor/1000)*100;
        cout << "\n" << valor << " mm a cm: " << val << "\n";

        break;

    case 2:

        val = (valor/100)*1000;
        cout << "\n" << valor << " cm a mm: " << val << "\n";
        break;

    case 3:

        val = (valor/1000);
        cout << "\n" << valor << " m a km: " << val << "\n";
        break;

    case 4:

        val = (valor*1000);
        cout << "\n" << valor << " km a m: " << val << "\n";
        break;
    }

}
///////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////
/*


            CALCULAR TIEMPO DE LLAMADA TELEFÓNICA: 3 min = RD$300, +1 min = RD$150

*/

void calcularTiempoLlamada(int minutos) {

    const int minu = 150;
    const int min_3 = 300;
    int total;

    if(minutos > 3) {

            total = min_3 + (minu*(minutos-3));

    }  else {

		total = min_3;

	}
    cout << "\n\nCantidad de minutos hablados " << minutos << " con un monto de RD$" << total << "\n";


}

////////////////////////////////////////////////////////////////////////////////////////////////////////





/******************************************************/
int option (int msg=1) {

system("color 0A");
int opcion;

if (msg==1) {
cout <<" 1-Altura de un cono\n\n 2-Conversion de Celsius a Fahrenheit\n\n 3-Calcular la edad\n\n 4-Porcentaje de inversion de 3 personas\n\n 5-Coversión de mm, cm, m, km\n\n 6-Calcular tiempo de llamada telefonica: 3 min = RD$300, +1 min = RD$150";
cout << "\n\nEliga una opcion: ";
}
cin>>opcion;

    if (opcion >= 1 && opcion <= 6) {
        return opcion;
    } else if(opcion == 0) {

        exit(0);

     } else {
        system("cls");
    }

    return (0);

}
/*******************************************************/

// @Ccopyright
void copyright() {
    cout << "\nEdward Fco. Mireles Perez \n" <<
            "Matricula 2013-1521\n" <<
            "Seccion 01\n" <<
            "Prof Yanery Diaz L.\n" <<
            "Materia Logica de programacion\n\n";
}

void allop(int code) {

    switch (code) {

    case 1:
        system("cls");
        system("color 80");
        copyright();
        break;
    case 2:
        system("cls");
        system("color 6");
        copyright();
        break;
    case 3:
        system("cls");
        system("color 2b");
        copyright();
        break;
    case 4:
        system("cls");
        system("color 1f");
        copyright();
        break;
    case 5:
        system("cls");
        system("color f0");
        copyright();
        break;
    case 6:
        system("cls");
        system("color a0");
        copyright();
        break;

    }

}

int main () {


system("cls");
copyright();
float volumen,radio, conversion;
int op = 0, grados, p1, p2, p3;
char conv;



while (op == 0) {

op = option(1);



    if(op >=1 && op <=6) {

       switch (op) {

            case 1:

                allop(1);
                cout << "\n\nIntroduzca el volumen : "; cin >> volumen;
                cout << "\nIntroduzca el radio : "; cin >> radio;
                cout << "\n\nLa altura del cono es de " << alturaCono(volumen,radio) << " centimetros cubicos \n\n";
                system("pause");
                main();
                break;

            case 2:

                allop(2);
                cout << "\nC- Convertir de Fahrenheit a Celcius\n\n";
                cout << "F- Convertir de Celcius a Fahrenheit\n\n";
                cout << "Introduzca el valor ";
                cin >> p1;
                cout << "\n\nIntroduzca los grados ";
                cin >> grados;
                conversion = conversionCF(p1,grados);
                cout << "\n\t" << grados <<  (p1 == 1 ? " grados Fahrenheit son " : " grados Celcius son ")  << conversion << " grados " << (p1 == 1 ?  "Celcius" : "Fahrenheit" ) << "\n\n";
                system("pause");
                main();
                break;

            case 3:

                allop(3);
                cout << "\nIntroduzca la fecha Actual ";
                cin >> p1;
                cout << "\nIntroduzca la fecha de nacimiento ";
                cin >> p2;
                CalculoEdad(p1,p2);
                system("pause");
                main();
                break;


            case 4:

                allop(4);
                cout << "\n\nIntroduzca el monto de la primera persona ";
                cin >> p1;
                cout << "\n\nIntroduzca el monto de la segunda persona ";
                cin >> p2;
                cout << "\n\nIntroduzca el monto de la tercera persona ";
                cin >> p3;
                inversion(p1,p2,p3);
                system("pause");
                main();
                break;

            case 5:

                allop(5);
                cout << "\n\n1-Convertir de mm a cm\n";
                cout << "\n2-Convertir de cm a mm\n";
                cout << "\n3-Convertir de m a km\n";
                cout << "\n4-Convertir de km a m\n";
                cout << "\nElige una opcion ";
                cin >> op;
                cout << "\nIntroduzca la cantidad ";
                cin >> conversion;
                conversionCmtom_MtoKm(op,conversion);
                system("pause");
                main();
                break;


            case 6:

                allop(6);
                cout << "\n\nIntroduzca la cantidad de minutos ";
                cin >> p1;
                calcularTiempoLlamada(p1);
                system("pause");
                main();
                break;

        } // End switch


    break;

    } // End if

} // End while


return 0;


}


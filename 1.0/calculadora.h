int suma(int num, int num2) {
    return num+num2;
}

int resta(int num, int num2) {
    return num-num2;
}

int multi(int num, int num2) {
    return num*num2;
}

int division(int num, int num2) {
    return num/num2;
}

void Calculadora() {


int operacion, num,num2;


cout << "SUMA (1)\n";
cout << "RESTA (2)\n";
cout << "MULTIPLICACION (3)\n";
cout << "DIVISION (4)\n\n";


cout << "eliga la operacion: ";
cin>>operacion;



switch (operacion) {

       case 1:

            cout << "Digite el primer numero ";
            cin >> num;
            cout.clear();
            cout << "Digite el segundo numero ";
            cin >> num2;
            cout.clear();

            cout << suma(num,num2) << "\n\n";
            break;

       case 2:

            cout << "Digite el primer numero ";
            cin >> num;
            cout.clear();
            cout << "Digite el segundo numero ";
            cin >> num2;
            cout.clear();

            cout << resta(num,num2) << "\n\n";
            break;

       case 3:

            cout << "Digite el primer numero ";
            cin >> num;
            cout.clear();
            cout << "Digite el segundo numero ";
            cin >> num2;
            cout.clear();

            cout << multi(num,num2) << "\n\n";
            break;

       case 4:

            cout << "Digite el primer numero ";
            cin >> num;
            cout.clear();
            cout << "Digite el segundo numero ";
            cin >> num2;
            cout.clear();

            cout << division(num,num2) << "\n\n";
            break;

}


}

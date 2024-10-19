#include <iostream>
#include <iomanip>  
using namespace std;

void menu() {
	cout << "1. Crear un programa que resuelva Salario de un Empleado" << endl;
	cout << "2. Laboratorio # 2 crear un programa en C++" << endl;
	cout << "3. Laboratorio # 3 Programa con Array - Programación Modular" << endl;
	cout << "4. Resolucion de examen ejercicios en C++" << endl;
	cout << "5. Salir" << endl;
}

void Tarea1() {
	int diasLaborales;
	int horasDiarias;
	const double pagoPorHora = 40.00;
	const double porcentajeIGSS = 0.045;

	cout << "Ingrese el numero de dias trabajados: ";
	cin >> diasLaborales;
	cout << "Ingrese el numero de horas trabajadas por dia: ";
	cin >> horasDiarias;

	double salarioBruto = diasLaborales * horasDiarias * pagoPorHora;
	double deduccionIGSS = (salarioBruto >= 3850.00) ? salarioBruto * porcentajeIGSS : 0.00;
	double salarioFinal = salarioBruto - deduccionIGSS;

	cout << fixed << setprecision(2);
	cout << "Desglose del salario:" << endl;
	cout << " Total de horas trabajadas: " << diasLaborales * horasDiarias << endl;
	cout << " Salario bruto: Q" << salarioBruto << endl;
	cout << " Deduccion IGSS: Q" << deduccionIGSS << endl;
	cout << " Salario neto: Q" << salarioFinal << endl;
}

void Tarea2() {
	const int NumeroDeEmpleados = 10;
	int DiasTrabajados[NumeroDeEmpleados], HorasPorDia[NumeroDeEmpleados];
	double SalariosBase[NumeroDeEmpleados], SalarioLiquido[NumeroDeEmpleados], DescuentosIGSS[NumeroDeEmpleados];

	for (int i = 0; i < NumeroDeEmpleados; ++i) {
		cout << "Ingrese los dias trabajados del empleado " << i + 1 << ": ";
		cin >> DiasTrabajados[i];
		cout << "Ingrese las horas trabajadas por dia del empleado " << i + 1 << ": ";
		cin >> HorasPorDia[i];

		SalariosBase[i] = DiasTrabajados[i] * HorasPorDia[i] * 40.0;
		DescuentosIGSS[i] = (SalariosBase[i] >= 3850.0) ? SalariosBase[i] * 0.045 : 0.0;

		SalarioLiquido[i] = SalariosBase[i] - DescuentosIGSS[i];

		cout << fixed << setprecision(2);
		cout << "Salario liquido del empleado " << i + 1 << ": Q" << SalarioLiquido[i] << endl;
	}
}

void Tarea3() {
}

void Tarea4() {
	int examen;
	do {
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "4. Ejercicio 4" << endl;
		cout << "5. Salir" << endl;
		cin >> examen;
		switch (examen) {
		case 1: {
			int contador = 0;
			while (contador < 10) {
				contador = contador + 1;
				cout << "\t Los diez primeros numeros son: " << contador;
			}
			cout << endl;
			break;
		}
		case 2: {
			int velocidad = 0;
			velocidad = 75;
			float multa = 0;
			if (velocidad > 75) {
				multa = 150;
			}
			else {
				multa = 0;
			}
			cout << "Valor de la multa: Q" << multa << endl;
			break;
		}
		case 3: {
			int peso_producto = 0;
			float precio_libra = 0;

			cout << "Ingrese peso del producto: ";
			cin >> peso_producto;
			cout << "\n";

			if (peso_producto >= 100) {
				precio_libra = 1.88;
				cout << "El precio del producto es: Q" << precio_libra << "\n";
			}
			else if (peso_producto < 100) {
				precio_libra = 1.99;
				cout << "El precio del producto es: Q" << precio_libra << "\n";
			}
			break;
		}
		case 4: {
			bool bandera = true;
			if (bandera == true)
				cout << "bandera abajo \n";
			else
				cout << "bandera arriba \n";
			cout << "Valor de Bandera: " << bandera << endl;
			break;
		}
		}
	} while (examen != 5);
}

int main() {
	int opcion;
	do {
		menu();
		cin >> opcion;
		switch (opcion) {
		case 1:
			Tarea1();
			break;
		case 2:
			Tarea2();
			break;
		case 3:
			Tarea3();
			break;
		case 4:
			Tarea4();
			break;
		case 5:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
		}
	} while (opcion != 5);
}

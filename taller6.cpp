#include <iostream>
#include <math.h>
#include <string.h> 
#include <windows.h>  //para texto de colores

using namespace std;

int main(){

	int selector;
	
	
		cout << "\t\t-------------------------";
	 	cout << "\n\t\tTALLER #6" << endl;
        cout << "\t\t-------------------------" << endl;
        cout << "\n\t1-AREA DE UN TRIANGULO " << endl;
        cout << "\n\t2-AREA DE UN RECTANGULO " << endl;
        cout << "\n\t3-AREA Y LONGITUD DE UN CIRCULO " << endl;
        cout << "\n\t4-CALCULAR EL SALARIO DE UN TRABAJADOR " << endl;
        cout << "\n\t5-CONVERSION DE UNIDADES " << endl;
        cout << "\n\t6-CALCULAR LA VELOCIDAD PROMEDIO EN KM/H " << endl;
        cout << "\n\t7-DONACIONES BENEFICAS " << endl;


        
        cout << "\t0. SALIR" << endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >>selector;

	switch(selector)
	{
		case 1:
			
			
			float base, altura, area, radio, perimetro, longitud, resultado;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tCALCULAR EL AREA DE UN TRIANGULO"<<endl;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE BASE: ";
			cin >> base;
			
			cout << "\n\t\t------------------------";

			cout << "\n\t\tINSERTE ALTURA: ";
			cin >> altura;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			resultado = (base*altura)/2;
			cout << "\n\t\tEL AREA DEL TRIANGULO ES: " << resultado;
		break;
		
		case 2:
				
			cout << "\n\t\t==========================";
			cout << "\n\t\tCALCULAR EL AREA DE UN RECTANGULO"<<endl;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE BASE: ";
			cin >> base;
			
			cout << "\n\t\t------------------------";

			cout << "\n\t\tINSERTE ALTURA: ";
			cin >> altura;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			area = base*altura;
			
			cout << "\n\t\tEL AREA DE UN RECTANGULO ES: " << area;
			
			perimetro = 2*(base*altura);
			
			cout << "\n\t\tEL PERIMETRO DE UN RECTANGULO ES: " << perimetro;
		break;
			
		case 3:
				
			cout << "\n\t\t==========================";
			cout << "\n\t\tCALCULAR EL AREA Y LONGITUD DE UN CIRCULO"<<endl;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tRADIO: ";
			cin >> radio;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			area = 3,14159265359*pow(radio, 2);
			
			cout << "\n\t\tEL AREA DE UN CIRCULO ES: " << area;
			
			longitud = 2*3,14159265359*radio;
			
			cout << "\n\t\tLA LONGITUD DE UN CIRCULO ES: " << longitud;
		break;
		
			case 4:
			
			float lunes, martes, miercoles, jueves, viernes, sabado, domingo, valorhora, totalhoras, salario;	
				
			cout << "\n\t\t==========================";
			cout << "\n\t\tCALCULAR EL SALARIO DE UN TRABAJADOR"<<endl;
			cout << "\n\t\t-----------------------";
		
			cout << "\n\t\tINSERTE VALOR POR HORA: ";
			cin >> valorhora;
			
			cout << "\n\t\t------------------------";
			
			cout << "\n\t\t INSERTE HORAS TRABAJADAS: ";
			
			cout << "\n\n\t\tLunes: ";
			cin >> lunes;
			
			cout << "\n\t\tMartes: ";
			cin >> martes;
			
			cout << "\n\t\tMiercoles: ";
			cin >> miercoles;
			
			cout << "\n\t\tJueves: ";
			cin >> jueves;
			
			cout << "\n\t\tViernes: ";
			cin >> viernes;
			
			cout << "\n\t\tSabado: ";
			cin >> sabado;
			
			cout << "\n\t\tDomingo:";
			cin >> domingo;
			
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			totalhoras = lunes + martes + miercoles + jueves + viernes + sabado + domingo;
			
			cout << "\n\t\tEl total de horas trabajadas es de: " << totalhoras;
			
			salario = totalhoras * valorhora;
			
			cout << "\n\t\tEL SALARIO ES: " << salario;
		break;
		
		case 5:
			
			float metros, centimetros, pulgadas, pies, yardas;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tCONVERSION DE UNIDADES"<<endl;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE METROS: ";
			cin >> metros;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			centimetros = metros*100;
			pulgadas = metros*39.37;
			pies = metros*3.281;
			yardas = metros*1.094;
			
			cout << "\n\t\t"<< metros;
			cout << " METROS EQUIVALEN A: ";
			
			cout << "\n\t\t"<< centimetros;
			cout << " centimetros";
			
			cout << "\n\t\t"<< pulgadas;
			cout << " pulgadas";
			
			cout << "\n\t\t"<< pies;
			cout << " pies";
			
			cout << "\n\t\t"<< yardas;
			cout << " yardas";
			
		break;
	
		case 6:
			
			float minutos, segundos, milesimas, kilometros, vPromedio, tiempo;
				
			cout << "\n\t\t==========================";
			cout << "\n\t\tCALCULAR LA VELOCIDAD PROMEDIO EN KM/H"<<endl;
			
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE METROS: ";
			cin >> metros;
			
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE MINUTOS: ";
			cin >> minutos;
			
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE SEGUNDOS: ";
			cin >> segundos;
			
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE MILESIMAS: ";
			cin >> milesimas;		
			
			tiempo = milesimas/15.7858145825 + segundos/3600 + minutos/60;
			kilometros = (metros/1000);
			vPromedio = (kilometros/tiempo);
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			cout << "\n\t\tEL TIEMPO FUE DE : " << tiempo << "Horas";
			cout << "\n\t\tLA DISTANCIA FUE DE : " << kilometros <<" kilometros.";
			cout << "\n\t\tLA VELOCIDAD PROMEDIO FUE DE : " << vPromedio <<" KM/H.";
		
		break;
		
		case 7:
			
			float soles, marcos, dolares, euros;
			float salud, comedor, admin;
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tDONACIONES BENEFICAS"<<endl;
			
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE SOLES: ";
			cin >> soles;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE MARCOS: ";
			cin >> marcos;
			cout << "\n\t\t-----------------------";
			cout << "\n\t\tINSERTE DOLARES: ";
			cin >> dolares;
			
			euros = (soles/3.25 + marcos/2.08 + dolares)*1.07;
			salud = (euros*60)/100;
			comedor = (euros*20)/100;
			admin = (euros*20)/100;
			
			
			cout << "\n\t\t==========================";
			cout << "\n\t\tRESULTADO";
			cout << "\n\t\t==========================";
			
			
			
			cout << "\n\t\tEL TOTAL FUE DE: " << euros <<" euros";
			cout << "\n\t\tA CADA RUBRO LE CORRESPONDE: ";
			cout <<"\n\t\tSALUD: "<< salud <<" euros";
			cout <<"\n\t\tCOMEDOR: "<< comedor <<" euros";
			cout <<"\n\t\tADMIN: "<< admin <<" euros";
			
			
		break;
		
		default: //Función por defecto
		
			cout << "Selecciona algo";
		
	}

	return 0;
}
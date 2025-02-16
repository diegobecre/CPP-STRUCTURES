#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;
int main()
{
setlocale(LC_CTYPE,"");
int opcion;
int nx=0;
    do
    {
    system("cls");
    system("color 09");
	system("title PANTALLA DE INICIO");
	cout<<"\n\n          PRÁCTICA 7\n\n  Programa general en C++\n\n           PROG2A\n\n           M1S2\n\n CECYTE Plantel Chignahuapan\n\n  Programa desarrollado por:\n    Diego Becerra Regalado";
    cout <<"\n\n\n\nPresione 1 para empezar \nPresione 2 para salir\n\n\n\n";
    cin >> opcion;
    if(opcion==1)
    {
        system("color 0f");
        for (int i=0;i<=100; ++i) {
	    cout<<"REDIRIGIENDO...|";	
        if(i%10== 0) {
	    nx=i/10;}
        for (int j=1;j<=nx;++j){
	    cout<< "=";}
        for(int l=1;l<=(10-nx);++l){
	    cout<<" ";}
        cout<<"|";
        cout<<i<<"%\n";
        if(i<100)system("cls");	} 
        system("color 0a");
		cout<<"Proceso para carga de sus resultados\n\n\n\nPresione enter para INICIAR...\n";
        system("pause>nul"); 
        system("cls");
		cout<<"-------------------------------------------------------------\n";		
           		system("title Paso 1: REVISAR CALIFICACION");
        		system("color 0f");
            	float num;  
            	cout<<"Siendo 0 el mas bajo y 100 el mas alto ingrese su puntaje obtenido para revisar su calificacion: \n\n";    
            	cin>>num;  
            	if (num <0 || num >100){    
            	cout<<"PUNTAJE NO VALIDO";    
            	}    
            	else if(num >= 0 && num < 50){ 
			 	system("color 0a");   
            	cout<<"Puntaje:"<<num<<"\nREPROBADO: F";  
				cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");   
            	}     
            	else if (num >= 50 && num < 60){    
			 	system("color 0a");  
            	cout<<"Puntaje:"<<num<<"\nCalificación: D ";  
				cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");   
            	}    
            	else if (num >= 60 && num < 70){
				system("cls"); 
			 	system("color 0a");     
            	cout<<"Puntaje:"<<num<<"\nCalificación: C ";
				cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");     
            	}    
            	else if (num >= 70 && num < 80){  
             	system("color 0a");
            	cout<<"Puntaje:"<<num<<"\nCalificación: B "; 
        		cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");   
            	}    
            	else if (num >= 80 && num < 100){
			 	system("color 0a");     
        		cout<<"Puntaje:"<<num<<"\nCalificación: A "; 
				cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");    
            	}    
       	cout<<"\n\n\n\n\n\n-------------------------------------------------------------\n";
				system("title Paso 2: REGISTRAR RESULTADO  DE CALIFICACION");
				system("color 0f");
		    	char grade;
            	cout<<"\n--> F\n--> D\n--> C\n--> B\n--> A\n\nIngrese su calificación obtenida para ser registrada: ";
            	cin>>grade;
            	switch(toupper(grade)) {
            	case 'A' :
	         	system("color 0a");
	            cout <<"Calificación: "<<grade<< "\nResultado:APROBASTE Muy buen trabajo!!" << endl;
				cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul");  
            	break;
            	case 'B' :
	         	system("color 0a");
	        	cout<<"Calificación: "<<grade<<"\nResultado:APROBASTE Sigue así";
	        	cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul"); 
	        	break;
            	case 'C' :
	         	system("color 0a");
            	cout <<"Calificación: "<<grade<<"\nResultado:APROBASTE Bien hecho" << endl;
            	cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul"); 
            	break;
            	case 'D' :
	         	system("color 0a");
            	cout <<"Calificación: "<<grade<<"\nResultado:APROBASTE Puedes hacerlo mejor" << endl;
            	cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul"); 
            	break;
            	case 'F' :
	         	system("color 0a");
            	cout <<"Calificación: "<<grade<<"\nResultado:REPPROBASTE Esfuerzate más la próxima" << endl;
            	cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul"); 
            	break;
            	default :
            	system("color f0");
            	cout <<grade<<" NO VÁLIDO" << endl;
            }
		cout<<"\n\n\n\n\n\n-------------------------------------------------------------\n";
	            system("title Paso 3: CARGAR RESULTADOS A BASE DE DATOS");
	    		system("color 0f");
		    	int c;
            	cout<<"\n\n\n\nCalificación: "<<grade<<"         Puntaje: "<<num;
            	cout<<"\n\n\n\nPresione ENTER para cargar sus resultados a la base de datos";
		        system("pause>nul");
            	for (int i=0;i<=100; ++i) {
	        	cout<<"CARGANDO...|";	
        		if(i%10== 0) {
	        	nx=i/10;}
            	for (int j=1;j<=nx;++j){
	        	cout<< "=";}
            	for(int l=1;l<=(10-nx);++l){
	        	cout<<" ";}
            	cout<<"|";
            	cout<<i<<"%\n";
            	if(i<100)system("cls");	} 
            	system("color 0a");
		  		cout <<"Su calificación ha sido subida a la base de datos con éxito\n";
		  		cout<<"\n\n\n\nPresione enter para CONTINUAR...";
                system("pause>nul"); 
		cout<<"\n\n\n\n\n\n-------------------------------------------------------------\n";
	    		system("title Paso 4: CREAR CUENTA CON DATOS REGISTRADOS");
	    		system("color 0f");
            	int passwd, valid;
		    	cout<<"Ingresa una nueva contraseña para crear una cuenta y conocer tus datos\n";
            	cin>>passwd;
		    	do{
	        	cout<<"Usuario, ingresa tu contraseña nuevamente para acceder: ";
        		cin>>valid;			
				}while (valid!=passwd);
				system("cls");
				system("color 0a");
            	cout<<"Bienvenido Usuario"<<"\nDatos de la cuenta:\n\n\nCalificación: "<<grade<<"           Puntaje: "<<num;
		 cout <<"\n\n\nPresione X para FINALIZAR...";
	    system("pause>nul");
		break;
    }
	}
	while (opcion != 2);		    
	return 0;
}

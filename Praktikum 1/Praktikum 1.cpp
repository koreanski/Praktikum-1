//// TIN_P1_Beaufort_VC2019.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

//------------------------------------------------------------
// P1_Beaufort.cpp 
// TIN - Praktikum Nr. 1
//------------------------------------------------------------

/************        Die Bibliotheken              *******************/
// von VisualStudio eingefügt, muss immer als erstes stehen
// Ab VS2019 nicht mehr notwendig #include "stdafx.h"  

// Standard Input-Output-Bibliothek
#include <iostream>
using namespace std;

/************    Die globalen Variablendefinitionen          **********/
int   Wind_kmh;//ganzahlige Variable für die Windgeschwindigkeit in km/h
float Wind_ms;	//fließkomma Variable für die Windgeschwindigkeit in m/s
float Wind_kn; // fließkomma V. für Windgeschwindgkeit in kn
int Wind_bft; // gz. V. für Windstärke in Beaufort



/************       Das Hauptprogramm         **********/
int main(void)
{  //Ausführung des Programms beginnt genau hier !!!

   /* Einlesen  */
	cout << "Geben Sie die Windgeschwindigkeit in km/h ein : ";
	cin >> Wind_kmh;

	/* Berechnung */

	Wind_ms = static_cast < float > (Wind_kmh) * 1000 / 3600; 
	Wind_kn = static_cast <float> (Wind_kmh) / 1.852;
	Wind_bft = static_cast <int> (Wind_kn + 10) / 6;


	


	/* Ausgabe */
	cout << "\nDie Windgeschwindigkeit in m/s betraegt : " << Wind_ms << "\n";
	cout << "\nDie Windgeschwindigkeit in kn betraegt : " << Wind_kn << "\n";
	cout << "\nDie Windstaerke in Bft betraegt : " << Wind_bft << "";

	if ((0 <= Wind_kn) && (Wind_kn < 1)) { cout << " - Windstille" << endl; }
	else if ((1 <= Wind_kn) && (Wind_kn < 4)) { cout << " - leiser Zug" << endl; }
	else if ((4 <= Wind_kn) && (Wind_kn < 7)) { cout << " - leichte Brise" << endl; }
	else if ((7 <= Wind_kn) && (Wind_kn < 11)) { cout << " - schwache Brise" << endl; }
	else if ((11 <= Wind_kn) && (Wind_kn < 16)) { cout << " - maessige Brise" << endl; }
	else if ((16 <= Wind_kn) && (Wind_kn < 22)) { cout << " - frische Brise" << endl; }
	else if ((22 <= Wind_kn) && (Wind_kn < 28)) { cout << " - starker Wind" << endl; }
	else if ((28 <= Wind_kn) && (Wind_kn < 34)) { cout << " - steifer Wind" << endl; }
	else if ((34 <= Wind_kn) && (Wind_kn < 41)) { cout << " - stürmischer Wind" << endl; }
	else if ((41 <= Wind_kn) && (Wind_kn < 48)) { cout << " - Sturm" << endl; }
	else if ((48 <= Wind_kn) && (Wind_kn < 56)) { cout << " - schwerer Sturm" << endl; }
	else if ((56 <= Wind_kn) && (Wind_kn < 64)) { cout << " - orkanartiger Sturm" << endl; }
	else if ( 64 <= Wind_kn){ cout << " - Orkan" << endl; }

	system("pause");  // Warten auf Taste (DOS-Befehl "pause")
	return(0); 	// Ende des Programms
}


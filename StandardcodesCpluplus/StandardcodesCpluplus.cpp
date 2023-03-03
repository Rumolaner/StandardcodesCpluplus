// StandardcodesCpluplus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
//Standardparameterlist: 32 34,56,23,56,86,42,23,65,32,45,57,23,56,23,55,57,22 linear bubble

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int iSearch = 0;
    int iListArray[10];
    string sList = "";
    string sSeAlgo = "";
    string sSoAlgo = "";

    if (argc <= 4) {
        cout << "Bitte Parameter eingeben. Reihenfolge: Suchwert, Suchliste (Komma getrennt), Suchalgorithmus, Sortieralgorithmus\n";
        return 1;
    }
    else {
        iSearch = atoi(argv[1]);
        sList = argv[2];
        sSeAlgo = argv[3];

        if (argc > 4) {
            sSoAlgo = argv[4];
        }
    }

    cout << "Search value: " << iSearch << '\n';
    cout << "List: " << sList << '\n';
    cout << "Search Algorithm: " << sSeAlgo << '\n';
    cout << "Sort Algorithm: " << sSoAlgo << "\n\n";

    cout << "Checking list..." << "\n\n";
    int i = 0;
    int pos;
    while ((pos = sList.find(',')) != std::string::npos) {
        iListArray[i] = atoi(sList.substr(0, pos).c_str());
        sList.erase(0, pos + 1);
        i++;
    }

    cout << "Checking search algorithm..." << "\n\n";

    cout << "Checking sort algorithm" << "\n\n";
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

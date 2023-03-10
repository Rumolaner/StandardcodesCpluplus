// StandardcodesCpluplus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
//Standardparameterlist: 32 34,56,22,56,86,42,23,65,32,45,57,23,56,23,55,57,23 linear bubble

#include <iostream>
#include <chrono>
#include <vector>
#include "../SCCplusplusCommon/SccplusplusCommon.h"
#include "../SCCplusplusSortBubble/SCCplusplusSortBubble.h"
#include "../SCCplusplusSortBubbleopt/SCCplusplusSortBubbleopt.h"
#include "../SCCplusplusSortInsert/SCCplusplusSortInsert.h"
#include "../SCCplusplusSortMerge/SCCplusplusSortMerge.h"

using namespace std;

int main(int argc, char* argv[])
{
    chrono::high_resolution_clock::time_point starttime = chrono::high_resolution_clock::now();
    clear(); //Clear Output-file output.txt in Application-root
    int iSearch = 0;
    vector<int> iList = {};
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
    write(starttime, "Search value: " + to_string(iSearch));
    cout << "List: " << sList << '\n';
    write(starttime, "List: " + sList);
    cout << "Search Algorithm: " << sSeAlgo << '\n';
    write(starttime, "Search Algorithm: " + sSeAlgo);
    cout << "Sort Algorithm: " << sSoAlgo << "\n\n";
    write(starttime, "Sort Algorithm: " + sSoAlgo);

    cout << "Checking list..." << "\n\n";
    int i = 0;
    int pos;
    while ((pos = sList.find(',')) != std::string::npos) {
        iList.push_back(atoi(sList.substr(0, pos).c_str()));
        sList.erase(0, pos + 1);
        i++;
    }
    if (sList.length() > 0) {
        iList.push_back(atoi(sList.substr(0, pos).c_str()));
        sList = "";
    }

    cout << "Checking sort algorithm" << "\n\n";
    if (sSoAlgo == "bubble") {
        SortBubble(starttime, iSearch, iList);
    }
    else if (sSoAlgo == "bubbleopt") {
        SortBubbleopt(starttime, iSearch, iList);
    }
    else if (sSoAlgo == "insert") {
        SortInsert(starttime, iSearch, iList);
    }
    else if (sSoAlgo == "merge") {
        SortMerge(starttime, iSearch, iList);
    }
    else if (sSoAlgo != ""){
        cout << "Unbekannter Sortieralgorithmus: " << sSoAlgo << '\n';
        write(starttime, "Unbekannter Sortieralgorithmus: " + sSoAlgo);
        return 2;
    }

    cout << "Checking search algorithm..." << "\n\n";
    if (sSeAlgo == "linear") {
        //SortLinear(iListArray, iSearch);
    }
    else if (sSeAlgo == "binary") {
        if (sSoAlgo == "") {
            cout << "Binary Search benötigt eine sortierte Liste!\n";
            write(starttime, "Binary Search benötigt eine sortierte Liste!");
        }

    }
    else {
        cout << "Unbekannter Suchgorithmus: " << sSeAlgo << '\n';
        write(starttime, "Unbekannter Suchgorithmus: " + sSeAlgo);
        return 2;
    }
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

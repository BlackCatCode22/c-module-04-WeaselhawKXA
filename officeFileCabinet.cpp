/* officeFileCabinet.cpp
 * 0836901 Le 29 septembre 2025
 */
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    fstream wnf;
    wnf.open("sample.txt",ios::out); //write mode
    if (wnf.is_open()) {
        // Otsukare Summer verse 2.
        wnf << "You're a popular guy, I understand that\n";
        wnf << "But your carefree smiles annoys me\n";
        wnf << "It's just you with those familiar lines\n";
        wnf << "Just meet me, kiss me\n";
        wnf << "Busty girls pass by, my eyes are glued to them\n";
        wnf << "Then, here's my catchphrase\n";
        wnf.close();
    }
    wnf.open("sample.txt",ios::app); //append mode
    if (wnf.is_open()) {
        wnf << "Good job, summer\n";
        wnf << "The girl with a faint dream is crying in secret\n";
        wnf << "In the end of summer\n";
        wnf << "Her tanned skin, tonight, will cool down\n";
        wnf.close();
    }
    fstream wnf2;
    wnf2.open("C:/Users/BE129/parseTwenty/yahBeby/arrivingAnimals.txt",ios::in);
    if (wnf2.is_open()) {
        string lipp;
        while (getline(wnf2, lipp)) {
            cout << lipp << endl;
        }

        wnf2.close();
    }
    wnf.open("sample.txt",ios::in); //read mode
    if (wnf.is_open()) {
        //wnf.seekg(0, ios::beg);
        string line;
        while (getline(wnf,line)) {
            cout << line << "\n";
        }
        wnf.close();
    }
    if (wnf){

        cout << "File sample.txt successfully created. It has been placed in the Cmake-build-debug folder.";
    }
    system("pause>0");
}

//[age,sas,sob,color,weight,place,country];
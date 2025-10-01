/*[hashMapsAndJSON.cpp]
0836901 Le Premier Octobre 2025 */

//preprocessing directives
#include <iostream>
#include <map>
#include <unordered_map>
#include <sstream>
//Required dependency: json.hpp Keep the file in single_include and place in project folder. Use file path.
#include <C:/Users/BE129/guruGuruGuru/single_include/nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
    json étudiants = {
        {"Gato",56},
        {"Gauson",22},
        {"JJM",78},
        {"Perreira",62},
        {"Liturgy",84},
        {"Karry",77},
    };
    //      name       key/value pair       next line
    cout << "Gato: " << étudiants["Gato"] << endl;
    cout << "Gauson: " << étudiants["Gauson"] << endl;
    cout << "JJM: " << étudiants["JJM"] << endl;
    cout << "Perreira: " << étudiants["Perreira"] << endl;
    cout << "Liturgy: " << étudiants["Liturgy"] << endl;
    cout << "Karry: " << étudiants["Karry"] << endl << endl;

    unordered_map<string,int> score;

    score["Gato"] = 100;
    score["Gauson"] = 80;
    score["JJM"] = 95;
    score["Perreira"] = 78;
    score["Liturgy"] = 85;
    score["Karry"] = 69;
    /*
    cout << "\n" << score["Gato"] << endl;
    cout << score["Gauson"] << endl;
    cout << score["JJM"] << endl;
    cout << score["Perreira"] << endl;
    cout << score["Liturgy"] << endl;
    cout << score["Karry"] << endl;
    */
    for (auto &pair : score) {
        cout << pair.first << ": " << pair.second << endl << endl;
    }

    map<string,int> score2;
    score2["Gato"] = 100;
    score2["Gauson"] = 80;
    score2["JJM"] = 95;
    score2["Perreira"] = 78;
    score2["Liturgy"] = 85;
    score2["Karry"] = 69;

    int paige = 1;
    for (auto &pair : score2) {
        cout << "Score No." << paige << " " << pair.first << ": " << pair.second << endl;
        paige++;
    }

    return 0;
}
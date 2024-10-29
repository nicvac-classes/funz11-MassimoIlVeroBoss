#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

string c;
float budget;
cout << "Inserisci un budget iniziale: " << endl;
cin >> budget;
c = leggiOperazione ();
while (c!= "X")
if (c=="R") {
    budget = raccoltaFondi(budget);
    } else { 
        if(c=="P") {
        previsioneBudget(budget);
    } else {
        if(c=="S") {
            budget = spesaImprevista(budget);
        }
    }
}
c = leggiOperazione();

}
cout << "Programma terminato. " << endl;
return 0;
}
string leggiOperazione(string c) {
    string c;
    do {
        cout << "Inserire un comand valido fra: [R] Raccolta fondi | [P] Previsione del budget | [s] Spesa imprevista| [X] Esci dal proogramma" << endl;
        cin >> c;
        while (c!="R" && c!="P" && c!="S" && c!="X")
        return c;
    }
void previsioneBudget(float budget) {
    budget = budget * ((random(31)-10)/100);
    cout << ""Il budget secondo la previsione sarà: " & budget";
}
int raccoltaFondi (int budget) {
    budget = budget + random(101);
    cout << "il budget dopo la raccolta fondi è: "& budget;
    return budget;
}
float spesaImprevista (float budget) {
    float budget;
    budget =budget - random(201) + 100;
    cout << "buget attuale: " & budget;
    return budget;
}
}

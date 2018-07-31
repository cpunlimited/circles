//  Cao Pham


#include <iostream>
using namespace std;

int main() {

    
    string greek[]
    {
        "Alpha", "Beta", "Gamma", "Delta", "Epsilon",
        "Zeta", "Eta", "Theta", "Iota", "Kappa",
        "Lambda", "Mu", "Nu", "Xi", "Omicron", "Pi",
        "Rho", "Sigma", "Tau", "Upsilon", "Phi", "Chi",
        "Psi", "Omega"
    };
    
    string phoenician[]
    {
        "Alep", "Bet", "Gim", "Dalet", "He", "Zayin",
        "Het", "Tet", "Yod", "Kap", "Lamed", "Mem",
        "Nun", "Samek", "Ayin", "Pe", "Res", "Sin",
        "Taw", "Waw", "Qop", "Samek", "Cade", "Ayin"
    };
    
    
    string inputhere = "";
    
    
    while(inputhere != "q") {
        cout << "Please enter a Greek or Phoenician letter (q to quit): " << endl;
        cin >> inputhere;
        
        if (inputhere == "q")
            break;
    
        bool gotit = false;
        
        for (int i=0; i<24; i++) {
            if (greek[i] == inputhere){
                cout << greek[i] << " matches with " << phoenician[i] << endl;
                gotit = true;
                break;
            
            }
            
            if (phoenician[i] == inputhere) {
                cout << phoenician[i]  << " matches with " << greek[i] << endl;
                gotit = true;
                break;
            }
        }
        
        if (!gotit) {
            
            cout << "Can't find that one." << endl;

        }

    }
    
    return 0;
}

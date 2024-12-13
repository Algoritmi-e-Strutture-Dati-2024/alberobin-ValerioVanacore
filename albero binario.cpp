#include <iostream>
template <typename T>
class AlberoBinario {
private:
    T nodi[100];
public:
    AlberoBinario()
    { 
     //inizializza l'albero come vuoto
        for (int i = 0; i < 100; i++) {
              //i nodi sono considerati come assenti 
            nodi[i] = -1;
        }
    }   
    };
    bool alberoVuoto() const;
    {
        for (int i=0; i<100; i++) {
            if (nodi[i] !=-1) {
                //restituisce false se c'è almeno un elemento
                return false; 
    }
    };
    //restituisce vero se l'albero è vuoto
    else return true; 
    };

    void insRadice(const T& valore); {
    //inserisce un valore come radice (posizione 0)
        if (alberoVuoto()) {
             //inserisce il valore nella radice
            nodi[0] = {valore};      
        } else {
            std::cout << "La radice esiste già!\n";
        };
    }; 
            
    T radice() const;
     //restituisce il valore della radice
        if (!alberoVuoto()) {
             //restituisce il valore della radice
            return nodi[0];  
        } 
        //restituisce un valore "vuoto" se l'albero è vuoto
        else std::cout <<"L'albero è vuoto!\n";
           
    
    bool isFoglia(int indice) const; {
        {
        // Verifica se un nodo è una foglia (non ha figli)
        if (!presente [indice]) 
    }
    };
    int sinistro=figlioSinistro(int indice); {
         int figliosinistro = 2 * indice + 1;
    };
    int destro=figlioDestro(int indice);{
         int figliodestro = 2 * indice + 2;
    };
    return (!present[sinistro]&& !presente [destro]);

    void insFiglioSinistro(int indice, const T& valore);
    {
        int destro= figliodestro (indice);
     if (presente [indice] && !presente [destro]) {
     nodi [destro]=valore;
     presente [destro]= true;
}
};
    void insFiglioDestro(int indice, const T& valore);
    {
        int destro= figliodestro (indice);
     if (presente [indice] && !presente [destro]) {
     nodi [destro]=valore;
     presente [destro]= true;

    }
    };
    
        void stampa() const {
    for (int i = 0; i < 100; ++i) {
    if (Presente[i]) {
    int sinistro = figlioSinistro(i);
    int destro = figlioDestro(i);
    std::cout << "Pos"<< i <<", Valore:" << nodi[i]
 << " Figliodestro: " << (isPresent[destro] ? std::to_string(nodi[destro]) : "Nessuno")
 << " Figliosinistro: " << (isPresent[sinistro] ? std::to_string(nodi[sinistro]) : "Nessuno")
<< std::endl;
    }
    }
};

#include <iostream>
#include "Triangle.h"

int main()
{
    // Créer des triangles
    Triangle t1; // Triangle par défaut
    Triangle t2(3.0, 4.0, 5.0); // Triangle avec des côtés spécifiques
    
    // Afficher les triangles
    std::cout << "Triangle 1: " << t1 << std::endl;
    std::cout << "Triangle 2: " << t2 << std::endl;
    
    // Utiliser la méthode d'affichage
    std::cout << "\nUtilisation de la méthode afficher(): " << std::endl;
    t1.afficher();
    t2.afficher();
    
    // Calculer et afficher le périmètre
    std::cout << "\nPérimètre du triangle 1: " << t1.perimetre() << std::endl;
    std::cout << "Périmètre du triangle 2: " << t2.perimetre() << std::endl;
    
    // Accéder aux côtés via les getters
    std::cout << "\nCôtés du triangle 2: " << t2.getCoteA() << ", " 
              << t2.getCoteB() << ", " << t2.getCoteC() << std::endl;
    
    return 0;
}
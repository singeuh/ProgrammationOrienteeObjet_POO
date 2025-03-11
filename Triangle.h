// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

class Triangle {
public:
    // Constructeurs
    Triangle() = default;
    Triangle(double a, double b, double c);
    
    // Méthodes de base
    double perimetre() const;
    void afficher() const;
    
    // Getters
    double getCoteA() const { return m_coteA; }
    double getCoteB() const { return m_coteB; }
    double getCoteC() const { return m_coteC; }
    
    // Surcharge d'opérateurs
    friend std::ostream& operator<<(std::ostream &flux, const Triangle &triangle);
    
private:
    // Attributs
    double m_coteA{1.0};
    double m_coteB{1.0};
    double m_coteC{1.0};
};

#endif // TRIANGLE_H
// Triangle.cpp
#include "Triangle.h"

// Constructeur avec 3 côtés
Triangle::Triangle(double a, double b, double c) : m_coteA{a}, m_coteB{b}, m_coteC{c} {
    // On ne fait pas de vérification dans cette version simplifiée
}

// Calculer le périmètre
double Triangle::perimetre() const {
    return m_coteA + m_coteB + m_coteC;
}

// Afficher les informations du triangle
void Triangle::afficher() const {
    std::cout << "Triangle avec les côtés : " << m_coteA << ", " << m_coteB << ", " << m_coteC << std::endl;
}

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream &flux, const Triangle &triangle) {
    return flux << "Triangle(" << triangle.m_coteA << ", " << triangle.m_coteB << ", " << triangle.m_coteC << ")";
}
//
//  balle.cpp
//  ROBOT_SMLF
//
//  Created by Achraf CHAFAA on 05/12/2019.
//  Copyright © 2019 mac. All rights reserved.
//

#include "balle.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>


Balle::Balle() : m_cordinateB((static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/1000)) +1 ),(static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/700))) +1) , m_rayon(15)
{
    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}

sf::CircleShape Balle::afficherBalle() const{
    

    sf::CircleShape circle;
    circle.setRadius(m_rayon);
    circle.setOutlineColor(sf::Color::Black);
    circle.setFillColor(sf::Color::Transparent);
    circle.setOutlineThickness(5);
    circle.setPosition(m_cordinateB.x, m_cordinateB.y);
    
    return circle;
}

sf::Vector2f Balle::afficherCordinatesB(){
    
    return m_cordinateB ;
}



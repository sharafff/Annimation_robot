//
//  Robot.cpp
//  ROBOT_SMLF
//
//  Created by Achraf CHAFAA on 05/12/2019.
//  Copyright © 2019 mac. All rights reserved.
//

#include "Robot.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>

// Constructeur --> initialisation de la position ( aléatoire ) du robot et de son size
Robot::Robot() : m_cordinateR((static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/1000))+1),(static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/700)))+1), m_sizeR(60, 60)
{
    //initialisation  déjà  faite !
}


// Méthode afficher le robot
sf::RectangleShape Robot::afficherRobot() const {
    
    sf::RectangleShape robot;
    robot.setSize(m_sizeR);
    robot.setPosition(m_cordinateR.x, m_cordinateR.y);
    robot.setFillColor(sf::Color::Black);
    robot.setOutlineColor(sf::Color::Red);
    robot.setOutlineThickness(3);
    
    //retour robot de type RectangleShape
    return robot ;
}

//Methode pour avoir les cordonnées du robot
sf::Vector2f Robot::afficherCordinateR() {
    
    return m_cordinateR ;
}

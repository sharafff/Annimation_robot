//
//  Robot.hpp
//  ROBOT_SMLF
//
//  Created by mac on 05/12/2019.
//  Copyright © 2019 mac. All rights reserved.
//

#ifndef Robot_hpp
#define Robot_hpp
#include <SFML/Graphics.hpp>

#include <stdio.h>

class Robot {
public:
    
    //constructeur et destructeur
    Robot();
    virtual~Robot(){} ;
    //déclaration des methodes
    sf::RectangleShape afficherRobot() const ;
    sf::Vector2f afficherCordinateR();
    
private :
    
    //déclaration des attributs 
    sf::Vector2f m_cordinateR;
    sf::Vector2f m_sizeR;
    
};

#endif /* Robot_hpp */

//
//  balle.hpp
//  ROBOT_SMLF
//
//  Created by mac on 05/12/2019.
//  Copyright © 2019 mac. All rights reserved.
//

#ifndef balle_hpp
#define balle_hpp

#include <stdio.h>

#include <string>
#include <SFML/Graphics.hpp>

class Balle
{

public:
    
    //constructeur et destructeur
    Balle();
    virtual~Balle(){}
    //déclaration des methodes
    sf::CircleShape afficherBalle() const ;
    sf::Vector2f afficherCordinatesB();


private:
    
    
    
    //déclaration des attributs
    sf::Vector2f m_cordinateB; //x compris entre 0 et 1229 et y compris entre 0 et 704
    float m_rayon ;// rayon du cercle
    sf::Color m_color ;
    
    
       
};




#endif /* balle_hpp */

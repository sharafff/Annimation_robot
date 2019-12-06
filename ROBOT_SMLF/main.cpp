#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include "balle.hpp"
#include "Robot.hpp"
#include <math.h>
#include <stdlib.h>
#include <vector>


// fonction get distance entre 2 vecteur (balle et robot )
float distance_function(sf::Vector2f balle_, sf::Vector2f robot_){
    float distance ;
    
    distance = sqrt((abs(balle_.x - robot_.x)*abs(balle_.x - robot_.x)) + abs(balle_.y - robot_.y)*abs(balle_.y - robot_.y)) ;
    
    return distance ;
}





int main(){
    sf::RenderWindow window(sf::VideoMode(1229,704),"Robot Trajectory", sf::Style::Close | sf::Style::Resize);
    
    //creation de deux vecteur de type robot et Balle
    std::vector<Balle> balleV(6) ;
    std::vector<Robot> robotV(3) ;
    std::vector<float> distanceV ;
    
    for(int i = 0 ; i < robotV.capacity() ; i++ ){
        
        for(int j = 0 ; j < balleV.capacity(); j++) {
            
            float distance ;
            distance = distance_function(robotV.at(i).afficherCordinateR(), balleV.at(j).afficherCordinatesB() );
            
            robotV.at(i).m_distanceR.push_back(distance) ;
            //std::cout <<" la distance est : "<< distance << std::endl;
            
        }
        
    }
    
    // afficher le vecteur de distance calculé du premier robot 
    for (auto it = robotV.at(0).m_distanceR.begin(); it != robotV.at(0).m_distanceR.end(); ++it) {
            std::cout << *it << std::endl;
    }
    
    /*Balle A ;
    Robot Z ;*/
    
    while (window.isOpen()){
        sf::Event evnt;

        while (window.pollEvent(evnt)){
            switch (evnt.type) {
                case sf::Event::Closed :
                    window.close();
                    break;
                default:
                    break;
            }
        }
        
        
        window.clear(sf::Color::White);
        
        
        
        /*window.draw(A.afficherBalle() );
        window.draw(Z.afficherRobot());*/
        for(int i = 0 ; i< robotV.capacity(); i++)
        {
        window.draw(robotV.at(i).afficherRobot());
        }
        for(int i = 0 ; i< balleV.capacity(); i++)
        {
        window.draw(balleV.at(i).afficherBalle() );
        }
        

        window.display();
    }
}


/*        float distance_ ;
distance_ = distance_function(B.afficherCordinatesB(),Z.afficherCordinateR());
std::cout << "la distance entre la balle est le robot :   " << distance_ << std::endl; */

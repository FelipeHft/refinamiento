/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

struct coordenada{
    float x;
    float y;
};


void angulos(coordenada a, coordenada b, coordenada c){
    coordenada AB, BC, CA;
    AB.x = b.x - a.x;
    AB.y = b.y - a.y;
    BC.x = c.x - b.x;
    BC.y = c.y - b.y;
    CA.x = a.x - c.x;
    CA.y = a.y - c.y;
    float moduloAB = sqrt((AB.x * AB.x) + (AB.y * AB.y));
    float moduloBC = sqrt((BC.x * BC.x) + (BC.y * BC.y));
    float moduloCA = sqrt((CA.x * CA.x) + (CA.y * CA.y));
    float escalarABCA = (AB.x * CA.x) + (AB.y * CA.y);
    float escalarABBC = (AB.x * BC.x) + (AB.y * BC.y);
    float escalarBCCA = (BC.x * CA.x) + (BC.y * CA.y);
    
    float anguloA = acos (fabs(escalarABCA/(moduloAB * moduloCA)));
    float anguloB = acos (fabs(escalarABBC/(moduloAB * moduloBC)));
    float anguloC = acos (fabs(escalarBCCA/(moduloBC * moduloCA)));
    
    cout<<"Angulo A: "<<anguloA<<endl;
    cout<<"Angulo B: "<<anguloB<<endl;
    cout<<"Angulo C: "<<anguloC<<endl;
}
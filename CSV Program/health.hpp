//
//  health.hpp
//  CSV Program
//
//  Created by Talal Zeini on 12/5/19.
//  Copyright © 2019 Talal Zeini. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class HealthRecord {
    
public:

    explicit HealthRecord(string personName, float personHeight, float personWeight);
    void setName(string personName) {
           aName = personName;
       }
       void setHeight(float personHeight) {
           height = personHeight;
       }
       void setWeight(float personWeight) {
           weight = personWeight;
       }
       string getName() const {
           return aName;
       }
       float getHeight() const {
           return height;
       }
       float getWeight() const {
           return weight;
       }
       float computeBMI() {
           return ((weight / 2.20462) / ((height*0.0254)*(height*0.0254)));
       }

private:
    

    string aName;
    float height;
    float weight;
   
};


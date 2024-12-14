#include <vector>
#include <fstream>
#include "model.h"
#include <string>
#include <iostream>
#include <GLFW/glfw3.h>

namespace engine{

  std::vector<float> vertices = {};
  std::vector<GLubyte> allIndices = {};

  Model::Model(){
  }

  Model::Model(const std::string &filename){
    Load(filename);
  }

  void Model::Load(const std::string &filename){
    std::string var1;
    std::ifstream file(filename);
    
    if(!file.is_open()){
      std::cout << "This file doesn't exist";
      return;
    }

    file >> var1;
    
    while(!file.eof()){
      if(var1 == "v"){
        file >> var1;
	vertices.push_back(stof(var1));
	file >> var1;
	vertices.push_back(stof(var1));
	file >> var1;
	vertices.push_back(stof(var1));
	file >> var1;
      }
      else if(var1 == "f"){
        file >> var1;
	allIndices.push_back(stoi(var1));
	file >> var1;
	allIndices.push_back(stoi(var1));
	file >> var1;
	allIndices.push_back(stoi(var1));
	file >> var1;
      }
      else{
	return;
      }
    }
  }
  void Model::Draw(){
    glColor3f(0.0, 1.0, 1.0);
    glEnableClientState(GL_VERTEX_ARRAY);				        
    glVertexPointer(3,GL_FLOAT,0,vertices.data());		        				        
    glDrawElements(GL_TRIANGLES, allIndices.size(), GL_UNSIGNED_BYTE, allIndices.data());
  }
}

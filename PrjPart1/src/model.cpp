#include <vector>
#include <fstream>
#include <model.h>
#include <string>
#include <iostream>

namespace engine{

  static GLfloat vertices[] = {};
  Glint allIndices[] = {};

  Model::Model(){
  }

  Model::Model(const std::string &filename){
    Load(filename);
    Draw();
  }

  void Model::Load(const std::string &filename){
    std::vector<unsigned int> vertexIndices;
    std::vector<float> vertices;
    std::vector<glm::vec3> temp_vertices;

    string line;
    if(filename == null){
      printf("Nothing in the obj file");
    }
    while(!filename.eof()){
      if(line[0] == 'v'){
	glm::vec3 vertex;
	fscanf(filename, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
	temp_vertices.push_back(vertex);
      }
      else if(line[0] == 'f'){
	std::String vertex1, vertex2, vertex3;
	unsigned int vertexIndex[3];
	vertexIndices.push_back(vertexIndex[0]);
	vertexIndices.push_back(vertexIndex[1]);
	vertexIndices.push_back(vertexIndex[2]);
      }
      else{
      }
    }
    for(int = 0; i<vertex.Indices.size(0); i++){
      int vertexIndex = vertexIndices[i];
      glm::vec3 vertex = temp_vertices[vertexIndex-1];
      
    }
  }
  void Model::Draw(){
    glEnableClientState(GL_VERTEX_ARRAY);				        
 	glEnableClientState(GL_NORMAL_ARRAY);					       	glVertexPointer(3,GL_FLOAT,0,Faces_Triangles);		        
	glNormalPointer(GL_FLOAT,0,normals);				        
	glDrawArrays(GL_TRIANGLES, 0,TotalConnectedTriangles);
	glDisableClientState(GL_VERTEX_ARRAY);				        
	glDisableClientState(GL_NORMAL_ARRAY);	
  }
}

int main(){
  File file = 'cube.obj';
  Model::Model() model;
  model.Load(file);
  model.Draw();
}

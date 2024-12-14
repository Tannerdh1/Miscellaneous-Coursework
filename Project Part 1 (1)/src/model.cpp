#include <vector>
#include <fstream>
#include <model.h>
#include <string>

namespace engine{

  vector<float> vertices = [];

  Model::Model(){
  }

  Model::Model(const std::string &filename){
  }

  void Model::Load(const std::string &finlename){
      std::string var1;
      std::ifstream file(filename);
      file >> var1;
      std::cout << var1 << std::endl;
      file >> var1;
      std::cout << var1 << std::endl;

      while(!file.eof()){
        if(var1 == 'v'){
          file >> var1;
          vertx.push_back(stof(var1));
          file >> var1;
          vertx.push_back(stof(var1));
          file >> var1;
          vertx.push_back(stof(var1));
        }
        if(var1 == 'f'){
          file >> var1;
          vertx.push_back(stof(var1));
          file >> var1;
          vertx.push_back(stof(var1));
          file >> var1;
          vertx.push_back(stof(var1));
        }
      }

  }
  void Model::Draw(){

  }
}

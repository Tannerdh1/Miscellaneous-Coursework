#pragma once
#include <string>

namespace engine{

  class Model{

    private:

    public:

      Model();

      Model(const std::string &filename);

      void Load(const std::string &filename);

      void Draw();

  };
}

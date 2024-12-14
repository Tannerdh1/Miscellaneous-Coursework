#include <cmath>
#include <GLFW/glfw3.h>
#include <math.h>
#include <string>

namespace engine{

  class Model{

    private:

    public:

      Model();

      Model(const std::string afilename);

      void Load(const std::string afilename);

      void Draw();

  };
}

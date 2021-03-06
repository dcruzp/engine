#ifndef Engine_Globals_h
#define Engine_Globals_h

#include <vector>
#include "gameobject.h"
#include <string>

// Has initialization of everything as well as basic functions init, update, render, etc...
namespace engine{
    extern bool run;
    extern std::vector<GameObject*> objects;
    extern std::vector<GameObject*> selected;
    extern std::string project_path;
}


#endif
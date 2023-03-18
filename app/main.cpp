// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>

#include "versionConfig.h"
#include "Dummy.h"

#include "Application.h"

int main(int argc, char * argv[]) {
  std::cout << "C++ CLI v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;

  {
    Dummy d = Dummy();
    if (!d.doSomething()){
      return -1;
    }
  }

  Application app{argc, argv};
  app.run();

  return 0;
}

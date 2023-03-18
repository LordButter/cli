[![Project Status: Active – The project has reached a stable, usable state and is being actively developed.](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)
[![Build Status](https://travis-ci.org/LordButter/cli.svg?branch=master)](https://travis-ci.org/LordButter/cli)
[![Build status](https://ci.appveyor.com/api/projects/status/g9bh9kjl6ocvsvse/branch/master?svg=true)](https://ci.appveyor.com/project/LordButter/cli/branch/master)
[![Coverage Status](https://coveralls.io/repos/github/LordButter/cli/badge.svg?branch=master)](https://coveralls.io/github/LordButter/cli?branch=master)
[![codecov](https://codecov.io/gh/LordButter/cli/branch/master/graph/badge.svg)](https://codecov.io/gh/LordButter/cli)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/eb004322b0d146239a57eb242078e179)](https://www.codacy.com/app/LordButter/cli?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=LordButter/cli&amp;utm_campaign=Badge_Grade)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/LordButter/cli.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/LordButter/cli/context:cpp)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/LordButter/cli.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/LordButter/cli/alerts/)
[![license](https://img.shields.io/badge/license-Unlicense-blue.svg)](https://github.com/LordButter/cli/blob/master/LICENSE)
[![Lines of Code](https://tokei.rs/b1/github/LordButter/cli)](https://github.com/Aaronepower/tokei)
[![Average time to resolve an issue](http://isitmaintained.com/badge/resolution/LordButter/cli.svg)](http://isitmaintained.com/project/LordButter/cli "Average time to resolve an issue")
[![Percentage of issues still open](http://isitmaintained.com/badge/open/LordButter/cli.svg)](http://isitmaintained.com/project/LordButter/cli "Percentage of issues still open")

## Building

Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target.

Example:

``` bash
> mkdir build && cd build
> cmake .. -DCMAKE_BUILD_TYPE=[Debug | Coverage | Release]
> make
> ./main
> make test      # Makes and runs the tests.
> make coverage  # Generate a coverage report.
> make doc       # Generate html documentation.
```
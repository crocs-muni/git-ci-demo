Demo for GitHub and TravisCI integration
========================================

This repository contains a sample C++ project demonstrating the capabilities of integrating GitHub with an integration system TravisCI. 

Automatic build status: TBA

## Functionality

The only supported functionality is the computation of a factorial.

It uses [CATCH](https://github.com/philsquared/Catch), a modern, C++-native, header-only, framework for unit-tests, TDD and BDD, for unit testing the code.

Furthermore, this project illustrates the repository guidelines for projects at CRoCS laboratory. The full guidelines can be found at [CRoCS wiki](http://crcs.cz/wiki/doku.php?id=public:crocs:code_project_guidelines).

## Build process

The project uses GNU make for building. To build, run 'make' in the root directory. The following targets are available:

* **all** (automatic) build both main and testing binary
* **main** build the main binary
* **main-test** build the binary running tests
* **clean** remove all intermediate object files

## Authors and licence

This project is developed at the [Centre for Research on Cryptography and Security](http://www.fi.muni.cz/research/crocs/), [Masaryk University](http://www.muni.cz/), Brno, Czech Republic. The initial version was authored by Martin Ukrop in autumn 2014 for the purposes of [CRoCS OpenLab](http://crcs.cz/openlab).

It's licensed under MIT licence, see the file in the repository root. CATCH (src/catch.hpp) is licenced under Boost Software License.

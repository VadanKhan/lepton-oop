# Lepton Physics Simulation

This project simulates lepton physics interactions using C++. It includes the creation of various leptons, calculation of their four-momenta, and operations such as sum and dot product of four-momenta.

## Files

- `main.cpp`: This is the main script that creates leptons, performs operations on them, and prints out their details.
- `lepton.h` and `lepton.cpp`: These files define the `Lepton` base class. The `Lepton` class represents a lepton in the simulation. It includes methods for getting and setting lepton properties, printing lepton data, and performing operations such as charge conjugation.
*note: if printed destructors are desired then the implementation is included in the destructor definition, just needs to be uncommented*
- `individual_leptons.h` and `individual_leptons.cpp`: These files define the `Electron`, `Muon`, `Neutrino`, and `Tau` classes that inherit from the `Lepton` base class. Each class represents a specific type of lepton and includes additional properties and methods specific to that lepton type.
*note: if printed destructors are desired then the implementations are included in the destructor definitions, just needs to be uncommented*
- `four_momentum.h` and `four_momentum.cpp`: These files define the `FourMomentum` class. The `FourMomentum` class represents the four-momentum of a particle. It includes methods for getting and setting the four-momentum components, and performing operations such as sum and dot product of four-momenta.

## Building and Running the Project

You will need a C++ compiler that supports C++17. The code has been tested with G++ 13.

### Compiling

1. Open a terminal in the project directory.
2. Compile the program using the following command:

**For Windows**: This command will produce the following file in the same directory you're running on:

`g++ assignment-5.cpp lepton.cpp individual_leptons.cpp four_momentum.cpp -o assignment-5.exe -std=gnu++17`

Which you can then execute in a terminal using:

`./assignment-5.exe`

**For Mac**: This command will produce the following file in the same directory you're running on:

`g++ assignment-5.cpp lepton.cpp individual_leptons.cpp four_momentum.cpp -o assignment-5.o -std=gnu++17`

Which you can then execute in a terminal using:

`./assignment-5.o`

Note: One can also use make files to automate this compilation.
**For Windows**: you can install MinGW's makefile.exe and then use `nmake` command when in root directory
Note this will expect the Makefile to be in root directory with name "Makefile"
**For Mac**: Can just run `make`.
Note this will expect the Makefile to be in root directory with name "Makefile"

You can find out more about Makefiles [here](https://www.gnu.org/software/make/manual/html_node/Introduction.html) or [in this simple starter guide](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/) or in this simple starter guide but we won't cover these here.

## Authors

* 10823198 - Lepton Physics Simulator (OOP) - [Student Github](https://github.com/VadanKhan)
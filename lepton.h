#ifndef LEPTON_H
#define LEPTON_H

#include "four_momentum.h"
#include <cmath>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class Lepton
{
protected:
  std::string type;
  int charge = -1;
  std::unique_ptr<FourMomentum> four_momentum;

public:
  // Default constructor
  Lepton() : type{"Ghost"}, charge{1}, four_momentum(std::make_unique<FourMomentum>(0, 0, 0, 0)) {}

  // Parameterized constructor
  Lepton(std::string lepton_type, double E, double px, double py, double pz)
      : type{lepton_type}, charge{1}, four_momentum(std::make_unique<FourMomentum>(E, px, py, pz))
  {
  }

  // Copy constructor
  Lepton(const Lepton &other)
      : four_momentum(std::make_unique<FourMomentum>(*other.four_momentum))
  {
    std::cout << "Calling copy constructor\n";
  }

  // Copy assignment operator
  Lepton &operator=(const Lepton &other)
  {
    std::cout << "Calling copy assignment operator\n";
    if (this != &other)
    {
      four_momentum = std::make_unique<FourMomentum>(*other.four_momentum);
    }
    return *this;
  }

  // Move constructor
  Lepton(Lepton &&other) noexcept
      : four_momentum{std::move(other.four_momentum)}
  {
    std::cout << "Calling move constructor\n";
  }

  // Move assignment operator
  Lepton &operator=(Lepton &&other) noexcept
  {
    std::cout << "Calling move assignment operator\n";
    if (this != &other)
    {
      four_momentum = std::move(other.four_momentum);
    }
    return *this;
  }

  // Destructor
  ~Lepton() {
      // std::cout << "Base Class Destroying " << type << " Lepton \n";
      }

  // {
  //   std::cout << "Base Class Destroying " << type << " Lepton \n";
  //   }

  // Getters and Setters: Type
  std::string get_type() const { return type; }
  void set_type(const std::string& new_type) { type = new_type; }
  // Getters and Setters: Charge
  int get_charge() const { return charge; }
  void set_charge(int new_charge)
  {
    if(new_charge != -1 && new_charge != 1)
    {
      throw std::invalid_argument("Charge must be either -1 or 1.");
    }
    charge = new_charge;
  }
  // Getters and Setters: 4momentum
  FourMomentum *get_four_momentum() const { return four_momentum.get(); }
  void set_four_momentum(FourMomentum* new_four_momentum) { four_momentum.reset(new_four_momentum); }

  // CLASS METHODS

  // Print function prototype
  virtual void print(const std::string &name = "Particle Details") const;

  // charge conjugate prototype
  virtual Lepton& charge_conjugate();
};

#endif
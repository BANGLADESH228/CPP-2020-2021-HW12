#ifndef DELIVERY_H
#define DELIVERY_H

#include "QString"
#include "enums.h"
#include "cargoisready.h"

class Price
{
public:
  virtual int getPrice();

protected:
  int price_;
};

class Delivery : public Price, public cargoIsReady
{
  Continent from_;
  Continent to_;

public:
  void setFrom(Continent from);
  void setTo(Continent to);
  int getPrice();
};

#endif  // DELIVERY_H

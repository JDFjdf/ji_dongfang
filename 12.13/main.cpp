#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include "Package.h"
class OvernightPackage : public Package
{
public:
   OvernightPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double, double );

   void setOvernightFeePerOunce( double );
   double getOvernightFeePerOunce() const;

   virtual double calculateCost() const;
private:
   double overnightFeePerOunce;
};

#include "OvernightPackage.h"
OvernightPackage::OvernightPackage( const string &sName,
   const string &sAddress, const string &sCity, const string &sState,
   int sZIP, const string &rName, const string &rAddress,
   const string &rCity, const string &rState, int rZIP,
   double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sZIP,
      rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setOvernightFeePerOunce( fee );
}
void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
   overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;
}
double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
}
double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
}

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( const string &sName,
   const string &sAddress, const string &sCity, const string &sState,
   int sZIP, const string &rName, const string &rAddress,
   const string &rCity, const string &rState, int rZIP,
   double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sZIP,
      rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setFlatFee( fee );
}
void TwoDayPackage::setFlatFee( double fee )
{
   flatFee = ( fee < 0.0 ) ? 0.0 : fee;
}
double TwoDayPackage::getFlatFee() const
{
   return flatFee;
}

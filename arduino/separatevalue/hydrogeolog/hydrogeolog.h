#ifndef hydrogeolog_h
#define hydrogeolog_h

#include "Arduino.h"
#include <dht.h>
//#include <DHT.h>
//#include "hydrogeolog"

class hydrogeolog
{
    public:
      hydrogeolog(const char delimiter);
      //int split_strings(String inp);    
      //void print_str_ay(int number_opts);
      int split_strings(String inp2,String str_ay2[20]);    
      void print_str_ay(int number_opts,String str_ay2[20]);
      int strcmpi(String str_source, int number_opts,String str_ay2[20]);
      float analog_excite_read(int power_sw_idx,int analog_idx,int number_of_dummies,int number_of_measurement,int measure_time_interval);
      int parse_argument(String str_source, int default_values, int number_opts, String str_ay2[20]);
      void switch_power(int power_sw_idx,int status);
      void dht22_excite_read(int power_sw_idx,int digi_idx,int number_of_dummies,int number_of_measurements,int measure_time_interval); 
      private:
      int _pin;
      String inp2; 
      String str_ay2[20];
      int number_opts;
      const char delimiter=',';

}; // class

#endif


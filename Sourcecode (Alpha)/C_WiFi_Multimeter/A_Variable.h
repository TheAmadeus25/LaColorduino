#ifndef A_Variable_h
#define A_Variable_h

struct {
  short Page = 0;
  
  const long    refresh_delay = 250;
  unsigned long last_refresh  = 0;
} Setting;

struct {
  float VBS = 0;
  float VPW = 0;
  float ShV = 0;
  float ShA = 0;
  float Transfering;

  const long    refresh_delay = 1;
  unsigned long last_refresh  = 0;
} Messuring;

#endif

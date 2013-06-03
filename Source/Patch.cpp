#include "StompBox.h"

float Patch::getParameterValue(PatchParameterId pid){
  float val = 0.0;
  if(stomp)
    val = stomp->getParameter(pid);
  return val;
}

void Patch::getParameterValue(PatchParameterId pid, int &value){
  float val = 0.0;
  if(stomp)
    val = stomp->getParameter(pid);
  value = val*4096;
}

void Patch::getParameterValue(PatchParameterId pid, float &value){
  float val = 0.0;
  if(stomp)
    val = stomp->getParameter(pid);
  value = val;
}

int Patch::getBlockSize(){
  int val = 0;
  if(stomp)
    val = stomp->getBlockSize();
  return val;
}

double Patch::getSampleRate(){
  double val = 0.0;
  if(stomp)
    val = stomp->getSampleRate();
  return val;
}

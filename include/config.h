#ifndef __CONFIG_H_
#define __CONFIG_H_

#include <utility.h>
#include <vector>
#include <dataset.h>

struct Config {
  Config();
    
  float learningRate;
  size_t maxEpoch;
  size_t batchSize;
  size_t trainValidRatio;
  size_t nNonIncEpoch;
  float minValidAccuracy;
  bool randperm;

  vector<bool> layerOn;

  void print() const;
};

#endif // __CONFIG_H_

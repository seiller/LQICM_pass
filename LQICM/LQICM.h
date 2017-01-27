//===-- LQICM.cpp - Loop Quasi-Invariant Chunk Motion Pass ------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
//===----------------------------------------------------------------------===//
//
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TRANSFORMS_SCALAR_LQICM_H
#define LLVM_TRANSFORMS_SCALAR_LQICM_H

#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopPassManager.h"
#include "llvm/IR/PassManager.h"

namespace llvm {

/// Performs Loop Invariant Code Motion Pass.
class LQICMPass : public PassInfoMixin<LQICMPass> {
public:
  PreservedAnalyses run(Loop &L, LoopAnalysisManager &AM);
};
} // end namespace llvm

#endif // LLVM_TRANSFORMS_SCALAR_LQICM_H

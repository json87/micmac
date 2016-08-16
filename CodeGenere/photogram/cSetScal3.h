// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"


class cSetScal3: public cElCompiledFonc
{
   public :

      cSetScal3();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetVar(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocVar;
};
#pragma once
// This file and the associated implementation has been placed in the public domain, waiving all copyright. No restrictions are placed on its use. 
#include "cryptoTools/Common/CLP.h"
namespace tests_libOTe
{

    void Tools_Transpose_Test();
    void Tools_Transpose_View_Test();
    void Tools_Transpose_Bench();


    void OtExt_Kos_Test();
    void OtExt_Kos_fs_Test();
    void OtExt_Kos_ro_Test();
    void DotExt_Kos_Test();
    void OtExt_genBaseOts_Test();
    void OtExt_Chosen_Test();
        //void LzOtExt_Kos_Test();
    //void Kos2OtExt_100Receive_Test();
    void OtExt_Iknp_Test();
    void DotExt_Iknp_Test();

    void Vole_SoftSpokenSmall_Test(const oc::CLP& cmd);
    void DotExt_SoftSpokenSemiHonest_Test(const oc::CLP& cmd);
    void OtExt_SoftSpokenSemiHonest21_Test(const oc::CLP& cmd);
    void DotExt_SoftSpokenMaliciousLeaky_Test(const oc::CLP& cmd);
    void OtExt_SoftSpokenMalicious21_Test(const oc::CLP& cmd);

}

#include "core/inst_handlers/rv64/d/RvdInsts.hpp"
#include "core/ActionGroup.hpp"
#include "core/AtlasState.hpp"
#include "core/AtlasInst.hpp"

namespace atlas
{
    ActionGroup* RvdInsts::fsd_64_compute_address_handler(atlas::AtlasState* state)
    {
        (void)state;
        return nullptr;
    }

    ActionGroup* RvdInsts::fsd_64_handler(atlas::AtlasState* state)
    {
        (void)state;
        ///////////////////////////////////////////////////////////////////////
        // START OF SPIKE CODE

        // require_extension('D');
        // require_fp;
        // MMU.store<uint64_t>(RS1 + insn.s_imm(), FRS2.v[0]);

        // END OF SPIKE CODE
        ///////////////////////////////////////////////////////////////////////
        return nullptr;
    }
} // namespace atlas
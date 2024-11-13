#include "core/ActionGroup.hpp"
#include "core/AtlasState.hpp"
#include "core/AtlasInst.hpp"
#include "core/inst_handlers/rv64/i/RviInsts.hpp"

namespace atlas
{
    ActionGroup* RviInsts::slt_64_handler(atlas::AtlasState* state)
    {
        const AtlasInstPtr & insn = state->getCurrentInst();

        const int64_t rs1_val = insn->getRs1()->read();
        const int64_t rs2_val = insn->getRs2()->read();
        const int64_t rd_val = rs1_val < rs2_val;
        insn->getRd()->write(rd_val);

        return nullptr;
    }
} // namespace atlas
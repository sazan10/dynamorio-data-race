#define LINUX
#define X86_64
#include "dr_api.h"

void dr_init(client_id_t id) {
    instr_t *instr;
    instr = INSTR_CREATE_add_vector(drcontext,
                                    opnd_create_reg(DR_REG_V0),  // Incorrect
                                    opnd_create_reg(DR_REG_V1),  // Incorrect
                                    opnd_create_reg(DR_REG_V2),  // Incorrect
                                    OPND_CREATE_SINGLE());

    dr_fprintf(STDERR, "Created instruction\n");
}

/*
 * Generated by Bluespec Compiler, version 2023.07-7-g527eaa0b (build 527eaa0b)
 * 
 * On Mon Feb 12 11:14:55 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkFSMTestbench.h"


/* Literal declarations */
static unsigned int const UWide_literal_128_h1000000020000000300000004_arr[] = { 4u, 3u, 2u, 1u };
static tUWide const UWide_literal_128_h1000000020000000300000004(128u,
								 UWide_literal_128_h1000000020000000300000004_arr);


/* String declarations */
static std::string const __str_literal_1("Compute", 7u);
static std::string const __str_literal_9("Error: \"CalcUnitFSM.bsv\", line 22, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_dut_action_l22c13] and\n  [RL_dut_action_l29c13, RL_dut_action_l35c13, RL_dut_action_l40c13,\n  RL_dut_action_l45c13] ) fired in the same clock cycle.\n",
					 252u);
static std::string const __str_literal_10("Error: \"CalcUnitFSM.bsv\", line 29, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_dut_action_l29c13] and\n  [RL_dut_action_l35c13, RL_dut_action_l40c13, RL_dut_action_l45c13] ) fired\n  in the same clock cycle.\n",
					  230u);
static std::string const __str_literal_11("Error: \"CalcUnitFSM.bsv\", line 35, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_dut_action_l35c13] and\n  [RL_dut_action_l40c13, RL_dut_action_l45c13] ) fired in the same clock\n  cycle.\n",
					  208u);
static std::string const __str_literal_12("Error: \"CalcUnitFSM.bsv\", line 40, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_dut_action_l40c13] and\n  [RL_dut_action_l45c13] ) fired in the same clock cycle.\n",
					  184u);
static std::string const __str_literal_13("Error: \"FSMTestbench.bsv\", line 11, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l11c13] and\n  [RL_action_l12c16, RL_action_l13c13, RL_action_l17c13] ) fired in the same\n  clock cycle.\n",
					  215u);
static std::string const __str_literal_14("Error: \"FSMTestbench.bsv\", line 12, column 16: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l12c16] and\n  [RL_action_l13c13, RL_action_l17c13] ) fired in the same clock cycle.\n",
					  195u);
static std::string const __str_literal_15("Error: \"FSMTestbench.bsv\", line 13, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l13c13] and\n  [RL_action_l17c13] ) fired in the same clock cycle.\n",
					  177u);
static std::string const __str_literal_6("Start FSM...", 12u);
static std::string const __str_literal_3("add", 3u);
static std::string const __str_literal_8("finish!", 7u);
static std::string const __str_literal_2("got Data!", 9u);
static std::string const __str_literal_4("mul", 3u);
static std::string const __str_literal_7("result: %d", 10u);
static std::string const __str_literal_5("sqrt %d", 7u);


/* Constructor */
MOD_mkFSMTestbench::MOD_mkFSMTestbench(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_abort(simHdl, "abort", this, 1u, (tUInt8)0u),
    INST_dut_abort(simHdl, "dut_abort", this, 1u, (tUInt8)0u),
    INST_dut_adder_inputFIFO(simHdl, "dut_adder_inputFIFO", this, 64u, 2u, (tUInt8)1u, 0u),
    INST_dut_adder_outputFIFO(simHdl, "dut_adder_outputFIFO", this, 32u, 2u, (tUInt8)1u, 0u),
    INST_dut_addresult(simHdl, "dut_addresult", this, 32u),
    INST_dut_candd(simHdl, "dut_candd", this, 64u),
    INST_dut_incoming(simHdl, "dut_incoming", this, 128u, 2u, (tUInt8)1u, 0u),
    INST_dut_mul_inputFIFO(simHdl, "dut_mul_inputFIFO", this, 64u, 2u, (tUInt8)1u, 0u),
    INST_dut_mul_outputFIFO(simHdl, "dut_mul_outputFIFO", this, 32u, 2u, (tUInt8)1u, 0u),
    INST_dut_running(simHdl, "dut_running", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_dut_sqrt_inputFIFO(simHdl, "dut_sqrt_inputFIFO", this, 32u, 2u, (tUInt8)1u, 0u),
    INST_dut_sqrt_outputFIFO(simHdl, "dut_sqrt_outputFIFO", this, 32u, 2u, (tUInt8)1u, 0u),
    INST_dut_start_reg(simHdl, "dut_start_reg", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_dut_start_reg_1(simHdl, "dut_start_reg_1", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_dut_start_reg_2(simHdl, "dut_start_reg_2", this, 1u, (tUInt8)0u),
    INST_dut_start_wire(simHdl, "dut_start_wire", this, 1u, (tUInt8)0u),
    INST_dut_state_can_overlap(simHdl, "dut_state_can_overlap", this, 1u, (tUInt8)1u, (tUInt8)0u),
    INST_dut_state_fired(simHdl, "dut_state_fired", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_dut_state_fired_1(simHdl, "dut_state_fired_1", this, 1u, (tUInt8)0u),
    INST_dut_state_mkFSMstate(simHdl, "dut_state_mkFSMstate", this, 3u, (tUInt8)0u, (tUInt8)0u),
    INST_dut_state_overlap_pw(simHdl, "dut_state_overlap_pw", this, 0u),
    INST_dut_state_set_pw(simHdl, "dut_state_set_pw", this, 0u),
    INST_running(simHdl, "running", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg(simHdl, "start_reg", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_1(simHdl, "start_reg_1", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_2(simHdl, "start_reg_2", this, 1u, (tUInt8)0u),
    INST_start_wire(simHdl, "start_wire", this, 1u, (tUInt8)0u),
    INST_state_can_overlap(simHdl, "state_can_overlap", this, 1u, (tUInt8)1u, (tUInt8)0u),
    INST_state_fired(simHdl, "state_fired", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_state_fired_1(simHdl, "state_fired_1", this, 1u, (tUInt8)0u),
    INST_state_mkFSMstate(simHdl, "state_mkFSMstate", this, 3u, (tUInt8)0u, (tUInt8)0u),
    INST_state_overlap_pw(simHdl, "state_overlap_pw", this, 0u),
    INST_state_set_pw(simHdl, "state_set_pw", this, 0u),
    PORT_RST_N((tUInt8)1u),
    DEF_dut_incoming_first____d61(128u)
{
  symbol_count = 79u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkFSMTestbench::init_symbols_0()
{
  init_symbol(&symbols[0u], "__me_check_10", SYM_RULE);
  init_symbol(&symbols[1u], "__me_check_11", SYM_RULE);
  init_symbol(&symbols[2u], "__me_check_22", SYM_RULE);
  init_symbol(&symbols[3u], "__me_check_23", SYM_RULE);
  init_symbol(&symbols[4u], "__me_check_24", SYM_RULE);
  init_symbol(&symbols[5u], "__me_check_8", SYM_RULE);
  init_symbol(&symbols[6u], "__me_check_9", SYM_RULE);
  init_symbol(&symbols[7u], "abort", SYM_MODULE, &INST_abort);
  init_symbol(&symbols[8u], "dut_abort", SYM_MODULE, &INST_dut_abort);
  init_symbol(&symbols[9u], "dut_adder_inputFIFO", SYM_MODULE, &INST_dut_adder_inputFIFO);
  init_symbol(&symbols[10u], "dut_adder_outputFIFO", SYM_MODULE, &INST_dut_adder_outputFIFO);
  init_symbol(&symbols[11u], "dut_addresult", SYM_MODULE, &INST_dut_addresult);
  init_symbol(&symbols[12u], "dut_candd", SYM_MODULE, &INST_dut_candd);
  init_symbol(&symbols[13u], "dut_incoming", SYM_MODULE, &INST_dut_incoming);
  init_symbol(&symbols[14u], "dut_mul_inputFIFO", SYM_MODULE, &INST_dut_mul_inputFIFO);
  init_symbol(&symbols[15u], "dut_mul_outputFIFO", SYM_MODULE, &INST_dut_mul_outputFIFO);
  init_symbol(&symbols[16u], "dut_running", SYM_MODULE, &INST_dut_running);
  init_symbol(&symbols[17u], "dut_sqrt_inputFIFO", SYM_MODULE, &INST_dut_sqrt_inputFIFO);
  init_symbol(&symbols[18u], "dut_sqrt_outputFIFO", SYM_MODULE, &INST_dut_sqrt_outputFIFO);
  init_symbol(&symbols[19u], "dut_start_reg", SYM_MODULE, &INST_dut_start_reg);
  init_symbol(&symbols[20u], "dut_start_reg_1", SYM_MODULE, &INST_dut_start_reg_1);
  init_symbol(&symbols[21u], "dut_start_reg_2", SYM_MODULE, &INST_dut_start_reg_2);
  init_symbol(&symbols[22u], "dut_start_wire", SYM_MODULE, &INST_dut_start_wire);
  init_symbol(&symbols[23u], "dut_state_can_overlap", SYM_MODULE, &INST_dut_state_can_overlap);
  init_symbol(&symbols[24u], "dut_state_fired", SYM_MODULE, &INST_dut_state_fired);
  init_symbol(&symbols[25u], "dut_state_fired_1", SYM_MODULE, &INST_dut_state_fired_1);
  init_symbol(&symbols[26u], "dut_state_mkFSMstate", SYM_MODULE, &INST_dut_state_mkFSMstate);
  init_symbol(&symbols[27u], "dut_state_overlap_pw", SYM_MODULE, &INST_dut_state_overlap_pw);
  init_symbol(&symbols[28u], "dut_state_set_pw", SYM_MODULE, &INST_dut_state_set_pw);
  init_symbol(&symbols[29u], "RL_action_l11c13", SYM_RULE);
  init_symbol(&symbols[30u], "RL_action_l12c16", SYM_RULE);
  init_symbol(&symbols[31u], "RL_action_l13c13", SYM_RULE);
  init_symbol(&symbols[32u], "RL_action_l17c13", SYM_RULE);
  init_symbol(&symbols[33u], "RL_auto_finish", SYM_RULE);
  init_symbol(&symbols[34u], "RL_auto_start", SYM_RULE);
  init_symbol(&symbols[35u], "RL_dut_action_l22c13", SYM_RULE);
  init_symbol(&symbols[36u], "RL_dut_action_l29c13", SYM_RULE);
  init_symbol(&symbols[37u], "RL_dut_action_l35c13", SYM_RULE);
  init_symbol(&symbols[38u], "RL_dut_action_l40c13", SYM_RULE);
  init_symbol(&symbols[39u], "RL_dut_action_l45c13", SYM_RULE);
  init_symbol(&symbols[40u], "RL_dut_adder_compute", SYM_RULE);
  init_symbol(&symbols[41u], "RL_dut_auto_finish", SYM_RULE);
  init_symbol(&symbols[42u], "RL_dut_auto_start", SYM_RULE);
  init_symbol(&symbols[43u], "RL_dut_fsm_start", SYM_RULE);
  init_symbol(&symbols[44u], "RL_dut_idle_l21c18", SYM_RULE);
  init_symbol(&symbols[45u], "RL_dut_mul_compute", SYM_RULE);
  init_symbol(&symbols[46u], "RL_dut_restart", SYM_RULE);
  init_symbol(&symbols[47u], "RL_dut_sqrt_compute", SYM_RULE);
  init_symbol(&symbols[48u], "RL_dut_start_reg__dreg_update", SYM_RULE);
  init_symbol(&symbols[49u], "RL_dut_state_every", SYM_RULE);
  init_symbol(&symbols[50u], "RL_dut_state_fired__dreg_update", SYM_RULE);
  init_symbol(&symbols[51u], "RL_dut_state_handle_abort", SYM_RULE);
  init_symbol(&symbols[52u], "RL_fsm_start", SYM_RULE);
  init_symbol(&symbols[53u], "RL_idle_l10c18", SYM_RULE);
  init_symbol(&symbols[54u], "RL_restart", SYM_RULE);
  init_symbol(&symbols[55u], "RL_start_reg__dreg_update", SYM_RULE);
  init_symbol(&symbols[56u], "RL_state_every", SYM_RULE);
  init_symbol(&symbols[57u], "RL_state_fired__dreg_update", SYM_RULE);
  init_symbol(&symbols[58u], "RL_state_handle_abort", SYM_RULE);
  init_symbol(&symbols[59u], "running", SYM_MODULE, &INST_running);
  init_symbol(&symbols[60u], "start_reg", SYM_MODULE, &INST_start_reg);
  init_symbol(&symbols[61u], "start_reg_1", SYM_MODULE, &INST_start_reg_1);
  init_symbol(&symbols[62u], "start_reg_2", SYM_MODULE, &INST_start_reg_2);
  init_symbol(&symbols[63u], "start_wire", SYM_MODULE, &INST_start_wire);
  init_symbol(&symbols[64u], "state_can_overlap", SYM_MODULE, &INST_state_can_overlap);
  init_symbol(&symbols[65u], "state_fired", SYM_MODULE, &INST_state_fired);
  init_symbol(&symbols[66u], "state_fired_1", SYM_MODULE, &INST_state_fired_1);
  init_symbol(&symbols[67u], "state_mkFSMstate", SYM_MODULE, &INST_state_mkFSMstate);
  init_symbol(&symbols[68u], "state_overlap_pw", SYM_MODULE, &INST_state_overlap_pw);
  init_symbol(&symbols[69u], "state_set_pw", SYM_MODULE, &INST_state_set_pw);
  init_symbol(&symbols[70u],
	      "WILL_FIRE_RL_action_l11c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l11c13,
	      1u);
  init_symbol(&symbols[71u],
	      "WILL_FIRE_RL_action_l12c16",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l12c16,
	      1u);
  init_symbol(&symbols[72u],
	      "WILL_FIRE_RL_action_l13c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l13c13,
	      1u);
  init_symbol(&symbols[73u],
	      "WILL_FIRE_RL_action_l17c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_action_l17c13,
	      1u);
  init_symbol(&symbols[74u],
	      "WILL_FIRE_RL_dut_action_l22c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_dut_action_l22c13,
	      1u);
  init_symbol(&symbols[75u],
	      "WILL_FIRE_RL_dut_action_l29c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_dut_action_l29c13,
	      1u);
  init_symbol(&symbols[76u],
	      "WILL_FIRE_RL_dut_action_l35c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_dut_action_l35c13,
	      1u);
  init_symbol(&symbols[77u],
	      "WILL_FIRE_RL_dut_action_l40c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_dut_action_l40c13,
	      1u);
  init_symbol(&symbols[78u],
	      "WILL_FIRE_RL_dut_action_l45c13",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_dut_action_l45c13,
	      1u);
}


/* Rule actions */

void MOD_mkFSMTestbench::RL_dut_adder_compute()
{
  tUInt32 DEF_dut_adder_inputFIFO_first_BITS_63_TO_32_PLUS_d_ETC___d7;
  tUInt64 DEF_dut_adder_inputFIFO_first____d4;
  DEF_dut_adder_inputFIFO_first____d4 = INST_dut_adder_inputFIFO.METH_first();
  DEF_dut_adder_inputFIFO_first_BITS_63_TO_32_PLUS_d_ETC___d7 = ((tUInt32)(DEF_dut_adder_inputFIFO_first____d4 >> 32u)) + ((tUInt32)(DEF_dut_adder_inputFIFO_first____d4));
  INST_dut_adder_inputFIFO.METH_deq();
  INST_dut_adder_outputFIFO.METH_enq(DEF_dut_adder_inputFIFO_first_BITS_63_TO_32_PLUS_d_ETC___d7);
}

void MOD_mkFSMTestbench::RL_dut_mul_compute()
{
  tUInt32 DEF_dut_mul_inputFIFO_first__1_BITS_63_TO_32_2_MUL_ETC___d15;
  tUInt64 DEF_dut_mul_inputFIFO_first____d11;
  DEF_dut_mul_inputFIFO_first____d11 = INST_dut_mul_inputFIFO.METH_first();
  DEF_dut_mul_inputFIFO_first__1_BITS_63_TO_32_2_MUL_ETC___d15 = (tUInt32)(((tUInt64)((tUInt32)(DEF_dut_mul_inputFIFO_first____d11 >> 32u))) * ((tUInt64)((tUInt32)(DEF_dut_mul_inputFIFO_first____d11))));
  INST_dut_mul_inputFIFO.METH_deq();
  INST_dut_mul_outputFIFO.METH_enq(DEF_dut_mul_inputFIFO_first__1_BITS_63_TO_32_2_MUL_ETC___d15);
}

void MOD_mkFSMTestbench::RL_dut_sqrt_compute()
{
  tUInt32 DEF_dut_sqrt_inputFIFO_first__9_PLUS_1___d20;
  DEF_dut_sqrt_inputFIFO_first__9_PLUS_1___d20 = INST_dut_sqrt_inputFIFO.METH_first() + 1u;
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_1);
  INST_dut_sqrt_inputFIFO.METH_deq();
  INST_dut_sqrt_outputFIFO.METH_enq(DEF_dut_sqrt_inputFIFO_first__9_PLUS_1___d20);
}

void MOD_mkFSMTestbench::RL_dut_start_reg__dreg_update()
{
  tUInt8 DEF_dut_start_reg_2_whas__1_AND_dut_start_reg_2_wg_ETC___d23;
  DEF_dut_start_reg_2_whas__1_AND_dut_start_reg_2_wg_ETC___d23 = INST_dut_start_reg_2.METH_whas() && INST_dut_start_reg_2.METH_wget();
  INST_dut_start_reg_1.METH_write(DEF_dut_start_reg_2_whas__1_AND_dut_start_reg_2_wg_ETC___d23);
}

void MOD_mkFSMTestbench::RL_dut_state_handle_abort()
{
  INST_dut_state_mkFSMstate.METH_write((tUInt8)0u);
}

void MOD_mkFSMTestbench::RL_dut_state_fired__dreg_update()
{
  tUInt8 DEF_dut_state_fired_1_whas__3_AND_dut_state_fired__ETC___d35;
  DEF_dut_state_fired_1_whas__3_AND_dut_state_fired__ETC___d35 = INST_dut_state_fired_1.METH_whas() && INST_dut_state_fired_1.METH_wget();
  INST_dut_state_fired.METH_write(DEF_dut_state_fired_1_whas__3_AND_dut_state_fired__ETC___d35);
}

void MOD_mkFSMTestbench::RL_dut_state_every()
{
  tUInt8 DEF_dut_state_set_pw_whas__6_OR_NOT_dut_state_over_ETC___d41;
  tUInt8 DEF_dut_state_can_overlap__h2741;
  DEF_dut_state_can_overlap__h2741 = INST_dut_state_can_overlap.METH_read();
  DEF_dut_state_set_pw_whas__6_OR_NOT_dut_state_over_ETC___d41 = INST_dut_state_set_pw.METH_whas() || (!INST_dut_state_overlap_pw.METH_whas() && DEF_dut_state_can_overlap__h2741);
  INST_dut_state_can_overlap.METH_write(DEF_dut_state_set_pw_whas__6_OR_NOT_dut_state_over_ETC___d41);
}

void MOD_mkFSMTestbench::RL_dut_restart()
{
  INST_dut_start_wire.METH_wset((tUInt8)1u);
  INST_dut_start_reg_2.METH_wset((tUInt8)1u);
}

void MOD_mkFSMTestbench::RL_dut_action_l22c13()
{
  tUInt64 DEF_dut_incoming_first__1_BITS_63_TO_32_2_CONCAT_N_ETC___d65;
  tUInt64 DEF_dut_incoming_first__1_BITS_127_TO_64___d66;
  DEF_dut_incoming_first____d61 = INST_dut_incoming.METH_first();
  DEF_dut_incoming_first__1_BITS_127_TO_64___d66 = primExtract64(64u,
								 128u,
								 DEF_dut_incoming_first____d61,
								 32u,
								 127u,
								 32u,
								 64u);
  DEF_dut_incoming_first__1_BITS_63_TO_32_2_CONCAT_N_ETC___d65 = (((tUInt64)(DEF_dut_incoming_first____d61.get_whole_word(1u))) << 32u) | (tUInt64)(-DEF_dut_incoming_first____d61.get_whole_word(0u));
  INST_dut_state_mkFSMstate.METH_write((tUInt8)1u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_2);
  INST_dut_incoming.METH_deq();
  INST_dut_candd.METH_write(DEF_dut_incoming_first__1_BITS_63_TO_32_2_CONCAT_N_ETC___d65);
  INST_dut_adder_inputFIFO.METH_enq(DEF_dut_incoming_first__1_BITS_127_TO_64___d66);
}

void MOD_mkFSMTestbench::RL_dut_action_l29c13()
{
  tUInt64 DEF_dut_candd___d72;
  DEF_dut_adder_outputFIFO_first____d73 = INST_dut_adder_outputFIFO.METH_first();
  DEF_dut_candd___d72 = INST_dut_candd.METH_read();
  INST_dut_state_mkFSMstate.METH_write((tUInt8)2u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_3);
  INST_dut_adder_outputFIFO.METH_deq();
  INST_dut_adder_inputFIFO.METH_enq(DEF_dut_candd___d72);
  INST_dut_addresult.METH_write(DEF_dut_adder_outputFIFO_first____d73);
}

void MOD_mkFSMTestbench::RL_dut_action_l35c13()
{
  tUInt64 DEF_dut_addresult_9_CONCAT_dut_adder_outputFIFO_fi_ETC___d80;
  tUInt32 DEF_b__h11732;
  DEF_dut_adder_outputFIFO_first____d73 = INST_dut_adder_outputFIFO.METH_first();
  DEF_b__h11732 = INST_dut_addresult.METH_read();
  DEF_dut_addresult_9_CONCAT_dut_adder_outputFIFO_fi_ETC___d80 = (((tUInt64)(DEF_b__h11732)) << 32u) | (tUInt64)(DEF_dut_adder_outputFIFO_first____d73);
  INST_dut_state_mkFSMstate.METH_write((tUInt8)3u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_4);
  INST_dut_adder_outputFIFO.METH_deq();
  INST_dut_mul_inputFIFO.METH_enq(DEF_dut_addresult_9_CONCAT_dut_adder_outputFIFO_fi_ETC___d80);
}

void MOD_mkFSMTestbench::RL_dut_action_l40c13()
{
  tUInt64 DEF_dut_mul_outputFIFO_first__6_CONCAT_16___d87;
  DEF_dut_mul_outputFIFO_first__6_CONCAT_16___d87 = (((tUInt64)(INST_dut_mul_outputFIFO.METH_first())) << 32u) | (tUInt64)(16u);
  INST_dut_state_mkFSMstate.METH_write((tUInt8)4u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_3);
  INST_dut_adder_inputFIFO.METH_enq(DEF_dut_mul_outputFIFO_first__6_CONCAT_16___d87);
  INST_dut_mul_outputFIFO.METH_deq();
}

void MOD_mkFSMTestbench::RL_dut_action_l45c13()
{
  tUInt32 DEF_signed_dut_adder_outputFIFO_first__3___d93;
  DEF_dut_adder_outputFIFO_first____d73 = INST_dut_adder_outputFIFO.METH_first();
  DEF_signed_dut_adder_outputFIFO_first__3___d93 = DEF_dut_adder_outputFIFO_first____d73;
  INST_dut_state_mkFSMstate.METH_write((tUInt8)5u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
  INST_dut_adder_outputFIFO.METH_deq();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl,
		   this,
		   "s,-32",
		   &__str_literal_5,
		   DEF_signed_dut_adder_outputFIFO_first__3___d93);
  INST_dut_sqrt_inputFIFO.METH_enq(DEF_dut_adder_outputFIFO_first____d73);
}

void MOD_mkFSMTestbench::RL_dut_idle_l21c18()
{
  INST_dut_state_mkFSMstate.METH_write((tUInt8)0u);
  INST_dut_state_fired_1.METH_wset((tUInt8)1u);
  INST_dut_state_set_pw.METH_wset();
}

void MOD_mkFSMTestbench::RL_dut_fsm_start()
{
  INST_dut_start_wire.METH_wset((tUInt8)1u);
  INST_dut_start_reg_2.METH_wset((tUInt8)1u);
  INST_dut_start_reg.METH_write((tUInt8)0u);
}

void MOD_mkFSMTestbench::RL_dut_auto_start()
{
  INST_dut_start_reg.METH_write((tUInt8)1u);
  INST_dut_running.METH_write((tUInt8)1u);
}

void MOD_mkFSMTestbench::RL_dut_auto_finish()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_finish(sim_hdl, "32", 0u);
}

void MOD_mkFSMTestbench::RL_start_reg__dreg_update()
{
  tUInt8 DEF_start_reg_2_whas__07_AND_start_reg_2_wget__08___d109;
  DEF_start_reg_2_whas__07_AND_start_reg_2_wget__08___d109 = INST_start_reg_2.METH_whas() && INST_start_reg_2.METH_wget();
  INST_start_reg_1.METH_write(DEF_start_reg_2_whas__07_AND_start_reg_2_wget__08___d109);
}

void MOD_mkFSMTestbench::RL_state_handle_abort()
{
  INST_state_mkFSMstate.METH_write((tUInt8)0u);
}

void MOD_mkFSMTestbench::RL_state_fired__dreg_update()
{
  tUInt8 DEF_state_fired_1_whas__19_AND_state_fired_1_wget__20___d121;
  DEF_state_fired_1_whas__19_AND_state_fired_1_wget__20___d121 = INST_state_fired_1.METH_whas() && INST_state_fired_1.METH_wget();
  INST_state_fired.METH_write(DEF_state_fired_1_whas__19_AND_state_fired_1_wget__20___d121);
}

void MOD_mkFSMTestbench::RL_state_every()
{
  tUInt8 DEF_state_set_pw_whas__22_OR_NOT_state_overlap_pw__ETC___d127;
  tUInt8 DEF_state_can_overlap__h14206;
  DEF_state_can_overlap__h14206 = INST_state_can_overlap.METH_read();
  DEF_state_set_pw_whas__22_OR_NOT_state_overlap_pw__ETC___d127 = INST_state_set_pw.METH_whas() || (!INST_state_overlap_pw.METH_whas() && DEF_state_can_overlap__h14206);
  INST_state_can_overlap.METH_write(DEF_state_set_pw_whas__22_OR_NOT_state_overlap_pw__ETC___d127);
}

void MOD_mkFSMTestbench::RL_restart()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
}

void MOD_mkFSMTestbench::RL_action_l11c13()
{
  INST_state_mkFSMstate.METH_write((tUInt8)1u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_6);
}

void MOD_mkFSMTestbench::RL_action_l12c16()
{
  INST_state_mkFSMstate.METH_write((tUInt8)2u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  INST_dut_incoming.METH_enq(UWide_literal_128_h1000000020000000300000004);
}

void MOD_mkFSMTestbench::RL_action_l13c13()
{
  tUInt32 DEF_signed_dut_sqrt_outputFIFO_first__51___d152;
  DEF_signed_dut_sqrt_outputFIFO_first__51___d152 = INST_dut_sqrt_outputFIFO.METH_first();
  INST_state_mkFSMstate.METH_write((tUInt8)3u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl,
		   this,
		   "s,-32",
		   &__str_literal_7,
		   DEF_signed_dut_sqrt_outputFIFO_first__51___d152);
  INST_dut_sqrt_outputFIFO.METH_deq();
}

void MOD_mkFSMTestbench::RL_action_l17c13()
{
  INST_state_mkFSMstate.METH_write((tUInt8)4u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_8);
}

void MOD_mkFSMTestbench::RL_idle_l10c18()
{
  INST_state_mkFSMstate.METH_write((tUInt8)0u);
  INST_state_fired_1.METH_wset((tUInt8)1u);
  INST_state_set_pw.METH_wset();
}

void MOD_mkFSMTestbench::RL_fsm_start()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
  INST_start_reg.METH_write((tUInt8)0u);
}

void MOD_mkFSMTestbench::RL_auto_start()
{
  INST_start_reg.METH_write((tUInt8)1u);
  INST_running.METH_write((tUInt8)1u);
}

void MOD_mkFSMTestbench::RL_auto_finish()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_finish(sim_hdl, "32", 0u);
}

void MOD_mkFSMTestbench::__me_check_8()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_dut_action_l22c13 && (((DEF_WILL_FIRE_RL_dut_action_l29c13 || DEF_WILL_FIRE_RL_dut_action_l35c13) || DEF_WILL_FIRE_RL_dut_action_l40c13) || DEF_WILL_FIRE_RL_dut_action_l45c13))
      dollar_error(sim_hdl, this, "s", &__str_literal_9);
}

void MOD_mkFSMTestbench::__me_check_9()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_dut_action_l29c13 && ((DEF_WILL_FIRE_RL_dut_action_l35c13 || DEF_WILL_FIRE_RL_dut_action_l40c13) || DEF_WILL_FIRE_RL_dut_action_l45c13))
      dollar_error(sim_hdl, this, "s", &__str_literal_10);
}

void MOD_mkFSMTestbench::__me_check_10()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_dut_action_l35c13 && (DEF_WILL_FIRE_RL_dut_action_l40c13 || DEF_WILL_FIRE_RL_dut_action_l45c13))
      dollar_error(sim_hdl, this, "s", &__str_literal_11);
}

void MOD_mkFSMTestbench::__me_check_11()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_dut_action_l40c13 && DEF_WILL_FIRE_RL_dut_action_l45c13)
      dollar_error(sim_hdl, this, "s", &__str_literal_12);
}

void MOD_mkFSMTestbench::__me_check_22()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l11c13 && ((DEF_WILL_FIRE_RL_action_l12c16 || DEF_WILL_FIRE_RL_action_l13c13) || DEF_WILL_FIRE_RL_action_l17c13))
      dollar_error(sim_hdl, this, "s", &__str_literal_13);
}

void MOD_mkFSMTestbench::__me_check_23()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l12c16 && (DEF_WILL_FIRE_RL_action_l13c13 || DEF_WILL_FIRE_RL_action_l17c13))
      dollar_error(sim_hdl, this, "s", &__str_literal_14);
}

void MOD_mkFSMTestbench::__me_check_24()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_action_l13c13 && DEF_WILL_FIRE_RL_action_l17c13)
      dollar_error(sim_hdl, this, "s", &__str_literal_15);
}


/* Methods */


/* Reset routines */

void MOD_mkFSMTestbench::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_state_mkFSMstate.reset_RST(ARG_rst_in);
  INST_state_fired.reset_RST(ARG_rst_in);
  INST_state_can_overlap.reset_RST(ARG_rst_in);
  INST_start_reg_1.reset_RST(ARG_rst_in);
  INST_start_reg.reset_RST(ARG_rst_in);
  INST_running.reset_RST(ARG_rst_in);
  INST_dut_state_mkFSMstate.reset_RST(ARG_rst_in);
  INST_dut_state_fired.reset_RST(ARG_rst_in);
  INST_dut_state_can_overlap.reset_RST(ARG_rst_in);
  INST_dut_start_reg_1.reset_RST(ARG_rst_in);
  INST_dut_start_reg.reset_RST(ARG_rst_in);
  INST_dut_sqrt_outputFIFO.reset_RST(ARG_rst_in);
  INST_dut_sqrt_inputFIFO.reset_RST(ARG_rst_in);
  INST_dut_running.reset_RST(ARG_rst_in);
  INST_dut_mul_outputFIFO.reset_RST(ARG_rst_in);
  INST_dut_mul_inputFIFO.reset_RST(ARG_rst_in);
  INST_dut_incoming.reset_RST(ARG_rst_in);
  INST_dut_adder_outputFIFO.reset_RST(ARG_rst_in);
  INST_dut_adder_inputFIFO.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkFSMTestbench::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkFSMTestbench::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_abort.dump_state(indent + 2u);
  INST_dut_abort.dump_state(indent + 2u);
  INST_dut_adder_inputFIFO.dump_state(indent + 2u);
  INST_dut_adder_outputFIFO.dump_state(indent + 2u);
  INST_dut_addresult.dump_state(indent + 2u);
  INST_dut_candd.dump_state(indent + 2u);
  INST_dut_incoming.dump_state(indent + 2u);
  INST_dut_mul_inputFIFO.dump_state(indent + 2u);
  INST_dut_mul_outputFIFO.dump_state(indent + 2u);
  INST_dut_running.dump_state(indent + 2u);
  INST_dut_sqrt_inputFIFO.dump_state(indent + 2u);
  INST_dut_sqrt_outputFIFO.dump_state(indent + 2u);
  INST_dut_start_reg.dump_state(indent + 2u);
  INST_dut_start_reg_1.dump_state(indent + 2u);
  INST_dut_start_reg_2.dump_state(indent + 2u);
  INST_dut_start_wire.dump_state(indent + 2u);
  INST_dut_state_can_overlap.dump_state(indent + 2u);
  INST_dut_state_fired.dump_state(indent + 2u);
  INST_dut_state_fired_1.dump_state(indent + 2u);
  INST_dut_state_mkFSMstate.dump_state(indent + 2u);
  INST_dut_state_overlap_pw.dump_state(indent + 2u);
  INST_dut_state_set_pw.dump_state(indent + 2u);
  INST_running.dump_state(indent + 2u);
  INST_start_reg.dump_state(indent + 2u);
  INST_start_reg_1.dump_state(indent + 2u);
  INST_start_reg_2.dump_state(indent + 2u);
  INST_start_wire.dump_state(indent + 2u);
  INST_state_can_overlap.dump_state(indent + 2u);
  INST_state_fired.dump_state(indent + 2u);
  INST_state_fired_1.dump_state(indent + 2u);
  INST_state_mkFSMstate.dump_state(indent + 2u);
  INST_state_overlap_pw.dump_state(indent + 2u);
  INST_state_set_pw.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkFSMTestbench::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 45u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l11c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l12c16", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l13c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_action_l17c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_dut_action_l22c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_dut_action_l29c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_dut_action_l35c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_dut_action_l40c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_dut_action_l45c13", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "dut_adder_outputFIFO_first____d73", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "dut_incoming_first____d61", 128u);
  num = INST_abort.dump_VCD_defs(num);
  num = INST_dut_abort.dump_VCD_defs(num);
  num = INST_dut_adder_inputFIFO.dump_VCD_defs(num);
  num = INST_dut_adder_outputFIFO.dump_VCD_defs(num);
  num = INST_dut_addresult.dump_VCD_defs(num);
  num = INST_dut_candd.dump_VCD_defs(num);
  num = INST_dut_incoming.dump_VCD_defs(num);
  num = INST_dut_mul_inputFIFO.dump_VCD_defs(num);
  num = INST_dut_mul_outputFIFO.dump_VCD_defs(num);
  num = INST_dut_running.dump_VCD_defs(num);
  num = INST_dut_sqrt_inputFIFO.dump_VCD_defs(num);
  num = INST_dut_sqrt_outputFIFO.dump_VCD_defs(num);
  num = INST_dut_start_reg.dump_VCD_defs(num);
  num = INST_dut_start_reg_1.dump_VCD_defs(num);
  num = INST_dut_start_reg_2.dump_VCD_defs(num);
  num = INST_dut_start_wire.dump_VCD_defs(num);
  num = INST_dut_state_can_overlap.dump_VCD_defs(num);
  num = INST_dut_state_fired.dump_VCD_defs(num);
  num = INST_dut_state_fired_1.dump_VCD_defs(num);
  num = INST_dut_state_mkFSMstate.dump_VCD_defs(num);
  num = INST_dut_state_overlap_pw.dump_VCD_defs(num);
  num = INST_dut_state_set_pw.dump_VCD_defs(num);
  num = INST_running.dump_VCD_defs(num);
  num = INST_start_reg.dump_VCD_defs(num);
  num = INST_start_reg_1.dump_VCD_defs(num);
  num = INST_start_reg_2.dump_VCD_defs(num);
  num = INST_start_wire.dump_VCD_defs(num);
  num = INST_state_can_overlap.dump_VCD_defs(num);
  num = INST_state_fired.dump_VCD_defs(num);
  num = INST_state_fired_1.dump_VCD_defs(num);
  num = INST_state_mkFSMstate.dump_VCD_defs(num);
  num = INST_state_overlap_pw.dump_VCD_defs(num);
  num = INST_state_set_pw.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkFSMTestbench::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkFSMTestbench &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkFSMTestbench::vcd_defs(tVCDDumpType dt, MOD_mkFSMTestbench &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 128u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l11c13) != DEF_WILL_FIRE_RL_action_l11c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l11c13, 1u);
	backing.DEF_WILL_FIRE_RL_action_l11c13 = DEF_WILL_FIRE_RL_action_l11c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l12c16) != DEF_WILL_FIRE_RL_action_l12c16)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l12c16, 1u);
	backing.DEF_WILL_FIRE_RL_action_l12c16 = DEF_WILL_FIRE_RL_action_l12c16;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l13c13) != DEF_WILL_FIRE_RL_action_l13c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l13c13, 1u);
	backing.DEF_WILL_FIRE_RL_action_l13c13 = DEF_WILL_FIRE_RL_action_l13c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_action_l17c13) != DEF_WILL_FIRE_RL_action_l17c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_action_l17c13, 1u);
	backing.DEF_WILL_FIRE_RL_action_l17c13 = DEF_WILL_FIRE_RL_action_l17c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_dut_action_l22c13) != DEF_WILL_FIRE_RL_dut_action_l22c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_dut_action_l22c13, 1u);
	backing.DEF_WILL_FIRE_RL_dut_action_l22c13 = DEF_WILL_FIRE_RL_dut_action_l22c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_dut_action_l29c13) != DEF_WILL_FIRE_RL_dut_action_l29c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_dut_action_l29c13, 1u);
	backing.DEF_WILL_FIRE_RL_dut_action_l29c13 = DEF_WILL_FIRE_RL_dut_action_l29c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_dut_action_l35c13) != DEF_WILL_FIRE_RL_dut_action_l35c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_dut_action_l35c13, 1u);
	backing.DEF_WILL_FIRE_RL_dut_action_l35c13 = DEF_WILL_FIRE_RL_dut_action_l35c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_dut_action_l40c13) != DEF_WILL_FIRE_RL_dut_action_l40c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_dut_action_l40c13, 1u);
	backing.DEF_WILL_FIRE_RL_dut_action_l40c13 = DEF_WILL_FIRE_RL_dut_action_l40c13;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_dut_action_l45c13) != DEF_WILL_FIRE_RL_dut_action_l45c13)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_dut_action_l45c13, 1u);
	backing.DEF_WILL_FIRE_RL_dut_action_l45c13 = DEF_WILL_FIRE_RL_dut_action_l45c13;
      }
      ++num;
      if ((backing.DEF_dut_adder_outputFIFO_first____d73) != DEF_dut_adder_outputFIFO_first____d73)
      {
	vcd_write_val(sim_hdl, num, DEF_dut_adder_outputFIFO_first____d73, 32u);
	backing.DEF_dut_adder_outputFIFO_first____d73 = DEF_dut_adder_outputFIFO_first____d73;
      }
      ++num;
      if ((backing.DEF_dut_incoming_first____d61) != DEF_dut_incoming_first____d61)
      {
	vcd_write_val(sim_hdl, num, DEF_dut_incoming_first____d61, 128u);
	backing.DEF_dut_incoming_first____d61 = DEF_dut_incoming_first____d61;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l11c13, 1u);
      backing.DEF_WILL_FIRE_RL_action_l11c13 = DEF_WILL_FIRE_RL_action_l11c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l12c16, 1u);
      backing.DEF_WILL_FIRE_RL_action_l12c16 = DEF_WILL_FIRE_RL_action_l12c16;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l13c13, 1u);
      backing.DEF_WILL_FIRE_RL_action_l13c13 = DEF_WILL_FIRE_RL_action_l13c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_action_l17c13, 1u);
      backing.DEF_WILL_FIRE_RL_action_l17c13 = DEF_WILL_FIRE_RL_action_l17c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_dut_action_l22c13, 1u);
      backing.DEF_WILL_FIRE_RL_dut_action_l22c13 = DEF_WILL_FIRE_RL_dut_action_l22c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_dut_action_l29c13, 1u);
      backing.DEF_WILL_FIRE_RL_dut_action_l29c13 = DEF_WILL_FIRE_RL_dut_action_l29c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_dut_action_l35c13, 1u);
      backing.DEF_WILL_FIRE_RL_dut_action_l35c13 = DEF_WILL_FIRE_RL_dut_action_l35c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_dut_action_l40c13, 1u);
      backing.DEF_WILL_FIRE_RL_dut_action_l40c13 = DEF_WILL_FIRE_RL_dut_action_l40c13;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_dut_action_l45c13, 1u);
      backing.DEF_WILL_FIRE_RL_dut_action_l45c13 = DEF_WILL_FIRE_RL_dut_action_l45c13;
      vcd_write_val(sim_hdl, num++, DEF_dut_adder_outputFIFO_first____d73, 32u);
      backing.DEF_dut_adder_outputFIFO_first____d73 = DEF_dut_adder_outputFIFO_first____d73;
      vcd_write_val(sim_hdl, num++, DEF_dut_incoming_first____d61, 128u);
      backing.DEF_dut_incoming_first____d61 = DEF_dut_incoming_first____d61;
    }
}

void MOD_mkFSMTestbench::vcd_prims(tVCDDumpType dt, MOD_mkFSMTestbench &backing)
{
  INST_abort.dump_VCD(dt, backing.INST_abort);
  INST_dut_abort.dump_VCD(dt, backing.INST_dut_abort);
  INST_dut_adder_inputFIFO.dump_VCD(dt, backing.INST_dut_adder_inputFIFO);
  INST_dut_adder_outputFIFO.dump_VCD(dt, backing.INST_dut_adder_outputFIFO);
  INST_dut_addresult.dump_VCD(dt, backing.INST_dut_addresult);
  INST_dut_candd.dump_VCD(dt, backing.INST_dut_candd);
  INST_dut_incoming.dump_VCD(dt, backing.INST_dut_incoming);
  INST_dut_mul_inputFIFO.dump_VCD(dt, backing.INST_dut_mul_inputFIFO);
  INST_dut_mul_outputFIFO.dump_VCD(dt, backing.INST_dut_mul_outputFIFO);
  INST_dut_running.dump_VCD(dt, backing.INST_dut_running);
  INST_dut_sqrt_inputFIFO.dump_VCD(dt, backing.INST_dut_sqrt_inputFIFO);
  INST_dut_sqrt_outputFIFO.dump_VCD(dt, backing.INST_dut_sqrt_outputFIFO);
  INST_dut_start_reg.dump_VCD(dt, backing.INST_dut_start_reg);
  INST_dut_start_reg_1.dump_VCD(dt, backing.INST_dut_start_reg_1);
  INST_dut_start_reg_2.dump_VCD(dt, backing.INST_dut_start_reg_2);
  INST_dut_start_wire.dump_VCD(dt, backing.INST_dut_start_wire);
  INST_dut_state_can_overlap.dump_VCD(dt, backing.INST_dut_state_can_overlap);
  INST_dut_state_fired.dump_VCD(dt, backing.INST_dut_state_fired);
  INST_dut_state_fired_1.dump_VCD(dt, backing.INST_dut_state_fired_1);
  INST_dut_state_mkFSMstate.dump_VCD(dt, backing.INST_dut_state_mkFSMstate);
  INST_dut_state_overlap_pw.dump_VCD(dt, backing.INST_dut_state_overlap_pw);
  INST_dut_state_set_pw.dump_VCD(dt, backing.INST_dut_state_set_pw);
  INST_running.dump_VCD(dt, backing.INST_running);
  INST_start_reg.dump_VCD(dt, backing.INST_start_reg);
  INST_start_reg_1.dump_VCD(dt, backing.INST_start_reg_1);
  INST_start_reg_2.dump_VCD(dt, backing.INST_start_reg_2);
  INST_start_wire.dump_VCD(dt, backing.INST_start_wire);
  INST_state_can_overlap.dump_VCD(dt, backing.INST_state_can_overlap);
  INST_state_fired.dump_VCD(dt, backing.INST_state_fired);
  INST_state_fired_1.dump_VCD(dt, backing.INST_state_fired_1);
  INST_state_mkFSMstate.dump_VCD(dt, backing.INST_state_mkFSMstate);
  INST_state_overlap_pw.dump_VCD(dt, backing.INST_state_overlap_pw);
  INST_state_set_pw.dump_VCD(dt, backing.INST_state_set_pw);
}

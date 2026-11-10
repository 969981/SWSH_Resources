/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003896a0; name: FUN_003896a0
 */


int FUN_003896a0(long param_1,undefined8 param_2,int param_3)

{
  undefined1 local_28 [8];
  
  FUN_0038a220(param_2,param_1);
  local_28[0] = 0;
  FUN_0038a7f0(param_2,param_3 + 1,param_1 + 0x30,&PTR_s_eACTOR0_025e7b30,local_28);
  FUN_0038ac40(param_2,param_1 + 0x98,param_3 + 5);
  FUN_00389770(param_2,param_1 + 200,param_3 + 6);
  FUN_00389930(param_2,param_1 + 0xe8,param_3 + 7);
  FUN_00389ae0(param_2,param_1 + 0x108,param_3 + 8);
  FUN_00389c90(param_2,param_1 + 0x128,param_3 + 9);
  FUN_00389e40(param_2,param_1 + 0x148,param_3 + 10);
  FUN_00389ff0(param_2,param_1 + 0x180,param_3 + 0xc);
  return param_3 + 0xf;
}



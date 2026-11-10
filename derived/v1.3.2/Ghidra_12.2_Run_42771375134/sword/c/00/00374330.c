/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00374330; name: FUN_00374330
 */


int FUN_00374330(long param_1,undefined8 param_2,int param_3)

{
  undefined1 local_28 [8];
  
  FUN_00374eb0(param_2,param_1);
  local_28[0] = 0;
  FUN_00375480(param_2,param_3 + 1,param_1 + 0x30,&PTR_s_eACTOR0_025e7b30,local_28);
  FUN_003758d0(param_2,param_1 + 0x98,param_3 + 5);
  FUN_00374400(param_2,param_1 + 200,param_3 + 6);
  FUN_003745c0(param_2,param_1 + 0xe8,param_3 + 7);
  FUN_00374770(param_2,param_1 + 0x108,param_3 + 8);
  FUN_00374920(param_2,param_1 + 0x128,param_3 + 9);
  FUN_00374ad0(param_2,param_1 + 0x148,param_3 + 10);
  FUN_00374c80(param_2,param_1 + 0x180,param_3 + 0xc);
  return param_3 + 0xf;
}



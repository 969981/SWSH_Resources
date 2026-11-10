/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d60c50; name: FUN_00d60c50
 */


void FUN_00d60c50(long param_1,undefined8 param_2)

{
  undefined4 local_24;
  
  FUN_015d3f80(param_2,&local_24,1);
  FUN_015d45e0(param_2,param_1 + 0x34c,0x20,1);
  FUN_015d45e0(param_2,param_1 + 0x36c,0x20,1);
  FUN_015d45e0(param_2,param_1 + 0x38c,0x20,1);
  *(undefined4 *)(param_1 + 0x348) = local_24;
  return;
}



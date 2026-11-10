/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a460; name: FUN_0115a460
 */


void FUN_0115a460(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffdc80(param_1,"grid_VSSorting");
  param_2 = param_2 & 1;
  FUN_016b2d70(uVar1,param_2);
  lVar2 = FUN_00ffdbc0(param_1,0x7015bd395450dae3);
  *(byte *)(lVar2 + 0x142) = param_2;
  lVar2 = FUN_00ffdbc0(param_1,0x7015bc395450d930);
  *(byte *)(lVar2 + 0x142) = param_2;
  lVar2 = FUN_00ffdbc0(param_1,0x7015cb395450f2ad);
  *(byte *)(lVar2 + 0x142) = param_2;
  lVar2 = FUN_00ffdbc0(param_1,0x7015ca395450f0fa);
  *(byte *)(lVar2 + 0x142) = param_2;
  return;
}



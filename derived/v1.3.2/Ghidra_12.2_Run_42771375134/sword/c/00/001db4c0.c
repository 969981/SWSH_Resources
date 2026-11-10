/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001db4c0; name: FUN_001db4c0
 */


void FUN_001db4c0(long param_1,float *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  
  FUN_001e1e40();
  FUN_001db540(param_1,param_2,0,param_3);
  if ((*param_2 == 0.0) && (param_2[1] == 0.0)) {
    bVar1 = param_2[2] != 0.0;
  }
  else {
    bVar1 = true;
  }
  FUN_001d9290(*(undefined8 *)(param_1 + 0x180),bVar1,param_4 & 1);
  return;
}



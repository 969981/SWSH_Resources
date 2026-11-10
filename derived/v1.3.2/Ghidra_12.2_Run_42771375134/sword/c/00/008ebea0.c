/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ebea0; name: FUN_008ebea0
 */


int FUN_008ebea0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = (param_2 * param_1 * ((uint)(param_3 << 1) / 5 + 2)) / param_4;
  }
  return uVar1 / 0x32 + 2;
}



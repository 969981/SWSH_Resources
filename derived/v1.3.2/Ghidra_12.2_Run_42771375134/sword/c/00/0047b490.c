/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b490; name: FUN_0047b490
 */


undefined8 FUN_0047b490(long param_1,long param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    return 2;
  }
  if (param_2 == 0) {
    *param_3 = 3;
  }
  else {
    uVar1 = *param_3;
    if (2 < uVar1) {
      uVar1 = 3;
    }
    *param_3 = uVar1;
    FUN_004b1610(*(undefined8 *)(param_1 + 0x40),uVar1,param_2);
  }
  *param_4 = *(float *)(param_1 + 0x50) * DAT_01d4be08;
  return 1;
}



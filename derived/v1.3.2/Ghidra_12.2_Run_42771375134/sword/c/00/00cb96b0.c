/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb96b0; name: FUN_00cb96b0
 */


undefined8 FUN_00cb96b0(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x130) == *param_2) {
    uVar1 = FUN_00cc1140(param_1 + 0x88,param_3);
    return uVar1;
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e34a0; name: FUN_007e34a0
 */


undefined8 FUN_007e34a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_x1;
  
  iVar2 = FUN_007e34d0(*(undefined8 *)(param_1 + 0x20),param_1,param_2);
  uVar1 = extraout_x1;
  if (iVar2 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



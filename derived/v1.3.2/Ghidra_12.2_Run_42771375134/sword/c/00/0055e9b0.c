/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055e9b0; name: FUN_0055e9b0
 */


undefined8 FUN_0055e9b0(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1f8) + (long)param_2 * 0x60;
  uVar1 = *param_3;
  *(undefined8 *)(lVar2 + 0x54) = param_3[1];
  *(undefined8 *)(lVar2 + 0x4c) = uVar1;
  return 0;
}



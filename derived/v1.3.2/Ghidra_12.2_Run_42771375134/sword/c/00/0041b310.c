/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b310; name: FUN_0041b310
 */


undefined8 FUN_0041b310(long param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 == 0) || (param_3 + param_2 <= *(int *)(lVar1 + 0x10))) {
    *param_4 = 0;
    return 0x11;
  }
  *param_4 = lVar1;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0x2d;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return 0x2d;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return 0x2d;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2550; name: FUN_008e2550
 */


undefined8 FUN_008e2550(long param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x1c;
  piVar1 = (int *)(param_1 + 0x2c8);
  if ((param_3 & 1) == 0) {
    piVar1 = (int *)(param_1 + 0x2d4);
  }
  if ((*piVar1 == 0) || ((char)piVar1[1] != *(char *)((long)piVar1 + 5))) {
    return 0;
  }
  return 1;
}



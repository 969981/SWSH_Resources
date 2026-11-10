/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdfae0; name: FUN_00fdfae0
 */


bool FUN_00fdfae0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 1) {
    if (iVar1 != 0) goto LAB_00fdfb18;
    FUN_00fdfb30(param_1);
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  iVar1 = 2;
  *(undefined4 *)(param_1 + 0x20) = 2;
LAB_00fdfb18:
  return iVar1 == 2;
}



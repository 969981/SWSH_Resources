/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde5b0; name: FUN_00fde5b0
 */


bool FUN_00fde5b0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 1) {
    if (iVar1 != 0) goto LAB_00fde5fc;
    FUN_00fde610(param_1);
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0xc0) == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
LAB_00fde5fc:
  return iVar1 == 2;
}



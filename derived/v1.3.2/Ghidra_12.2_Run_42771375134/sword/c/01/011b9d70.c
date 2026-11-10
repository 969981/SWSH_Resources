/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b9d70; name: FUN_011b9d70
 */


void FUN_011b9d70(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x6d8) != '\0') {
    iVar1 = FUN_012ae400(param_1 + 0x6c0);
    *(int *)(param_1 + 0x70) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x6d8) = 0;
    }
    uVar2 = *(uint *)(param_1 + 0x6d4);
    if ((uVar2 % 10 == 0) || (*(char *)(param_1 + 0x6d8) == '\0')) {
      FUN_011b9e00(param_1);
      uVar2 = *(uint *)(param_1 + 0x6d4);
    }
    *(uint *)(param_1 + 0x6d4) = uVar2 + 1;
  }
  if (*(long *)(param_1 + 0x6e0) == 0) {
    return;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e2dd0; name: FUN_011e2dd0
 */


void FUN_011e2dd0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xcf8) != '\0') {
    iVar1 = FUN_012ae400(param_1 + 0xce0);
    *(int *)(param_1 + 0x70) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0xcd8) == 0)) {
      *(undefined1 *)(param_1 + 0xcf8) = 0;
    }
    uVar2 = *(uint *)(param_1 + 0xcf4);
    if (((uVar2 % 10 == 0) || (*(char *)(param_1 + 0xcf8) == '\0')) && ((param_2 & 1) != 0)) {
      FUN_011e2e70(param_1);
      uVar2 = *(uint *)(param_1 + 0xcf4);
    }
    *(uint *)(param_1 + 0xcf4) = uVar2 + 1;
  }
  if (*(long *)(param_1 + 0xd00) == 0) {
    return;
  }
  return;
}



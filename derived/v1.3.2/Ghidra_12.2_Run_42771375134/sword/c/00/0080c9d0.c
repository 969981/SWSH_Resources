/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c9d0; name: FUN_0080c9d0
 */


void FUN_0080c9d0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x30);
  if (param_2 <= *(int *)(param_1 + 0x30)) {
    iVar2 = param_2;
  }
  iVar3 = *(int *)(param_1 + 0x18) - iVar2;
  *(int *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 8) = lVar1;
  if (iVar3 == 0 || *(int *)(param_1 + 0x18) < iVar2) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(long *)(param_1 + 8) = lVar1 - iVar3;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cb90; name: FUN_0080cb90
 */


bool FUN_0080cb90(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x30);
  if (param_2 <= *(int *)(param_1 + 0x30)) {
    iVar2 = param_2;
  }
  cVar3 = *(char *)(param_1 + 0x24);
  *(int *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 8) = lVar1;
  iVar4 = *(int *)(param_1 + 0x18) - iVar2;
  if (iVar4 == 0 || *(int *)(param_1 + 0x18) < iVar2) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(int *)(param_1 + 0x2c) = iVar4;
    *(long *)(param_1 + 8) = lVar1 - iVar4;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return cVar3 != '\0';
}



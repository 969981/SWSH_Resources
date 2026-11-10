/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006478c0; name: FUN_006478c0
 */


undefined8 FUN_006478c0(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (0 < param_2) {
    iVar1 = param_2;
    if (*(int *)(param_1 + 0x17c) <= param_2) {
      iVar1 = *(int *)(param_1 + 0x17c);
    }
    param_2 = param_2 - iVar1;
    *(int *)(param_1 + 0x178) = iVar1;
    FUN_006475b0(param_1,param_2 == 0);
    while (0 < param_2) {
      param_3 = param_3 + (long)iVar1 * (long)*(int *)(param_1 + 0x174);
      iVar2 = *(int *)(param_1 + 0x17c) - *(int *)(param_1 + 0x178);
      iVar1 = param_2;
      if (iVar2 <= param_2) {
        iVar1 = iVar2;
      }
      param_2 = param_2 - iVar1;
      *(int *)(param_1 + 0x178) = iVar1 + *(int *)(param_1 + 0x178);
      FUN_006475b0(param_1,param_2 == 0,param_3);
    }
  }
  return 1;
}



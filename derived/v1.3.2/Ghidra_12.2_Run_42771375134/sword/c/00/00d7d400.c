/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7d400; name: FUN_00d7d400
 */


void FUN_00d7d400(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_18;
  
  if (((*param_2 == '\0') || (*(int *)(*(long *)(param_1 + 0x5f0) + 0xe8) == 0)) ||
     (*(char *)(param_1 + 0x5e4) != '\0')) {
    iVar1 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
    if (iVar1 == 2) {
      local_18 = 0xead037549e9f;
    }
    else {
      if (iVar1 != 1) {
        FUN_016b2da0(0,0);
        return;
      }
      local_18 = 0xe9d037549cec;
    }
    local_18 = local_18 | 0xde84000000000000;
    uVar2 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
    FUN_016b2da0(uVar2,0);
    return;
  }
  iVar1 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (iVar1 == 2) {
    local_18 = 0xead037549e9f;
  }
  else {
    if (iVar1 != 1) {
      uVar2 = 0;
      goto LAB_00d7d4fc;
    }
    local_18 = 0xe9d037549cec;
  }
  local_18 = local_18 | 0xde84000000000000;
  uVar2 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
LAB_00d7d4fc:
  FUN_016b2da0(uVar2,1);
  return;
}



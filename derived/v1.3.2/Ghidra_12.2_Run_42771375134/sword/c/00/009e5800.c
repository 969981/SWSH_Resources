/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e5800; name: FUN_009e5800
 */


undefined4 FUN_009e5800(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined4 local_24 [5];
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    uVar4 = 1;
    local_24[0] = 0;
    if (*(int *)(param_1 + 0x94) == 0) goto LAB_009e5870;
LAB_009e5824:
    iVar1 = *(int *)(param_1 + 0x9c);
joined_r0x009e5828:
    if (iVar1 != 0) goto LAB_009e58d0;
LAB_009e582c:
    iVar3 = *(int *)(param_1 + 0xa0);
    if (((int)uVar4 == 0) || (iVar5 < iVar3)) {
      local_24[0] = 2;
      uVar4 = 1;
      iVar1 = *(int *)(param_1 + 0xa4);
      iVar5 = iVar3;
    }
    else {
      if (iVar5 != iVar3) goto LAB_009e58d0;
      local_24[uVar4] = 2;
      uVar4 = (ulong)((int)uVar4 + 1);
      iVar1 = *(int *)(param_1 + 0xa4);
    }
  }
  else {
    iVar5 = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x94) != 0) goto LAB_009e5824;
LAB_009e5870:
    iVar3 = *(int *)(param_1 + 0x98);
    if (((int)uVar4 == 0) || (iVar5 < iVar3)) {
      uVar4 = 1;
      local_24[0] = 1;
      iVar1 = *(int *)(param_1 + 0x9c);
      iVar5 = iVar3;
      goto joined_r0x009e5828;
    }
    if (iVar5 != iVar3) {
      uVar4 = 1;
      iVar1 = *(int *)(param_1 + 0x9c);
      goto joined_r0x009e5828;
    }
    local_24[uVar4] = 1;
    uVar4 = 2;
    if (*(int *)(param_1 + 0x9c) == 0) goto LAB_009e582c;
LAB_009e58d0:
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0xa8);
    if (((int)uVar4 == 0) || (iVar5 < iVar3)) {
      local_24[0] = 3;
      uVar4 = 1;
      iVar1 = *(int *)(param_1 + 0xac);
      iVar5 = iVar3;
      goto joined_r0x009e5950;
    }
    if (iVar5 == iVar3) {
      local_24[uVar4] = 3;
      uVar4 = (ulong)((int)uVar4 + 1);
    }
  }
  iVar1 = *(int *)(param_1 + 0xac);
joined_r0x009e5950:
  iVar3 = (int)uVar4;
  if (iVar1 == 0) {
    if ((iVar3 == 0) || (iVar5 < *(int *)(param_1 + 0xb0))) {
      return 4;
    }
    if (iVar5 == *(int *)(param_1 + 0xb0)) {
      local_24[uVar4] = 4;
      iVar3 = iVar3 + 1;
    }
  }
  if (iVar3 == 0) {
    return 6;
  }
  if (iVar3 == 1) {
    return local_24[0];
  }
  lVar2 = FUN_008ed5b0(param_1 + 0x28);
  return local_24[lVar2];
}



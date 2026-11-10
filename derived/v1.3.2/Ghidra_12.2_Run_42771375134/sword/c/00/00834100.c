/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00834100; name: FUN_00834100
 */


void FUN_00834100(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  uVar5 = FUN_00834590(param_1,param_2,param_4);
  uVar6 = FUN_00834590(param_1,param_3,param_4);
  iVar7 = *(int *)(param_1 + 0x28);
  if ((uVar6 & 1) == 0) {
    if (iVar7 == -1) goto LAB_00834284;
    if (*(char *)(param_4 + 0x44) == '\0') {
      piVar9 = (int *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      piVar9 = (int *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      piVar9 = (int *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    param_2 = param_2 + iVar7;
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar3 = (int)((ulong)(param_4 - *plVar8) >> 4) * 0x38e38e39;
    iVar7 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar7 = iVar3;
    }
    uVar6 = -(ulong)((uint)(iVar7 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)(iVar7 >> 5) << 2;
    *(uint *)(param_2 + uVar6) =
         *(uint *)(param_2 + uVar6) &
         ~(1 << (ulong)(((uint)((int)param_4 - *piVar9) >> 4) * 0x38e38e39 & 0x1f));
  }
  else {
    if (iVar7 == -1) goto LAB_00834284;
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    uVar2 = (int)((ulong)(param_4 - *plVar8) >> 4) * 0x38e38e39;
    uVar1 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    param_2 = param_2 + iVar7;
    uVar6 = -(ulong)((uint)((int)uVar1 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)((int)uVar1 >> 5) << 2;
    *(uint *)(param_2 + uVar6) = 1 << (ulong)(uVar2 & 0x1f) | *(uint *)(param_2 + uVar6);
  }
  iVar7 = *(int *)(param_1 + 0x28);
LAB_00834284:
  if ((uVar5 & 1) == 0) {
    if (iVar7 != -1) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        piVar9 = (int *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        piVar9 = (int *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        piVar9 = (int *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_4 - *plVar8) >> 4) * 0x38e38e39;
      iVar3 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
      uVar5 = -(ulong)((uint)(iVar3 >> 5) >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(uint)(iVar3 >> 5) << 2;
      *(uint *)(param_3 + iVar7 + uVar5) =
           *(uint *)(param_3 + iVar7 + uVar5) &
           ~(1 << (ulong)(((uint)((int)param_4 - *piVar9) >> 4) * 0x38e38e39 & 0x1f));
    }
  }
  else if (iVar7 != -1) {
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    uVar2 = (int)((ulong)(param_4 - *plVar8) >> 4) * 0x38e38e39;
    uVar1 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar5 = -(ulong)((uint)((int)uVar1 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)((int)uVar1 >> 5) << 2;
    *(uint *)(param_3 + iVar7 + uVar5) =
         1 << (ulong)(uVar2 & 0x1f) | *(uint *)(param_3 + iVar7 + uVar5);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008333f0; name: FUN_008333f0
 */


void FUN_008333f0(long *param_1,long param_2,long param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    uVar4 = *param_4;
LAB_008334a4:
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar5 = (int)((ulong)(param_3 - *plVar6) >> 4) * 0x38e38e39;
  }
  else {
    uVar1 = (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) >> 4) * -0x55555555;
    if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) ==
        *(int *)(param_3 + 0x38)) {
      uVar4 = *param_4;
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1,param_2);
      lVar3 = *(long *)(param_3 + 0x58);
      uVar4 = *param_4;
      if (lVar3 == 0) goto LAB_008334a4;
    }
    iVar5 = *(int *)(param_1[1] + 0x2c) +
            (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) >> 4) * -0x55555555;
  }
  *(undefined4 *)(param_2 + *(int *)(param_1[4] + (long)iVar5 * 4)) = uVar4;
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    if ((int)param_1[5] != -1) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      uVar2 = (int)((ulong)(param_3 - *plVar6) >> 4) * 0x38e38e39;
      uVar1 = uVar2 + 0x1f;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      param_2 = param_2 + (int)param_1[5];
      uVar7 = -(ulong)((uint)((int)uVar1 >> 5) >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(uint)((int)uVar1 >> 5) << 2;
      *(uint *)(param_2 + uVar7) = 1 << (ulong)(uVar2 & 0x1f) | *(uint *)(param_2 + uVar7);
    }
  }
  else {
    uVar1 = (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) >> 4) * -0x55555555;
    *(undefined4 *)
     (param_2 + *(int *)((long)param_1 + 0x2c) +
     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) =
         *(undefined4 *)(param_3 + 0x38);
  }
  return;
}



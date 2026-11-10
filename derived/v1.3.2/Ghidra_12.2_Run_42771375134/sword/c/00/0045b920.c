/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b920; name: FUN_0045b920
 */


long FUN_0045b920(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *local_40;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = (long *)0x0;
  FUN_0045bb30(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_40,param_4);
  uVar2 = local_38 & 0xffffffff;
  if ((uint)local_38 == 0) {
    *param_6 = 4;
  }
  else if ((uint)local_30 == 0) {
    lVar6 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_02712b80 = lVar6;
    uVar7 = (uint)((ulong)lVar6 >> 0x21);
    if (local_30._4_4_ <= (uint)local_38 && (uint)local_38 - local_30._4_4_ != 0) {
      uVar4 = 0;
      if (local_28 != 0) {
        uVar4 = uVar7 / local_28;
      }
      uVar7 = uVar7 - uVar4 * local_28;
      lVar6 = uVar2 << 3;
      plVar3 = local_40;
LAB_0045ba3c:
      bVar1 = *(ushort *)(*plVar3 + 8) <= uVar7;
      uVar7 = uVar7 - *(ushort *)(*plVar3 + 8);
      if (bVar1) goto code_r0x0045ba4c;
      *param_6 = 2;
      *(uint *)(param_6 + 4) = (uint)local_38 - local_30._4_4_;
      *(uint *)(param_6 + 8) = (uint)local_38;
      lVar6 = *plVar3;
joined_r0x0045bb08:
      if (local_40 == (long *)0x0) {
        return lVar6;
      }
      goto LAB_0045bac0;
    }
    uVar4 = 0;
    if (local_30._4_4_ != 0) {
      uVar4 = uVar7 / local_30._4_4_;
    }
    iVar5 = uVar7 - uVar4 * local_30._4_4_;
    lVar6 = uVar2 << 3;
    plVar3 = local_40;
    do {
      while (*(short *)(*plVar3 + 8) == 0) {
        if (iVar5 == 0) {
          *param_6 = 3;
          *(uint *)(param_6 + 4) = local_30._4_4_;
          *(uint *)(param_6 + 8) = (uint)local_38;
          lVar6 = *plVar3;
          goto joined_r0x0045bb28;
        }
        iVar5 = iVar5 + -1;
        plVar3 = plVar3 + 1;
        lVar6 = lVar6 + -8;
        if (lVar6 == 0) goto joined_r0x0045b9e8;
      }
      plVar3 = plVar3 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  else {
    lVar6 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_02712b80 = lVar6;
    uVar7 = 0;
    uVar4 = (uint)((ulong)lVar6 >> 0x21);
    if ((uint)local_30 != 0) {
      uVar7 = uVar4 / (uint)local_30;
    }
    iVar5 = uVar4 - uVar7 * (uint)local_30;
    lVar6 = uVar2 << 3;
    plVar3 = local_40;
    do {
      if (*(short *)(*plVar3 + 8) == 100) {
        if (iVar5 == 0) {
          *param_6 = 1;
          *(uint *)(param_6 + 4) = (uint)local_30;
          *(uint *)(param_6 + 8) = (uint)local_38;
          lVar6 = *plVar3;
          goto joined_r0x0045bb08;
        }
        iVar5 = iVar5 + -1;
      }
      plVar3 = plVar3 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
joined_r0x0045b9e8:
  lVar6 = 0;
joined_r0x0045bb28:
  if (local_40 != (long *)0x0) {
LAB_0045bac0:
    local_38 = local_38 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  return lVar6;
code_r0x0045ba4c:
  plVar3 = plVar3 + 1;
  lVar6 = lVar6 + -8;
  if (lVar6 == 0) goto joined_r0x0045b9e8;
  goto LAB_0045ba3c;
}



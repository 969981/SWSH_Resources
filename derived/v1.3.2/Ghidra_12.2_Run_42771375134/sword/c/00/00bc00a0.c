/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc00a0; name: FUN_00bc00a0
 */


void FUN_00bc00a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int local_64;
  undefined8 local_60;
  long local_48;
  int local_38;
  int local_34;
  
  if (*(char *)(param_1 + 0x630) == '\0') {
    FUN_00bc3150(param_1);
    lVar10 = *(long *)(param_1 + 0x4c0);
    goto joined_r0x00bc00fc;
  }
  uVar1 = (*(int *)(param_1 + 0x62c) << 8) >> 0x14;
  uVar2 = uVar1 - 2;
  if (uVar1 < 2) {
LAB_00bc017c:
    iVar4 = -1;
    iVar8 = 2;
LAB_00bc0184:
    iVar7 = *(int *)(param_1 + 0x62c);
joined_r0x00bc0158:
    uVar1 = (iVar7 << 8) >> 0x14;
    if (uVar1 < 2) goto LAB_00bc0194;
LAB_00bc015c:
    iVar6 = (*(int *)(param_1 + 0x628) << 8) >> 0x14;
    if (iVar6 == 0) {
      if (iVar7 * 0x100 < 0x800000) {
        uVar5 = 1;
        iVar6 = 0;
        goto LAB_00bc01b0;
      }
      goto LAB_00bc0194;
    }
    if (4 < uVar1 - 2) goto LAB_00bc0194;
    iVar6 = iVar6 + -1;
    uVar5 = 0;
LAB_00bc01b0:
    local_34 = FUN_00bcfb20(uVar5,iVar6);
  }
  else {
    if ((*(uint *)(param_1 + 0x628) & 0xfff000) == 0) {
      if (0x7fffff < *(int *)(param_1 + 0x62c) * 0x100) goto LAB_00bc017c;
      iVar4 = *(int *)(param_1 + 0x614);
      iVar8 = 1;
      iVar7 = *(int *)(param_1 + 0x62c);
      goto joined_r0x00bc0158;
    }
    if (uVar2 < 5) {
      iVar8 = 0;
    }
    else {
      iVar8 = 2;
      if (4 < uVar2) {
        iVar4 = -1;
        iVar7 = *(int *)(param_1 + 0x62c);
        goto joined_r0x00bc0158;
      }
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar9 == 0) {
      iVar4 = FUN_0150b350(0);
    }
    else {
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      iVar4 = FUN_0150b350(lVar9);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (lVar10 == 0) goto LAB_00bc0184;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    iVar7 = *(int *)(param_1 + 0x62c);
    uVar1 = (iVar7 << 8) >> 0x14;
    if (1 < uVar1) goto LAB_00bc015c;
LAB_00bc0194:
    local_34 = -1;
  }
  local_38 = *(int *)(param_1 + 0x628) >> 0x18;
  local_64 = *(int *)(param_1 + 0x62c) >> 0x18;
  if (((iVar8 == 2) || (iVar4 == -1)) || (local_34 == -1)) {
    if (*(long *)(param_1 + 0x4c0) == 0) {
      return;
    }
    FUN_016d2080();
    return;
  }
  sVar3 = FUN_00bce1d0(*(undefined8 *)(param_1 + 0x5e8),iVar8,iVar4,&local_34,&local_38,&local_64);
  *(short *)(param_1 + 0x622) = sVar3;
  if (sVar3 != 0) {
    local_60._0_4_ = 0;
    local_60._4_4_ = 0;
    FUN_00bcfb40(iVar8,local_34,&local_60,(ulong)&local_60 | 4);
    if (iVar8 == 0) {
      local_60._0_4_ = (int)local_60 + 1;
    }
    local_60 = CONCAT44(local_60._4_4_ + 2,(int)local_60);
    uVar5 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    FUN_016b7990(uVar5,&local_60,1,0);
    lVar10 = *(long *)(param_1 + 0x2b0);
    *(undefined1 *)(param_1 + 0x630) = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_60 = 0xe74343968b0f16e6;
    FUN_0167b9b0(lVar10,&local_60,0);
    local_60 = 0xe74344968b0f1899;
    FUN_0167b9b0(lVar10,&local_60,0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    FUN_00bc1440(param_1,iVar8,iVar4,local_34,local_38,local_64);
    FUN_00bc3280(param_1,iVar8,1);
    FUN_00bc3640(param_1,*(undefined2 *)(param_1 + 0x622));
    return;
  }
  FUN_00bbeb30(param_1);
  lVar10 = *(long *)(param_1 + 0x4c0);
joined_r0x00bc00fc:
  if (lVar10 != 0) {
    FUN_016d2080();
  }
  FUN_006cf0a0(&local_60,&DAT_02637c30);
  FUN_016d3620(&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}



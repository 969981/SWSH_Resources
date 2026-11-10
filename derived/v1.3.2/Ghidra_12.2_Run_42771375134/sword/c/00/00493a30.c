/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00493a30; name: FUN_00493a30
 */


int FUN_00493a30(undefined8 param_1,long param_2)

{
  int *__src;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined2 local_5c [2];
  undefined4 local_58;
  int local_54;
  
  iVar3 = *(int *)(param_2 + 0x180);
  if (iVar3 == 0) {
    lVar9 = FUN_004940a0(param_1,param_2);
    if (lVar9 == 0) {
      return 2;
    }
    plVar7 = (long *)FUN_00492d30(param_1,*(undefined8 *)(param_2 + 0x10),&local_a0,&local_54,
                                  lVar9 + 8,lVar9 + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar1 = *(uint *)(param_2 + 0x38);
      if (uVar1 < 0x20) {
        *(int *)(param_2 + 0x38) = uVar1 + 1;
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ((uint)(1L << ((ulong)uVar1 & 0x3f)) ^ 0xffffffff);
        *(ushort *)(param_2 + 0x38 + (ulong)uVar1 * 2 + 4) = local_a0;
        lVar8 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
        goto joined_r0x00493ec8;
      }
      *(uint *)(param_2 + 0x38) = uVar1 + 1;
    }
    lVar8 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  }
  else {
    plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    lVar9 = *plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28;
    local_54 = iVar3;
    plVar7 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,iVar3,0);
    *(undefined4 *)(param_2 + 0x180) = 0;
    lVar8 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  }
joined_r0x00493ec8:
  if (lVar8 != 0) {
    FUN_0045b670(lVar8);
  }
  if (plVar7 == (long *)0x0) {
    plVar5 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    FUN_0045b3e0(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x28 + -0x28);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    iVar3 = FUN_0047fc80(param_1,param_2);
    plVar5 = (long *)0x0;
    goto joined_r0x00493ed4;
  }
  plVar5 = (long *)FUN_00492d30(param_1,*(undefined8 *)(param_2 + 0x10),local_5c,&local_58,lVar9 + 8
                                ,lVar9 + 0x10);
  plVar10 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  if (plVar5 == (long *)0x0) {
    FUN_0045b3e0(*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x28 + -0x28);
    *(int *)(plVar10 + 1) = (int)plVar10[1] + -1;
    if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9b) != '\0')) {
      local_a0 = CONCAT11(local_a0._1_1_,*(undefined1 *)(param_2 + 0x188)) & 0xff01;
      uVar4 = FUN_0048e670(param_2);
      iVar3 = FUN_0047f610(plVar7,(char *)(param_2 + 0x98),uVar4,&local_a0,
                           *(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
      if (iVar3 != 1) goto joined_r0x00493ed4;
      *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfe | (byte)local_a0;
    }
    iVar3 = FUN_00480e80(plVar7,param_2);
    if (iVar3 == 3) {
      iVar3 = 1;
    }
    else if (iVar3 == 1) {
      iVar3 = (**(code **)(*plVar7 + 0x238))(plVar7,param_2);
    }
    goto joined_r0x00493ed4;
  }
  *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
  if (plVar10 != (long *)0x0) {
    FUN_0045b680(plVar10);
  }
  __src = (int *)(param_2 + 0x38);
  memcpy(&local_a0,__src,0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9b) != '\0')) {
    local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(param_2 + 0x188)) & 0xffffffffffffff01;
    uVar2 = FUN_0048e670(param_2);
    iVar3 = FUN_0047f610(plVar7,(char *)(param_2 + 0x98),uVar2,&local_d0,
                         *(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
    if (iVar3 == 1) {
      *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfe | (byte)local_d0;
      goto LAB_00493b6c;
    }
  }
  else {
LAB_00493b6c:
    iVar3 = FUN_00480e80(plVar7,param_2);
    if ((iVar3 == 3) ||
       ((iVar3 == 1 && (iVar3 = (**(code **)(*plVar7 + 0x238))(plVar7,param_2), iVar3 == 1)))) {
      *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfd;
    }
  }
  memcpy(__src,&local_a0,0x44);
  lVar9 = *(long *)(param_2 + 0x88);
  *(undefined4 *)(param_2 + 0x7c) = uVar4;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  if (lVar8 != 0) {
    FUN_0045b670(lVar8);
  }
  lVar6 = *(long *)(lVar9 + 0x18);
  *(long *)(lVar9 + 0x18) = lVar8;
  if (lVar6 != 0) {
    FUN_0045b680();
  }
  *(undefined4 *)(param_2 + 0x180) = local_58;
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 < 0x20) {
    *(int *)(param_2 + 0x38) = uVar1 + 1;
    *(uint *)(param_2 + 0x7c) =
         *(uint *)(param_2 + 0x7c) & ((uint)(1L << ((ulong)uVar1 & 0x3f)) ^ 0xffffffff);
    *(undefined2 *)(param_2 + 0x38 + (ulong)uVar1 * 2 + 4) = local_5c[0];
  }
  else {
    *__src = uVar1 + 1;
  }
  local_d0 = *(ulong *)(param_2 + 0x10);
  local_c8 = *(undefined4 *)(param_2 + 0x34);
  local_c0 = 0;
  local_b8 = 0xff;
  local_b0 = 0xff;
  local_a8 = 0;
  fVar11 = (float)FUN_00493330(param_1,&local_d0);
  fVar12 = fVar11 * DAT_01d4c6ac;
  if (fVar11 * DAT_01d4c6ac <= *(float *)PTR_DAT_027132d8) {
    fVar12 = *(float *)PTR_DAT_027132d8;
  }
  dVar13 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
  iVar3 = FUN_0047f130(fVar12 + (float)((double)(long)*(int *)(param_2 + 0x84) / dVar13),param_1,
                       param_2);
joined_r0x00493ed4:
  if (lVar8 != 0) {
    FUN_0045b680(lVar8);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return iVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbd240; name: FUN_00bbd240
 */


uint FUN_00bbd240(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  puVar2 = PTR_DAT_02710848;
  if (*(int *)(param_1 + 0x610) == 2) {
    uVar5 = 0;
    goto LAB_00bbd40c;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  uVar6 = FUN_01510f00(lVar9,0xd618fe95d0e267eb);
  if ((uVar6 & 1) == 0) {
LAB_00bbd3f4:
    uVar5 = 0;
  }
  else {
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    uVar7 = FUN_016b8190();
    uVar8 = (uint)((ulong)uVar7 >> 0x20);
    uVar5 = uVar8 - 2;
    if (uVar8 < 2) goto LAB_00bbd3f4;
    if ((int)uVar7 == 0) {
      if ((int)uVar5 < 6) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e8);
        uVar3 = *(undefined4 *)(param_1 + 0x614);
        uVar7 = 1;
        uVar4 = FUN_00bcfb20(1,0,uVar5);
        goto LAB_00bbd3cc;
      }
      goto LAB_00bbd3f4;
    }
    if (4 < uVar5) goto LAB_00bbd3f4;
    uVar11 = *(undefined8 *)(param_1 + 0x5e8);
    lVar10 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar12 = *(long *)(*(long *)puVar1 + 0x228);
    if (lVar12 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar3 = FUN_0150b350(lVar12);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    uVar4 = FUN_00bcfb20(0,(int)uVar7 + -1,uVar5);
    uVar7 = 0;
LAB_00bbd3cc:
    lVar10 = thunk_FUN_00bccb30(uVar11,uVar7,uVar3,uVar4);
    if (lVar10 == 0) goto LAB_00bbd3f4;
    uVar5 = FUN_0087d610(lVar10,2);
    uVar5 = uVar5 ^ 1;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
LAB_00bbd40c:
  return uVar5 & 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00438380; name: FUN_00438380
 */


void FUN_00438380(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 local_78 [18];
  
  puVar4 = PTR_DAT_02712ad0;
  FUN_0048fcd0(*(undefined8 *)PTR_DAT_02712ad0,(int)param_2[6]);
  (**(code **)(*(long *)param_2[1] + 0x10))();
  uVar5 = FUN_0043e4a0(param_2[1]);
  uVar3 = *(ushort *)PTR_DAT_02712ac0;
  uVar11 = 0;
  if (uVar3 != 0) {
    uVar11 = uVar5 / uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar13 = (uint)uVar3;
  *(int *)(param_2 + 2) = iVar2;
  *(uint *)((long)param_2 + 0x14) = uVar5 - uVar11 * uVar13;
  if (uVar5 < uVar13) {
    lVar9 = param_2[8];
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x40) != 0)) &&
       (lVar9 = **(long **)(lVar9 + 0x38), lVar9 != 0)) {
LAB_0043840c:
      FUN_004963c0(lVar9);
    }
    plVar6 = (long *)param_2[1];
LAB_00438414:
    (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
    if ((int)param_2[6] != 0) {
      FUN_0048fd60(*(undefined8 *)puVar4);
    }
    (**(code **)(*(long *)param_2[1] + 0x18))();
    uVar14 = *(undefined4 *)PTR_DAT_02712a90;
LAB_00438450:
    (**(code **)(*param_2 + 8))(param_2);
    FUN_00404870(uVar14,param_2);
    return;
  }
  plVar6 = (long *)param_2[1];
  if (*(short *)((long)plVar6 + 0x34) == 0x503) {
    uVar1 = uVar11;
    if (*(uint *)(PTR_DAT_02712b90 + 0x20) <= uVar11) {
      uVar1 = *(uint *)(PTR_DAT_02712b90 + 0x20);
    }
    uVar11 = uVar11 - uVar1;
    *(uint *)((long)param_2 + 0x14) = uVar5 - uVar11 * uVar13;
    if (uVar11 == 0) {
      lVar9 = param_2[8];
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x40) != 0)) &&
         (lVar9 = **(long **)(lVar9 + 0x38), lVar9 != 0)) goto LAB_0043840c;
      goto LAB_00438414;
    }
  }
  uVar11 = uVar11 + iVar2;
  *(uint *)(param_2 + 2) = uVar11;
  puVar4 = PTR_DAT_02712a90;
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_2[1] + 0x18))();
      uVar14 = *(undefined4 *)puVar4;
      goto LAB_00438450;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar7;
  }
  *(uint *)(puVar7 + 1) = uVar11;
  *(long **)(*(long *)(param_1 + 0x38) + 0x10) = param_2;
  if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(undefined8 *)(param_1 + 0x38) = *puVar7;
    *puVar7 = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    puVar12 = (undefined8 *)0x0;
    do {
      puVar10 = puVar7;
      if (uVar11 < *(uint *)(puVar10 + 1)) {
        puVar7 = *(undefined8 **)(param_1 + 0x38);
        if (puVar12 != (undefined8 *)0x0) goto LAB_00438554;
        *(undefined8 **)(param_1 + 0x28) = puVar7;
        puVar12 = puVar7;
        goto LAB_0043855c;
      }
      puVar7 = (undefined8 *)*puVar10;
      puVar12 = puVar10;
    } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    puVar10 = (undefined8 *)0x0;
LAB_00438554:
    *puVar12 = puVar7;
    puVar12 = *(undefined8 **)(param_1 + 0x38);
LAB_0043855c:
    *(undefined8 *)(param_1 + 0x38) = *puVar12;
    *puVar7 = puVar10;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  local_78[0] = 0;
  plVar6 = (long *)param_2[1];
  if (*(short *)((long)plVar6 + 0x34) == 0x503) {
    uVar8 = FUN_00441d50();
    if ((uVar8 & 1) == 0) {
      return;
    }
    plVar6 = (long *)param_2[1];
  }
  else if (*(short *)((long)plVar6 + 0x34) != 0x403) {
    return;
  }
  (**(code **)(*plVar6 + 0x58))(plVar6,local_78);
  return;
}



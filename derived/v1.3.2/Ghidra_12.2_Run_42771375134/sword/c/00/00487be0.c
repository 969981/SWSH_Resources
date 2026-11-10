/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00487be0; name: FUN_00487be0
 */


undefined8 FUN_00487be0(long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_02712a90;
  uVar3 = *(uint *)(param_1 + 0x9c);
  plVar7 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x78);
  if (plVar7 == (long *)0x0) {
    return 2;
  }
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xff;
  local_70 = 0xff;
  local_68 = 0;
  FUN_004a4500(plVar7,&local_90,1);
  *(undefined4 *)(plVar7 + 0xb) = 0;
  plVar7[9] = 0;
  *(undefined4 *)(plVar7 + 0xe) = 0;
  puVar6 = PTR_DAT_02713290;
  plVar7[10] = 0;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_004810e0(plVar7,param_1,param_2,param_4,uVar3 >> 10 & 1,uVar3 >> 0xb & 1);
  plVar13 = *(long **)(param_1 + 0x70);
  plVar9 = (long *)*plVar13;
  uVar3 = *(uint *)(plVar13 + 1);
  plVar11 = plVar9;
  if (uVar3 == 0) {
LAB_00487ce4:
    if (plVar11 != plVar9 + (ulong)uVar3 * 2) {
      plVar11 = plVar11 + 1;
      goto LAB_00487dac;
    }
  }
  else {
    lVar12 = (ulong)uVar3 << 4;
    do {
      if (*plVar11 == param_2) goto LAB_00487ce4;
      lVar12 = lVar12 + -0x10;
      plVar11 = plVar11 + 2;
    } while (lVar12 != 0);
  }
  uVar14 = *(uint *)((long)plVar13 + 0xc);
  if (uVar14 <= uVar3) {
    uVar14 = uVar14 + 1;
    lVar12 = FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar14 << 4);
    if (lVar12 == 0) goto LAB_00487dbc;
    lVar8 = *plVar13;
    if ((lVar8 != 0) && (lVar8 != lVar12)) {
      uVar10 = (ulong)*(uint *)(plVar13 + 1);
      if (*(uint *)(plVar13 + 1) != 0) {
        lVar8 = 0;
        do {
          puVar1 = (undefined8 *)(lVar12 + lVar8);
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar12 + lVar8 + 8) = 0;
          }
          puVar2 = (undefined8 *)(*plVar13 + lVar8);
          lVar8 = lVar8 + 0x10;
          puVar1[1] = puVar2[1];
          uVar10 = uVar10 - 1;
          *puVar1 = *puVar2;
        } while (uVar10 != 0);
        lVar8 = *plVar13;
      }
      FUN_00404870(*(undefined4 *)puVar5,lVar8);
    }
    *plVar13 = lVar12;
    *(uint *)((long)plVar13 + 0xc) = uVar14;
  }
  if (uVar3 < uVar14) {
    uVar3 = *(uint *)(plVar13 + 1);
    *(uint *)(plVar13 + 1) = uVar3 + 1;
    plVar9 = (long *)(*plVar13 + (ulong)uVar3 * 0x10);
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)(*plVar13 + (ulong)uVar3 * 0x10 + 8);
      *plVar11 = 0;
      *plVar9 = param_2;
LAB_00487dac:
      *plVar11 = (long)plVar7;
      *param_3 = plVar11;
      return 1;
    }
  }
LAB_00487dbc:
  *param_3 = 0;
  if (plVar7[9] != 0) {
    *(undefined4 *)(plVar7 + 10) = 0;
    FUN_00404870(*(undefined4 *)puVar5);
    plVar7[9] = 0;
    *(undefined4 *)((long)plVar7 + 0x54) = 0;
  }
  uVar4 = *(undefined4 *)puVar5;
  (**(code **)*plVar7)(plVar7);
  FUN_00404870(uVar4,plVar7);
  return 2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b180; name: FUN_0045b180
 */


long * FUN_0045b180(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar14 = (ulong)uVar3;
  if (2 < uVar3) goto LAB_0045b2cc;
  if (*(uint *)(param_1 + 0x44) < 3) {
    uVar2 = *(uint *)(param_1 + 0x44) + (3 - uVar3);
    puVar1 = (undefined8 *)(param_1 + 0x28);
    if (uVar2 < 3) {
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      puVar7 = puVar1;
      uVar9 = uVar3;
      if (puVar8 == (undefined8 *)0x0) goto LAB_0045b3a0;
LAB_0045b1dc:
      if (puVar8 == puVar7) goto LAB_0045b3a0;
      if (uVar9 != 0) {
        uVar10 = 0;
        puVar8 = puVar7;
        do {
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
          }
          lVar11 = uVar10 * 8;
          uVar10 = uVar10 + 1;
          *puVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar11);
          puVar8 = puVar8 + 1;
        } while (uVar9 != uVar10);
        puVar8 = *(undefined8 **)(param_1 + 0x38);
      }
      if (puVar1 != puVar8) {
        FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
      }
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      *(uint *)(param_1 + 0x44) = uVar2;
      if (uVar3 < 3) goto joined_r0x0045b3b0;
    }
    else {
      puVar7 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 << 3,8);
      if (puVar7 == (undefined8 *)0x0) {
        return (long *)0x0;
      }
      uVar9 = *(uint *)(param_1 + 0x40);
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      if (puVar8 != (undefined8 *)0x0) goto LAB_0045b1dc;
LAB_0045b3a0:
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      *(uint *)(param_1 + 0x44) = uVar2;
joined_r0x0045b3b0:
      if ((1 - uVar3 & 1) != 0) goto LAB_0045b26c;
LAB_0045b24c:
      if (uVar3 != 2) goto LAB_0045b288;
    }
  }
  else {
    if ((1 - uVar3 & 1) == 0) goto LAB_0045b24c;
LAB_0045b26c:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar14 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    uVar14 = uVar14 + 1;
    if (uVar3 == 2) goto LAB_0045b2c4;
LAB_0045b288:
    lVar11 = uVar14 * -8;
    do {
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 != lVar11) {
        *(undefined8 *)(lVar12 + uVar14 * 8) = 0;
      }
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 + 8 != lVar11) {
        *(undefined8 *)(lVar12 + uVar14 * 8 + 8) = 0;
      }
      uVar14 = uVar14 + 2;
      lVar11 = lVar11 + -0x10;
    } while (uVar14 != 3);
  }
LAB_0045b2c4:
  *(undefined4 *)(param_1 + 0x40) = 3;
LAB_0045b2cc:
  puVar5 = PTR_DAT_02712a90;
  plVar13 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  if ((plVar13 == (long *)0x0) &&
     (plVar13 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x90), plVar13 != (long *)0x0))
  {
    FUN_0042bd00(plVar13);
    *(long **)(*(long *)(param_1 + 0x38) + 0x10) = plVar13;
    plVar13[1] = param_1;
    iVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(param_1 + 0x48));
    if (iVar6 != 1) {
      uVar4 = *(undefined4 *)puVar5;
      (**(code **)*plVar13)(plVar13);
      FUN_00404870(uVar4,plVar13);
      plVar13 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) = 0;
    }
  }
  return plVar13;
}



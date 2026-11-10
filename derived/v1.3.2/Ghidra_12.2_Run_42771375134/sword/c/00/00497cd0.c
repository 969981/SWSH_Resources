/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00497cd0; name: FUN_00497cd0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00497cd0(long param_1,ulong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *puVar22;
  float fVar23;
  
  puVar8 = PTR_DAT_02712a90;
  uVar11 = *(uint *)(param_1 + 0x38);
  uVar19 = (uint)param_2;
  if (uVar11 != 0) {
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar19 / uVar11;
    }
    for (plVar20 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)(uVar19 - uVar5 * uVar11) * 8);
        plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
      if (plVar20[1] == param_2) {
        puVar22 = plVar20 + 2;
        plVar20 = (long *)*puVar22;
        goto joined_r0x00497e0c;
      }
    }
  }
  plVar20 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
  if (plVar20 == (long *)0x0) {
    return 2;
  }
  FUN_004a57a0(plVar20 + 1);
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = param_2;
  *(undefined4 *)(plVar20 + 10) = 1;
  *(undefined1 *)((long)plVar20 + 0x54) = 1;
  *plVar20 = (long)(PTR_DAT_02713300 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x38);
  if ((uVar11 == 0) ||
     (fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40)),
     DAT_01d4bee0 < fVar23 / (float)uVar11)) {
    FUN_004996d0(param_1 + 0x28);
    uVar11 = *(uint *)(param_1 + 0x38);
    if (uVar11 != 0) goto LAB_00497d9c;
    puVar22 = (undefined8 *)0x0;
    lVar14 = FUN_004e9f10(plVar20);
    puVar9 = (undefined8 *)PTR_DAT_02713338;
    puVar6 = (undefined8 *)PTR_DAT_02713340;
    puVar7 = (undefined8 *)PTR_DAT_02713348;
  }
  else {
LAB_00497d9c:
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar19 / uVar11;
    }
    uVar21 = (ulong)(uVar19 - uVar5 * uVar11);
    for (plVar13 = *(long **)(*(long *)(param_1 + 0x30) + uVar21 * 8); plVar13 != (long *)0x0;
        plVar13 = (long *)*plVar13) {
      if (plVar13[1] == param_2) {
        puVar22 = plVar13 + 2;
        *puVar22 = plVar20;
        goto joined_r0x00497e0c;
      }
    }
    puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar8,0x18);
    if (puVar9 == (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
    }
    else {
      lVar14 = uVar21 * 8;
      puVar22 = puVar9 + 2;
      *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar14);
      puVar9[1] = param_2;
      *(undefined8 **)(*(long *)(param_1 + 0x30) + lVar14) = puVar9;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *puVar22 = plVar20;
    }
joined_r0x00497e0c:
    if (plVar20 == (long *)0x0) goto joined_r0x00497f24;
    lVar14 = FUN_004e9f10(plVar20);
    puVar9 = (undefined8 *)PTR_DAT_02713338;
    puVar6 = (undefined8 *)PTR_DAT_02713340;
    puVar7 = (undefined8 *)PTR_DAT_02713348;
  }
  PTR_DAT_02713338 = (undefined *)puVar9;
  PTR_DAT_02713340 = (undefined *)puVar6;
  PTR_DAT_02713348 = (undefined *)puVar7;
  if (lVar14 == 0) {
    bVar1 = false;
    lVar14 = *(long *)(PTR_DAT_02712d38 + 0x10);
  }
  else {
    puVar7[3] = 0;
    puVar7[4] = 0x3ff3f00000000;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    uVar18 = *puVar9;
    uVar3 = *(undefined4 *)(puVar9 + 1);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = uVar2;
    *(undefined8 *)((long)puVar7 + 0xc) = uVar18;
    *(undefined4 *)((long)puVar7 + 0x14) = uVar3;
    bVar1 = true;
    FUN_00496290(lVar14,puVar7,1,0);
    lVar14 = *(long *)(PTR_DAT_02712d38 + 0x10);
  }
  for (; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x10)) {
    iVar12 = *(int *)(lVar14 + 0xb0) + -1;
    if (-1 < iVar12) {
      iVar16 = 0;
      do {
        while( true ) {
          iVar4 = iVar12 - iVar16;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar16 + (iVar4 >> 1);
          uVar21 = *(ulong *)(*(long *)(lVar14 + 0xa8) + (long)iVar4 * 8);
          if (param_2 < uVar21) break;
          if (param_2 <= uVar21) {
            if ((*(long *)(lVar14 + 0xa8) + (long)iVar4 * 8 != 0) &&
               (lVar10 = FUN_0045b180(plVar20), lVar10 != 0)) {
              bVar1 = true;
            }
            goto LAB_00497ef0;
          }
          iVar16 = iVar4 + 1;
          if (iVar12 < iVar16) goto LAB_00497ef0;
        }
        iVar12 = iVar4 + -1;
      } while (iVar16 <= iVar12);
    }
LAB_00497ef0:
  }
  if (bVar1) {
    return 1;
  }
  uVar2 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)*plVar20)(plVar20);
  FUN_00404870(uVar2,plVar20);
joined_r0x00497f24:
  if ((puVar22 != (undefined8 *)0x0) && (uVar11 = *(uint *)(param_1 + 0x38), uVar11 != 0)) {
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar19 / uVar11;
    }
    plVar20 = (long *)(*(long *)(param_1 + 0x30) + (ulong)(uVar19 - uVar5 * uVar11) * 8);
    plVar13 = (long *)*plVar20;
    if (plVar13 != (long *)0x0) {
      plVar17 = (long *)0x0;
      do {
        plVar15 = plVar13;
        if (plVar15[1] == param_2) {
          if (plVar17 != (long *)0x0) {
            plVar20 = plVar17;
          }
          *plVar20 = *plVar15;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          return 2;
        }
        plVar13 = (long *)*plVar15;
        plVar17 = plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
    }
  }
  return 2;
}



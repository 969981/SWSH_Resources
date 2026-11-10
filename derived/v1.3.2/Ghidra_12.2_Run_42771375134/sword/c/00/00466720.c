/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466720; name: FUN_00466720
 */


/* WARNING: Removing unreachable block (ram,0x00466a7c) */

undefined8
FUN_00466720(long param_1,long param_2,float *param_3,uint param_4,long *param_5,void *param_6,
            long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((param_4 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (((uint)uVar9 >> 7 & 1) != 0) {
      fVar19 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1,7,param_6);
      param_3[6] = param_3[6] + fVar19;
      uVar9 = *(ulong *)(param_1 + 0x28);
    }
    if ((uVar9 & 1) != 0) {
      fVar19 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1,0,param_6);
      *param_3 = *param_3 + fVar19;
    }
  }
  if (((param_4 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    fVar19 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1,2,param_6);
    param_3[2] = param_3[2] + fVar19;
  }
  if (((param_4 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 3 & 1) != 0)) {
    fVar19 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1,3,param_6);
    param_3[3] = param_3[3] + fVar19;
  }
  if (((param_4 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 4 & 1) != 0)) {
    fVar19 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1,4,param_6);
    param_3[4] = param_3[4] + fVar19;
  }
  uVar17 = *(uint *)(param_1 + 0x38);
  if (uVar17 == 0) goto joined_r0x00466b60;
  piVar10 = *(int **)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x20);
  piVar11 = piVar10;
  if (uVar3 == 0) {
LAB_004668b0:
    plVar16 = (long *)(piVar11 + 6);
    lVar14 = *plVar16;
  }
  else {
    lVar14 = (ulong)uVar3 * 0x30;
    do {
      if (*piVar11 == *(int *)(param_2 + 0x10)) goto LAB_004668b0;
      lVar14 = lVar14 + -0x30;
      piVar11 = piVar11 + 0xc;
    } while (lVar14 != 0);
    plVar16 = (long *)(piVar10 + (ulong)uVar3 * 0xc + 6);
    lVar14 = *plVar16;
  }
  if (lVar14 == 0) goto joined_r0x00466b60;
  memcpy(&local_90,param_6,0x30);
  puVar5 = PTR_DAT_02712b50;
  uVar3 = *(uint *)(*(long **)PTR_DAT_02712b50 + 1);
  if (uVar3 != 0) {
    uVar18 = 0;
    if (uVar3 != 0) {
      uVar18 = uVar17 / uVar3;
    }
    for (puVar12 = *(uint **)(**(long **)PTR_DAT_02712b50 + (ulong)(uVar17 - uVar18 * uVar3) * 8);
        puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 2)) {
      if (*puVar12 == uVar17) {
        puVar6 = (undefined4 *)FUN_00465870(puVar12 + 8,&local_90);
        if (puVar6 == (undefined4 *)0x0) goto LAB_00466950;
        local_58 = *puVar6;
        goto LAB_00466940;
      }
    }
  }
  uVar9 = FUN_00499d00(uVar17,&local_90,&local_58);
  if ((uVar9 & 1) == 0) {
LAB_00466950:
    local_58 = FUN_0049d7c0(*(undefined8 *)puVar5,*(undefined4 *)(param_1 + 0x38),0);
    uVar17 = 0;
  }
  else {
LAB_00466940:
    uVar17 = (uint)(local_90 != 0);
  }
  local_54 = 0;
  fVar19 = (float)FUN_0042e770(local_58,plVar16,0,&local_54);
  puVar5 = PTR_DAT_02712a90;
  if ((uVar17 == 0) && (fVar19 == 1.0)) goto joined_r0x00466b60;
  plVar13 = (long *)*param_5;
  uVar3 = *(uint *)(param_5 + 1);
  plVar16 = plVar13;
  if (uVar3 == 0) {
LAB_004669e0:
    if (plVar16 != plVar13 + (ulong)uVar3 * 3) {
      *(float *)(plVar16 + 2) = fVar19;
      goto joined_r0x00466b60;
    }
  }
  else {
    lVar14 = (ulong)uVar3 * 0x18;
    do {
      if ((*plVar16 == param_1) && (uVar17 != (*(byte *)(plVar16 + 1) & 1))) goto LAB_004669e0;
      lVar14 = lVar14 + -0x18;
      plVar16 = plVar16 + 3;
    } while (lVar14 != 0);
  }
  uVar18 = *(uint *)((long)param_5 + 0xc);
  if (uVar18 <= uVar3) {
    uVar18 = uVar18 + 1;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar18 * 0x18);
    if (puVar7 == (undefined8 *)0x0) goto joined_r0x00466b60;
    puVar8 = (undefined8 *)*param_5;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
      uVar4 = *(uint *)(param_5 + 1);
      if (uVar4 != 0) {
        puVar7[2] = puVar8[2];
        puVar7[1] = puVar8[1];
        *puVar7 = *puVar8;
        if (uVar4 != 1) {
          if (uVar4 == 2) {
            lVar14 = 1;
          }
          else {
            lVar14 = 1;
            lVar15 = 0;
            do {
              lVar1 = *param_5 + lVar15;
              *(undefined8 *)((long)puVar7 + lVar15 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
              *(undefined8 *)((long)puVar7 + lVar15 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
              *(undefined8 *)((long)puVar7 + lVar15 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
              lVar1 = *param_5 + lVar15;
              *(undefined8 *)((long)puVar7 + lVar15 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
              *(undefined8 *)((long)puVar7 + lVar15 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
              lVar14 = lVar14 + 2;
              *(undefined8 *)((long)puVar7 + lVar15 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
              lVar15 = lVar15 + 0x30;
            } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar14);
            if ((~uVar4 & 1) == 0) goto LAB_00466b10;
          }
          puVar8 = puVar7 + lVar14 * 3;
          puVar2 = (undefined8 *)(*param_5 + lVar14 * 0x18);
          puVar8[2] = puVar2[2];
          puVar8[1] = puVar2[1];
          *puVar8 = *puVar2;
        }
LAB_00466b10:
        puVar8 = (undefined8 *)*param_5;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar8);
    }
    *param_5 = (long)puVar7;
    *(uint *)((long)param_5 + 0xc) = uVar18;
  }
  if (uVar3 < uVar18) {
    uVar3 = *(uint *)(param_5 + 1);
    lVar14 = *param_5;
    *(uint *)(param_5 + 1) = uVar3 + 1;
    plVar16 = (long *)(lVar14 + (ulong)uVar3 * 0x18);
    if (plVar16 != (long *)0x0) {
      *plVar16 = param_1;
      lVar14 = lVar14 + (ulong)uVar3 * 0x18;
      *(ulong *)(lVar14 + 8) = (ulong)(uVar17 ^ 1);
      *(float *)(lVar14 + 0x10) = fVar19;
    }
  }
joined_r0x00466b60:
  if (param_7 != 0) {
    local_80 = 4;
    uStack_88 = *(undefined8 *)(param_1 + 0x30);
    local_90 = param_1;
    FUN_00477770(*(undefined8 *)PTR_DAT_02712dc0,&local_90,param_7);
  }
  return 1;
}



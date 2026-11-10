/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00532160; name: FUN_00532160
 */


undefined8 FUN_00532160(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined8 local_178;
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [72];
  
  puVar7 = PTR_DAT_027139b0;
  if (((param_5 & 1) == 0) && (*(char *)(param_1 + 0x10de) == '\0')) {
    return 0;
  }
  iVar13 = *(int *)PTR_DAT_027139b0;
  if (iVar13 < 1) {
    plVar19 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar19,0);
    *(long **)PTR_DAT_027139b8 = plVar19;
    *(undefined4 *)puVar7 = 1;
    if (plVar19 != (long *)0x0) goto LAB_005321e4;
LAB_0053226c:
    iVar13 = 0;
  }
  else {
    plVar19 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar13 + 1;
    if (iVar13 + 1 < 2) {
      if (plVar19 == (long *)0x0) goto LAB_0053226c;
LAB_005321e4:
      uVar17 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar19 + 0x20))(plVar19);
      FUN_005b9b10(uVar17,plVar19);
      iVar13 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar7 = iVar13;
  uVar17 = *(undefined8 *)(param_1 + 0x1f0);
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  uVar14 = *(undefined8 *)(param_1 + 0x200);
  lVar20 = *(long *)(param_1 + 0x208);
  uVar15 = *(undefined8 *)(param_1 + 0x210);
  uVar16 = *(undefined8 *)(param_1 + 0x218);
  if (param_3 == 0) {
    iVar13 = *(int *)(param_1 + 0x5f8);
    lVar11 = *(long *)(param_1 + 400);
    if (iVar13 == -1) {
      iVar13 = *(int *)(lVar11 + 0x90);
      if (*(int *)(lVar11 + 0x30) <= iVar13) goto LAB_005322d4;
    }
    else if (*(int *)(lVar11 + 0x30) <= iVar13) goto LAB_005322d4;
    local_178 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + (long)iVar13 * 8);
  }
  else {
LAB_005322d4:
    local_178 = 0;
  }
  fVar30 = *(float *)(param_1 + 0x6c4);
  fVar31 = fVar30 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
  fVar21 = fVar30 * *(float *)(param_1 + 0x6d0);
  fVar32 = *(float *)(param_1 + 0x6d4) * fVar31;
  fVar29 = fVar21 * *(float *)(param_1 + 0x6d8);
  FUN_0050f980(fVar32 - fVar31,fVar31 + fVar32,fVar29 - fVar21,fVar21 + fVar29,fVar30,
               *(undefined4 *)(param_1 + 0x6c8),auStack_e8,0,1);
  uVar22 = *(undefined4 *)(param_1 + 0xec0);
  uVar23 = *(undefined4 *)(param_1 + 0xecc);
  uVar24 = *(undefined4 *)(param_1 + 0xed0);
  uVar25 = *(undefined4 *)(param_1 + 0xed4);
  uVar26 = *(undefined4 *)(param_1 + 0xed8);
  uVar27 = *(undefined4 *)(param_1 + 0xec4);
  fVar21 = *(float *)(param_1 + 0xf00);
  cVar6 = *(char *)(param_1 + 0x10df);
  uVar28 = *(undefined4 *)(param_1 + 0xec8);
  uVar33 = *(undefined4 *)(param_1 + 0xef8);
  uVar34 = *(undefined4 *)(param_1 + 0xefc);
  uVar3 = *(undefined4 *)(param_1 + 0xebc);
  if (fVar21 <= 0.0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 8);
    if (*(uint *)(param_1 + 0x410) != 0) {
      uVar1 = *(uint *)(param_1 + 0x410);
    }
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar20 + 0x54));
    fVar21 = (fVar21 / (float)uVar1) * 4.0;
    fVar21 = fVar21 + fVar21;
  }
  local_f8 = *(undefined8 *)(param_1 + 0xedc);
  uStack_f0 = *(undefined8 *)(param_1 + 0xee4);
  uVar4 = *(undefined4 *)(param_1 + 0xf04);
  local_108 = *(undefined8 *)(param_1 + 0xe98);
  uStack_100 = *(undefined8 *)(param_1 + 0xea0);
  uVar5 = *(undefined4 *)(param_1 + 0xe88);
  uVar18 = *(undefined8 *)(param_1 + 0xe90);
  local_118 = *(undefined8 *)(param_1 + 0xea8);
  uStack_110 = *(undefined8 *)(param_1 + 0xeb0);
  fVar30 = *(float *)(param_1 + 0x90c);
  fVar29 = *(float *)(param_1 + 0x8f4);
  uVar10 = 4;
  if ((param_4 & 1) == 0) {
    uVar10 = 0;
  }
  if (0.0 < fVar30) {
    fVar31 = *(float *)(param_1 + 0x8f8);
    if (fVar30 <= *(float *)(param_1 + 0x8f8)) {
      fVar31 = fVar30;
    }
    fVar32 = *(float *)(param_1 + 0x910);
    if (fVar29 <= fVar30) {
      fVar29 = fVar31;
    }
    if ((0.0 < fVar32) && (fVar32 <= fVar29)) {
      fVar29 = fVar32;
    }
  }
  fVar32 = *(float *)(param_1 + 0x6c4);
  fVar30 = *(float *)(param_1 + 0xef0);
  fVar35 = *(float *)(param_1 + 0xeec);
  uVar9 = FUN_00562390(fVar32,*(undefined4 *)(param_1 + 0x6c8),fVar35,fVar30);
  fVar31 = fVar32;
  if ((uVar9 & 1) != 0) {
    if (fVar35 <= fVar30) {
      fVar30 = fVar32;
    }
    fVar31 = fVar30;
    if (fVar30 <= fVar32) {
      fVar31 = fVar32;
    }
  }
  fVar32 = *(float *)(param_1 + 0x910);
  fVar30 = *(float *)(param_1 + 0x8f8);
  if (fVar29 <= fVar31) {
    fVar29 = fVar31;
  }
  if (0.0 < fVar32) {
    if (fVar32 <= fVar30) {
      fVar30 = fVar32;
    }
    fVar35 = *(float *)(param_1 + 0x90c);
    fVar31 = *(float *)(param_1 + 0x8f4);
    if (*(float *)(param_1 + 0x8f4) <= fVar32) {
      fVar31 = fVar30;
    }
    fVar30 = fVar31;
    if ((0.0 < fVar35) && (fVar31 <= fVar35)) {
      fVar30 = fVar35;
    }
  }
  fVar32 = *(float *)(param_1 + 0x6c8);
  fVar35 = *(float *)(param_1 + 0xef0);
  fVar36 = *(float *)(param_1 + 0xeec);
  uVar9 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),fVar32,fVar36,fVar35);
  fVar31 = fVar32;
  if ((uVar9 & 1) != 0) {
    fVar31 = fVar35;
    if (fVar35 <= fVar36) {
      fVar31 = fVar32;
    }
    bVar8 = false;
    if ((fVar31 < fVar32) && (bVar8 = false, !NAN(fVar36) && !NAN(fVar35))) {
      bVar8 = fVar36 < fVar35;
    }
    fVar31 = fVar35;
    if (!bVar8) {
      fVar31 = fVar32;
    }
  }
  if (fVar31 <= fVar30) {
    fVar30 = fVar31;
  }
  if ((*(char *)(param_1 + 0xeb8) == '\0') ||
     (uVar9 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                           *(undefined4 *)(param_1 + 0xeec),*(undefined4 *)(param_1 + 0xef0)),
     (uVar9 & 1) == 0)) {
    pfVar12 = (float *)0x0;
  }
  else {
    local_120 = 1.0 / (*(float *)(param_1 + 0xeec) - *(float *)(param_1 + 0xef0));
    local_11c = 0.0 - *(float *)(param_1 + 0xef0) * local_120;
    pfVar12 = &local_120;
  }
  iVar13 = *(int *)(param_1 + 0xef4);
  if (iVar13 == -2) {
    iVar13 = 1;
  }
  FUN_0058cce0(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
               *(undefined4 *)(param_1 + 0x6d0),uVar22,uVar27,uVar28,uVar23,uVar24,plVar19,uVar17,
               uVar2,uVar14,lVar20,uVar15,uVar16,local_178,param_3,auStack_e8,uVar3,uVar25,uVar26,
               *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
               cVar6 != '\0',pfVar12,fVar29,fVar30,uVar10,param_2,uVar4,fVar21,uVar33,uVar34,
               &local_f8,uVar5,uVar18,&local_108,&local_118,iVar13,0);
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00534890; name: FUN_00534890
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00534890(char *param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  undefined *puVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  long lVar44;
  long *plVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  
  if (*param_1 == '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x7552);
    FUN_00517ae0(
                "CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene() called without BeginPostEffectScene().\n"
                );
    return 0xffffffff;
  }
  *param_1 = '\0';
  param_1[0x678] = '\0';
  param_1[0x679] = '\0';
  param_1[0x67a] = '\0';
  param_1[0x10e1] = '\0';
  FUN_00525800();
  param_1[0x67b] = *PTR_DAT_02713a98 | (byte)(param_2 >> 4) & 1;
  if (*(float *)(param_1 + 0x7f4) <= 0.0) {
    param_1[0x67b] = '\x01';
  }
  if ((param_2 >> 1 & 1) != 0) {
    if (param_1[0x104c] == '\0') {
      *(undefined8 *)PTR_DAT_02713a70 = 0;
    }
    uVar19 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
    return uVar19 & (int)uVar19 >> 0x1f;
  }
  if ((*(int *)(param_1 + 0x5d0) == 2) || (*(int *)(param_1 + 0x5c8) != 0)) {
    bVar17 = true;
  }
  else {
    bVar17 = *(int *)(param_1 + 0x5cc) != 0;
  }
  uVar42 = *(undefined8 *)(param_1 + 0x1168);
  uVar53 = *(undefined4 *)(param_1 + 0x5a4);
  uVar43 = *(undefined4 *)(param_1 + 0x5a8);
  uVar5 = *(undefined4 *)(param_1 + 0x5ac);
  uVar6 = *(undefined4 *)(param_1 + 0x5b0);
  if (bVar17) {
    *(undefined8 *)(param_1 + 0x1168) =
         **(undefined8 **)
           (**(long **)(*(long *)(param_1 + 0x1a8) + 0x38) +
            (long)*(int *)(**(long **)(*(long *)(param_1 + 0x1a8) + 0x38) + 0xa0) * 8 + 0xd0);
    param_1[0x5a4] = '\0';
    param_1[0x5a5] = '\0';
    param_1[0x5a6] = -0x80;
    param_1[0x5a7] = '?';
    param_1[0x5a8] = '\0';
    param_1[0x5a9] = '\0';
    param_1[0x5aa] = -0x80;
    param_1[0x5ab] = '?';
    param_1[0x5ac] = '\0';
    param_1[0x5ad] = '\0';
    param_1[0x5ae] = '\0';
    param_1[0x5af] = '\0';
    param_1[0x5b0] = '\0';
    param_1[0x5b1] = '\0';
    param_1[0x5b2] = '\0';
    param_1[0x5b3] = '\0';
  }
  iVar18 = FUN_00535230(param_1,param_2,param_3);
  if (((iVar18 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x75d0);
    uVar20 = FUN_00546ea0(iVar18);
    FUN_00517ae0("CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_PreProcess() failed (0x%x: %s).\n"
                 ,iVar18,uVar20);
  }
  uVar19 = FUN_00535f80(param_1);
  if ((((int)uVar19 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x75da);
    uVar20 = FUN_00546ea0(uVar19);
    FUN_00517ae0("CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_InternalProcess() failed (0x%x: %s).\n"
                 ,uVar19,uVar20);
  }
  if (*(int *)(param_1 + 0x5d0) == 2) {
    iVar18 = *(int *)(param_1 + 0x5d8);
    lVar41 = *(long *)(param_1 + 0x70);
    lVar23 = *(long *)(param_1 + 400);
    if (iVar18 == -1) {
      iVar18 = *(int *)(lVar23 + 0x90);
    }
    if (iVar18 < *(int *)(lVar23 + 0x30)) {
      lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + (long)iVar18 * 8);
    }
    else {
      lVar23 = 0;
    }
    if (lVar41 != 0) {
      lVar23 = lVar41;
    }
    *(long *)(param_1 + 0x70) = lVar23;
    uVar7 = *(undefined4 *)(param_1 + 0x8c8);
    uVar8 = *(undefined4 *)(param_1 + 0x8c0);
    uVar9 = *(undefined4 *)(param_1 + 0x7fc);
    uVar10 = *(undefined4 *)(param_1 + 0x7f8);
    uVar11 = *(undefined4 *)(param_1 + 0x848);
    cVar15 = param_1[0xeb8];
    param_1[0x78] = '\x01';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    pcVar1 = param_1 + 0x9cc;
    uVar29 = *(undefined8 *)(param_1 + 0x9b4);
    uVar25 = *(undefined8 *)(param_1 + 0x9c4);
    uVar33 = *(undefined8 *)pcVar1;
    uVar12 = *(undefined4 *)(param_1 + 0x8d0);
    uVar13 = *(undefined4 *)(param_1 + 0x8cc);
    uVar14 = *(undefined4 *)(param_1 + 0x8c4);
    uVar20 = *(undefined8 *)(param_1 + 0x9bc);
    pcVar2 = param_1 + 0x9d4;
    uVar35 = *(undefined8 *)pcVar2;
    uVar26 = *(undefined8 *)(param_1 + 0x9dc);
    uVar30 = *(undefined8 *)(param_1 + 0x9e4);
    uVar34 = *(undefined8 *)(param_1 + 0x9ec);
    pcVar3 = param_1 + 0xa0c;
    uVar36 = *(undefined8 *)(param_1 + 0x9f4);
    uVar27 = *(undefined8 *)(param_1 + 0x9fc);
    uVar31 = *(undefined8 *)(param_1 + 0xa04);
    uVar38 = *(undefined8 *)pcVar3;
    pcVar4 = param_1 + 0xa14;
    uVar40 = *(undefined8 *)pcVar4;
    uVar32 = *(undefined8 *)(param_1 + 0xa1c);
    uVar37 = *(undefined8 *)(param_1 + 0xa24);
    uVar39 = *(undefined8 *)(param_1 + 0xa2c);
    param_1[0x8cc] = '\0';
    param_1[0x8cd] = '\0';
    param_1[0x8ce] = -0x80;
    param_1[0x8cf] = '?';
    param_1[0x8d0] = '\0';
    param_1[0x8d1] = '\0';
    param_1[0x8d2] = -0x80;
    param_1[0x8d3] = '?';
    param_1[0x8c0] = '\0';
    param_1[0x8c1] = '\0';
    param_1[0x8c2] = -0x80;
    param_1[0x8c3] = '?';
    param_1[0x8c4] = '\0';
    param_1[0x8c5] = '\0';
    param_1[0x8c6] = -0x80;
    param_1[0x8c7] = '?';
    param_1[0x7f8] = '\0';
    param_1[0x7f9] = '\0';
    param_1[0x7fa] = -0x80;
    param_1[0x7fb] = '?';
    param_1[0x7fc] = '\0';
    param_1[0x7fd] = '\0';
    param_1[0x7fe] = -0x80;
    param_1[0x7ff] = '?';
    param_1[0x848] = '\0';
    param_1[0x849] = '\0';
    param_1[0x84a] = '\0';
    param_1[0x84b] = '\0';
    param_1[0xeb8] = '\0';
    param_1[0x9c0] = '\0';
    param_1[0x9c1] = '\0';
    param_1[0x9c2] = '\0';
    param_1[0x9c3] = '\0';
    param_1[0x9c4] = '\0';
    param_1[0x9c5] = '\0';
    param_1[0x9c6] = '\0';
    param_1[0x9c7] = '\0';
    param_1[0x9b8] = '\0';
    param_1[0x9b9] = '\0';
    param_1[0x9ba] = '\0';
    param_1[0x9bb] = '\0';
    param_1[0x9bc] = '\0';
    param_1[0x9bd] = '\0';
    param_1[0x9be] = '\0';
    param_1[0x9bf] = '\0';
    uVar28 = 0x40004;
    if (param_1[0x59c] == '\0') {
      uVar28 = 1;
    }
    *(undefined4 *)(param_1 + 0x8c8) = uVar28;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    param_1[0x9e8] = '\0';
    param_1[0x9e9] = '\0';
    param_1[0x9ea] = '\0';
    param_1[0x9eb] = '\0';
    param_1[0x9ec] = '\0';
    param_1[0x9ed] = '\0';
    param_1[0x9ee] = '\0';
    param_1[0x9ef] = '\0';
    param_1[0x9e0] = '\0';
    param_1[0x9e1] = '\0';
    param_1[0x9e2] = '\0';
    param_1[0x9e3] = '\0';
    param_1[0x9e4] = '\0';
    param_1[0x9e5] = '\0';
    param_1[0x9e6] = '\0';
    param_1[0x9e7] = '\0';
    param_1[0x9f0] = '\0';
    param_1[0x9f1] = '\0';
    param_1[0x9f2] = -0x80;
    param_1[0x9f3] = '?';
    param_1[0x9dc] = '\0';
    param_1[0x9dd] = '\0';
    param_1[0x9de] = -0x80;
    param_1[0x9df] = '?';
    param_1[0x9c8] = '\0';
    param_1[0x9c9] = '\0';
    param_1[0x9ca] = -0x80;
    param_1[0x9cb] = '?';
    param_1[0x9b4] = '\0';
    param_1[0x9b5] = '\0';
    param_1[0x9b6] = -0x80;
    param_1[0x9b7] = '?';
    param_1[0xa00] = '\0';
    param_1[0xa01] = '\0';
    param_1[0xa02] = '\0';
    param_1[0xa03] = '\0';
    param_1[0xa04] = '\0';
    param_1[0xa05] = '\0';
    param_1[0xa06] = '\0';
    param_1[0xa07] = '\0';
    param_1[0x9f8] = '\0';
    param_1[0x9f9] = '\0';
    param_1[0x9fa] = '\0';
    param_1[0x9fb] = '\0';
    param_1[0x9fc] = '\0';
    param_1[0x9fd] = '\0';
    param_1[0x9fe] = '\0';
    param_1[0x9ff] = '\0';
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    param_1[0xa28] = '\0';
    param_1[0xa29] = '\0';
    param_1[0xa2a] = '\0';
    param_1[0xa2b] = '\0';
    param_1[0xa2c] = '\0';
    param_1[0xa2d] = '\0';
    param_1[0xa2e] = '\0';
    param_1[0xa2f] = '\0';
    param_1[0xa20] = '\0';
    param_1[0xa21] = '\0';
    param_1[0xa22] = '\0';
    param_1[0xa23] = '\0';
    param_1[0xa24] = '\0';
    param_1[0xa25] = '\0';
    param_1[0xa26] = '\0';
    param_1[0xa27] = '\0';
    param_1[0xa30] = '\0';
    param_1[0xa31] = '\0';
    param_1[0xa32] = -0x80;
    param_1[0xa33] = '?';
    param_1[0xa1c] = '\0';
    param_1[0xa1d] = '\0';
    param_1[0xa1e] = -0x80;
    param_1[0xa1f] = '?';
    param_1[0xa08] = '\0';
    param_1[0xa09] = '\0';
    param_1[0xa0a] = -0x80;
    param_1[0xa0b] = '?';
    param_1[0x9f4] = '\0';
    param_1[0x9f5] = '\0';
    param_1[0x9f6] = -0x80;
    param_1[0x9f7] = '?';
    param_1[9] = '\x01';
    param_1[0x678] = '\0';
    param_1[0x679] = '\0';
    param_1[0x67a] = '\0';
    param_1[0x10e1] = '\0';
    FUN_00525800(param_1);
    param_1[0x67b] = '\x01';
    lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x38) + 8);
    *(undefined8 *)(param_1 + 0x1168) =
         **(undefined8 **)(lVar23 + (long)*(int *)(lVar23 + 0xa0) * 8 + 0xd0);
    uVar19 = FUN_00535f80(param_1);
    param_1[9] = '\0';
    if ((((int)uVar19 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x7637);
      uVar21 = FUN_00546ea0(uVar19);
      FUN_00517ae0("CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_InternalProcess() failed (0x%x: %s).\n"
                   ,uVar19,uVar21);
    }
    *(undefined4 *)(param_1 + 0x8c8) = uVar7;
    *(undefined4 *)(param_1 + 0x8c0) = uVar8;
    *(undefined4 *)(param_1 + 0x7fc) = uVar9;
    *(undefined4 *)(param_1 + 0x7f8) = uVar10;
    *(undefined4 *)(param_1 + 0x848) = uVar11;
    *(long *)(param_1 + 0x70) = lVar41;
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    *(undefined4 *)(param_1 + 0x8d0) = uVar12;
    *(undefined4 *)(param_1 + 0x8cc) = uVar13;
    *(undefined4 *)(param_1 + 0x8c4) = uVar14;
    param_1[0xeb8] = cVar15;
    *(undefined8 *)(param_1 + 0x9c4) = uVar25;
    *(undefined8 *)(param_1 + 0x9cc) = uVar33;
    *(undefined8 *)(param_1 + 0x9b4) = uVar29;
    *(undefined8 *)(param_1 + 0x9bc) = uVar20;
    *(undefined8 *)(param_1 + 0x9e4) = uVar30;
    *(undefined8 *)(param_1 + 0x9ec) = uVar34;
    *(undefined8 *)(param_1 + 0x9d4) = uVar35;
    *(undefined8 *)(param_1 + 0x9dc) = uVar26;
    *(undefined8 *)(param_1 + 0xa04) = uVar31;
    *(undefined8 *)(param_1 + 0xa0c) = uVar38;
    *(undefined8 *)(param_1 + 0x9f4) = uVar36;
    *(undefined8 *)(param_1 + 0x9fc) = uVar27;
    *(undefined8 *)(param_1 + 0xa24) = uVar37;
    *(undefined8 *)(param_1 + 0xa2c) = uVar39;
    *(undefined8 *)(param_1 + 0xa14) = uVar40;
    *(undefined8 *)(param_1 + 0xa1c) = uVar32;
  }
  if (!bVar17) {
    cVar15 = param_1[0x8b6];
    goto joined_r0x005351f4;
  }
  uVar28 = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined8 *)(param_1 + 0x1168) = uVar42;
  *(undefined4 *)(param_1 + 0x5a4) = uVar53;
  *(undefined4 *)(param_1 + 0x5a8) = uVar43;
  *(undefined4 *)(param_1 + 0x5ac) = uVar5;
  *(undefined4 *)(param_1 + 0x5b0) = uVar6;
  if (*(int *)(param_1 + 0x5d0) == 2) {
    local_128 = *(undefined4 *)(param_1 + 0x5cc);
    lVar23 = *(long *)(param_1 + 0x1a8);
    iVar18 = *(int *)(lVar23 + 0x30);
    if (0 < iVar18) goto LAB_00534eac;
LAB_00534b44:
    local_130 = 0;
    local_120 = 0;
    lVar23 = *(long *)(param_1 + 0x5b8);
    lVar41 = *(long *)(param_1 + 0x5c0);
  }
  else {
    local_128 = 0;
    lVar23 = *(long *)(param_1 + 0x1a8);
    iVar18 = *(int *)(lVar23 + 0x30);
    if (iVar18 < 1) goto LAB_00534b44;
LAB_00534eac:
    local_130 = **(undefined8 **)(lVar23 + 0x38);
    local_120 = 0;
    if ((*(int *)(param_1 + 0x5d0) == 2) && (iVar18 != 1)) {
      local_120 = *(undefined8 *)(*(long *)(lVar23 + 0x38) + 8);
    }
    lVar23 = *(long *)(param_1 + 0x5b8);
    lVar41 = *(long *)(param_1 + 0x5c0);
  }
  if (lVar23 == 0) {
    iVar18 = *(int *)(param_1 + 0x5d8);
    lVar23 = *(long *)(param_1 + 400);
    if (iVar18 == -1) {
      iVar18 = *(int *)(lVar23 + 0x90);
    }
    if (iVar18 < *(int *)(lVar23 + 0x30)) {
      lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + (long)iVar18 * 8);
    }
    else {
      lVar23 = 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar23 = *(long *)(param_1 + 0x70);
    }
  }
  if (lVar41 == 0) {
    iVar18 = *(int *)(param_1 + 0x5d8);
    lVar41 = *(long *)(param_1 + 400);
    if (iVar18 == -1) {
      iVar18 = *(int *)(lVar41 + 0x90);
    }
    if (iVar18 < *(int *)(lVar41 + 0x30)) {
      lVar41 = *(long *)(*(long *)(lVar41 + 0x38) + (long)iVar18 * 8);
    }
    else {
      lVar41 = 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar41 = *(long *)(param_1 + 0x70);
    }
  }
  fVar54 = *(float *)(param_1 + 0x8d0);
  uVar22 = FUN_00534620(param_1);
  puVar16 = PTR_DAT_027139b0;
  uVar53 = 0x3f800000;
  fVar46 = 1.0;
  if ((uVar22 & 1) == 0) {
    fVar46 = 0.0;
  }
  fVar46 = fVar54 * fVar46 * *(float *)(*(long *)(param_1 + 0x198) + 0x138);
  if (fVar46 <= 0.0) {
    uVar42 = 0;
  }
  else {
    uVar42 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x420);
  }
  fVar54 = *(float *)(param_1 + 0x5d4);
  iVar18 = *(int *)(param_1 + 0x5d8);
  lVar24 = *(long *)(param_1 + 400);
  if (iVar18 == -1) {
    iVar18 = *(int *)(lVar24 + 0x90);
    if (iVar18 < *(int *)(lVar24 + 0x30)) goto LAB_00534fd0;
LAB_00534fec:
    lVar24 = 0;
  }
  else {
    if (*(int *)(lVar24 + 0x30) <= iVar18) goto LAB_00534fec;
LAB_00534fd0:
    lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + (long)iVar18 * 8);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar24 = *(long *)(param_1 + 0x70);
  }
  iVar18 = *(int *)(param_1 + 0xbe0);
  uVar43 = 0xffffffff;
  if (iVar18 < 0x501) {
    if (iVar18 == 0) {
      uVar43 = 0;
    }
    else if (iVar18 == 1) {
      uVar43 = 2;
    }
    else if (iVar18 == 0x301) {
      uVar43 = 1;
    }
  }
  else if (iVar18 == 0x501) {
    uVar43 = 3;
  }
  else if (iVar18 == 0x801) {
    uVar43 = 5;
  }
  else if (iVar18 == 0x60101) {
    uVar43 = 4;
  }
  lVar44 = *(long *)(param_1 + 0x1168);
  fVar48 = (float)NEON_ucvtf(*(undefined4 *)(lVar44 + 0x4c));
  fVar52 = *(float *)(param_1 + 0x5a4);
  fVar47 = (float)NEON_ucvtf(*(undefined4 *)(lVar44 + 0x50));
  fVar50 = *(float *)(param_1 + 0x5a8);
  fVar51 = *(float *)(param_1 + 0x5ac);
  fVar49 = *(float *)(param_1 + 0x5b0);
  if (*(int *)(param_1 + 0x5d0) == 2) {
    uVar53 = *(undefined4 *)(param_1 + 0x8e0);
  }
  iVar18 = *(int *)PTR_DAT_027139b0;
  if (iVar18 < 1) {
    plVar45 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar45,0);
    *(long **)PTR_DAT_027139b8 = plVar45;
    *(undefined4 *)puVar16 = 1;
    if (plVar45 != (long *)0x0) goto LAB_005350e4;
LAB_00535198:
    iVar18 = 0;
  }
  else {
    plVar45 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar18 + 1;
    if (iVar18 + 1 < 2) {
      if (plVar45 == (long *)0x0) goto LAB_00535198;
LAB_005350e4:
      uVar20 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar45 + 0x20))(plVar45);
      FUN_005b9b10(uVar20,plVar45);
      iVar18 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar16 = iVar18;
  uVar19 = FUN_00598b60(fVar52 * fVar48,fVar50 * fVar47,fVar51 * fVar48,fVar49 * fVar47,
                        fVar46 * fVar54,uVar53,plVar45,lVar44,1,local_130,local_120,uVar42,uVar28,
                        local_128,lVar24,lVar23,lVar41,uVar43,0,0);
  cVar15 = param_1[0x8b6];
joined_r0x005351f4:
  if (cVar15 == '\0') {
    uVar19 = FUN_005385c0(param_1);
    if ((((int)uVar19 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x76e4);
      uVar42 = FUN_00546ea0(uVar19);
      FUN_00517ae0("CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_PostProcess() failed (0x%x: %s).\n"
                   ,uVar19,uVar42);
    }
    uVar19 = uVar19 & (int)uVar19 >> 0x1f;
  }
  return uVar19;
}



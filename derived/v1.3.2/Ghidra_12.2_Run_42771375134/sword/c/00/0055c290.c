/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055c290; name: FUN_0055c290
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_0055c290(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uVar8 = FUN_00557420();
  puVar3 = PTR_DAT_027139b0;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar12 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar12,0);
    *(long **)PTR_DAT_027139b8 = plVar12;
    *(undefined4 *)puVar3 = 1;
    if (plVar12 != (long *)0x0) goto LAB_0055c2fc;
LAB_0055c860:
    *(undefined4 *)puVar3 = 0;
    lVar9 = *(long *)(param_1 + 0x350);
  }
  else {
    plVar12 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (iVar7 + 1 < 2) {
      if (plVar12 == (long *)0x0) goto LAB_0055c860;
LAB_0055c2fc:
      uVar13 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      FUN_005b9b10(uVar13,plVar12);
      iVar7 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar3 = iVar7;
    lVar9 = *(long *)(param_1 + 0x350);
  }
  if (lVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar11 = *(long *)(lVar9 + (ulong)*(uint *)(param_1 + 0x2ec) * 8);
  if (*(int *)(lVar11 + 0x90) < *(int *)(lVar11 + 0x30)) {
    lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + (long)*(int *)(lVar11 + 0x90) * 8);
LAB_0055c374:
    *(int *)(lVar11 + 0x90) = 1 - *(int *)(lVar11 + 0x90);
    lVar9 = *(long *)(param_1 + 0x350);
    if (lVar9 != 0) goto LAB_0055c38c;
  }
  else {
    lVar14 = 0;
    if (lVar11 != 0) goto LAB_0055c374;
LAB_0055c38c:
    lVar9 = *(long *)(lVar9 + (ulong)*(uint *)(param_1 + 0x2ec) * 8);
    if (*(int *)(lVar9 + 0x90) < *(int *)(lVar9 + 0x30)) {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + (long)*(int *)(lVar9 + 0x90) * 8);
      goto LAB_0055c3b4;
    }
  }
  lVar9 = 0;
LAB_0055c3b4:
  lVar11 = *(long *)(*(long *)(param_1 + 800) + 0x18);
  FUN_0059d300(lVar9,0,0,1,0,0);
  FUN_0059d000(0,0);
  uVar25 = *(undefined4 *)(lVar11 + 0x54);
  uVar23 = *(undefined4 *)(lVar11 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x2e4);
  fVar27 = *(float *)(lVar11 + 0x88);
  fVar22 = *(float *)(lVar11 + 0x8c);
  fVar26 = *(float *)(lVar11 + 0x90);
  fVar24 = *(float *)(lVar11 + 0x94);
  uVar29 = *(undefined4 *)(lVar9 + 0x54);
  uVar28 = *(undefined4 *)(lVar9 + 0x58);
  lVar9 = *(long *)(param_1 + 0x170);
  FUN_00511040(&local_f0,0);
  FUN_00511040(&local_d0,0);
  if (((((local_f0 == local_d0) && (local_ec == local_cc)) && (local_e8 == local_c8)) &&
      ((local_e4 == local_c4 && (local_e0 == (float)local_c0)))) &&
     ((local_dc == local_c0._4_4_ && ((local_d8 == (float)local_b8 && (local_d4 == local_b8._4_4_)))
      ))) {
    fVar15 = *(float *)(lVar9 + 0x6c) * DAT_01d4be14 + *(float *)(lVar9 + 0x70) * DAT_01d4be80;
    fVar18 = *(float *)(lVar9 + 0x74) * DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_d0,&local_f0,&local_e8,&local_e0,&local_d8);
    fVar15 = local_cc * *(float *)(lVar9 + 0x6c) + local_c0._4_4_ * *(float *)(lVar9 + 0x70);
    fVar18 = local_b0._4_4_ * *(float *)(lVar9 + 0x74);
  }
  fVar16 = (float)FUN_005584d0(param_1);
  fVar20 = DAT_01d4c158;
  uVar2 = *(uint *)(param_1 + 0xd4);
  if (uVar2 - 2 < 0x28) {
    uVar10 = (uint)(0xc0000c4011 >> ((ulong)(uVar2 - 2) & 0x3f)) & 1;
  }
  else {
    uVar10 = 0;
  }
  fVar19 = *(float *)(param_1 + 0x178) / *(float *)(*(long *)(param_1 + 0x170) + 0x68);
  if ((((uVar2 - 10 < 0x3a) && ((1L << ((ulong)(uVar2 - 10) & 0x3f) & 0x200100001000001U) != 0)) ||
      (uVar2 == 0x1a || uVar10 != 0)) ||
     ((fVar21 = DAT_01d4bf5c, uVar2 < 0x3c &&
      ((1L << ((ulong)uVar2 & 0x3f) & 0xf80007800007800U) != 0)))) {
    fVar21 = DAT_01d4c0e4;
  }
  fVar17 = powf(0.5,(fVar19 * fVar21 * fVar21) / DAT_01d4c158);
  fVar17 = 1.0 - fVar17;
  local_e0 = powf(0.5,(fVar19 / fVar21) / fVar20);
  bVar4 = false;
  bVar5 = true;
  bVar6 = false;
  if (fVar17 < 1.0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar17)) {
      bVar4 = fVar17 < 0.0;
      bVar5 = fVar17 == 0.0;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    fVar17 = 1.0;
  }
  bVar4 = false;
  bVar5 = true;
  bVar6 = false;
  if (local_e0 < 1.0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(local_e0)) {
      bVar4 = local_e0 < 0.0;
      bVar5 = local_e0 == 0.0;
      bVar6 = false;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xd4);
  if (bVar5 || bVar4 != bVar6) {
    local_e0 = 0.0;
  }
  if (uVar2 - 2 < 0x28) {
    uVar10 = (uint)(0xc0000c4011 >> ((ulong)(uVar2 - 2) & 0x3f)) & 1;
  }
  else {
    uVar10 = 0;
  }
  fVar21 = (float)NEON_ucvtf(uVar23);
  fVar19 = (float)NEON_ucvtf(uVar25);
  fVar20 = DAT_01d4c4d4;
  if (((0x39 < uVar2 - 10) || ((1L << ((ulong)(uVar2 - 10) & 0x3f) & 0x200100001000001U) == 0)) &&
     ((uVar2 != 0x1a && uVar10 == 0 &&
      ((0x3b < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0xf80007800007800U) == 0)))))) {
    fVar20 = DAT_01d4bec4;
  }
  if (DAT_01d4c5a4 <= local_e0) {
    local_e0 = 0.999;
  }
  if (fVar17 <= fVar20) {
    fVar17 = fVar20;
  }
  local_f0 = (fVar15 + fVar18) * 0.125 * fVar16 * fVar17;
  local_d0 = -0.003921569;
  switch(uVar2) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x57:
  case 0x58:
  case 0x5b:
  case 0x5d:
    break;
  default:
    local_d0 = -0.0009775171;
    if ((uVar2 | 1) != 0x19 || uVar2 == 0) {
      local_d0 = -3.051851e-05;
    }
  }
  uVar23 = NEON_ucvtf(uVar29);
  uVar25 = NEON_ucvtf(uVar28);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0x477c0000477c0000;
  uStack_a8 = 0x477c0000477c0000;
  do {
    lVar9 = lVar11;
    lVar11 = *(long *)(lVar9 + 0x120);
  } while (lVar11 != 0);
  local_100 = *(undefined8 *)(lVar9 + 0xa8);
  do {
    lVar9 = lVar14;
    lVar14 = *(long *)(lVar9 + 0x120);
  } while (lVar14 != 0);
  local_f8 = *(undefined8 *)(lVar9 + 0xa8);
  local_ec = local_f0;
  local_e8 = local_f0;
  local_e4 = local_f0;
  local_dc = local_e0;
  local_d8 = local_e0;
  local_d4 = local_e0;
  local_cc = local_d0;
  local_c8 = local_d0;
  local_c4 = local_d0;
  iVar7 = FUN_005777a0(0,0,uVar23,uVar25,0,0,fVar27 * fVar19 + fVar26,fVar22 * fVar21 + fVar24,
                       plVar12,2,&local_100,&local_f0,&local_d0,uVar1,0);
  if ((iVar7 < 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",0x135d);
    uVar13 = FUN_00546ea0(iVar7);
    FUN_00517ae0("CRenderGlare::GenerateGlare_Afterimage(): pTexUtil->DrawRectGPU_MadOffsetTn() failed (0x%x: %s).\n"
                 ,iVar7,uVar13);
  }
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  return iVar7;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3bc00; name: FUN_00e3bc00
 */


void FUN_00e3bc00(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 uVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  pfVar4 = (float *)FUN_01020320(uVar3);
  fVar15 = *pfVar4;
  fVar14 = pfVar4[1];
  uVar5 = FUN_0150e0a0(lVar6);
  if ((DAT_01d4be30 < fVar15 * fVar15 + fVar14 * fVar14) && ((uVar5 & 1) == 0)) {
    auVar11 = ZEXT816(0xbf800000);
    uVar12 = 0x80;
    uVar13 = 0x3f;
    if (*(char *)(param_1 + 0x3f1) != '\0') {
      uVar12 = auVar11[2];
      uVar13 = auVar11[3];
    }
    fVar9 = 1.0;
    if (*(char *)(param_1 + 0x3f0) != '\0') {
      fVar9 = auVar11._0_4_;
    }
    fVar9 = fVar14 * *(float *)(param_1 + 0x470) * fVar9;
    auVar10[0] = -(*(char *)(param_1 + 0x600) == '\0');
    auVar10[1] = auVar10[0];
    auVar10[2] = auVar10[0];
    auVar10[3] = auVar10[0];
    auVar10[4] = auVar10[0];
    auVar10[5] = auVar10[0];
    auVar10[6] = auVar10[0];
    auVar10[7] = auVar10[0];
    auVar10[8] = auVar10[0];
    auVar10[9] = auVar10[0];
    auVar10[10] = auVar10[0];
    auVar10[0xb] = auVar10[0];
    auVar10[0xc] = auVar10[0];
    auVar10[0xd] = auVar10[0];
    auVar10[0xe] = auVar10[0];
    auVar10[0xf] = auVar10[0];
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         (ulong)(uint)fVar9 << 0x20 ^
         CONCAT44(fVar9,-((float)((uint)CONCAT11(uVar13,uVar12) << 0x10) *
                         fVar15 * *(float *)(param_1 + 0x470)));
    auVar11 = ZEXT416((uint)fVar9) << 0x20 ^ auVar11 & auVar10;
    auVar7[0] = -(*(char *)(param_1 + 0x5f4) == '\0');
    auVar7[1] = auVar7[0];
    auVar7[2] = auVar7[0];
    auVar7[3] = auVar7[0];
    auVar7[4] = auVar7[0];
    auVar7[5] = auVar7[0];
    auVar7[6] = auVar7[0];
    auVar7[7] = auVar7[0];
    auVar7[8] = auVar7[0];
    auVar7[9] = auVar7[0];
    auVar7[10] = auVar7[0];
    auVar7[0xb] = auVar7[0];
    auVar7[0xc] = auVar7[0];
    auVar7[0xd] = auVar7[0];
    auVar7[0xe] = auVar7[0];
    auVar7[0xf] = auVar7[0];
    auVar2._4_4_ = 0;
    auVar2._0_4_ = auVar11._0_4_;
    auVar2[8] = auVar11[8];
    auVar2[9] = auVar11[9];
    auVar2[10] = auVar11[10];
    auVar2[0xb] = auVar11[0xb];
    auVar2[0xc] = auVar11[0xc];
    auVar2[0xd] = auVar11[0xd];
    auVar2[0xe] = auVar11[0xe];
    auVar2[0xf] = auVar11[0xf];
    auVar8._4_4_ = 0;
    auVar8._0_4_ = auVar11._0_4_;
    auVar8[8] = auVar11[8];
    auVar8[9] = auVar11[9];
    auVar8[10] = auVar11[10];
    auVar8[0xb] = auVar11[0xb];
    auVar8[0xc] = auVar11[0xc];
    auVar8[0xd] = auVar11[0xd];
    auVar8[0xe] = auVar11[0xe];
    auVar8[0xf] = auVar11[0xf];
    auVar8 = auVar8 ^ (auVar2 ^ auVar11) & auVar7;
    fVar15 = auVar8._0_4_;
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) + auVar8._4_4_;
    fVar14 = *(float *)(param_1 + 0x474);
    if (fVar9 <= *(float *)(param_1 + 0x474)) {
      fVar14 = fVar9;
    }
    fVar9 = *(float *)(param_1 + 0x478);
    if (*(float *)(param_1 + 0x478) <= fVar14) {
      fVar9 = fVar14;
    }
    if ((*(char *)(param_1 + 0x5e4) != '\0') && (fVar9 < *(float *)(param_1 + 0x5e8))) {
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x5e8);
      *(undefined8 *)(param_1 + 0x5e8) = 0;
      *(undefined4 *)(param_1 + 0x5f0) = 0;
      *(undefined1 *)(param_1 + 0x5e4) = 0;
    }
    *(float *)(param_1 + 0x3d0) = (float)*(undefined8 *)(param_1 + 0x3d0) + fVar15;
    *(float *)(param_1 + 0x3d4) = fVar9;
    if (fVar15 != 0.0) {
      *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x490);
      goto joined_r0x00e3bda0;
    }
  }
  iVar1 = 0;
  if (1 < *(int *)(param_1 + 0x3fc)) {
    iVar1 = *(int *)(param_1 + 0x3fc) + -1;
  }
  *(int *)(param_1 + 0x3fc) = iVar1;
joined_r0x00e3bda0:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00edbd50; name: FUN_00edbd50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00edbd50(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 (*pauVar11) [12];
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar17;
  long *plVar16;
  long *plVar18;
  float fVar19;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  local_60 = 0x1fd84bb1b718574;
  local_58 = "fi0152_ladderup01_start";
  local_50 = 0x17;
  local_48 = 0;
  local_88 = 0;
  uStack_80 = 0xbb635a799600ea3b;
  local_78 = "fi0156_ladderdown01_strat";
  local_70 = 0x19;
  local_68 = 0;
  local_a0 = 0x12b9d5b6ca9a09d2;
  pcStack_98 = "fi0150_ladder01_l_loop";
  local_c0 = 0xef3977369ff643c7;
  local_90 = 0x16;
  local_a8 = 0;
  local_b8 = "fi0151_ladder01_r_loop";
  uStack_b0 = 0x16;
  plVar12 = (long *)FUN_00e7e260();
  uVar13 = FUN_00dbfcc0(plVar12,&uStack_80);
  if (((uVar13 & 1) != 0) || (uVar13 = FUN_00dbfcc0(plVar12,&local_60), (uVar13 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  fVar19 = (float)(**(code **)(*plVar12 + 0x210))(plVar12);
  if (*(char *)(param_1 + 0x90) == '\0') {
LAB_00edbe88:
    uVar13 = FUN_00dbfcc0(plVar12,&local_a0);
    if (((uVar13 & 1) == 0) && (uVar13 = FUN_00dbfcc0(plVar12,&local_c0), (uVar13 & 1) == 0)) {
      uVar15 = 0;
      goto joined_r0x00edc060;
    }
    plVar16 = (long *)plVar12[0x3d];
    plVar18 = (long *)plVar12[0x3e];
    if (plVar16 != plVar18) goto LAB_00edbeb4;
  }
  else {
    if ((fVar19 < 1.0) && (*(float *)(param_1 + 0x94) <= fVar19)) {
      *(float *)(param_1 + 0x94) = fVar19;
      goto LAB_00edbe88;
    }
    *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
    plVar18 = (long *)plVar12[0x3e];
    plVar16 = (long *)plVar12[0x3d];
    if ((long *)plVar12[0x3d] != plVar18) {
LAB_00edbeb4:
      do {
        plVar17 = plVar16 + 1;
        lVar14 = *plVar16;
        uVar13 = FUN_00e87b60(lVar14 + 0x50);
        if ((uVar13 & 1) != 0) {
          *(undefined1 *)(lVar14 + 0x69) = 1;
          lVar14 = *(long *)(param_1 + 0x88);
          iVar1 = *(int *)(lVar14 + 0x3e4);
          goto joined_r0x00edbf08;
        }
        plVar16 = plVar17;
      } while (plVar18 != plVar17);
    }
  }
  lVar14 = *(long *)(param_1 + 0x88);
  iVar1 = *(int *)(lVar14 + 0x3e4);
joined_r0x00edbf08:
  pauVar11 = (undefined1 (*) [12])(lVar14 + 0xa0);
  if (iVar1 == 0) {
    FUN_00a92cd0(DAT_01d4bb38,0,0);
    uVar21 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0xa8) >> 0x20);
    fVar19 = (float)*(undefined8 *)*pauVar11;
    fVar20 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
    auVar8._12_4_ = uVar21;
    auVar8._0_12_ = *pauVar11;
    uVar27 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_4_ = extraout_var_00;
    auVar2._12_4_ = extraout_var_01;
    uVar24 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    auVar9._12_4_ = uVar21;
    auVar9._0_12_ = *pauVar11;
    uVar30 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_4_ = extraout_var_00;
    auVar3._12_4_ = extraout_var_01;
    uVar29 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
    auVar10._12_4_ = uVar21;
    auVar10._0_12_ = *pauVar11;
    uVar32 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_4_ = extraout_var_00;
    auVar4._12_4_ = extraout_var_01;
    uVar31 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_4_ = extraout_var_00;
    auVar5._12_4_ = extraout_var_01;
    uVar34 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
    fVar22 = (float)((ulong)uVar30 >> 0x20);
    fVar28 = (float)((ulong)uVar27 >> 0x20);
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_4_ = extraout_var_00;
    auVar6._12_4_ = extraout_var_01;
    uVar35 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
    auVar7._4_4_ = extraout_var;
    auVar7._0_4_ = extraout_s0;
    auVar7._8_4_ = extraout_s0;
    auVar7._12_4_ = extraout_var;
    uVar15 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar23 = (float)_DAT_01d4ae90;
    fVar25 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar26 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar33 = (float)((ulong)uVar32 >> 0x20);
    plVar12[0x15] =
         CONCAT44((extraout_var_01 * fVar28 + fVar26 * fVar22 * (float)((ulong)uVar34 >> 0x20) +
                  fVar26 * fVar20 * (float)((ulong)uVar15 >> 0x20)) -
                  fVar33 * (float)((ulong)uVar35 >> 0x20),
                  (extraout_var_00 * (float)uVar27 +
                   (float)_UNK_01d4ae98 * (float)uVar30 * (float)uVar34 +
                  (float)_UNK_01d4ae98 * fVar19 * (float)uVar15) - (float)uVar32 * (float)uVar35);
    plVar12[0x14] =
         CONCAT44((extraout_var * fVar28 + fVar25 * fVar20 * (float)((ulong)uVar24 >> 0x20) +
                  fVar25 * fVar33 * (float)((ulong)uVar29 >> 0x20)) -
                  fVar22 * (float)((ulong)uVar31 >> 0x20),
                  (extraout_s0 * (float)uVar27 + fVar23 * fVar19 * (float)uVar24 +
                  fVar23 * (float)uVar32 * (float)uVar29) - (float)uVar30 * (float)uVar31);
  }
  else {
    plVar12[0x15] = *(long *)(lVar14 + 0xa8);
    plVar12[0x14] = *(long *)*pauVar11;
  }
  uVar15 = 1;
  *(undefined1 *)(plVar12 + 0x18) = 1;
  plVar12[0x17] = *(long *)(param_1 + 0xa8);
  plVar12[0x16] = *(long *)(param_1 + 0xa0);
  *(undefined1 *)(plVar12 + 0x18) = 1;
joined_r0x00edc060:
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar15;
}



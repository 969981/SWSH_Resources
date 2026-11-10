/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00745400; name: FUN_00745400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00745400(undefined1 (*param_1) [12],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_s0;
  undefined8 uVar25;
  float extraout_var_00;
  float extraout_var;
  float extraout_var_01;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  
  fVar27 = param_4._12_4_;
  fVar32 = param_4._8_4_;
  fVar31 = param_4._4_4_;
  fVar30 = param_4._0_4_;
  plVar17 = *(long **)(param_6 + 0x210);
  plVar18 = *(long **)(param_6 + 0x218);
  if (plVar17 != plVar18) {
    uVar25 = NEON_fmov(0x3f800000,4);
    bVar13 = true;
    fStack_7c = (float)((ulong)uVar25 >> 0x20);
    do {
      if (((*plVar17 != 0) && (lVar16 = *(long *)(*plVar17 + 0x60), lVar16 != 0)) &&
         (uVar14 = FUN_00746270(lVar16), (uVar14 & 1) != 0)) {
        uVar14 = FUN_00732e30(lVar16 + -0x50);
        if ((uVar14 & 1) != 0) {
          puVar15 = (undefined8 *)
                    (*(long *)(*(long *)(*(long *)(lVar16 + 0x178) + 0x68) + 0x260) +
                    (long)*(int *)(lVar16 + 0x180) * 0x60);
          uVar9 = *puVar15;
          uVar10 = puVar15[1];
          auVar35 = *(undefined1 (*) [16])(puVar15 + 2);
          FUN_00733560(lVar16 + -0x50);
          fVar48 = (float)uVar10;
          local_70 = (float)uVar9;
          fStack_6c = (float)((ulong)uVar9 >> 0x20);
          fVar29 = auVar35._0_4_;
          fVar47 = auVar35._4_4_;
          auVar12._8_8_ = param_2._8_8_;
          auVar12._0_8_ = uVar25;
          auVar11._8_8_ = param_2._8_8_;
          auVar11._0_8_ = uVar25;
          fVar20 = param_3._0_4_;
          fVar22 = param_3._4_4_;
          fVar24 = param_3._8_4_;
          fVar67 = param_3._12_4_;
          fVar49 = extraout_s0 * local_70 + fVar20 * fStack_6c;
          fVar50 = extraout_var * local_70 + fVar22 * fStack_6c;
          fVar51 = extraout_var_00 * local_70 + fVar24 * fStack_6c;
          fVar52 = extraout_var_01 * local_70 + fVar67 * fStack_6c;
          fVar33 = param_5._0_4_;
          fVar36 = param_5._4_4_;
          fVar37 = param_5._8_4_;
          fVar38 = param_5._12_4_;
          fVar53 = 1.0 / (fVar52 + fVar27 * fVar48 + fVar38 * fStack_7c);
          auVar39._0_4_ = (fVar49 + fVar30 * fVar48 + fVar33 * fStack_7c) * fVar53;
          auVar39._4_4_ = (fVar50 + fVar31 * fVar48 + fVar36 * fStack_7c) * fVar53;
          fVar54 = extraout_s0 * fVar29 + fVar20 * fStack_6c;
          fVar55 = extraout_var * fVar29 + fVar22 * fStack_6c;
          fVar56 = extraout_var_00 * fVar29 + fVar24 * fStack_6c;
          fVar57 = extraout_var_01 * fVar29 + fVar67 * fStack_6c;
          fVar68 = auVar35._8_4_;
          fVar19 = fVar30 * fVar68;
          fVar21 = fVar31 * fVar68;
          fVar23 = fVar32 * fVar68;
          fVar58 = 1.0 / (fVar57 + fVar27 * fVar48 + fVar38 * fStack_7c);
          fVar43 = (fVar54 + fVar30 * fVar48 + fVar33 * fStack_7c) * fVar58;
          fVar44 = (fVar55 + fVar31 * fVar48 + fVar36 * fStack_7c) * fVar58;
          fVar58 = (fVar56 + fVar32 * fVar48 + fVar37 * fStack_7c) * fVar58;
          fVar59 = extraout_s0 * local_70 + fVar20 * fVar47;
          fVar60 = extraout_var * local_70 + fVar22 * fVar47;
          fVar61 = extraout_var_00 * local_70 + fVar24 * fVar47;
          fVar62 = extraout_var_01 * local_70 + fVar67 * fVar47;
          fVar63 = 1.0 / (fVar62 + fVar27 * fVar48 + fVar38 * fStack_7c);
          fVar45 = (fVar59 + fVar30 * fVar48 + fVar33 * fStack_7c) * fVar63;
          fVar46 = (fVar60 + fVar31 * fVar48 + fVar36 * fStack_7c) * fVar63;
          fVar63 = (fVar61 + fVar32 * fVar48 + fVar37 * fStack_7c) * fVar63;
          fVar64 = extraout_s0 * fVar29 + fVar20 * fVar47;
          fVar65 = extraout_var * fVar29 + fVar22 * fVar47;
          fVar66 = extraout_var_00 * fVar29 + fVar24 * fVar47;
          fVar67 = extraout_var_01 * fVar29 + fVar67 * fVar47;
          fVar47 = 1.0 / (fVar57 + fVar27 * fVar68 + fVar38 * fStack_7c);
          fVar20 = fVar30 * fVar48;
          fVar22 = fVar31 * fVar48;
          fVar24 = fVar32 * fVar48;
          fVar57 = 1.0 / (fVar62 + fVar27 * fVar68 + fVar38 * fStack_7c);
          auVar34._4_12_ = auVar11._4_12_;
          auVar34._0_4_ = (fVar51 + fVar32 * fVar48 + fVar37 * fStack_7c) * fVar53;
          fVar53 = (fVar54 + fVar30 * fVar68 + fVar33 * fStack_7c) * fVar47;
          fVar54 = (fVar55 + fVar31 * fVar68 + fVar36 * fStack_7c) * fVar47;
          fVar47 = (fVar56 + fVar32 * fVar68 + fVar37 * fStack_7c) * fVar47;
          fVar29 = 1.0 / (fVar67 + fVar27 * fVar68 + fVar38 * fStack_7c);
          fVar67 = 1.0 / (fVar67 + fVar27 * fVar48 + fVar38 * fStack_7c);
          auVar39._8_8_ = auVar34._0_8_;
          fVar48 = (fVar59 + fVar30 * fVar68 + fVar33 * fStack_7c) * fVar57;
          fVar55 = (fVar60 + fVar31 * fVar68 + fVar36 * fStack_7c) * fVar57;
          fVar57 = (fVar61 + fVar32 * fVar68 + fVar37 * fStack_7c) * fVar57;
          auVar41._4_4_ = fVar44;
          auVar41._0_4_ = fVar43;
          auVar41._8_4_ = fVar58;
          auVar41._12_4_ = fStack_7c;
          auVar35 = NEON_fmin(auVar39,auVar41,4);
          auVar2._4_4_ = fVar44;
          auVar2._0_4_ = fVar43;
          auVar2._8_4_ = fVar58;
          auVar2._12_4_ = fStack_7c;
          auVar40 = NEON_fmax(auVar39,auVar2,4);
          fVar30 = (fVar64 + fVar30 * fVar68 + fVar33 * fStack_7c) * fVar29;
          fVar31 = (fVar65 + fVar31 * fVar68 + fVar36 * fStack_7c) * fVar29;
          fVar32 = (fVar66 + fVar32 * fVar68 + fVar37 * fStack_7c) * fVar29;
          auVar26._0_4_ = (fVar64 + fVar20 + fVar33 * fStack_7c) * fVar67;
          auVar26._4_4_ = (fVar65 + fVar22 + fVar36 * fStack_7c) * fVar67;
          auVar26._8_4_ = (fVar66 + fVar24 + fVar37 * fStack_7c) * fVar67;
          fVar27 = 1.0 / (fVar52 + fVar27 * fVar68 + fVar38 * fStack_7c);
          auVar3._4_4_ = fVar46;
          auVar3._0_4_ = fVar45;
          auVar3._8_4_ = fVar63;
          auVar3._12_4_ = fStack_7c;
          auVar35 = NEON_fmin(auVar35,auVar3,4);
          auVar4._4_4_ = fVar46;
          auVar4._0_4_ = fVar45;
          auVar4._8_4_ = fVar63;
          auVar4._12_4_ = fStack_7c;
          auVar41 = NEON_fmax(auVar40,auVar4,4);
          auVar26._12_4_ = fStack_7c;
          auVar28._0_4_ = (fVar49 + fVar19 + fVar33 * fStack_7c) * fVar27;
          auVar28._4_4_ = (fVar50 + fVar21 + fVar36 * fStack_7c) * fVar27;
          auVar40 = NEON_fmin(auVar35,auVar26,4);
          auVar35 = NEON_fmax(auVar41,auVar26,4);
          auVar42._4_12_ = auVar12._4_12_;
          auVar42._0_4_ = (fVar51 + fVar23 + fVar37 * fStack_7c) * fVar27;
          auVar28._8_8_ = auVar42._0_8_;
          auVar40 = NEON_fmin(auVar40,auVar28,4);
          auVar35 = NEON_fmax(auVar35,auVar28,4);
          auVar5._4_4_ = fVar54;
          auVar5._0_4_ = fVar53;
          auVar5._8_4_ = fVar47;
          auVar5._12_4_ = fStack_7c;
          auVar40 = NEON_fmin(auVar40,auVar5,4);
          auVar6._4_4_ = fVar54;
          auVar6._0_4_ = fVar53;
          auVar6._8_4_ = fVar47;
          auVar6._12_4_ = fStack_7c;
          auVar35 = NEON_fmax(auVar35,auVar6,4);
          auVar7._4_4_ = fVar55;
          auVar7._0_4_ = fVar48;
          auVar7._8_4_ = fVar57;
          auVar7._12_4_ = fStack_7c;
          param_5 = NEON_fmax(auVar35,auVar7,4);
          auVar8._4_4_ = fVar55;
          auVar8._0_4_ = fVar48;
          auVar8._8_4_ = fVar57;
          auVar8._12_4_ = fStack_7c;
          auVar40 = NEON_fmin(auVar40,auVar8,4);
          auVar35._4_4_ = fVar31;
          auVar35._0_4_ = fVar30;
          auVar35._8_4_ = fVar32;
          auVar35._12_4_ = fStack_7c;
          auVar35 = NEON_fmin(auVar40,auVar35,4);
          auVar40._4_4_ = fVar31;
          auVar40._0_4_ = fVar30;
          auVar40._8_4_ = fVar32;
          auVar40._12_4_ = fStack_7c;
          param_3 = NEON_fmax(param_5,auVar40,4);
          fVar27 = fStack_7c;
          if (!bVar13) {
            fVar32 = (float)*(undefined8 *)(*param_1 + 8);
            fVar27 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
            fVar30 = (float)*(undefined8 *)*param_1;
            fVar31 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
            param_5 = *(undefined1 (*) [16])(param_1[1] + 4);
            param_3 = NEON_fmax(param_5,param_3,4);
            auVar1._12_4_ = fVar27;
            auVar1._0_12_ = *param_1;
            auVar35 = NEON_fmin(auVar1,auVar35,4);
          }
          bVar13 = false;
          *(long *)(*param_1 + 8) = auVar35._8_8_;
          *(long *)*param_1 = auVar35._0_8_;
          *(long *)param_1[2] = param_3._8_8_;
          *(long *)(param_1[1] + 4) = param_3._0_8_;
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar18 != plVar17);
    if (!bVar13) {
      return;
    }
  }
  uVar10 = _UNK_01d4b0f8;
  uVar9 = _DAT_01d4b0f0;
  uVar25 = _DAT_01d4a3d0;
  *(undefined8 *)(*param_1 + 8) = _UNK_01d4a3d8;
  *(undefined8 *)*param_1 = uVar25;
  *(undefined8 *)param_1[2] = uVar10;
  *(undefined8 *)(param_1[1] + 4) = uVar9;
  return;
}



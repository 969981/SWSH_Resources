/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ee0d0; name: FUN_005ee0d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ee0d0(undefined8 *param_1,float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [32];
  
  fVar1 = (float)param_4 + 0.0;
  FUN_00694600(0,param_2 + 0.0,0,param_3 + 0.0,param_4,param_5,auStack_40,1);
  FUN_00694640(auStack_80,auStack_40,0);
  fVar17 = auStack_80._48_4_ * 0.0;
  fVar18 = auStack_80._52_4_ * 0.0;
  fVar19 = auStack_80._56_4_ * 0.0;
  fVar20 = auStack_80._60_4_ * 0.0;
  fVar2 = (float)_DAT_01d49dc0 * fVar1 + 0.0 + (float)_DAT_01d4b570;
  fVar3 = (float)((ulong)_DAT_01d49dc0 >> 0x20) * fVar1 + 0.0 +
          (float)((ulong)_DAT_01d4b570 >> 0x20);
  fVar4 = (float)_UNK_01d49dc8 * fVar1 + 0.0 + (float)_UNK_01d4b578;
  fVar1 = (float)((ulong)_UNK_01d49dc8 >> 0x20) * fVar1 + 0.0 +
          (float)((ulong)_UNK_01d4b578 >> 0x20);
  fVar13 = auStack_80._32_4_;
  fVar14 = auStack_80._36_4_;
  fVar15 = auStack_80._40_4_;
  fVar16 = auStack_80._44_4_;
  fVar5 = auStack_80._16_4_;
  fVar6 = auStack_80._20_4_;
  fVar7 = auStack_80._24_4_;
  fVar8 = auStack_80._28_4_;
  fVar9 = auStack_80._0_4_;
  fVar10 = auStack_80._4_4_;
  fVar11 = auStack_80._8_4_;
  fVar12 = auStack_80._12_4_;
  param_1[1] = CONCAT44(fVar12 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20,
                        fVar11 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19);
  *param_1 = CONCAT44(fVar10 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18,
                      fVar9 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17);
  param_1[3] = CONCAT44(fVar12 * 0.0 + fVar8 + fVar16 * 0.0 + fVar20,
                        fVar11 * 0.0 + fVar7 + fVar15 * 0.0 + fVar19);
  param_1[2] = CONCAT44(fVar10 * 0.0 + fVar6 + fVar14 * 0.0 + fVar18,
                        fVar9 * 0.0 + fVar5 + fVar13 * 0.0 + fVar17);
  param_1[5] = CONCAT44(fVar16 + fVar12 * 0.0 + fVar8 * 0.0 + fVar20,
                        fVar15 + fVar11 * 0.0 + fVar7 * 0.0 + fVar19);
  param_1[4] = CONCAT44(fVar14 + fVar10 * 0.0 + fVar6 * 0.0 + fVar18,
                        fVar13 + fVar9 * 0.0 + fVar5 * 0.0 + fVar17);
  param_1[7] = CONCAT44(fVar12 * fVar2 + fVar8 * fVar3 + fVar16 * fVar4 + auStack_80._60_4_ * fVar1,
                        fVar11 * fVar2 + fVar7 * fVar3 + fVar15 * fVar4 + auStack_80._56_4_ * fVar1)
  ;
  param_1[6] = CONCAT44(fVar10 * fVar2 + fVar6 * fVar3 + fVar14 * fVar4 + auStack_80._52_4_ * fVar1,
                        fVar9 * fVar2 + fVar5 * fVar3 + fVar13 * fVar4 + auStack_80._48_4_ * fVar1);
  FUN_00694630(auStack_40);
  return;
}



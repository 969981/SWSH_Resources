/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00574080; name: FUN_00574080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00574080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,float *param_10,long *param_11,uint param_12,undefined4 param_13)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_stack_00000000;
  float in_stack_00000008;
  float in_stack_00000010;
  
  uVar5 = (int)(in_stack_00000000 + DAT_01d4c2dc);
  if (0 < (int)param_12) {
    uVar5 = param_12;
  }
  if (7 < (int)uVar5) {
    uVar5 = 8;
  }
  if ((int)uVar5 < 3) {
    uVar5 = 2;
  }
  plVar4 = *(long **)(param_9 + 0x30);
  uVar6 = uVar5 << 1 | 1;
  (**(code **)(*plVar4 + 0xe8))
            (plVar4,*(undefined4 *)((long)(param_9 + 0x30) + (long)(int)uVar5 * 4 + 0x7e20));
  fVar8 = in_stack_00000000 * DAT_01d4bcdc;
  _DAT_02760c18 = 0;
  _DAT_02760c20 = 0;
  bVar1 = fVar8 <= (float)(int)uVar5;
  if ((int)uVar5 < 1) goto LAB_005744c8;
  fVar7 = -1.0 / ((in_stack_00000000 + in_stack_00000000) * in_stack_00000000);
  if (0.0 <= fVar8) {
    fVar9 = 1.0;
    if (fVar8 < 1.0) {
      fVar9 = 1.5;
    }
  }
  else {
    fVar9 = 2.0;
  }
  DAT_02760c28._4_4_ = fVar9 * param_10[1];
  DAT_02760c28._0_4_ = fVar9 * *param_10;
  DAT_02760c30._0_4_ = fVar9 * fVar7 * fVar9;
  DAT_02760c38 = -(fVar9 * *param_10);
  DAT_02760c3c = -(fVar9 * param_10[1]);
  DAT_02760c30._4_4_ = 0;
  DAT_02760c44._0_4_ = 0;
  DAT_02760c40 = (float)DAT_02760c30;
  if (uVar5 < 2) goto LAB_005744c8;
  if (fVar9 <= fVar8) {
    fVar10 = fVar9 + 1.0;
    if (fVar8 < fVar10) {
      fVar10 = 1.5;
      goto LAB_00574200;
    }
  }
  else {
    fVar10 = 2.0;
LAB_00574200:
    fVar10 = fVar9 + fVar10;
  }
  DAT_02760c4c._0_4_ = fVar10 * param_10[1];
  DAT_02760c44._4_4_ = fVar10 * *param_10;
  DAT_02760c4c._4_4_ = fVar10 * fVar7 * fVar10;
  DAT_02760c54._4_4_ = -(fVar10 * *param_10);
  DAT_02760c5c._0_4_ = -(fVar10 * param_10[1]);
  DAT_02760c54._0_4_ = 0;
  DAT_02760c64._0_4_ = 0;
  DAT_02760c5c._4_4_ = DAT_02760c4c._4_4_;
  if (uVar5 < 3) goto LAB_005744c8;
  if (fVar10 <= fVar8) {
    fVar9 = fVar10 + 1.0;
    if (fVar8 < fVar9) {
      fVar9 = 1.5;
      goto LAB_00574268;
    }
  }
  else {
    fVar9 = 2.0;
LAB_00574268:
    fVar9 = fVar10 + fVar9;
  }
  DAT_02760c64._4_4_ = fVar9 * *param_10;
  DAT_02760c6c._0_4_ = fVar9 * param_10[1];
  DAT_02760c6c._4_4_ = fVar9 * fVar7 * fVar9;
  DAT_02760c74._4_4_ = -(fVar9 * *param_10);
  DAT_02760c7c._0_4_ = -(fVar9 * param_10[1]);
  DAT_02760c74._0_4_ = 0;
  DAT_02760c84._0_4_ = 0;
  DAT_02760c7c._4_4_ = DAT_02760c6c._4_4_;
  if (uVar5 < 4) goto LAB_005744c8;
  if (fVar9 <= fVar8) {
    fVar10 = fVar9 + 1.0;
    if (fVar8 < fVar10) {
      fVar10 = 1.5;
      goto LAB_005742d8;
    }
  }
  else {
    fVar10 = 2.0;
LAB_005742d8:
    fVar10 = fVar9 + fVar10;
  }
  DAT_02760c8c._0_4_ = fVar10 * param_10[1];
  DAT_02760c84._4_4_ = fVar10 * *param_10;
  DAT_02760c8c._4_4_ = fVar10 * fVar7 * fVar10;
  DAT_02760c94._4_4_ = -(fVar10 * *param_10);
  DAT_02760c9c._0_4_ = -(fVar10 * param_10[1]);
  DAT_02760c94._0_4_ = 0;
  DAT_02760ca4._0_4_ = 0;
  DAT_02760c9c._4_4_ = DAT_02760c8c._4_4_;
  if (uVar5 < 5) goto LAB_005744c8;
  if (fVar10 <= fVar8) {
    fVar9 = fVar10 + 1.0;
    if (fVar8 < fVar9) {
      fVar9 = 1.5;
      goto LAB_00574340;
    }
  }
  else {
    fVar9 = 2.0;
LAB_00574340:
    fVar9 = fVar10 + fVar9;
  }
  DAT_02760cac._0_4_ = fVar9 * param_10[1];
  DAT_02760cbc._0_4_ = -(fVar9 * param_10[1]);
  DAT_02760ca4._4_4_ = fVar9 * *param_10;
  DAT_02760cac._4_4_ = fVar9 * fVar7 * fVar9;
  DAT_02760cb4._4_4_ = -(fVar9 * *param_10);
  DAT_02760cb4._0_4_ = 0;
  DAT_02760cc4._0_4_ = 0;
  DAT_02760cbc._4_4_ = DAT_02760cac._4_4_;
  if (uVar5 < 6) goto LAB_005744c8;
  if (fVar9 <= fVar8) {
    fVar10 = fVar9 + 1.0;
    if (fVar8 < fVar10) {
      fVar10 = 1.5;
      goto LAB_005743a8;
    }
  }
  else {
    fVar10 = 2.0;
LAB_005743a8:
    fVar10 = fVar9 + fVar10;
  }
  DAT_02760ccc._0_4_ = fVar10 * param_10[1];
  DAT_02760cd4 = 0;
  DAT_02760cc4._4_4_ = fVar10 * *param_10;
  DAT_02760ccc._4_4_ = fVar10 * fVar7 * fVar10;
  DAT_02760cd8._0_4_ = -(fVar10 * *param_10);
  DAT_02760cd8._4_4_ = -(fVar10 * param_10[1]);
  DAT_02760ce0._4_4_ = 0;
  DAT_02760ce0._0_4_ = DAT_02760ccc._4_4_;
  if (uVar5 < 7) goto LAB_005744c8;
  if (fVar10 <= fVar8) {
    fVar9 = fVar10 + 1.0;
    if (fVar8 < fVar9) {
      fVar9 = 1.5;
      goto LAB_00574418;
    }
  }
  else {
    fVar9 = 2.0;
LAB_00574418:
    fVar9 = fVar10 + fVar9;
  }
  DAT_02760ce8._4_4_ = fVar9 * param_10[1];
  DAT_02760cf8._4_4_ = -(fVar9 * param_10[1]);
  DAT_02760ce8._0_4_ = fVar9 * *param_10;
  DAT_02760cf0._0_4_ = fVar9 * fVar7 * fVar9;
  DAT_02760cf8._0_4_ = -(fVar9 * *param_10);
  DAT_02760cf0._4_4_ = 0;
  DAT_02760d00._4_4_ = 0;
  DAT_02760d00._0_4_ = (float)DAT_02760cf0;
  if (uVar5 < 8) goto LAB_005744c8;
  if (fVar9 <= fVar8) {
    fVar10 = fVar9 + 1.0;
    if (fVar8 < fVar10) {
      fVar10 = 1.5;
      goto LAB_00574480;
    }
  }
  else {
    fVar10 = 2.0;
LAB_00574480:
    fVar10 = fVar9 + fVar10;
  }
  DAT_02760d08._0_4_ = fVar10 * *param_10;
  DAT_02760d08._4_4_ = fVar10 * param_10[1];
  DAT_02760d10._0_4_ = fVar10 * fVar7 * fVar10;
  DAT_02760d18._0_4_ = -(fVar10 * *param_10);
  DAT_02760d18._4_4_ = -(fVar10 * param_10[1]);
  DAT_02760d10._4_4_ = 0;
  DAT_02760d20._4_4_ = 0;
  DAT_02760d20._0_4_ = (float)DAT_02760d10;
LAB_005744c8:
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,uVar6);
  if (7 < (int)uVar6) {
    uVar6 = 8;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,uVar6);
  _DAT_02760c18 =
       (ulong)(uint)(-1.0 / ((in_stack_00000008 + in_stack_00000008) * in_stack_00000008)) << 0x20;
  _DAT_02760c20 =
       (ulong)(uint)(-1.0 / ((in_stack_00000010 + in_stack_00000010) * in_stack_00000010));
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xfc),&DAT_02760c18,1);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)((long)param_11 + 0x4c));
  if ((fVar8 != (float)param_3) ||
     (fVar8 = (float)NEON_ucvtf((int)param_11[10]), fVar8 != (float)param_4)) {
    bVar1 = true;
  }
  uVar2 = (**(code **)(*param_11 + 0x80))(param_11);
  uVar3 = 8;
  if (!bVar1) {
    uVar3 = 9;
  }
  (**(code **)(*param_11 + 0x78))(param_11,uVar3);
  uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_13);
  (**(code **)(*param_11 + 0x78))(param_11,uVar2);
  return uVar3;
}



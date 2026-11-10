/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057a430; name: FUN_0057a430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0057a430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,float param_7,float param_8,long param_9,
            uint param_10,float *param_11,float *param_12,float *param_13,undefined4 *param_14,
            ulong param_15,long param_16)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 in_stack_00000020;
  float in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  int in_stack_00000050;
  undefined4 in_stack_00000058;
  
  uVar5 = param_10 - 1;
  if (uVar5 < 8) {
    lVar9 = param_9 + (param_15 & 1) * 0x2c0 + (long)(int)uVar5 * 0x58 + (long)in_stack_00000050 * 4
    ;
    piVar2 = (int *)(lVar9 + 0x201d4);
    if (in_stack_00000028 <= 0.0) {
      piVar2 = (int *)(lVar9 + 0x1e0d4);
    }
    uVar13 = (ulong)param_10;
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      lVar9 = param_9 + (param_15 & 1) * 0x2c0 + (long)(int)uVar5 * 0x58 +
              (long)in_stack_00000050 * 4;
      piVar2 = (int *)(lVar9 + 0x1f154);
      if (in_stack_00000028 <= 0.0) {
        piVar2 = (int *)(lVar9 + 0x1d054);
      }
      iVar4 = *piVar2;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar4);
    if (param_16 == 0) {
      fVar15 = 1.0 / (float)(int)param_10;
      uVar13 = (ulong)param_10;
      pfVar10 = (float *)&DAT_02760a24;
      do {
        pfVar10[-3] = fVar15;
        pfVar10[-2] = fVar15;
        pfVar10[-1] = fVar15;
        *pfVar10 = fVar15;
        pfVar10 = pfVar10 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    else {
      if (uVar13 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        puVar11 = (undefined8 *)(param_16 + 0x20);
        puVar12 = (undefined8 *)&DAT_02760a48;
        do {
          uVar3 = puVar11[-3];
          lVar9 = lVar9 + 4;
          puVar12[-6] = puVar11[-4];
          puVar12[-5] = uVar3;
          uVar3 = puVar11[-1];
          puVar12[-4] = puVar11[-2];
          puVar12[-3] = uVar3;
          uVar3 = puVar11[1];
          puVar12[-2] = *puVar11;
          puVar12[-1] = uVar3;
          puVar1 = puVar11 + 2;
          uVar3 = puVar11[3];
          puVar11 = puVar11 + 8;
          *puVar12 = *puVar1;
          puVar12[1] = uVar3;
          puVar12 = puVar12 + 8;
        } while (uVar13 - (uVar13 & 3) != lVar9);
      }
      if ((param_10 & 3) != 0) {
        lVar8 = -(uVar13 & 3);
        puVar11 = (undefined8 *)(&DAT_02760a18 + lVar9 * 4);
        puVar12 = (undefined8 *)(param_16 + lVar9 * 0x10);
        do {
          uVar3 = puVar12[1];
          *puVar11 = *puVar12;
          puVar11[1] = uVar3;
          lVar8 = lVar8 + 1;
          puVar11 = puVar11 + 2;
          puVar12 = puVar12 + 2;
        } while (lVar8 != 0);
      }
    }
    fVar14 = 0.0;
    lVar9 = (long)(int)param_10;
    *(undefined8 *)(&DAT_02760a20 + lVar9 * 4) = 0;
    *(undefined8 *)(&DAT_02760a18 + lVar9 * 4) = 0;
    uVar13 = (ulong)param_10;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    pfVar10 = (float *)&DAT_02760a24;
    do {
      fVar17 = pfVar10[-3] + fVar17;
      (&DAT_02760a18)[lVar9 * 4] = fVar17;
      fVar16 = pfVar10[-2] + fVar16;
      (&DAT_02760a1c)[lVar9 * 4] = fVar16;
      fVar15 = pfVar10[-1] + fVar15;
      (&DAT_02760a20)[lVar9 * 4] = fVar15;
      fVar14 = *pfVar10 + fVar14;
      uVar13 = uVar13 - 1;
      (&DAT_02760a24)[lVar9 * 4] = fVar14;
      pfVar10 = pfVar10 + 4;
    } while (uVar13 != 0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,
               param_10 + 1);
    _DAT_02760c18 = *(undefined8 *)param_11;
    _DAT_02760c20 = *(undefined8 *)(param_11 + 2);
    DAT_02760c28._0_4_ = *param_11 * *param_12;
    DAT_02760c30._0_4_ = *param_12 * param_11[2] + 0.0;
    DAT_02760c28._4_4_ = param_11[1] * param_12[1];
    DAT_02760c30._4_4_ = param_12[1] * param_11[3] + 0.0;
    DAT_02760c38 = *param_11 * *param_13;
    DAT_02760c40 = *param_13 * param_11[2] + 0.0;
    DAT_02760c3c = param_11[1] * param_13[1];
    DAT_02760c44._0_4_ = param_13[1] * param_11[3] + 0.0;
    DAT_02760c44._4_4_ = *param_12;
    DAT_02760c4c._0_4_ = param_12[1];
    DAT_02760c4c._4_4_ = *param_13;
    DAT_02760c54._0_4_ = param_13[1];
    DAT_02760c5c._4_4_ = in_stack_00000030;
    DAT_02760c64._0_4_ = in_stack_00000038;
    DAT_02760c64._4_4_ = 2.0 / (param_7 - (float)param_5);
    DAT_02760c6c._0_4_ = 2.0 / (param_8 - (float)param_6);
    DAT_02760c6c._4_4_ = -1.0 - DAT_02760c64._4_4_ * (float)param_5;
    DAT_02760c74._0_4_ = -1.0 - (float)DAT_02760c6c * (float)param_6;
    DAT_02760c54._4_4_ = in_stack_00000020;
    DAT_02760c5c._0_4_ = in_stack_00000028;
    DAT_02760c74._4_4_ = *param_14;
    DAT_02760c7c._0_4_ = param_14[1];
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,7);
    if (in_stack_00000040 == (long *)0x0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (**(code **)(*in_stack_00000040 + 0x80))(in_stack_00000040);
      (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040,4);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),in_stack_00000040);
    }
    if (in_stack_00000048 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),in_stack_00000048);
    }
    uVar7 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         in_stack_00000058);
    if (in_stack_00000040 != (long *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040,uVar6);
    }
  }
  else {
    uVar7 = 0xfffffffc;
  }
  return uVar7;
}



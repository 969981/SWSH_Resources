/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00579ce0; name: FUN_00579ce0
 */


undefined8
FUN_00579ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            float param_5,float param_6,float param_7,float param_8,long param_9,uint param_10,
            undefined8 param_11,float *param_12,long param_13,long param_14,int param_15,
            undefined4 param_16)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  uVar3 = param_10 - 1;
  if (uVar3 < 8) {
    uVar14 = (ulong)param_10;
    if ((param_12 == (float *)0x0) || (*param_12 == 0.0)) {
      bVar4 = false;
      iVar7 = *(int *)(param_9 + (long)(int)uVar3 * 0x58 + (long)param_15 * 4 + 0x1b9e4);
    }
    else {
      bVar4 = true;
      iVar7 = *(int *)(param_9 + (long)(int)uVar3 * 0x58 + (long)param_15 * 4 + 0x1bca4);
    }
    if (iVar7 == 0) {
      lVar10 = param_9 + (long)(int)uVar3 * 0x58 + (long)param_15 * 4;
      piVar2 = (int *)(lVar10 + 0x1b724);
      if (!bVar4) {
        piVar2 = (int *)(lVar10 + 0x1b464);
      }
      iVar7 = *piVar2;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar7);
    (**(code **)(**(long **)(param_9 + 0x30) + 200))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),param_11,uVar14);
    if (param_13 == 0) {
      fVar15 = 1.0 / (float)(int)param_10;
      uVar14 = (ulong)param_10;
      pfVar11 = (float *)&DAT_02760a24;
      do {
        pfVar11[-3] = fVar15;
        pfVar11[-2] = fVar15;
        pfVar11[-1] = fVar15;
        *pfVar11 = fVar15;
        pfVar11 = pfVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      if (uVar14 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar12 = (undefined8 *)(param_13 + 0x20);
        puVar13 = (undefined8 *)&DAT_02760a48;
        do {
          uVar6 = puVar12[-3];
          lVar10 = lVar10 + 4;
          puVar13[-6] = puVar12[-4];
          puVar13[-5] = uVar6;
          uVar6 = puVar12[-1];
          puVar13[-4] = puVar12[-2];
          puVar13[-3] = uVar6;
          uVar6 = puVar12[1];
          puVar13[-2] = *puVar12;
          puVar13[-1] = uVar6;
          puVar1 = puVar12 + 2;
          uVar6 = puVar12[3];
          puVar12 = puVar12 + 8;
          *puVar13 = *puVar1;
          puVar13[1] = uVar6;
          puVar13 = puVar13 + 8;
        } while (uVar14 - (uVar14 & 3) != lVar10);
      }
      if ((param_10 & 3) != 0) {
        lVar9 = -(uVar14 & 3);
        puVar12 = (undefined8 *)(&DAT_02760a18 + lVar10 * 4);
        puVar13 = (undefined8 *)(param_13 + lVar10 * 0x10);
        do {
          uVar6 = puVar13[1];
          *puVar12 = *puVar13;
          puVar12[1] = uVar6;
          lVar9 = lVar9 + 1;
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
        } while (lVar9 != 0);
      }
    }
    fVar15 = 0.0;
    lVar10 = (long)(int)param_10;
    fVar17 = 0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
    uVar14 = (ulong)param_10;
    *(undefined8 *)(&DAT_02760a20 + lVar10 * 4) = 0;
    *(undefined8 *)(&DAT_02760a18 + lVar10 * 4) = 0;
    pfVar11 = (float *)&DAT_02760a24;
    do {
      fVar18 = pfVar11[-3] + fVar18;
      (&DAT_02760a18)[lVar10 * 4] = fVar18;
      fVar17 = pfVar11[-2] + fVar17;
      (&DAT_02760a1c)[lVar10 * 4] = fVar17;
      fVar16 = pfVar11[-1] + fVar16;
      (&DAT_02760a20)[lVar10 * 4] = fVar16;
      fVar15 = *pfVar11 + fVar15;
      uVar14 = uVar14 - 1;
      (&DAT_02760a24)[lVar10 * 4] = fVar15;
      pfVar11 = pfVar11 + 4;
    } while (uVar14 != 0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,
               param_10 + 1);
    if (param_14 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_14);
    }
    DAT_02760c18 = (param_7 - param_5) * 0.5;
    bVar5 = *(char *)(*(long *)(param_9 + 0x20) + 0x58) == '\0';
    fVar15 = 2.0;
    if (bVar5) {
      fVar15 = -2.0;
    }
    DAT_02760c1c = (param_8 - param_6) / fVar15;
    fVar15 = -1.0;
    if (bVar5) {
      fVar15 = 1.0;
    }
    uVar6 = 0x3f800000;
    if (bVar5) {
      uVar6 = 0xbf800000;
    }
    DAT_02760c20 = DAT_02760c18 + param_5;
    DAT_02760c24 = param_6 - fVar15 * DAT_02760c1c;
    if (bVar4) {
      DAT_02760c28._0_4_ = *param_12 / DAT_01d4c6d8;
      DAT_02760c28._4_4_ = param_12[1] + DAT_01d4c1f4;
      DAT_02760c30._4_4_ = -DAT_02760c28._4_4_ / (float)DAT_02760c28;
      DAT_02760c30._0_4_ = 1.0 / (float)DAT_02760c28;
    }
    uVar8 = 1;
    if (bVar4) {
      uVar8 = 2;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x110),&DAT_02760c18,uVar8);
    local_a0 = 0x447a00003f800000;
    uStack_98 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_a0);
    uVar6 = FUN_00571d00(param_1,param_2,param_3,param_4,0xbf800000,fVar15,0x3f800000,uVar6,param_9,
                         param_16);
  }
  else {
    uVar6 = 0xfffffffc;
  }
  return uVar6;
}



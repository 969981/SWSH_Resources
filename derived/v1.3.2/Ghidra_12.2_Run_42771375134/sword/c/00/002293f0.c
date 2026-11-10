/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002293f0; name: FUN_002293f0
 */


void FUN_002293f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 long param_5,float *param_6,float *param_7,float *param_8,float *param_9,
                 long param_10,long param_11,byte param_12,long param_13,long param_14,long param_15
                 )

{
  long lVar1;
  long lVar2;
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
  
  *param_4 = param_5;
  *(undefined4 *)(param_4 + 0xa1) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 4;
    *(undefined4 *)((long)param_4 + lVar2 + 0x488) = 0xffffffff;
    lVar2 = lVar1;
  } while (lVar1 != 0x80);
  *(undefined4 *)((long)param_4 + 0x80c) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 4;
    *(undefined4 *)((long)param_4 + lVar2 + 0x78c) = 0xffffffff;
    lVar2 = lVar1;
  } while (lVar1 != 0x80);
  fVar3 = *param_6;
  fVar5 = param_6[1];
  fVar10 = fVar5 + fVar5;
  fVar11 = param_6[2];
  fVar13 = param_6[3];
  fVar7 = fVar3 + fVar3;
  fVar14 = fVar11 * (fVar11 + fVar11);
  fVar8 = (fVar11 + fVar11) * fVar13;
  fVar15 = 1.0 - fVar3 * fVar7;
  fVar4 = fVar7 * fVar5 - fVar8;
  fVar8 = fVar7 * fVar5 + fVar8;
  fVar6 = fVar7 * fVar11 - fVar10 * fVar13;
  fVar9 = fVar10 * fVar11 + fVar7 * fVar13;
  fVar12 = fVar7 * fVar11 + fVar10 * fVar13;
  fVar11 = fVar10 * fVar11 - fVar7 * fVar13;
  fVar13 = (1.0 - fVar5 * fVar10) - fVar14;
  fVar14 = fVar15 - fVar14;
  fVar15 = fVar15 - fVar5 * fVar10;
  *(float *)((long)param_4 + 0x824) = fVar9;
  *(float *)((long)param_4 + 0x814) = fVar8;
  *(float *)(param_4 + 0x103) = fVar6;
  *(float *)((long)param_4 + 0x81c) = fVar4;
  *(float *)(param_4 + 0x105) = fVar12;
  *(float *)((long)param_4 + 0x82c) = fVar11;
  *(float *)(param_4 + 0x102) = fVar13;
  *(float *)(param_4 + 0x104) = fVar14;
  *(float *)(param_4 + 0x106) = fVar15;
  *(float *)((long)param_4 + 0x834) = param_6[4];
  *(float *)(param_4 + 0x107) = param_6[5];
  *(float *)((long)param_4 + 0x83c) = param_6[6];
  fVar3 = *param_7;
  fVar5 = param_7[1];
  fVar10 = fVar5 + fVar5;
  fVar7 = fVar3 + fVar3;
  fVar16 = param_7[2];
  fVar17 = param_7[3];
  fVar19 = fVar16 * (fVar16 + fVar16);
  fVar18 = (fVar16 + fVar16) * fVar17;
  fVar3 = 1.0 - fVar3 * fVar7;
  *(float *)((long)param_4 + 0x854) = fVar10 * fVar16 + fVar7 * fVar17;
  *(float *)((long)param_4 + 0x844) = fVar7 * fVar5 + fVar18;
  *(float *)(param_4 + 0x109) = fVar7 * fVar16 - fVar10 * fVar17;
  *(float *)((long)param_4 + 0x84c) = fVar7 * fVar5 - fVar18;
  *(float *)(param_4 + 0x10b) = fVar7 * fVar16 + fVar10 * fVar17;
  *(float *)((long)param_4 + 0x85c) = fVar10 * fVar16 - fVar7 * fVar17;
  *(float *)(param_4 + 0x108) = (1.0 - fVar5 * fVar10) - fVar19;
  *(float *)(param_4 + 0x10a) = fVar3 - fVar19;
  *(float *)(param_4 + 0x10c) = fVar3 - fVar5 * fVar10;
  *(float *)((long)param_4 + 0x864) = param_7[4];
  *(float *)(param_4 + 0x10d) = param_7[5];
  fVar3 = param_7[6];
  param_4[0x111] = (long)param_8;
  param_4[0x112] = (long)param_9;
  param_4[0x113] = param_10;
  param_4[0x114] = param_11;
  *(undefined4 *)(param_4 + 0x115) = param_1;
  *(undefined4 *)((long)param_4 + 0x8ac) = param_2;
  *(byte *)((long)param_4 + 0x8b1) = param_12 & 1;
  *(undefined4 *)((long)param_4 + 0x8b4) = param_3;
  param_4[0x117] = param_13;
  param_4[0x118] = param_14;
  param_4[0x119] = param_15;
  *(float *)((long)param_4 + 0x86c) = fVar3;
  *(undefined4 *)(param_5 + 0x1110) = 0;
  *(undefined1 *)(param_4 + 0x11a) = 0;
  fVar7 = param_8[2];
  fVar3 = *param_8;
  fVar5 = param_8[1];
  *(float *)(param_4 + 0x10e) =
       *(float *)((long)param_4 + 0x834) + fVar13 * fVar3 + fVar4 * fVar5 + fVar12 * fVar7;
  *(float *)((long)param_4 + 0x874) =
       fVar8 * fVar3 + fVar14 * fVar5 + fVar11 * fVar7 + *(float *)(param_4 + 0x107);
  *(float *)(param_4 + 0x10f) =
       fVar6 * fVar3 + fVar9 * fVar5 + fVar15 * fVar7 + *(float *)((long)param_4 + 0x83c);
  fVar9 = param_8[2];
  fVar3 = param_9[1];
  fVar5 = *param_8;
  fVar7 = param_8[1];
  fVar4 = param_9[2];
  fVar6 = param_9[4];
  fVar8 = param_9[5];
  fVar10 = param_9[7];
  fVar11 = param_9[8];
  fVar12 = param_9[10];
  fVar13 = param_9[0xb];
  *(float *)((long)param_4 + 0x87c) =
       fVar5 * *param_9 + fVar7 * param_9[3] + fVar9 * param_9[6] + param_9[9];
  *(float *)(param_4 + 0x110) = fVar5 * fVar3 + fVar7 * fVar6 + fVar9 * fVar10 + fVar12;
  *(float *)((long)param_4 + 0x884) = fVar5 * fVar4 + fVar7 * fVar8 + fVar9 * fVar11 + fVar13;
  return;
}



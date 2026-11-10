/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593860; name: FUN_00593860
 */


ulong FUN_00593860(float param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                  float *param_6,ulong param_7,undefined8 param_8,uint param_9,uint param_10)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_3f8 [101];
  float local_264 [25];
  undefined1 auStack_200 [400];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_7 & 1) != 0) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
    }
    uVar2 = param_9;
    if (param_9 == 0) {
      uVar2 = *(uint *)(param_3 + 0x54);
    }
    uVar6 = param_10;
    if (param_10 == 0) {
      uVar6 = *(uint *)(param_3 + 0x58);
    }
    fVar13 = *(float *)(param_3 + 0x88);
    fVar15 = *(float *)(param_3 + 0x8c);
    fVar9 = *(float *)(param_3 + 0x90);
    fVar7 = *(float *)(param_3 + 0x94);
    if (param_9 == 0) {
      param_9 = *(uint *)(param_4 + 0x54);
    }
    if (param_10 == 0) {
      param_10 = *(uint *)(param_4 + 0x58);
    }
    FUN_00512610(0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_200,local_264);
    fVar8 = *param_6;
    fVar10 = param_6[1];
    fVar11 = param_6[2];
    fVar12 = param_6[3];
    lVar4 = 0;
    pfVar5 = local_3f8 + 2;
    do {
      pfVar1 = (float *)((long)local_264 + lVar4);
      lVar4 = lVar4 + 4;
      fVar14 = *pfVar1 * param_1;
      pfVar5[-2] = fVar8 * fVar14;
      pfVar5[-1] = fVar14 * fVar10;
      *pfVar5 = fVar14 * fVar11;
      pfVar5[1] = fVar14 * fVar12;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 != 100);
    uVar3 = FUN_0059d300(param_4,0,0,1,0,0);
    if (-1 < (int)uVar3) {
      FUN_0059d000(0,0);
      do {
        lVar4 = param_3;
        param_3 = *(long *)(lVar4 + 0x120);
      } while (param_3 != 0);
      uVar2 = FUN_00575a10(0,0,(float)param_9,(float)param_10,0,0,fVar13 * (float)uVar2 + fVar9,
                           fVar15 * (float)uVar6 + fVar7,param_2,0x19,auStack_200,local_3f8,
                           *(undefined8 *)(lVar4 + 0xa8),param_5,0);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}



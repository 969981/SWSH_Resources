/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593a70; name: FUN_00593a70
 */


ulong FUN_00593a70(float param_1,long param_2,long param_3,long param_4,uint param_5,
                  undefined4 param_6,float *param_7,ulong param_8,undefined8 param_9,uint param_10,
                  uint param_11)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_470 [112];
  float afStack_2b0 [28];
  undefined1 auStack_240 [448];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_8 & 1) != 0) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
    }
    uVar1 = param_10;
    if (param_10 == 0) {
      uVar1 = *(uint *)(param_3 + 0x54);
    }
    uVar5 = param_11;
    if (param_11 == 0) {
      uVar5 = *(uint *)(param_3 + 0x58);
    }
    fVar14 = *(float *)(param_3 + 0x88);
    fVar16 = *(float *)(param_3 + 0x8c);
    fVar10 = *(float *)(param_3 + 0x90);
    fVar8 = *(float *)(param_3 + 0x94);
    if (param_10 == 0) {
      param_10 = *(uint *)(param_4 + 0x54);
    }
    if (param_11 == 0) {
      param_11 = *(uint *)(param_4 + 0x58);
    }
    uVar3 = 0x1c;
    if ((param_5 & 1) == 0) {
      uVar3 = 0x18;
    }
    FUN_005129f0(0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_240,afStack_2b0,
                 param_5 & 1);
    fVar9 = *param_7;
    fVar11 = param_7[1];
    fVar12 = param_7[2];
    fVar13 = param_7[3];
    pfVar4 = local_470 + 2;
    uVar2 = (ulong)uVar3;
    pfVar7 = afStack_2b0;
    do {
      fVar15 = *pfVar7 * param_1;
      pfVar4[-2] = fVar9 * fVar15;
      pfVar4[-1] = fVar15 * fVar11;
      uVar2 = uVar2 - 1;
      *pfVar4 = fVar15 * fVar12;
      pfVar4[1] = fVar15 * fVar13;
      pfVar4 = pfVar4 + 4;
      pfVar7 = pfVar7 + 1;
    } while (uVar2 != 0);
    uVar2 = FUN_0059d300(param_4,0,0,1,0,0);
    if (-1 < (int)uVar2) {
      FUN_0059d000(0,0);
      do {
        lVar6 = param_3;
        param_3 = *(long *)(lVar6 + 0x120);
      } while (param_3 != 0);
      uVar1 = FUN_00575a10(0,0,(float)param_10,(float)param_11,0,0,fVar14 * (float)uVar1 + fVar10,
                           fVar16 * (float)uVar5 + fVar8,param_2,(ulong)uVar3,auStack_240,local_470,
                           *(undefined8 *)(lVar6 + 0xa8),param_6,0);
      uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
    }
  }
  return uVar2;
}



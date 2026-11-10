/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593fe0; name: FUN_00593fe0
 */


ulong FUN_00593fe0(float param_1,float param_2,long param_3,long param_4,long param_5,uint param_6,
                  float *param_7,uint param_8,byte param_9,uint param_10,uint param_11)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  
  if (*(long **)(param_3 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  if (param_2 <= 0.5) {
    param_2 = 0.5;
  }
  if (((param_9 & 1) == 0) &&
     ((((param_6 < 0xf && ((1 << (ulong)(param_6 & 0x1f) & 0x4924U) != 0)) ||
       ((param_6 < 0x15 && ((0x109209U >> (ulong)(param_6 & 0x1f) & 1) != 0)))) ||
      ((param_6 < 0x15 && ((1 << (ulong)(param_6 & 0x1f) & 0x106000U) != 0)))))) {
    lVar5 = param_4;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x120);
    } while (lVar5 != 0);
    if ((*(byte *)(*(long *)(lVar4 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
      if ((param_8 & 1) != 0) {
        (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
        (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
        (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
      }
      uVar2 = param_10;
      if (param_10 == 0) {
        uVar2 = *(uint *)(param_4 + 0x54);
      }
      if (param_11 == 0) {
        fVar7 = *(float *)(param_4 + 0x88);
        fVar9 = *(float *)(param_4 + 0x8c);
        fVar8 = *(float *)(param_4 + 0x90);
        fVar6 = *(float *)(param_4 + 0x94);
        uVar1 = *(uint *)(param_4 + 0x58);
      }
      else {
        fVar7 = *(float *)(param_4 + 0x88);
        fVar9 = *(float *)(param_4 + 0x8c);
        fVar8 = *(float *)(param_4 + 0x90);
        fVar6 = *(float *)(param_4 + 0x94);
        uVar1 = param_11;
      }
      if (param_10 == 0) {
        param_10 = *(uint *)(param_5 + 0x54);
      }
      if (param_11 == 0) {
        param_11 = *(uint *)(param_5 + 0x58);
      }
      FUN_00512220(param_2,*(undefined4 *)(*(long *)(param_4 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc),&local_d8,0);
      param_1 = param_1 * 0.25;
      local_118 = param_1 * *param_7;
      fStack_114 = param_1 * param_7[1];
      local_110 = param_1 * param_7[2];
      fStack_10c = param_1 * param_7[3];
      local_108 = local_118;
      fStack_104 = fStack_114;
      local_100 = local_110;
      fStack_fc = fStack_10c;
      local_f8 = local_118;
      fStack_f4 = fStack_114;
      local_f0 = local_110;
      fStack_ec = fStack_10c;
      local_e8 = local_118;
      fStack_e4 = fStack_114;
      local_e0 = local_110;
      fStack_dc = fStack_10c;
      uVar3 = FUN_0059d300(param_5,0,0,1,0,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      FUN_0059d000(0,0);
      do {
        lVar5 = param_4;
        param_4 = *(long *)(lVar5 + 0x120);
      } while (param_4 != 0);
      uVar2 = FUN_00575a10(0,0,(float)param_10,(float)param_11,0,0,fVar7 * (float)uVar2 + fVar8,
                           fVar9 * (float)uVar1 + fVar6,param_3,4,&local_d8,&local_118,
                           *(undefined8 *)(lVar5 + 0xa8),param_6,0);
      return (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  fStack_c8 = (1.0 - param_2 * 0.5) / (param_2 * 0.5);
  local_d4 = fStack_c8 + fStack_c8;
  fStack_c8 = fStack_c8 * fStack_c8 * 4.0;
  local_d8 = 0x3f800000;
  local_d0 = 0x3f800000;
  local_c0 = 0x3f800000;
  local_b8 = 0x3f800000;
  fStack_114 = param_7[1] * param_1;
  local_118 = *param_7 * param_1;
  local_110 = param_7[2] * param_1;
  fStack_10c = param_7[3] * param_1;
  local_cc = local_d4;
  local_c4 = local_d4;
  local_bc = local_d4;
  uVar3 = FUN_00593180(param_3,param_4,param_5,&local_d8,1,param_6,&local_118,param_8 & 1,
                       param_9 & 1,param_10,param_11);
  return uVar3;
}



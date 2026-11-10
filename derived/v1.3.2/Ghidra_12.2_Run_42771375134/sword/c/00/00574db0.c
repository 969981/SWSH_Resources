/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00574db0; name: FUN_00574db0
 */


ulong FUN_00574db0(long param_1,long param_2,long param_3,ulong param_4,undefined4 param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  ulong local_48;
  
  if ((param_6 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  uVar5 = *(ulong *)(param_2 + 0x88);
  if ((param_4 & 1) == 0) {
    local_48 = uVar5 & 0xffffffff00000000;
  }
  else {
    local_48 = uVar5 & 0xffffffff;
  }
  uVar10 = *(undefined4 *)(param_2 + 0x54);
  uVar11 = *(undefined4 *)(param_2 + 0x58);
  fVar9 = *(float *)(param_2 + 0x94);
  fVar8 = *(float *)(param_2 + 0x8c);
  fVar12 = *(float *)(param_2 + 0x90);
  uVar2 = *(uint *)(param_3 + 0x54);
  uVar1 = *(uint *)(param_3 + 0x58);
  FUN_0059d300(param_3,0,0,1,0,0);
  uVar3 = FUN_0059d000(0,0);
  if (-1 < (int)uVar3) {
    fVar6 = (float)NEON_ucvtf(uVar10);
    fVar7 = (float)NEON_ucvtf(uVar11);
    do {
      lVar4 = param_2;
      param_2 = *(long *)(lVar4 + 0x120);
    } while (param_2 != 0);
    uVar2 = FUN_00574080(0,0,(float)uVar2,(float)uVar1,0,0,(float)uVar5 * fVar6 + fVar12,
                         fVar8 * fVar7 + fVar9,param_1,&local_48,*(undefined8 *)(lVar4 + 0xa8),
                         param_5,0);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}



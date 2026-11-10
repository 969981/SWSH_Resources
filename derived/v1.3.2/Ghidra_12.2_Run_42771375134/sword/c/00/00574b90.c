/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00574b90; name: FUN_00574b90
 */


ulong FUN_00574b90(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_4 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar9 = *(float *)(param_3 + 0x88);
  fVar11 = *(float *)(param_3 + 0x8c);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar13 = *(float *)(param_3 + 0x90);
  fVar14 = *(float *)(param_3 + 0x94);
  fVar12 = fVar11 * 0.5 + fVar14;
  fVar10 = fVar9 * 0.5 + fVar13;
  uVar3 = *(uint *)(param_2 + 0x54);
  uVar1 = *(uint *)(param_2 + 0x58);
  FUN_0059d300(param_2,0,0,1,0,0);
  uVar4 = FUN_0059d000(0,0);
  if (-1 < (int)uVar4) {
    do {
      lVar5 = param_3;
      param_3 = *(long *)(lVar5 + 0x120);
    } while (param_3 != 0);
    plVar6 = *(long **)(lVar5 + 0xa8);
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x7df4));
    (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),plVar6);
    uVar2 = (**(code **)(*plVar6 + 0x80))(plVar6);
    (**(code **)(*plVar6 + 0x78))(plVar6,5);
    uVar3 = FUN_00572640(0,0,(float)uVar3,(float)uVar1,-fVar10,-fVar12,
                         (fVar9 * fVar7 + fVar13) - fVar10,(fVar11 * fVar8 + fVar14) - fVar12,
                         param_1,0);
    (**(code **)(*plVar6 + 0x78))(plVar6,uVar2);
    uVar4 = (ulong)(uVar3 & (int)uVar3 >> 0x1f);
  }
  return uVar4;
}



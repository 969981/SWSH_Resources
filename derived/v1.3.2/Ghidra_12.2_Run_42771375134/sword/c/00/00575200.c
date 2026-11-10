/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00575200; name: FUN_00575200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00575200(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_4 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  uVar9 = *(undefined4 *)(param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  fVar11 = *(float *)(param_2 + 0x88);
  fVar12 = *(float *)(param_2 + 0x8c);
  fVar14 = *(float *)(param_2 + 0x90);
  fVar13 = *(float *)(param_2 + 0x94);
  uVar2 = *(uint *)(param_3 + 0x54);
  uVar1 = *(uint *)(param_3 + 0x58);
  uVar3 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    fVar7 = (float)NEON_ucvtf(uVar9);
    fVar8 = (float)NEON_ucvtf(uVar10);
    FUN_0059d000(0,0);
    lVar5 = param_2;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x120);
    } while (lVar5 != 0);
    plVar6 = *(long **)(lVar4 + 0xa8);
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x7ddc));
    (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),plVar6);
    DAT_02760c18 = *(undefined4 *)(param_2 + 0x88);
    DAT_02760c1c = *(undefined4 *)(param_2 + 0x8c);
    _DAT_02760c20 = 0;
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x104),&DAT_02760c18,1);
    uVar9 = (**(code **)(*plVar6 + 0x80))(plVar6);
    (**(code **)(*plVar6 + 0x78))(plVar6,5);
    uVar2 = FUN_00571d00(0,0,(float)uVar2,(float)uVar1,0,0,fVar11 * fVar7 + fVar14,
                         fVar12 * fVar8 + fVar13,param_1,0);
    (**(code **)(*plVar6 + 0x78))(plVar6,uVar9);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}



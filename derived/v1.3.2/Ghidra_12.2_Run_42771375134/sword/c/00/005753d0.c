/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005753d0; name: FUN_005753d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_005753d0(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                  undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                  uint param_10)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
  }
  uVar8 = *(undefined4 *)(param_4 + 0x54);
  uVar9 = *(undefined4 *)(param_4 + 0x58);
  fVar10 = *(float *)(param_4 + 0x88);
  fVar11 = *(float *)(param_4 + 0x8c);
  fVar13 = *(float *)(param_4 + 0x90);
  fVar12 = *(float *)(param_4 + 0x94);
  uVar2 = *(uint *)(param_5 + 0x54);
  uVar1 = *(uint *)(param_5 + 0x58);
  uVar3 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    fVar6 = (float)NEON_ucvtf(uVar8);
    fVar7 = (float)NEON_ucvtf(uVar9);
    FUN_0059d000(0,0);
    do {
      lVar4 = param_4;
      param_4 = *(long *)(lVar4 + 0x120);
    } while (param_4 != 0);
    plVar5 = *(long **)(lVar4 + 0xa8);
    (**(code **)(**(long **)(param_3 + 0x30) + 0xe8))
              (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x7dd8));
    _DAT_02760a18 = *param_6;
    _DAT_02760a20 = param_6[1];
    _DAT_02760a28 = *param_7;
    _DAT_02760a30 = param_7[1];
    _DAT_02760a38 = *param_8;
    DAT_02760a40 = param_8[1];
    _DAT_02760a48 = *param_9;
    _DAT_02760a50 = param_9[1];
    (**(code **)(**(long **)(param_3 + 0x30) + 0xb0))
              (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x100),&DAT_02760a18,4);
    local_a8 = 0;
    local_b0 = param_1;
    uStack_ac = param_2;
    (**(code **)(**(long **)(param_3 + 0x30) + 0xa0))
              (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x128),&local_b0);
    (**(code **)(**(long **)(param_3 + 0x30) + 0xd0))
              (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x40),plVar5);
    uVar8 = (**(code **)(*plVar5 + 0x80))(plVar5);
    (**(code **)(*plVar5 + 0x78))(plVar5,5);
    uVar2 = FUN_00571d00(0,0,(float)uVar2,(float)uVar1,0,0,fVar10 * fVar6 + fVar13,
                         fVar11 * fVar7 + fVar12,param_3,param_10 & 1);
    (**(code **)(*plVar5 + 0x78))(plVar5,uVar8);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}



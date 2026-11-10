/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de360; name: FUN_003de360
 */


void FUN_003de360(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  if (*(float *)(param_1 + 0x1288) != 0.0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_40 = 0x3f800000;
    local_90 = 0;
    uStack_88 = 0;
    local_38 = *(long *)(param_1 + 0x720) + 0x120;
    local_80 = 0x3f80000000000000;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0x3f800000;
    local_60 = 0;
    uStack_58 = 0x3f80000000000000;
    local_50 = 0;
    uStack_48 = 0;
    fVar5 = (float)FUN_0011e990(*(long *)(param_1 + 0x720),0xf);
    if (fVar5 != 0.0) {
      FUN_00133bd0(*(undefined8 *)(param_1 + 0x728),&local_a0);
    }
    uVar2 = (ulong)*(uint *)(param_1 + 0x7fc);
    if (*(uint *)(param_1 + 0x7fc) != 0) {
      plVar3 = *(long **)(param_1 + 2000);
      do {
        FUN_003c5f40(*(undefined8 *)(*plVar3 + 0x50),*(long *)(param_1 + 0x720) + 0x120);
        uVar2 = uVar2 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_c8);
    FUN_003cfc10(*(undefined8 *)(param_1 + 0x1048),&local_a0,auStack_c8);
    if (*(int *)(param_1 + 0x8dc) != 0) {
      lVar4 = *(long *)(param_1 + 0x8b0);
      uVar2 = 0;
      do {
        uVar1 = FUN_003a9980(*(undefined8 *)(lVar4 + uVar2 * 8));
        FUN_003ab250(uVar1,&local_a0);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x8dc));
    }
  }
  return;
}



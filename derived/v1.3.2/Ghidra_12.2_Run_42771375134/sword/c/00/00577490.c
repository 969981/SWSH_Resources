/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00577490; name: FUN_00577490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00577490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,long param_9
                 ,undefined8 param_10,undefined8 *param_11,undefined8 *param_12,float *param_13,
                 uint param_14,undefined4 *param_15,long param_16,int param_17,undefined4 param_18)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  float local_94;
  
  _DAT_02760a18 = *param_11;
  _DAT_02760a20 = param_11[1];
  if (param_12 == (undefined8 *)0x0) {
    _DAT_02760a28 = 0;
    _DAT_02760a30 = 0;
    _DAT_02760a38 = 0x477c0000477c0000;
    DAT_02760a40 = 0x477c0000477c0000;
  }
  else {
    _DAT_02760a28 = *param_12;
    _DAT_02760a30 = param_12[1];
    _DAT_02760a38 = param_12[2];
    DAT_02760a40 = param_12[3];
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),param_10,1);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760a18,3);
  if (param_16 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_16);
  }
  if ((param_13 == (float *)0x0) ||
     ((((*param_13 == 0.0 && (param_13[1] == 0.0)) && (param_13[2] == 0.0)) && (param_13[3] == 0.0))
     )) {
    plVar2 = *(long **)(param_9 + 0x30);
    (**(code **)(*plVar2 + 0xe8))
              (plVar2,*(undefined4 *)((long)(param_9 + 0x30) + (long)param_17 * 4 + 0x5928));
    FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_18);
    return;
  }
  plVar2 = *(long **)(param_9 + 0x30);
  lVar1 = (long)param_17 * 4 + 0x6428;
  if ((param_14 & 1) == 0) {
    lVar1 = (long)param_17 * 4 + 0x5ea8;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,*(undefined4 *)((long)(param_9 + 0x30) + lVar1));
  if ((param_14 & 1) != 0) {
    fVar4 = (float)param_15[3];
    if (fVar4 <= 0.0) {
      fVar4 = -fVar4;
    }
    fVar3 = (float)param_15[1];
    local_98 = *param_15;
    if (0.0 <= fVar4) {
      local_a0 = -0.5 / fVar4;
      fVar5 = (float)param_15[2];
      fStack_9c = 0.5 - fVar5 * local_a0;
      local_94 = 1.0;
      if (fVar5 < fVar4) {
        local_94 = fVar5 / fVar4;
      }
      local_94 = local_94 * local_94;
    }
    else {
      fStack_9c = 1.0;
      local_a0 = 0.0;
      local_94 = 1.0;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x114),&local_a0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
              (fVar3 * 0.5,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x118));
    param_8 = param_8 & 0xffffffff;
  }
  FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_18);
  return;
}



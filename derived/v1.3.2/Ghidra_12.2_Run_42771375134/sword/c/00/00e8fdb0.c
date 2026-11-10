/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8fdb0; name: FUN_00e8fdb0
 */


void FUN_00e8fdb0(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  fVar4 = *(float *)(*(long *)(param_1 + 0x4c0) + 0xdc);
  FUN_00e8f190();
  bVar1 = false;
  bVar2 = false;
  if (0.0 < fVar4) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 1.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    fVar4 = *(float *)(*(long *)(param_1 + 0x4c0) + 0xdc);
    bVar1 = false;
    bVar2 = false;
    if (0.0 < fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      FUN_00e3c4a0(param_1);
      local_30 = CONCAT44(extraout_var,extraout_s0);
      lVar3 = *(long *)(param_1 + 0x4c0);
      uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
      local_58 = *(undefined8 *)(lVar3 + 0xb8);
      local_70 = *(undefined8 *)(lVar3 + 0xa0);
      local_68 = *(undefined8 *)(lVar3 + 0xa8);
      local_48 = *(undefined8 *)(lVar3 + 200);
      local_50 = *(undefined8 *)(lVar3 + 0xc0);
      local_40 = *(undefined8 *)(lVar3 + 0xd0);
      uStack_38 = *(undefined8 *)(lVar3 + 0xd8);
      uStack_28 = extraout_var_00;
      FUN_00e90c10(*(undefined8 *)(param_1 + 0x640),&local_30,&local_70);
      FUN_00e918a0(*(undefined8 *)(param_1 + 0x570));
    }
  }
  return;
}



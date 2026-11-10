/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003abb40; name: FUN_003abb40
 */


void FUN_003abb40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float __x;
  float __x_00;
  float __x_01;
  float fVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined1 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  fVar3 = (float)FUN_003a9d30(*(undefined8 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x2a0) != 0) {
    fVar4 = 1.0 / fVar3;
    uVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x298) + uVar2 * 8) + 0x50) + 0x10))
                (&local_78);
      __x = fVar4 * (local_78 + local_6c) * 0.5;
      __x_00 = fVar4 * (fStack_74 + local_68) * 0.5;
      __x_01 = fVar4 * (local_70 + local_64) * 0.5;
      local_78 = floorf(__x);
      local_78 = fVar3 * local_78;
      fStack_74 = floorf(__x_00);
      fStack_74 = fVar3 * fStack_74;
      local_70 = floorf(__x_01);
      local_70 = fVar3 * local_70;
      local_6c = ceilf(__x);
      local_6c = fVar3 * local_6c;
      local_68 = ceilf(__x_00);
      local_68 = fVar3 * local_68;
      local_64 = ceilf(__x_01);
      local_64 = fVar3 * local_64;
      uVar1 = FUN_00218580(param_2,0xff0000ff);
      local_98 = CONCAT44(fStack_74,local_78);
      uStack_90 = CONCAT44(local_6c,local_70);
      local_80 = 1;
      local_88 = local_68;
      fStack_84 = local_64;
      FUN_00218ad0(uVar1,&local_98);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2a0));
  }
  return;
}



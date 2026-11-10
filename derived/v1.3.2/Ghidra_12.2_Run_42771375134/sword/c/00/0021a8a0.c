/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021a8a0; name: FUN_0021a8a0
 */


void FUN_0021a8a0(float param_1,float param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float __x;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  if (param_1 != 0.0) {
    uVar3 = FUN_00218620(param_3);
    uVar1 = 0xffff0000;
    if ((param_5 & 1) == 0) {
      uVar1 = 0xff808080;
    }
    FUN_00218580(uVar3,uVar1);
    fVar5 = tanf(param_2);
    FUN_00218570(param_3,2);
    fVar2 = DAT_01d4bf8c;
    fVar5 = fVar5 * param_1;
    uVar4 = 0;
    do {
      fVar6 = cosf((float)uVar4 * fVar2);
      local_68 = sinf((float)uVar4 * fVar2);
      fStack_6c = fVar6 * param_1;
      local_68 = local_68 * param_1;
      local_70 = fVar5;
      FUN_002186d0(param_3,&local_70);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x21);
    FUN_00218570(param_3,2);
    uVar4 = 0;
    do {
      fVar6 = cosf((float)uVar4 * fVar2);
      local_78 = sinf((float)uVar4 * fVar2);
      fStack_7c = fVar6 * param_1;
      local_78 = local_78 * param_1;
      local_80 = -fVar5;
      FUN_002186d0(param_3,&local_80);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x21);
    FUN_00218570(param_3,1);
    uVar4 = 0;
    do {
      local_90 = 0;
      local_88 = 0;
      uVar3 = FUN_002186d0(param_3,&local_90);
      __x = (float)uVar4 * fVar2;
      fVar6 = cosf(__x);
      local_98 = sinf(__x);
      fStack_9c = fVar6 * param_1;
      local_98 = local_98 * param_1;
      local_a0 = -fVar5;
      FUN_002186d0(uVar3,&local_a0);
      local_b0 = 0;
      local_a8 = 0;
      uVar3 = FUN_002186d0(param_3,&local_b0);
      fVar6 = cosf(__x);
      local_b8 = sinf(__x);
      fStack_bc = fVar6 * param_1;
      local_b8 = local_b8 * param_1;
      local_c0 = fVar5;
      FUN_002186d0(uVar3,&local_c0);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  return;
}



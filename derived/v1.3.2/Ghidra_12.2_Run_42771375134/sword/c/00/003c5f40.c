/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5f40; name: FUN_003c5f40
 */


void FUN_003c5f40(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_e8;
  float local_e0;
  float fStack_dc;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((**(byte **)(param_1 + 0x68) >> 4 & 1) == 0) {
    return;
  }
  local_60 = 0;
  uStack_58 = 0x3f80000000000000;
  local_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar2 = &local_60;
  }
  else {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x28);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar3 = &local_60;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x28);
  }
  fVar5 = *(float *)(*(long *)(param_1 + 0x60) + 0x1288);
  fVar4 = (float)FUN_003e6620(*(long *)(param_1 + 0x60),0x15);
  fVar6 = *(float *)(*(long *)(param_1 + 0x60) + 0x1288);
  fVar5 = fVar5 * fVar4;
  fStack_dc = (float)FUN_003e6620(*(long *)(param_1 + 0x60),0x16);
  fStack_dc = fVar6 * fStack_dc;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0x3f80000000000000;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0x3f800000;
  local_90 = 0;
  uStack_88 = 0x3f80000000000000;
  local_80 = 0;
  uStack_78 = 0;
  local_e8 = PTR_DAT_027110b8 + 0x10;
  local_70 = 0x3f800000;
  bVar1 = fVar5 != 0.0 | 2;
  if (fStack_dc == 0.0) {
    bVar1 = fVar5 != 0.0;
  }
  local_d8 = &local_d0;
                    /* try { // try from 003c602c to 003c603b has its CatchHandler @ 003c6054 */
  local_e0 = fVar5;
  local_68 = param_2;
  (**(code **)(*(long *)(param_1 + 0x68) + 0x38))
            (&local_e8,*(undefined8 *)(param_1 + 0x20),puVar2,puVar3,bVar1);
  return;
}



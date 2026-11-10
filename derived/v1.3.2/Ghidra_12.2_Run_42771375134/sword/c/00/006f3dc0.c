/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3dc0; name: FUN_006f3dc0
 */


void FUN_006f3dc0(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  FUN_006cee90(param_1 + 4,1,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_38 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_2;
  local_48 = param_2;
  FUN_006f4f80(&local_90);
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0xb8) = puVar1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(long *)(param_1 + 0x80) = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0xd0) = param_3 & 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0x88) = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x98) = param_1 + 0x98;
  *(long *)(param_1 + 0xa0) = param_1 + 0x98;
  *(undefined8 **)(param_1 + 0xc0) = puVar1;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



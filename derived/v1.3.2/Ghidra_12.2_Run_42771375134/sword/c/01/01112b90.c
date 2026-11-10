/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01112b90; name: FUN_01112b90
 */


void FUN_01112b90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_027249b8 + 0xb8;
  puVar2 = PTR_DAT_027249b8 + 0xf8;
  puVar3 = PTR_DAT_027249b8 + 0x120;
  *param_1 = (long)(PTR_DAT_027249b8 + 0x10);
  param_1[0xf] = (long)puVar3;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x3e] != 0) {
    (**(code **)(*(long *)(param_1[0x3e] + 0x48) + 0x18))();
    param_1[0x3e] = 0;
  }
  pcVar4 = (code *)param_1[0x2d];
  if (pcVar4 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar4)(param_1 + 0x30);
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
    param_1[0x28] = 0;
  }
  pcVar4 = (code *)param_1[0x17];
  if (pcVar4 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar4)(param_1 + 0x1a);
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  FUN_00ff6050(param_1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01105430; name: FUN_01105430
 */


void FUN_01105430(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02724928 + 0xb8;
  puVar2 = PTR_DAT_02724928 + 0xf8;
  *param_1 = (long)(PTR_DAT_02724928 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x53] != 0) {
    (**(code **)(*(long *)(param_1[0x53] + 0x48) + 0x18))();
    param_1[0x53] = 0;
  }
  pcVar3 = (code *)param_1[0x41];
  if (pcVar3 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar3)(param_1 + 0x44);
  }
  if (param_1[0x3c] != 0) {
    (**(code **)(*(long *)(param_1[0x3c] + 0x48) + 0x18))();
    param_1[0x3c] = 0;
  }
  pcVar3 = (code *)param_1[0x2b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar3)(param_1 + 0x2e);
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  pcVar3 = (code *)param_1[0x19];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar3)(param_1 + 0x1c);
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  FUN_00ff6050(param_1);
  return;
}



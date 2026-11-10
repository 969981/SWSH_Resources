/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1fff0; name: FUN_00d1fff0
 */


void FUN_00d1fff0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_0271d250 + 0x68;
  puVar2 = PTR_DAT_0271d250 + 0xa8;
  *param_1 = (long)(PTR_DAT_0271d250 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x68] != 0) {
    (**(code **)(*(long *)(param_1[0x68] + 0x48) + 0x18))();
    param_1[0x68] = 0;
  }
  pcVar3 = (code *)param_1[0x59];
  if (pcVar3 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar3)(param_1 + 0x5c);
  }
  pcVar3 = (code *)param_1[0x49];
  if (pcVar3 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar3)(param_1 + 0x4c);
  }
  pcVar3 = (code *)param_1[0x39];
  if (pcVar3 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar3)(param_1 + 0x3c);
  }
  pcVar3 = (code *)param_1[0x29];
  if (pcVar3 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar3)(param_1 + 0x2c);
  }
  pcVar3 = (code *)param_1[0x19];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar3)(param_1 + 0x1c);
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}



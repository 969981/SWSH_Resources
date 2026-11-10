/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71750; name: FUN_00c71750
 */


void FUN_00c71750(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0271c288;
  *param_1 = (long)(PTR_DAT_0271c280 + 0x10);
  param_1[0x4c] = (long)(puVar2 + 0x10);
  if (param_1[0x57] != 0) {
    (**(code **)(*(long *)(param_1[0x57] + 0x48) + 0x18))();
    param_1[0x57] = 0;
  }
  puVar1 = PTR_DAT_0271c270;
  param_1[0x4c] = (long)(PTR_DAT_0271c270 + 0x10);
  if (param_1[0x4f] != 0) {
    (**(code **)(*(long *)(param_1[0x4f] + 0x48) + 0x18))();
    param_1[0x4f] = 0;
  }
  param_1[0x40] = (long)(puVar2 + 0x10);
  if (param_1[0x4b] != 0) {
    (**(code **)(*(long *)(param_1[0x4b] + 0x48) + 0x18))();
    param_1[0x4b] = 0;
  }
  param_1[0x40] = (long)(puVar1 + 0x10);
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)(param_1[0x43] + 0x48) + 0x18))();
    param_1[0x43] = 0;
  }
  param_1[0x34] = (long)(puVar2 + 0x10);
  if (param_1[0x3f] != 0) {
    (**(code **)(*(long *)(param_1[0x3f] + 0x48) + 0x18))();
    param_1[0x3f] = 0;
  }
  param_1[0x34] = (long)(puVar1 + 0x10);
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
    param_1[0x37] = 0;
  }
  param_1[0x28] = (long)(puVar2 + 0x10);
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)(param_1[0x33] + 0x48) + 0x18))();
    param_1[0x33] = 0;
  }
  param_1[0x28] = (long)(puVar1 + 0x10);
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  param_1[0x1c] = (long)(puVar2 + 0x10);
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  param_1[0x1c] = (long)(puVar1 + 0x10);
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  param_1[0x10] = (long)(puVar2 + 0x10);
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
    param_1[0x1b] = 0;
  }
  param_1[0x10] = (long)(puVar1 + 0x10);
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  *param_1 = (long)(puVar1 + 0x10);
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cecf90; name: FUN_00cecf90
 */


void FUN_00cecf90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0271cb28 + 0x78;
  puVar2 = PTR_DAT_0271cb28 + 0xb8;
  *param_1 = (long)(PTR_DAT_0271cb28 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
    param_1[0x22] = 0;
  }
  if (param_1[0x21] != 0) {
    (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
    param_1[0x21] = 0;
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
    param_1[0x20] = 0;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  FUN_00ff6050(param_1);
  return;
}



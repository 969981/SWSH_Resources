/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5f2a0; name: FUN_00c5f2a0
 */


void FUN_00c5f2a0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0271bfa0;
  *param_1 = (long)(PTR_DAT_0271c008 + 0x10);
  *(undefined8 *)puVar1 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)param_1[9] + 0xb8))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0xb8))();
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)param_1[0x11] + 0xb8))();
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0xb8))();
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)param_1[0x19] + 0xb8))();
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)param_1[0x1d] + 0xb8))();
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[0x21] + 0xb8))();
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)param_1[0x25] + 0xb8))();
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)param_1[0x29] + 0xb8))();
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)param_1[0x2d] + 0xb8))();
  }
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)param_1[0x31] + 0xb8))();
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)param_1[0x35] + 0xb8))();
  }
  if (param_1[0x3b] != 0) {
    (**(code **)(*(long *)param_1[0x39] + 0xb8))();
  }
  if (param_1[0x3f] != 0) {
    (**(code **)(*(long *)param_1[0x3d] + 0xb8))();
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)param_1[0x41] + 0xb8))();
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)param_1[0x45] + 0xb8))();
  }
  if (param_1[0x4b] != 0) {
    (**(code **)(*(long *)param_1[0x49] + 0xb8))();
  }
  if (param_1[0x4f] != 0) {
    (**(code **)(*(long *)param_1[0x4d] + 0xb8))();
  }
  FUN_001034a0(param_1);
  return;
}



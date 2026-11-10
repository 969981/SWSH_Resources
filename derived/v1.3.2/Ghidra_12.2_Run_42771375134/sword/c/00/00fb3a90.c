/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb3a90; name: FUN_00fb3a90
 */


void FUN_00fb3a90(long *param_1)

{
  code *pcVar1;
  
  if (param_1[0x18e] != 0) {
    (**(code **)(*(long *)(param_1[0x18e] + 0x48) + 0x18))();
    param_1[0x18e] = 0;
  }
  if ((param_1[0x3d] != 0) && (param_1[0x3a] != 0)) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = -0x340d631b7bddd9bb;
  param_1[0x3c] = (long)&DAT_01d38550;
  param_1[0x3d] = 0;
  if (param_1[0x3e] != 0) {
    (**(code **)(*(long *)(param_1[0x3e] + 0x48) + 0x18))();
    param_1[0x3e] = 0;
  }
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if ((param_1[0x37] != 0) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
    param_1[0x34] = 0;
  }
  param_1[0x34] = 0;
  param_1[0x35] = -0x340d631b7bddd9bb;
  param_1[0x36] = (long)&DAT_01d38550;
  param_1[0x37] = 0;
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if ((param_1[0x31] != 0) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = -0x340d631b7bddd9bb;
  param_1[0x30] = (long)&DAT_01d38550;
  param_1[0x31] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((param_1[0x2b] != 0) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
    param_1[0x28] = 0;
  }
  param_1[0x28] = 0;
  param_1[0x29] = -0x340d631b7bddd9bb;
  param_1[0x2a] = (long)&DAT_01d38550;
  param_1[0x2b] = 0;
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
    param_1[0x2c] = 0;
  }
  pcVar1 = (code *)param_1[0x19];
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (pcVar1 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar1)(param_1 + 0x1c);
  }
  pcVar1 = (code *)param_1[9];
  if (pcVar1 != (code *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    (*pcVar1)(param_1 + 0xc);
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
    param_1[7] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return;
}



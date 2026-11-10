/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01305570; name: FUN_01305570
 */


uint FUN_01305570(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar2 = 2;
  }
  uVar1 = uVar2 | 5;
  if (*(float *)(param_1 + 0x14) == 0.0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 5;
  if (*(float *)(param_1 + 0x18) == 0.0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 5;
  if (*(float *)(param_1 + 0x1c) == 0.0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 5;
  if (*(float *)(param_1 + 0x20) == 0.0) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return uVar2;
}



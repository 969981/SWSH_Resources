/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9660; name: FUN_007d9660
 */


void FUN_007d9660(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00814ca0(1,*(int *)(param_1 + 0x14),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00814ca0(2,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00814db0(3,*(long *)(param_1 + 0x20),param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00814db0(4,*(long *)(param_1 + 0x28),param_2);
  }
  pbVar1 = *(byte **)(param_1 + 0x30);
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar1 + 8) == 0) {
    return;
  }
  FUN_00815b00(5,pbVar1,param_2);
  return;
}



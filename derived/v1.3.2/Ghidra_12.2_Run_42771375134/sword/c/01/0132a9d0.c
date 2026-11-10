/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a9d0; name: FUN_0132a9d0
 */


undefined4 FUN_0132a9d0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 10) {
    return 0;
  }
  if (param_1 < 0x1e) {
    return 1;
  }
  if (param_1 < 0x37) {
    return 2;
  }
  uVar1 = 3;
  if (0x4a < param_1) {
    uVar1 = 4;
  }
  return uVar1;
}



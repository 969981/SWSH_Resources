/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5850; name: FUN_007b5850
 */


uint FUN_007b5850(undefined8 param_1)

{
  uint uVar1;
  int local_28 [5];
  byte local_14 [4];
  
  if (*(long *)PTR_DAT_02716710 == 0) {
    return 0xfd;
  }
  FUN_01962a60(local_28,*(long *)PTR_DAT_02716710,local_14,param_1);
  uVar1 = (uint)local_14[0];
  if (local_28[0] != 0) {
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



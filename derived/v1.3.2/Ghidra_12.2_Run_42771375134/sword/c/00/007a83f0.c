/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a83f0; name: FUN_007a83f0
 */


undefined8 FUN_007a83f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)PTR_DAT_02716710 == 0) {
    return 0;
  }
  uVar1 = FUN_01952580(*(long *)PTR_DAT_02716710 + 0x10,*(undefined4 *)(param_1 + 0x100),0x77);
  return uVar1;
}



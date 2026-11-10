/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8490; name: FUN_007a8490
 */


undefined8 FUN_007a8490(long param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (1 < param_2) {
    return 0;
  }
  if (*(long *)PTR_DAT_02716710 == 0) {
    return 0;
  }
  uVar1 = FUN_01952580(*(long *)PTR_DAT_02716710 + 0x10,
                       *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0xd0),0x7c);
  return uVar1;
}



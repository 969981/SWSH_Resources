/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4e20; name: FUN_007d4e20
 */


void FUN_007d4e20(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01940760(*(undefined8 *)PTR_DAT_02716a30);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x110) == 0)) {
    return;
  }
  FUN_007d7c00();
  return;
}



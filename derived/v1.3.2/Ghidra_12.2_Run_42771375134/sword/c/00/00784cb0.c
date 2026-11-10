/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00784cb0; name: FUN_00784cb0
 */


void FUN_00784cb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_00784d60(lVar1);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_007851c0(lVar1,PTR_DAT_027162b8);
  FUN_007851f0(lVar1,PTR_DAT_027162c0);
  return;
}



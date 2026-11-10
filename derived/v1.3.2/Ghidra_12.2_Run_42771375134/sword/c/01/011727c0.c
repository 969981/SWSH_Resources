/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011727c0; name: FUN_011727c0
 */


uint FUN_011727c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0120e820(*(undefined8 *)PTR_DAT_027185f8);
  return iVar1 - 2U & ((int)(iVar1 - 2U) >> 0x1f ^ 0xffffffffU);
}



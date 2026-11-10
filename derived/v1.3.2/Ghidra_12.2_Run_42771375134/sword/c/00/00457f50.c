/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457f50; name: FUN_00457f50
 */


undefined8 * FUN_00457f50(void)

{
  int iVar1;
  
  if (((DAT_02738ae0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02738ae0), iVar1 != 0)) {
    DAT_02738ae8 = PTR_DAT_02713060 + 0x10;
    DAT_02738af0 = 0;
    __cxa_guard_release(&DAT_02738ae0);
    return &DAT_02738ae8;
  }
  return &DAT_02738ae8;
}



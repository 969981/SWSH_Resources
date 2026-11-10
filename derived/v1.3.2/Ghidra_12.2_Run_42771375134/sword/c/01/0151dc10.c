/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151dc10; name: FUN_0151dc10
 */


undefined4 * FUN_0151dc10(long param_1,byte param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((DAT_02a751a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02a751a8), iVar2 != 0)) {
    DAT_02a751b0 = 0;
    DAT_02a751b4 = 0;
    DAT_02a751b8 = 0;
    DAT_02a751bc = 0;
    DAT_02a751c0 = 0;
    DAT_02a751c8 = 0xffffffff;
    __cxa_guard_release(&DAT_02a751a8);
  }
  puVar1 = (undefined4 *)(param_1 + (ulong)param_2 * 0x5c + (ulong)param_3 * 0x1c + 100);
  if (2 < param_3 || 0x11 < param_2) {
    puVar1 = &DAT_02a751b0;
  }
  return puVar1;
}



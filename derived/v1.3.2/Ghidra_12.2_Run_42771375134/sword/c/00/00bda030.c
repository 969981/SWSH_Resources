/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bda030; name: FUN_00bda030
 */


bool FUN_00bda030(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xa40) == '\0') {
    return true;
  }
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  lVar1 = lVar1 - *(long *)(param_1 + 0x1908);
  *(long *)(param_1 + 0x1910) = lVar1;
  return DAT_01cd4fc0 <= (double)lVar1 / DAT_01cd50a0;
}



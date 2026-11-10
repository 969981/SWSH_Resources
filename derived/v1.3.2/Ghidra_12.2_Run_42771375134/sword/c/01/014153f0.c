/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014153f0; name: FUN_014153f0
 */


void FUN_014153f0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    FUN_00ffcf80(param_1 + 0x100,"anime_out");
    *(undefined1 *)(param_1 + 0x5cb) = 0;
    if (*(char *)(param_1 + 0x5e8) != '\0') {
      nn::os::GetSystemTick();
      lVar1 = nn::os::ConvertToTimeSpan();
      *(long *)(param_1 + 0x5e0) = lVar1 - *(long *)(param_1 + 0x5d8);
      *(undefined1 *)(param_1 + 0x5e8) = 0;
    }
  }
  return;
}



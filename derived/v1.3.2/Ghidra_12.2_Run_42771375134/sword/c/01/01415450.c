/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415450; name: FUN_01415450
 */


void FUN_01415450(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x5cb) == '\0') {
    FUN_00ffcf80(param_1 + 0x100,"anime_in");
    *(undefined1 *)(param_1 + 0x5cb) = 1;
    FUN_00ffa290(param_1,1,1);
    *(undefined1 *)(param_1 + 0x5cc) = 0;
    if (*(char *)(param_1 + 0x5e8) == '\0') {
      *(undefined8 *)(param_1 + 0x5f0) = 0;
      nn::os::GetSystemTick();
      uVar1 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x5d8) = uVar1;
      *(undefined1 *)(param_1 + 0x5e8) = 1;
      return;
    }
  }
  return;
}



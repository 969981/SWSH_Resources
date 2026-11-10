/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415300; name: FUN_01415300
 */


void FUN_01415300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x5e8) != '\0') {
    nn::os::GetSystemTick();
    lVar1 = nn::os::ConvertToTimeSpan();
    lVar1 = lVar1 - *(long *)(param_1 + 0x5d8);
    *(long *)(param_1 + 0x5e0) = lVar1;
    *(double *)(param_1 + 0x5f0) =
         *(double *)(param_1 + 0x5f0) +
         *(double *)(param_1 + 0x5f8) * ((double)lVar1 / DAT_01cd50a0);
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x5d8) = uVar2;
  }
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    if ((*(char *)(param_1 + 0x5cc) != '\0') && (*(char *)(param_1 + 0x5e8) == '\0')) {
      *(undefined8 *)(param_1 + 0x5f0) = 0;
      nn::os::GetSystemTick();
      uVar2 = nn::os::ConvertToTimeSpan();
      *(undefined1 *)(param_1 + 0x5e8) = 1;
      *(undefined8 *)(param_1 + 0x5d8) = uVar2;
      if (*(char *)(param_1 + 0x5cb) == '\0') {
        return;
      }
    }
    if (3.0 < (float)*(double *)(param_1 + 0x5f0)) {
      FUN_00ffcf80(param_1 + 0x100,"anime_out");
      *(undefined1 *)(param_1 + 0x5cb) = 0;
      if (*(char *)(param_1 + 0x5e8) != '\0') {
        nn::os::GetSystemTick();
        lVar1 = nn::os::ConvertToTimeSpan();
        *(long *)(param_1 + 0x5e0) = lVar1 - *(long *)(param_1 + 0x5d8);
        *(undefined1 *)(param_1 + 0x5e8) = 0;
      }
    }
  }
  return;
}



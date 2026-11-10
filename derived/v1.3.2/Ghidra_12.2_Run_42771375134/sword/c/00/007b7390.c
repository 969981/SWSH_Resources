/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7390; name: FUN_007b7390
 */


void FUN_007b7390(long param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x408) != '\0') {
      *(undefined1 *)(param_1 + 0x408) = 0;
    }
    *(undefined8 *)(param_1 + 0x420) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (*(char *)(param_1 + 0x408) == '\0') {
    *(undefined1 *)(param_1 + 0x408) = 1;
  }
  nn::os::GetSystemTick();
  uVar1 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x410) = uVar1;
  *(undefined8 *)(param_1 + 0x420) = param_3;
  return;
}



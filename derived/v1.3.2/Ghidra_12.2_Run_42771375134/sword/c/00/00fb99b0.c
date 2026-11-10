/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb99b0; name: FUN_00fb99b0
 */


void FUN_00fb99b0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x44) == '\0') || (*(char *)(param_1 + 0x45) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x45) = 0;
  nn::os::GetSystemTick();
  uVar1 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  FUN_00fbab10(param_1);
  FUN_00fbacc0(param_1);
  FUN_00fb9cd0(param_1);
  return;
}



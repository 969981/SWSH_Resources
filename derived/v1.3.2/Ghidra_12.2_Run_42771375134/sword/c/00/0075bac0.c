/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075bac0; name: FUN_0075bac0
 */


void FUN_0075bac0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x138) << 6;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0xb8);
    do {
      nn::hid::VibrationTarget::SetVibrationDeviceHandle((VibrationDeviceHandle *)*puVar2);
      lVar1 = lVar1 + -0x40;
      puVar2 = puVar2 + 8;
    } while (lVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}



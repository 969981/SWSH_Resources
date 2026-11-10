/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075bb30; name: FUN_0075bb30
 */


void FUN_0075bb30(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x138) << 6; lVar1 != 0; lVar1 = lVar1 + -0x40) {
      nn::hid::VibrationTarget::UnsetVibrationDeviceHandle();
    }
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768670; name: FUN_00768670
 */


undefined8 FUN_00768670(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::audio::StartAudioOut((AudioOut *)(param_1 + 0xd0));
  if ((int)uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    return uVar1;
  }
  return 0x1000;
}



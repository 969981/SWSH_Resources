/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007687d0; name: FUN_007687d0
 */


undefined8 FUN_007687d0(long param_1)

{
  if (*(char *)(param_1 + 0x11) != '\0') {
    nn::audio::CloseAudioOut((AudioOut *)(param_1 + 0xd0));
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(long *)(param_1 + 0x280) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x280),0,0);
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x260),0,0);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x288),0,0);
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x268),0,0);
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x290),0,0);
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x270),0,0);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x298),0,0);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x278),0,0);
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x18))
              (*(long **)(param_1 + 0x2c0),*(long *)(param_1 + 0x2a0),0,0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768740; name: FUN_00768740
 */


undefined8
FUN_00768740(long param_1,AudioOutBuffer *param_2,void *param_3,ulong param_4,ulong param_5)

{
  if (((param_2 != (AudioOutBuffer *)0x0) && (param_3 != (void *)0x0)) && (param_4 != 0)) {
    nn::audio::SetAudioOutBufferInfo(param_2,param_3,param_4,param_5);
    nn::audio::AppendAudioOutBuffer((AudioOut *)(param_1 + 0xd0),param_2);
  }
  return 0;
}



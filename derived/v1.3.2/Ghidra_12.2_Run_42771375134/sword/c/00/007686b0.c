/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007686b0; name: FUN_007686b0
 */


undefined4 FUN_007686b0(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  AudioOutBuffer *pAVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (((param_2 != (undefined8 *)0x0) && (param_3 != (long *)0x0)) && (param_4 != (long *)0x0)) {
    pAVar1 = (AudioOutBuffer *)nn::audio::GetReleasedAudioOutBuffer((AudioOut *)(param_1 + 0xd0));
    *param_2 = pAVar1;
    if (pAVar1 != (AudioOutBuffer *)0x0) {
      lVar2 = nn::audio::GetAudioOutBufferDataPointer(pAVar1);
      *param_3 = lVar2;
      lVar2 = nn::audio::GetAudioOutBufferDataSize((AudioOutBuffer *)*param_2);
      *param_4 = lVar2;
      uVar3 = 0x100e;
      if (*param_3 != 0 && lVar2 != 0) {
        uVar3 = 0;
      }
      return uVar3;
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  return 0x100e;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768010; name: FUN_00768010
 */


undefined8 FUN_00768010(int *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t __n;
  void *pvVar3;
  AudioOut *pAVar4;
  undefined8 local_58;
  
  if (param_4 == 0) {
    return 0x100b;
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[0xab] = param_2;
  param_1[0xac] = param_3;
  param_1[3] = *param_1 << 1;
  if (*param_1 < param_3) {
    *param_1 = param_3;
  }
  local_58 = 0;
  nn::audio::InitializeAudioOutParameter((AudioOutParameter *)&local_58);
  pAVar4 = (AudioOut *)(param_1 + 0x34);
  local_58._0_6_ = CONCAT24((short)*param_1,48000);
  iVar1 = nn::audio::OpenDefaultAudioOut(pAVar4,(AudioOutParameter *)&local_58);
  if (iVar1 == 0) {
    iVar1 = nn::audio::GetAudioOutChannelCount(pAVar4);
    *param_1 = iVar1;
  }
  iVar1 = nn::audio::GetAudioOutSampleFormat(pAVar4);
  param_1[0x8e] = iVar1;
  uVar2 = nn::audio::GetSampleByteSize();
  *(undefined8 *)(param_1 + 8) = uVar2;
  iVar1 = nn::audio::GetAudioOutSampleRate(pAVar4);
  if (param_1[1] == iVar1) {
    if ((char)param_1[0xaa] != '\0') {
      iVar1 = 0;
      if ((long)param_1[0xac] << 1 != 0) {
        iVar1 = (int)(*(ulong *)(param_1 + 10) / (ulong)((long)param_1[0xac] << 1));
      }
      iVar1 = nn::audio::GetResamplerOutputSampleCount((ResamplerType *)(param_1 + 0x90),iVar1);
      *(ulong *)(param_1 + 0xae) =
           (long)iVar1 * (long)param_1[0xac] * 2 + 0xfffU & 0xfffffffffffff000;
    }
    pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                               (*(long **)(param_1 + 0xb0),*(size_t *)(param_1 + 10),0x1000);
    *(void **)(param_1 + 0x98) = pvVar3;
    if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar3,0,*(size_t *)(param_1 + 10));
    }
  }
  else {
    __n = nn::audio::GetRequiredBufferSizeForResampler(param_1[0xac]);
    pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                               (*(long **)(param_1 + 0xb0),__n,0x1000);
    *(void **)(param_1 + 0xa0) = pvVar3;
    if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar3,0,__n);
    }
  }
  return 0x1002;
}



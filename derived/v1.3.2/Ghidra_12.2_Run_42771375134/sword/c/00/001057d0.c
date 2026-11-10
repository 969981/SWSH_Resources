/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001057d0; name: FUN_001057d0
 */


void FUN_001057d0(void)

{
  int iVar1;
  long lVar2;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  long local_128;
  AudioDeviceName local_120 [256];
  
  local_120[0] = (AudioDeviceName)0x0;
  nn::audio::GetActiveAudioDeviceName(local_120);
  iVar1 = strncmp((char *)local_120,"AudioStereoJackOutput",0x15);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strncmp((char *)local_120,"AudioTvOutput",0xd);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strncmp((char *)local_120,"AudioUsbDeviceOutput",0x14);
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strncmp((char *)local_120,"AudioBuiltInSpeakerOutput",0x19);
        if (iVar1 != 0) {
          return;
        }
        lVar2 = 3;
      }
    }
  }
  local_140 = 0x793a3cb58132d278;
  local_138 = "HandDockMode";
  local_130 = 0xc;
  local_128 = 0;
  FUN_008962a0((float)(int)(&DAT_01d4af20)[lVar2],*(long *)PTR_DAT_027107a8 + 0x108,&local_140,0);
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
  }
  return;
}



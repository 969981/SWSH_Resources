/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151ef90; name: FUN_0151ef90
 */


bool FUN_0151ef90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_28);
    uVar2 = (local_28 - lVar3) * 1000000000;
    uVar1 = ((long)uVar2 >> 0x20) * 0x68fd3d1d + ((uVar2 & 0xfffffe00) * 0x68fd3d1d >> 0x20);
    if (((long)(((long)uVar2 >> 0x20) * 0x12533fe + ((long)uVar1 >> 0x20) +
               ((uVar2 & 0xfffffe00) * 0x12533fe + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1c) -
        ((long)uVar2 >> 0x3f) < 0x1e) {
      lVar3 = *(long *)(param_1 + 0x60);
    }
    else {
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return lVar3 != 0;
}



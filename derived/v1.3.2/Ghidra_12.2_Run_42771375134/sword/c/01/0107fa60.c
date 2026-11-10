/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107fa60; name: FUN_0107fa60
 */


bool FUN_0107fa60(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  bVar1 = *(char *)(param_1 + 0xb0) + 1;
  *(byte *)(param_1 + 0xb0) = bVar1;
  if (bVar1 < 10) {
    return false;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  lVar3 = nn::os::GetSystemTick();
  uVar4 = nn::os::ConvertToTimeSpan(lVar3 - *(long *)(param_1 + 0xa8));
  uVar2 = ((long)uVar4 >> 0x20) * 0x26d694b3 + ((uVar4 & 0xffffffff) * 0x26d694b3 >> 0x20);
  return 4 < ((long)(((long)uVar4 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                    ((uVar4 & 0xffffffff) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
             ((long)uVar4 >> 0x3f);
}



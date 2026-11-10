/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae400; name: FUN_012ae400
 */


long FUN_012ae400(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  nn::os::GetSystemTick();
  lVar3 = nn::os::ConvertToTimeSpan();
  uVar4 = lVar3 - *param_1;
  uVar1 = ((long)uVar4 >> 0x20) * 0xd7b634db + ((uVar4 & 0xffffffff) * 0xd7b634db >> 0x20);
  lVar3 = (((long)uVar4 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
           ((long)((uVar4 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff)) >> 0x20) >> 0x12) -
          ((long)uVar4 >> 0x3f);
  lVar2 = param_1[1] - lVar3;
  if (lVar2 == 0 || param_1[1] < lVar3) {
    return 0;
  }
  return lVar2 / 1000;
}



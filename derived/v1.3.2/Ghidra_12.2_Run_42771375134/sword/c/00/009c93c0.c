/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c93c0; name: FUN_009c93c0
 */


long FUN_009c93c0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((char)param_1[3] == '\0') {
    return param_1[4];
  }
  if ((*(char *)((long)param_1 + 0x19) == '\0') && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    lVar3 = nn::os::ConvertToTimeSpan();
    uVar2 = param_1[1];
    uVar4 = lVar3 - *param_1;
    uVar1 = ((long)uVar4 >> 0x20) * 0x26d694b3 + ((uVar4 & 0xffffffff) * 0x26d694b3 >> 0x20);
    uVar5 = ((long)uVar2 >> 0x20) * 0x26d694b3 + ((uVar2 & 0xffffffff) * 0x26d694b3 >> 0x20);
    return ((param_1[4] + ((long)uVar4 >> 0x3f) + ((long)uVar2 >> 0x3f)) -
           ((long)(((long)uVar4 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                  ((uVar4 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a)) -
           ((long)(((long)uVar2 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
                  ((uVar2 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20)) >> 0x1a);
  }
  uVar5 = param_1[1];
  uVar1 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
  return (param_1[4] + ((long)uVar5 >> 0x3f)) -
         ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a);
}



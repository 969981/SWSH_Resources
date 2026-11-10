/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae4a0; name: FUN_012ae4a0
 */


bool FUN_012ae4a0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  nn::os::GetSystemTick();
  lVar2 = nn::os::ConvertToTimeSpan();
  uVar3 = lVar2 - *param_1;
  uVar1 = ((long)uVar3 >> 0x20) * 0xd7b634db + ((uVar3 & 0xffffffff) * 0xd7b634db >> 0x20);
  return param_1[1] <=
         (((long)uVar3 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
          ((long)((uVar3 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff)) >> 0x20) >> 0x12) -
         ((long)uVar3 >> 0x3f);
}



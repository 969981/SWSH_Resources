/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be2750; name: FUN_00be2750
 */


int FUN_00be2750(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00be2600();
  if (uVar1 < 10) {
    param_1 = param_1 + (ulong)uVar1 * 4;
    uVar1 = (uint)*(ushort *)(param_1 + 100);
    return (int)(((float)(param_2 - uVar1) /
                 (float)(int)((1 - uVar1) + (uint)*(ushort *)(param_1 + 0x66))) * DAT_01d4c6b8);
  }
  return 0;
}



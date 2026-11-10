/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103bb30; name: FUN_0103bb30
 */


void FUN_0103bb30(long param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  *(ushort *)(param_1 + 0x5cb) = uVar1;
  if (*(long *)(param_1 + 0x6d0) == 0) {
    return;
  }
  FUN_016b2d70(*(long *)(param_1 + 0x6d0),(uVar1 & 0xff) != 2);
  return;
}



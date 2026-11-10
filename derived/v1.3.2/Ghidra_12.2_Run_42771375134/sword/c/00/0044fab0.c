/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fab0; name: FUN_0044fab0
 */


void FUN_0044fab0(long param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = 0xff5f;
  if ((param_2 & 1) == 0) {
    uVar1 = 0xffdf;
  }
  *(ushort *)(param_1 + 0x154) = *(ushort *)(param_1 + 0x154) & uVar1;
  return;
}



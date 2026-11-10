/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1920; name: FUN_008e1920
 */


bool FUN_008e1920(long param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 1) && (iVar1 = FUN_008e12a0(param_1,0x13), iVar1 == 0xd5)) {
    return true;
  }
  return (*(byte *)(param_1 + 0xa0) & 7) != 0;
}



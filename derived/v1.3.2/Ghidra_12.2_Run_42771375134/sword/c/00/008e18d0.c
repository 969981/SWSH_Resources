/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e18d0; name: FUN_008e18d0
 */


bool FUN_008e18d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0087d610(*(undefined8 *)(param_1 + 0x60),2);
  if ((uVar2 & 1) == 0) {
    iVar1 = FUN_008e12a0(param_1,0xd);
    return iVar1 != 0;
  }
  return false;
}



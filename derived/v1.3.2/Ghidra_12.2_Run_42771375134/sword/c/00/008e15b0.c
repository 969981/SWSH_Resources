/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e15b0; name: FUN_008e15b0
 */


void FUN_008e15b0(long param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_008e12a0((int)param_1,0xd);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x270) = param_2;
    *(undefined1 *)(param_1 + 0x271) = param_3;
    return;
  }
  return;
}



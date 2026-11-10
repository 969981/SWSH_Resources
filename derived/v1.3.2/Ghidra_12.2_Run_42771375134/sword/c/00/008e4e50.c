/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4e50; name: FUN_008e4e50
 */


void FUN_008e4e50(long param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 < 4) {
    param_1 = param_1 + (ulong)param_2 * 4;
    uVar1 = *(int *)(param_1 + 0x368) + param_3;
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    *(uint *)(param_1 + 0x368) = uVar1;
  }
  return;
}



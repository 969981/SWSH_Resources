/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009305e0; name: FUN_009305e0
 */


void FUN_009305e0(long param_1,byte param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + (ulong)param_2 * 0x28 + (ulong)param_3 * 8 + 0x18);
  if ((param_2 == 0 && (int)param_3 < 5) && (uVar2 = *puVar1, uVar2 < 0xff)) {
    *puVar1 = uVar2 + 1;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00930570; name: FUN_00930570
 */


void FUN_00930570(long param_1,byte param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + (ulong)param_2 * 8 + 8);
  if ((param_2 < 2) && (uVar2 = *puVar1, uVar2 < *(ulong *)(PTR_DAT_02717d98 + (ulong)param_2 * 8)))
  {
    *puVar1 = uVar2 + 1;
  }
  return;
}



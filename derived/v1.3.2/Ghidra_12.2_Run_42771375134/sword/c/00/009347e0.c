/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009347e0; name: FUN_009347e0
 */


void FUN_009347e0(long param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (param_2 < 5) {
    puVar2 = (ushort *)(param_1 + (ulong)param_2 * 2 + 2);
    uVar1 = *puVar2;
    if (uVar1 < 9999) {
      *puVar2 = uVar1 + 1;
    }
  }
  return;
}



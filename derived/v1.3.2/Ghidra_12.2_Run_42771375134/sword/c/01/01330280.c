/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01330280; name: FUN_01330280
 */


void FUN_01330280(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 6) {
    param_1 = param_1 + (ulong)param_2 * 4;
    uVar1 = *(int *)(param_1 + 0x628) + param_3;
    uVar2 = *(uint *)PTR_DAT_027280c8;
    if (uVar1 <= *(uint *)PTR_DAT_027280c8) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0x628) = uVar2;
  }
  return;
}



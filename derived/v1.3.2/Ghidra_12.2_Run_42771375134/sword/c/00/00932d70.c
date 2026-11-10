/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932d70; name: FUN_00932d70
 */


undefined8 FUN_00932d70(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (((int)param_2 < 10) && (*(int *)(param_1 + (ulong)param_2 * 4 + 0x180) != 0)) {
    bVar2 = FUN_008ed270(param_1 + (ulong)param_2 * 8 + 0x18);
    if ((bVar2 != 0) &&
       (param_1 = param_1 + (ulong)param_2 * 4, uVar1 = *(int *)(param_1 + 0x68) + 1,
       *(uint *)(param_1 + 0x68) = uVar1, bVar2 <= uVar1)) {
      return 1;
    }
  }
  return 0;
}



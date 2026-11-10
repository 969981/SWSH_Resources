/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470a00; name: FUN_01470a00
 */


void FUN_01470a00(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_48;
  
  puVar2 = &DAT_0216d388;
  if ((param_2 & 1) == 0) {
    puVar2 = &DAT_0216d390;
  }
  local_48 = *(undefined8 *)(puVar2 + (long)param_3 * 0x40);
  lVar1 = param_1 + 0x100;
  FUN_00ffd010(lVar1,&local_48);
  if (((param_2 & 1) == 0) && (*(int *)(*(long *)(param_1 + 0x5d0) + 0x10) != param_3)) {
    puVar2 = &UNK_0216d3a0 + (long)param_3 * 0x40;
    FUN_00ffd010(lVar1,puVar2);
    FUN_00ffd600(lVar1,puVar2);
    FUN_00ffd510(lVar1,puVar2);
    FUN_00ffd010(lVar1,&UNK_0216d398 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x40);
  }
  return;
}



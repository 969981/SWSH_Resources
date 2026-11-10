/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a58f60; name: FUN_00a58f60
 */


void FUN_00a58f60(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
  local_18 = (undefined4)param_2;
  local_14 = (undefined1)((ulong)param_2 >> 0x20);
  local_13 = (undefined1)((ulong)param_2 >> 0x28);
  local_12 = (undefined1)((ulong)param_2 >> 0x30);
  FUN_00a5bdb0(*(undefined8 *)(param_1 + 0x20),&local_20);
  return;
}



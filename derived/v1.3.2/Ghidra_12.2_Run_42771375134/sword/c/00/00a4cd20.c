/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4cd20; name: FUN_00a4cd20
 */


void FUN_00a4cd20(long param_1,ulong param_2)

{
  undefined8 local_18;
  
  *(undefined1 *)(param_1 + 0x632) = 5;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  if ((param_2 & 1) != 0) {
    local_18 = 0;
    FUN_016b7990(*(undefined8 *)(param_1 + 0x5d8),&local_18,1,0);
  }
  return;
}



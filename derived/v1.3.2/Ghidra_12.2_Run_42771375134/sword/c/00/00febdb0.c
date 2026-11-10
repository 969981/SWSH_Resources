/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00febdb0; name: FUN_00febdb0
 */


void FUN_00febdb0(long param_1,ulong param_2)

{
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined1 *)(param_1 + 0x5cc) = 0;
  if ((param_2 & 1) != 0) {
    local_18 = 0;
    FUN_016b7990(*(undefined8 *)(param_1 + 0x670),&local_18,1,0);
  }
  return;
}



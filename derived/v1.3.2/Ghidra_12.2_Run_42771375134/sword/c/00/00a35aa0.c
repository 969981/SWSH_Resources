/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a35aa0; name: FUN_00a35aa0
 */


void FUN_00a35aa0(long param_1,byte param_2)

{
  undefined8 local_18;
  
  *(byte *)(param_1 + 0x5f0) = param_2 & 1;
  local_18 = 0xcc06ba6a5151efef;
  FUN_00ffd510((float)(param_2 & 1),param_1 + 0x100,&local_18);
  return;
}



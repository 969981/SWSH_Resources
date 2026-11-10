/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f7830; name: FUN_009f7830
 */


void FUN_009f7830(long param_1,byte param_2)

{
  undefined8 local_18;
  
  *(byte *)(param_1 + 0xa58) = param_2 & 1;
  local_18 = 0x3ac4740992e97e9c;
  FUN_00ffd510((float)(param_2 & 1),param_1 + 0x100,&local_18);
  return;
}



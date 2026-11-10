/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485840; name: FUN_01485840
 */


void FUN_01485840(long param_1,int param_2,uint param_3)

{
  undefined8 local_18;
  
  if ((param_3 & 1) == 0) {
    local_18 = *(undefined8 *)(PTR_DAT_0272a0f8 + (long)param_2 * 0x20);
  }
  else {
    local_18 = *(undefined8 *)(PTR_DAT_0272a0f8 + (long)param_2 * 0x20 + 8);
  }
  FUN_00ffd010(param_1 + 0x100,&local_18);
  return;
}



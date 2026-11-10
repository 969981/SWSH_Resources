/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485920; name: FUN_01485920
 */


void FUN_01485920(long param_1,int param_2,uint param_3)

{
  long lVar1;
  undefined8 local_18;
  
  lVar1 = (long)param_2 * 0x20 + 0x10;
  if ((param_3 & 1) == 0) {
    lVar1 = (long)param_2 * 0x20 + 0x18;
  }
  local_18 = *(undefined8 *)(PTR_DAT_0272a0f8 + lVar1);
  FUN_00ffd010(param_1 + 0x100,&local_18);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485890; name: FUN_01485890
 */


uint FUN_01485890(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  if ((param_3 & 1) == 0) {
    local_18 = *(undefined8 *)(PTR_DAT_0272a0f8 + (long)param_2 * 0x20);
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
  }
  else {
    local_18 = *(undefined8 *)(PTR_DAT_0272a0f8 + (long)param_2 * 0x20 + 8);
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_0167bc20(lVar2,&local_18);
  return uVar1 & 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790790; name: FUN_00790790
 */


void FUN_00790790(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_24;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x98) + (long)param_2 * 8);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    if (*(char *)(lVar2 + 9) != '\0') {
      lVar1 = lVar2;
    }
  }
  local_24 = param_2;
  FUN_019e9110(lVar1,PTR_LAB_027164b0,param_1);
  FUN_019f2f70(*(undefined8 *)(param_1 + 0x78),param_1 + 0x58,param_2);
  FUN_00790810(param_1 + 0xa8,&local_24);
  return;
}



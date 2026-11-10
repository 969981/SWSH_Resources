/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00987b60; name: FUN_00987b60
 */


bool FUN_00987b60(undefined8 param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_24;
  
  if (9 < param_2) {
    return false;
  }
  lVar1 = (*(code *)(&PTR_LAB_02623c30)[*(long *)(&DAT_0214be50 + (long)(int)param_2 * 8) * 2])
                    (&local_24,param_3);
  if (lVar1 != 0) {
    FUN_008daa50(param_1,3,param_2,4,0,param_3,lVar1,local_24);
  }
  return lVar1 != 0;
}



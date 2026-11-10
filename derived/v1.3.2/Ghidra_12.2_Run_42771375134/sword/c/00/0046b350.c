/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b350; name: FUN_0046b350
 */


undefined8 FUN_0046b350(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  bVar1 = false;
  local_28 = 0xff;
  local_20 = 0xff;
  local_18 = 0;
  if (*param_2 == 0) {
    if (((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
       ((char)param_2[4] == -1)) {
      bVar1 = param_2[5] == 0;
    }
    else {
      bVar1 = false;
    }
  }
  FUN_004726e0(param_1 + 0x38,PTR_LAB_02713168,param_2,&local_40,&local_40,0,bVar1);
  return 1;
}



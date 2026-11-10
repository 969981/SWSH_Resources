/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01398820; name: FUN_01398820
 */


void FUN_01398820(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  if (param_2 < 3) {
    lVar1 = (long)param_2 + 0x11;
    do {
      if (*(long *)(param_1 + lVar1 * 8) != 0) {
        FUN_00794700();
      }
      lVar2 = lVar1 + -0x11;
      lVar1 = lVar1 + 1;
    } while (lVar2 < 2);
  }
  lVar1 = *(long *)(param_1 + (long)param_2 * 8 + 0x80);
  if (lVar1 != 0) {
    FUN_007946a0(lVar1,1);
  }
  if (param_2 == 0) {
    local_50 = 0x595fb6fcbbea83bb;
    local_48 = "Stop_Camp_Cooking_PotBoiling_lp";
    local_40 = 0x1f;
    local_38 = 0;
    FUN_012d6d40(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_00794700();
    }
  }
  else if ((param_2 == 2) && (*(long *)(param_1 + 0xb0) != 0)) {
    FUN_00794740();
    FUN_007946a0(*(undefined8 *)(param_1 + 0xb0),1);
  }
  return;
}



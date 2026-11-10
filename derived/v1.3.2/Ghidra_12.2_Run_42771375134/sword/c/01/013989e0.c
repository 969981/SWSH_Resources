/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013989e0; name: FUN_013989e0
 */


void FUN_013989e0(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar2 = (ulong)param_2;
  if (0 < (int)param_2) {
    plVar3 = (long *)(param_1 + 0x80);
    do {
      if (*plVar3 != 0) {
        FUN_00794700();
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar1 = *(long *)(param_1 + (long)(int)param_2 * 8 + 0x80);
  if (lVar1 != 0) {
    FUN_007946a0(lVar1,1);
  }
  if (param_2 == 1) {
    local_50 = 0xe24a838e301e8d8d;
    local_48 = "Play_Camp_Cooking_PotBoiling_lp";
    local_40 = 0x1f;
    local_38 = 0;
    FUN_012d6d40(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_00794740();
      FUN_007946a0(*(undefined8 *)(param_1 + 0xb0),1);
    }
  }
  else if ((param_2 == 3) && (*(long *)(param_1 + 0xb0) != 0)) {
    FUN_00794700();
  }
  return;
}



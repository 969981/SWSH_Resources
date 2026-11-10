/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9ab10; name: FUN_00e9ab10
 */


void FUN_00e9ab10(long *param_1)

{
  int iVar1;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  long local_18;
  
  iVar1 = (int)param_1[0xce];
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((long)param_1 + 0x674) != '\0') goto LAB_00e9ac98;
    local_40 = 0xca574929761162f;
    FUN_00dc04c0(param_1,&local_40,1,0,0);
    local_40 = 0xe91e01164fd7cccf;
    local_38 = "Play_PL_Foley_Bicycle_Down";
  }
  else {
    if ((iVar1 != 1) ||
       ((**(code **)(*param_1 + 600))(param_1), *(char *)((long)param_1 + 0x674) != '\0'))
    goto LAB_00e9ac98;
    local_40 = 0x6148d53ba0a5519e;
    local_38 = "USE_BICYCLE";
    local_18 = 0;
    local_30 = 0xb;
    local_28 = 0;
    FUN_014af470(&local_40,&local_18);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      local_18 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    local_40 = 0xca574929761162f;
    FUN_00dc04c0(param_1,&local_40,1,0,0);
    local_40 = 0xf7ab75db62569a1;
    local_38 = "Play_PL_Foley_Bicycle_Ride";
  }
  local_30 = 0x1a;
  local_28 = 0;
  FUN_00db42e0(param_1,&local_40,1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
LAB_00e9ac98:
  *(undefined4 *)(param_1 + 0xce) = 0;
  return;
}



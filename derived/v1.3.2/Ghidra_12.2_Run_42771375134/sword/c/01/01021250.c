/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01021250; name: FUN_01021250
 */


void FUN_01021250(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 local_24;
  
  uVar1 = nn::hid::GetNpadStyleSet((uint *)PTR_No1_02723780);
  uVar2 = nn::hid::GetNpadStyleSet((uint *)PTR_No2_02723778);
  if ((uVar1 != 0 && uVar2 != 0) &&
     ((((uVar1 & uVar2) >> 6 & 1) != 0 || (((uVar2 | uVar1) >> 6 & 1) == 0)))) {
    nn::hid::DisconnectNpad(param_2);
    return;
  }
  uVar1 = nn::hid::GetNpadStyleSet(param_2);
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        pcVar3 = *(code **)(param_1 + 0x10);
        if ((uVar1 >> 6 & 1) == 0) {
          if (pcVar3 == (code *)0x0) {
            return;
          }
          local_24 = 0;
        }
        else {
          if (pcVar3 == (code *)0x0) {
            return;
          }
          local_24 = 6;
        }
      }
      else {
        pcVar3 = *(code **)(param_1 + 0x10);
        if (pcVar3 == (code *)0x0) {
          return;
        }
        local_24 = 3;
      }
    }
    else {
      pcVar3 = *(code **)(param_1 + 0x10);
      if (pcVar3 == (code *)0x0) {
        return;
      }
      local_24 = 1;
    }
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x10);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    local_24 = 2;
  }
  (*pcVar3)(param_1 + 0x30,&local_24,param_2);
  return;
}



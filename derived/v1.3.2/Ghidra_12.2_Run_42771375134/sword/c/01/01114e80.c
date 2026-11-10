/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01114e80; name: FUN_01114e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01114e80(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    local_40 = 0;
  }
  else {
    FUN_010eb5e0(&local_40);
  }
  (**(code **)(**(long **)(local_40 + 0x80) + 0x10))(&local_38);
  lVar2 = local_38;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    FUN_01105da0(&local_40,lVar2);
  }
  FUN_010f1e20(&local_38,local_40,param_2);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    FUN_01113490(&local_40);
    if (local_40 != 0) {
      FUN_010f13c0();
      if (*(char *)(local_40 + 0x68) != '\0') {
        uVar3 = *(undefined8 *)(param_1 + 8);
        lVar1 = local_40 + 0x70;
        local_48 = *(long *)(param_1 + 0x88);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        uVar3 = FUN_011159a0(uVar3,lVar1,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (*(long *)(param_1 + 0x88) == 0) {
          local_50 = 0;
          _DAT_00000078 = uVar3;
        }
        else {
          FUN_010eb5e0(&local_50);
          *(undefined8 *)(local_50 + 0x78) = uVar3;
          if (local_50 != 0) {
            (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
            local_50 = 0;
          }
        }
        FUN_01115cd0(lVar1);
        FUN_01115dd0(lVar1);
        FUN_01115e80(lVar1);
        FUN_01116080(lVar1);
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}



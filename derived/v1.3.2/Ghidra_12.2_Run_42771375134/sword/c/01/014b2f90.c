/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2f90; name: FUN_014b2f90
 */


void FUN_014b2f90(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  
  FUN_014b2bd0(&local_48,param_3);
  uVar1 = FUN_014b2db0(param_3);
  lVar3 = *(long *)(DAT_02a748d0 + 0x60);
  if (lVar3 == 0) {
    uVar2 = *param_1;
    lVar4 = local_48;
    if (local_48 == 0) goto LAB_014b3064;
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar2 = *param_1;
    lVar4 = local_48;
    if (local_48 == lVar3) {
LAB_014b3064:
      FUN_014c9d80(uVar2,param_2,uVar1);
      goto joined_r0x014b3028;
    }
  }
  FUN_014c7840(uVar2,param_2,lVar4,uVar1,0);
  lVar3 = lVar4;
joined_r0x014b3028:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}



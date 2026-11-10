/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e00fe0; name: FUN_00e00fe0
 */


undefined8
FUN_00e00fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  long local_38;
  
  FUN_008d48d0(local_70,param_2);
  if ((param_5 & 1) == 0) {
    FUN_00dc8750(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_70,0,param_3,param_4);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_38;
    if (local_38 != 0) {
      plVar2 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
        FUN_006e1e70(local_38,param_1 + 0x60,1);
      }
      FUN_006e1be0(local_38);
      goto LAB_00e01120;
    }
  }
  else {
    FUN_00dc8750(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_70,0,param_3,param_4);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_38;
    if (local_38 != 0) {
      plVar2 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
        FUN_006e1e70(local_38,param_1 + 0x60,1);
      }
LAB_00e01120:
      (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x290) = 1;
      goto joined_r0x00e01168;
    }
  }
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
joined_r0x00e01168:
  if ((local_58 != 0) && (local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return uVar1;
}



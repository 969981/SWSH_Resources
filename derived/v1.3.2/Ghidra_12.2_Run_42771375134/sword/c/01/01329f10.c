/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01329f10; name: FUN_01329f10
 */


void FUN_01329f10(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long local_40 [2];
  
  if ((param_3 & 1) == 0) {
    FUN_006dccd0(local_40,*(undefined8 *)PTR_DAT_02710788,0,param_2 + 8,0,
                 *(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_40[0];
    if (local_40[0] == 0) goto LAB_0132a048;
    plVar1 = (long *)(local_40[0] + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_40[0],param_1 + 0x60,1);
    }
    FUN_006e1be0(local_40[0]);
  }
  else {
    FUN_006dccd0(local_40,*(undefined8 *)PTR_DAT_02710788,1,param_2 + 8,0,
                 *(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_40[0];
    if (local_40[0] == 0) goto LAB_0132a048;
    plVar1 = (long *)(local_40[0] + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_40[0],param_1 + 0x60,1);
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
LAB_0132a048:
  FUN_012b4040(local_40);
  FUN_012b4070(param_1 + 0x170,local_40);
  return;
}



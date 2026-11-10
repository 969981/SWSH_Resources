/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad65a0; name: FUN_00ad65a0
 */


void FUN_00ad65a0(long *param_1)

{
  ulong uVar1;
  undefined1 local_38 [4];
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if (((((uVar1 & 1) != 0) && ((int)param_1[0x9a] == 2)) &&
      (((int)param_1[0x9e] != 0x37a || (*(int *)((long)param_1 + 0x504) != 2)))) &&
     (param_1[0xac] != 0)) {
    FUN_00ad1e50(&local_30,param_1);
    local_34 = 0;
    local_38[0] = 1;
    local_28 = FUN_0069c990(local_30,local_38);
    FUN_00ad6650(param_1,&local_28);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015017e0; name: FUN_015017e0
 */


undefined4 FUN_015017e0(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  long local_28;
  
  if ((param_3 < 2) &&
     (lVar2 = param_1 + (ulong)param_3 * 0x2b8,
     1 < (byte)(*(char *)(lVar2 + 0x1a9) + *(char *)(lVar2 + 0x60)))) {
    FUN_01501160(&local_28,param_1,param_2,param_3,0);
    FUN_01501160(&local_38,param_1,param_2,param_3,1);
    lVar2 = local_38;
    uVar1 = FUN_0087d900(local_28,local_38);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_38 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015633c0; name: FUN_015633c0
 */


void FUN_015633c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long local_38;
  long *local_28;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x370) + 0x1c0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_006cf0c0(auStack_50,param_2);
  FUN_015aa050(&local_28,lVar4,auStack_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar1 = (**(code **)(*local_28 + 0x38))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*local_28 + 0x40))();
    uVar3 = (**(code **)(*local_28 + 0x50))();
    FUN_006cf0c0(auStack_50,local_28 + 0xd);
    FUN_01564ee0(param_1,uVar2,uVar3,auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(undefined1 *)(param_1 + 0x280) = 1;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(local_28[9] + 0x18))();
  }
  return;
}



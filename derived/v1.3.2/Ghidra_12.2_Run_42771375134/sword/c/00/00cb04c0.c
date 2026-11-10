/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb04c0; name: FUN_00cb04c0
 */


undefined8 FUN_00cb04c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_40;
  long local_38;
  
  puVar6 = *(undefined8 **)(*param_2 + 0x60);
  plVar1 = (long *)(**(code **)*puVar6)(puVar6);
  lVar2 = FUN_00c72e20();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar6[3];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(int *)(lVar2 + 0x54) != 0) {
      local_38 = lVar2;
      uVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar1);
      uVar4 = FUN_00cae840(uVar3,&local_38);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar1);
      local_38 = 0;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
        goto LAB_00cb0638;
      }
    }
  }
  puVar6 = *(undefined8 **)(*param_2 + 0x60);
  plVar1 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00c72e20();
  for (; plVar1 != (long *)lVar5; plVar1 = (long *)*plVar1) {
  }
  lVar5 = puVar6[4];
  if (lVar5 == 0) {
    uVar3 = 1;
  }
  else {
    plVar1 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(int *)(lVar5 + 0x54) == 0) {
LAB_00cb0600:
      uVar3 = 1;
    }
    else {
      local_40 = lVar5;
      uVar3 = (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar1);
      uVar4 = FUN_00cae840(uVar3,&local_40);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar1);
      local_40 = 0;
      if ((uVar4 & 1) != 0) goto LAB_00cb0600;
      uVar3 = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar2 == 0) {
    return uVar3;
  }
LAB_00cb0638:
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return uVar3;
}



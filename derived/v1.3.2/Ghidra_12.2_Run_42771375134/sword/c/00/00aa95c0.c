/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa95c0; name: FUN_00aa95c0
 */


void FUN_00aa95c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  long local_28;
  
  lVar3 = *param_1;
  FUN_006e2db0(auStack_40,*(long *)(lVar3 + 0x48),*(undefined8 *)(*(long *)(lVar3 + 0x48) + 400));
  FUN_00a8ba70(&local_28,*(undefined8 *)PTR_DAT_02710788,0,param_1 + 2,0,param_1[1],auStack_40);
  if (*(long *)(lVar3 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(lVar3 + 0x158) = 0;
  }
  *(long *)(lVar3 + 0x158) = local_28;
  if (local_28 != 0) {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar3 + 0x160) != 0) || (*(long *)(lVar3 + 0x1e0) != 0)) {
      FUN_006e1e70(local_28,lVar3 + 0x150,1);
    }
    FUN_006e1be0(local_28);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (*(long *)(lVar3 + 0x48) == 0) {
    *(undefined8 *)(lVar3 + 0x48) = 0;
  }
  else {
    FUN_006e2100(*(long *)(lVar3 + 0x48),lVar3 + 0x40);
    lVar1 = *(long *)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



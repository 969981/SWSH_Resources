/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2660; name: FUN_004c2660
 */


long * FUN_004c2660(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_68;
  undefined1 local_60;
  long local_58 [3];
  
  puVar4 = PTR_DAT_02712e08;
  if (param_2 == 0) {
    return (long *)0x0;
  }
  if (*(long *)PTR_DAT_02712de8 == 0) {
    return (long *)0x0;
  }
  local_58[1] = 0;
  local_58[0] = 0;
  do {
    iVar5 = *(int *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(uint *)puVar4 = iVar5 + 1U;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_58[2] = (ulong)(iVar5 + 1U) << 0x20;
  local_60 = 0;
  local_68 = 0x400000000;
  puVar6 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,param_3);
  puVar4 = PTR_DAT_02712a90;
  if (puVar6 != (undefined8 *)0x0) {
    plVar7 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x78);
    if (plVar7 != (long *)0x0) {
      FUN_004c4120(plVar7,param_1,puVar6,&local_68,local_58,param_2);
    }
    iVar5 = *(int *)(puVar6 + 10);
    *(int *)(puVar6 + 10) = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      uVar1 = *(undefined4 *)puVar4;
      (**(code **)*puVar6)(puVar6);
      FUN_00404870(uVar1,puVar6);
    }
    if ((plVar7 == (long *)0x0) || (iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7), iVar5 == 1))
    goto LAB_004c2774;
    FUN_004c2ce0(plVar7);
  }
  plVar7 = (long *)0x0;
LAB_004c2774:
  if (local_58[0] != 0) {
    FUN_00431200();
  }
  return plVar7;
}



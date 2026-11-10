/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7d7c0; name: FUN_00c7d7c0
 */


void FUN_00c7d7c0(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_48 = 0;
  local_58 = (long *)0x0;
  uStack_50 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_00c7c9b0(param_2,&local_60,*(undefined8 *)(param_2 + 0x20),param_4);
  puVar6 = local_60;
  *(undefined1 *)((long)local_60 + 0x25) = *(undefined1 *)(param_4 + 0x15e);
  *(bool *)((long)local_60 + 0x24) = param_3 == 1;
  FUN_00c7b270(&local_38,param_2,param_3 < 2,local_60);
  local_60 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*local_58 + 0x18))(local_58,puVar6,uStack_50,local_48);
  }
  puVar5 = PTR_DAT_0271c220;
  puVar4 = PTR_DAT_0271c218;
  if ((local_38 == 0) || (*(int *)(local_38 + 0x54) == 0)) {
LAB_00c7d928:
    plVar10 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(local_38 + 0x54);
    iVar9 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(local_38 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar8 = FUN_00c72b60();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00c7d928;
          if (plVar10 == (long *)puVar5) break;
          plVar10 = (long *)*plVar10;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar10 = (long *)0x0;
          if (*(long *)(local_38 + 0x60) != 0) {
            plVar10 = (long *)(*(long *)(local_38 + 0x60) + -0x50);
          }
          goto LAB_00c7d92c;
        }
        plVar10 = (long *)0x0;
        iVar9 = iVar7;
        if (iVar7 == 0) goto LAB_00c7d92c;
      }
      ClearExclusiveLocal();
      plVar10 = (long *)0x0;
      iVar9 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00c7d92c:
  (**(code **)(*plVar10 + 0x98))(param_1,plVar10);
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  }
  puVar6 = local_60;
  local_60 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*local_58 + 0x18))(local_58,puVar6,uStack_50,local_48);
  }
  return;
}



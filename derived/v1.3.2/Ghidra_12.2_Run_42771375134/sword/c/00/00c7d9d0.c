/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7d9d0; name: FUN_00c7d9d0
 */


void FUN_00c7d9d0(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long local_88;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  
  FUN_00c62ba0(&local_80,*(undefined8 *)(param_2 + 0x10));
  lVar10 = local_80[0x2d2];
  if (lVar10 == 0) {
    FUN_014aba20(auStack_60,0,param_4 + 0x10);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_014aba20(auStack_60,lVar10,param_4 + 0x10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)(local_80[9] + 0x18))();
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = (undefined8 *)0x0;
  local_78 = (long *)0x0;
  FUN_00c7d2a0(param_2,&local_80,*(undefined8 *)(param_2 + 0x20),param_4,auStack_60);
  puVar9 = local_80;
  *(undefined1 *)((long)local_80 + 0x25) = *(undefined1 *)(param_4 + 0x5c);
  *(bool *)((long)local_80 + 0x24) = param_3 == 1;
  FUN_00c7b270(&local_88,param_2,param_3 < 2,local_80);
  local_80 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(*local_78 + 0x18))(local_78,puVar9,local_70,local_68);
  }
  puVar5 = PTR_DAT_0271c220;
  puVar4 = PTR_DAT_0271c218;
  if ((local_88 == 0) || (*(int *)(local_88 + 0x54) == 0)) {
    plVar11 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(local_88 + 0x54);
    iVar8 = *(int *)(local_88 + 0x54);
    do {
      while( true ) {
        puVar9 = *(undefined8 **)(local_88 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_00c72b60();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        plVar11 = (long *)0x0;
        if (puVar9 == (undefined8 *)0x0) goto LAB_00c7db94;
        while (puVar9 != (undefined8 *)puVar5) {
          puVar9 = (undefined8 *)*puVar9;
          if (puVar9 == (undefined8 *)0x0) {
            plVar11 = (long *)0x0;
            goto LAB_00c7db94;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar8) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar11 = (long *)0x0;
          if (*(long *)(local_88 + 0x60) != 0) {
            plVar11 = (long *)(*(long *)(local_88 + 0x60) + -0x50);
          }
          goto LAB_00c7db94;
        }
        plVar11 = (long *)0x0;
        iVar8 = iVar6;
        if (iVar6 == 0) goto LAB_00c7db94;
      }
      ClearExclusiveLocal();
      plVar11 = (long *)0x0;
      iVar8 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00c7db94:
  (**(code **)(*plVar11 + 0x98))(param_1,plVar11);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))((long *)(local_88 + 0x48));
  }
  puVar9 = local_80;
  local_80 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(*local_78 + 0x18))(local_78,puVar9,local_70,local_68);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df8f00; name: FUN_00df8f00
 */


undefined8 FUN_00df8f00(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar7 = FUN_00df9110();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = FUN_00df9400(param_1);
  puVar4 = PTR_DAT_0271ee50;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x54) != 0)) {
    lVar9 = *(long *)(param_1 + 0x58);
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_00df901c:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_0271ee58;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        plVar12 = *(long **)(lVar9 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar4);
          puVar10 = PTR_DAT_0271ee58;
          if (iVar6 != 0) {
            uVar8 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee58 = uVar8;
            __cxa_guard_release(puVar4);
            puVar10 = PTR_DAT_0271ee58;
          }
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00df901c;
          if (plVar12 == (long *)puVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              plVar12 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar12 = (long *)0x0;
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
    bVar5 = (**(code **)(*plVar12 + 0x188))(plVar12);
    *(byte *)(param_1 + 0x68) = bVar5 & 1;
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
  }
  FUN_00df9500(param_1);
  lVar9 = *(long *)PTR_DAT_027107a8;
  local_58 = 0xf38cafa3a524257f;
  pcStack_50 = "Set_State_Off";
  local_48 = 0xd;
  FUN_006cf0a0(auStack_40,&local_58);
  FUN_008962c0(lVar9 + 0x108,auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return 1;
}



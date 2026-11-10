/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135b350; name: FUN_0135b350
 */


undefined8 FUN_0135b350(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  puVar4 = PTR_DAT_02715078;
  lVar8 = *(long *)(param_1 + 0xa8);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02715080;
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        puVar11 = *(undefined8 **)(lVar8 + 0x58);
        if (((*puVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar4), puVar9 = (undefined8 *)PTR_DAT_02715080, iVar5 != 0
           )) {
          uVar6 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar6;
          __cxa_guard_release(puVar4);
          puVar9 = (undefined8 *)PTR_DAT_02715080;
        }
        if (puVar11 == (undefined8 *)0x0) {
          return 0;
        }
        while (puVar11 != puVar9) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) {
            return 0;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar5;
        if (iVar5 == 0) {
          return 0;
        }
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 == 0) {
          return 0;
        }
        uVar6 = FUN_012d5170(lVar8 + -0x50,auStack_38);
        uVar7 = FUN_0130a240();
        if ((uVar7 & 1) != 0) {
          FUN_01312230(&local_40,param_1);
          uVar7 = FUN_013099c0(uVar6,&local_40);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          if ((uVar7 & 1) != 0) {
            local_48 = FUN_01346e80(param_1);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
            }
            FUN_012f2810(&local_48);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            uVar6 = 1;
            *param_2 = 0x12835107bdaf3e07;
            param_2[1] = 0;
            goto LAB_0135b514;
          }
        }
        uVar6 = 0;
LAB_0135b514:
        (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
        return uVar6;
      }
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
  return 0;
}



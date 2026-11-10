/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d77b10; name: FUN_00d77b10
 */


void FUN_00d77b10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar13)(puVar13);
  lVar8 = FUN_00d74330();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  if (*(char *)(puVar13[0x46] + 9) == '\0') {
    lVar8 = FUN_00e7e260();
    puVar5 = PTR_DAT_027152c0;
    uVar4 = DAT_01d4c0a0;
    if (lVar8 != 0) {
      *(ulong *)(lVar8 + 0xb8) = (ulong)DAT_01d4c674;
      *(ulong *)(lVar8 + 0xb0) = CONCAT44(*(undefined4 *)(lVar8 + 0xb4),uVar4);
      uVar9 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)puVar5;
      *(undefined8 *)(lVar8 + 0xa8) = uVar9;
      *(undefined1 *)(lVar8 + 0xc0) = 1;
    }
    lVar8 = *(long *)PTR_DAT_027194e8;
    if ((lVar8 != 0) && (lVar14 = *(long *)(lVar8 + 0x50), lVar14 != 0)) {
      plVar7 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      piVar1 = (int *)(lVar14 + 0x54);
      if (*piVar1 != 0) {
        FUN_00dfa940(lVar8);
        puVar5 = PTR_DAT_02719528;
        if (*piVar1 != 0) {
          puVar10 = PTR_DAT_02719530;
          iVar11 = *piVar1;
          do {
            while( true ) {
              plVar12 = *(long **)(lVar14 + 0x58);
              if (((*puVar5 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02719530, iVar6 != 0)) {
                uVar9 = FUN_015b5410();
                *(undefined8 *)PTR_DAT_02719530 = uVar9;
                __cxa_guard_release(puVar5);
                puVar10 = PTR_DAT_02719530;
              }
              while( true ) {
                if (plVar12 == (long *)0x0) goto LAB_00d77cf4;
                if (plVar12 == (long *)puVar10) break;
                plVar12 = (long *)*plVar12;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar11) break;
              ClearExclusiveLocal();
              iVar11 = iVar6;
              if (iVar6 == 0) goto LAB_00d77cf4;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar8 = *(long *)(lVar14 + 0x60);
              if (lVar8 != 0) {
                FUN_00e8fec0(lVar8 + -0x50);
                (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
                goto LAB_00d77cfc;
              }
              break;
            }
            iVar11 = iVar6;
          } while (iVar6 != 0);
        }
LAB_00d77cf4:
        FUN_00e8fec0(0);
      }
LAB_00d77cfc:
                    /* WARNING: Could not recover jumptable at 0x00d77d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
  }
  return;
}



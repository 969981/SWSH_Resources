/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45c30; name: FUN_00e45c30
 */


void FUN_00e45c30(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar9 = param_1[0xb1];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar6 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar9 + 0x58);
          plVar7 = (long *)FUN_0156b190();
          lVar11 = 0;
          if (plVar10 == (long *)0x0) goto LAB_00e45cd0;
          while (plVar10 != plVar7) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              lVar11 = 0;
              goto LAB_00e45cd0;
            }
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar6) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00e45cd0;
          }
          lVar11 = 0;
          iVar6 = iVar2;
          if (iVar2 == 0) goto LAB_00e45cd0;
        }
        ClearExclusiveLocal();
        lVar11 = 0;
        iVar6 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00e45cd0;
    }
  }
  lVar11 = 0;
LAB_00e45cd0:
  plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar6 != 0))
  {
    uVar8 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar8;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    lVar5 = lVar11;
    if (plVar7 == (long *)PTR_DAT_0271ed00) goto joined_r0x00e45dd0;
  }
  lVar5 = 0;
joined_r0x00e45dd0:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  FUN_00e405c0(lVar5,1);
  (**(code **)(*param_1 + 0x1c8))(param_1);
  if ((int)param_1[0xb7] == 3) {
    uVar8 = 2;
  }
  else {
    uVar8 = 1;
  }
  (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e8a0,uVar8);
  (**(code **)(*param_1 + 0x180))(0,param_1,PTR_DAT_0271e8a8);
  FUN_00db5db0(lVar5,1);
  FUN_00e45e40(param_1,1);
  return;
}



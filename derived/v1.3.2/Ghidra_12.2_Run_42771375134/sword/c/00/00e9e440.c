/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9e440; name: FUN_00e9e440
 */


bool FUN_00e9e440(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_1 + 0x588);
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
          if (plVar10 == (long *)0x0) goto LAB_00e9e4e0;
          while (plVar10 != plVar7) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              lVar11 = 0;
              goto LAB_00e9e4e0;
            }
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar6) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00e9e4e0;
          }
          lVar11 = 0;
          iVar6 = iVar3;
          if (iVar3 == 0) goto LAB_00e9e4e0;
        }
        ClearExclusiveLocal();
        lVar11 = 0;
        iVar6 = iVar3;
      } while (iVar3 != 0);
      goto LAB_00e9e4e0;
    }
  }
  lVar11 = 0;
LAB_00e9e4e0:
  plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))();
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar6 != 0))
  {
    uVar8 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar8;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar7 != (long *)PTR_DAT_0271ed00; plVar7 = (long *)*plVar7) {
  }
  uVar2 = *(uint *)(lVar11 + 0x4d8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return (float)uVar2 <= *(float *)(param_1 + 0x678);
}



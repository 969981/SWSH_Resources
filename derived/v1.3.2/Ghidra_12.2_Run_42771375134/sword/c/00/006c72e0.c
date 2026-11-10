/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c72e0; name: FUN_006c72e0
 */


void FUN_006c72e0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_006cbc80(param_1 + 0x108,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xe8));
  puVar7 = PTR_DAT_02715288;
  puVar6 = PTR_DAT_02715280;
  lVar10 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  if (lVar10 != 0) {
    plVar13 = *(long **)(*(long *)(param_1 + 0xe8) + 0x40);
    plVar2 = plVar13 + lVar10;
    do {
      if ((*plVar13 != 0) && (*(int *)(*plVar13 + 0x54) != 0)) {
        lVar10 = *plVar13;
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
          piVar1 = (int *)(lVar10 + 0x54);
          iVar11 = *(int *)(lVar10 + 0x54);
          do {
            while( true ) {
              plVar12 = *(long **)(lVar10 + 0x58);
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                uVar9 = FUN_01590a70();
                *(undefined8 *)puVar7 = uVar9;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar12 == (long *)0x0) goto joined_r0x006c743c;
                if (plVar12 == (long *)puVar7) break;
                plVar12 = (long *)*plVar12;
              }
              iVar8 = *piVar1;
              if (iVar8 == iVar11) break;
              ClearExclusiveLocal();
              iVar11 = iVar8;
              if (iVar8 == 0) goto joined_r0x006c743c;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar3 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar3 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              cVar4 = *(char *)(lVar3 + 0x218);
              goto joined_r0x006c7350;
            }
            iVar11 = iVar8;
          } while (iVar8 != 0);
        }
joined_r0x006c743c:
        lVar3 = 0;
        cVar4 = DAT_00000218;
joined_r0x006c7350:
        if (cVar4 != '\0') {
          *(int *)(lVar3 + 0x21c) = *(int *)(lVar3 + 0x21c) + 1;
        }
        if (*(long *)(lVar3 + 0x160) != 0) {
          *(undefined1 *)(param_1 + 0x110) = 1;
        }
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  return;
}



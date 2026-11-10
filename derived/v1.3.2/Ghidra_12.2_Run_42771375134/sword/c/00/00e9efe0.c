/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9efe0; name: FUN_00e9efe0
 */


uint FUN_00e9efe0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long local_48;
  
  lVar11 = *(long *)(param_1 + 0x588);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))((long *)(lVar11 + 0x48));
    if (*(int *)(lVar11 + 0x54) != 0) {
      piVar1 = (int *)(lVar11 + 0x54);
      iVar8 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar11 + 0x58);
          plVar9 = (long *)FUN_0156b190();
          lVar14 = 0;
          if (plVar13 == (long *)0x0) goto LAB_00e9f088;
          while (plVar13 != plVar9) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) {
              lVar14 = 0;
              goto LAB_00e9f088;
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
            lVar14 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar14 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            goto LAB_00e9f088;
          }
          lVar14 = 0;
          iVar8 = iVar6;
          if (iVar6 == 0) goto LAB_00e9f088;
        }
        ClearExclusiveLocal();
        lVar14 = 0;
        iVar8 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00e9f088;
    }
  }
  lVar14 = 0;
LAB_00e9f088:
  plVar9 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x50))((undefined8 *)(lVar14 + 0x50));
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar8 != 0))
  {
    uVar12 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar12;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    lVar4 = lVar14;
    if (plVar9 == (long *)PTR_DAT_0271ed00) goto joined_r0x00e9f2cc;
  }
  lVar4 = 0;
joined_r0x00e9f2cc:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  FUN_00e99f10(*(undefined4 *)(lVar4 + 0x4d0),param_1,1);
  if ((*(long *)(param_1 + 0x298) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x298) + 0x80), lVar11 == 0)) {
    lVar14 = 0;
  }
  else {
    plVar9 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    puVar5 = PTR_DAT_02715280;
    if (*(int *)(lVar11 + 0x54) != 0) {
      piVar1 = (int *)(lVar11 + 0x54);
      puVar10 = PTR_DAT_02715288;
      iVar8 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar11 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = PTR_DAT_02715288;
            if (iVar6 != 0) {
              uVar12 = FUN_01590a70();
              *(undefined8 *)PTR_DAT_02715288 = uVar12;
              __cxa_guard_release(puVar5);
              puVar10 = PTR_DAT_02715288;
            }
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00e9f1ec;
            if (plVar13 == (long *)puVar10) break;
            plVar13 = (long *)*plVar13;
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
            lVar14 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar14 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            goto LAB_00e9f1f0;
          }
          iVar8 = iVar6;
          if (iVar6 == 0) goto LAB_00e9f1ec;
        }
        ClearExclusiveLocal();
        iVar8 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00e9f1ec:
    lVar14 = 0;
LAB_00e9f1f0:
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(param_1 + 0xa0);
  uVar12 = *(undefined8 *)(param_1 + 0x288);
  if (*(long *)(param_1 + 0x298) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(long *)(*(long *)(param_1 + 0x298) + 0x80);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
  }
  uVar7 = FUN_006c7610(uVar12,3,&local_48,param_2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  FUN_00e99f10(DAT_01d4beb0,param_1,0);
  return uVar7 & 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f3580; name: FUN_012f3580
 */


undefined8 FUN_012f3580(long *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long lStack_b0;
  undefined4 local_a8;
  long local_a0;
  long local_48;
  
  FUN_012f2100(&local_48);
  if (local_48 == 0) {
    return 0;
  }
  uVar7 = FUN_012f2c60();
  if ((uVar7 & 1) != 0) {
    uVar9 = 0;
    goto joined_r0x012f36f4;
  }
  lVar11 = *(long *)(local_48 + 0x60);
  if (lVar11 == 0) {
LAB_012f3648:
    lVar11 = *param_1;
  }
  else {
    if (*(int *)(lVar11 + 0x54) != 0) {
      piVar1 = (int *)(lVar11 + 0x54);
      iVar12 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar11 + 0x58);
          lVar8 = FUN_012f4940();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_012f3648;
            if (plVar10 == (long *)lVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar8 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            lVar11 = *param_1;
            goto joined_r0x012f3748;
          }
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_012f3648;
        }
        ClearExclusiveLocal();
        iVar12 = iVar2;
      } while (iVar2 != 0);
      goto LAB_012f3648;
    }
    lVar11 = *param_1;
  }
  lVar8 = 0;
joined_r0x012f3748:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar6 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_d0 = &LAB_012f5fd0;
  local_c8 = FUN_012f6280;
  local_c0 = &LAB_012f62d0;
  local_a0 = lVar6;
  local_b8 = &LAB_012f6330;
  lStack_b0 = lVar11;
  local_a8 = param_2;
  FUN_012ed8a0(lVar8,&local_d0);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(&lStack_b0);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  uVar9 = 1;
joined_r0x012f36f4:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar9;
}



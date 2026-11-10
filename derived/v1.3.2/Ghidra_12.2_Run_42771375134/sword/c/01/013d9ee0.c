/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d9ee0; name: FUN_013d9ee0
 */


void FUN_013d9ee0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  long local_38;
  
  lVar6 = *(long *)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x568) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)PTR_DAT_02727748;
  lVar6 = 0;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_012eac20(*(undefined8 *)(lVar8 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_013d9f68;
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar6 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            goto LAB_013d9f6c;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_013d9f68;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_013d9f68:
    lVar6 = 0;
  }
LAB_013d9f6c:
  local_c0 = &LAB_013ddff0;
  local_b8 = FUN_013de0a0;
  local_b0 = &LAB_013de0b0;
  local_a8 = &LAB_013de0c0;
  alStack_a0[0] = param_1;
  FUN_01309760(&local_38,lVar6,&local_c0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(alStack_a0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if ((*(long *)(param_1 + 0x568) == 0) || (*(int *)(*(long *)(param_1 + 0x568) + 0x54) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}



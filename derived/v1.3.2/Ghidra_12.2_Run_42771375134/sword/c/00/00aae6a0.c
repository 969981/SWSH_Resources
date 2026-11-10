/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aae6a0; name: FUN_00aae6a0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00aae6a0(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_40;
  long local_38;
  
  uVar7 = (**(code **)(*param_1 + 400))();
  if ((uVar7 & 1) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_1[0x78] + 0x528);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_40 = param_1[0x97];
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_00c7a1d0(&local_38,lVar12,&local_40);
    lVar13 = local_38;
    puVar4 = PTR_DAT_02715b80;
    if (local_38 == 0) {
      lVar13 = 0;
    }
    else {
      if (*(int *)(local_38 + 0x54) != 0) {
        piVar1 = (int *)(local_38 + 0x54);
        puVar10 = PTR_DAT_02715b88;
        iVar6 = *(int *)(local_38 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar13 + 0x58);
            if (((*puVar4 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(puVar4), puVar10 = PTR_DAT_02715b88, iVar5 != 0)) {
              if (((*PTR_DAT_02715b90 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_02715b90), iVar5 != 0)) {
                uVar8 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_02715b98 = uVar8;
                __cxa_guard_release(PTR_DAT_02715b90);
              }
              puVar10 = PTR_DAT_02715b88;
              *(undefined **)PTR_DAT_02715b88 = PTR_DAT_02715b98;
              __cxa_guard_release(puVar4);
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00aae83c;
              if (plVar11 == (long *)puVar10) break;
              plVar11 = (long *)*plVar11;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar6) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar9 = *(long *)(lVar13 + 0x60);
              lVar13 = 0;
              if (lVar9 != 0) {
                lVar13 = lVar9 + -0x50;
              }
              goto joined_r0x00aae8fc;
            }
            iVar6 = iVar5;
            if (iVar5 == 0) goto LAB_00aae83c;
          }
          ClearExclusiveLocal();
          iVar6 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00aae83c:
      lVar13 = 0;
joined_r0x00aae8fc:
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    local_38 = 0;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    lVar12 = *(long *)(lVar13 + 0x350);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    iVar6 = FUN_00722fb0(lVar12,param_2);
    if (iVar6 < 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x1b8) + (long)iVar6 * 0x130;
    }
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return lVar12;
}



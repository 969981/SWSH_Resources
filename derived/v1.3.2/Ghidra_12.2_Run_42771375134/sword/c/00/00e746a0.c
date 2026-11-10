/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e746a0; name: FUN_00e746a0
 */


void FUN_00e746a0(float param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  
  lVar6 = *(long *)(param_2 + 0x88);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        uVar5 = FUN_00e75e30(*(undefined8 *)(lVar6 + 0x58));
        if ((uVar5 & 1) == 0) goto LAB_00e74760;
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            if (*(char *)(param_2 + 0x9c) != '\0') {
              param_1 = -param_1;
            }
            *(float *)(param_2 + 0x98) = *(float *)(param_2 + 0x98) + param_1;
            uVar9 = FUN_00e75650(param_2);
            *(undefined4 *)(param_2 + 0x98) = uVar9;
            plVar7 = (long *)(lVar6 + -8);
                    /* WARNING: Could not recover jumptable at 0x00e7475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x18))(plVar7);
            return;
          }
          goto LAB_00e74760;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00e74760;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00e74760:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}



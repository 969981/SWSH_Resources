/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8c90; name: FUN_006e8c90
 */


void FUN_006e8c90(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  lVar6 = param_1[0x12];
  *param_1 = (long)(PTR_DAT_027155e0 + 0x10);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x54) != 0) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar7 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar6 + 0x58);
          lVar5 = FUN_006eaf70();
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_006e8d50;
            if (plVar8 == (long *)lVar5) break;
            plVar8 = (long *)*plVar8;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar7) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            if (*(long *)(lVar6 + 0x60) != 0) {
              plVar8 = (long *)(*(long *)(lVar6 + 0x60) + -8);
              (**(code **)(*plVar8 + 0x38))(plVar8,param_1);
              lVar6 = param_1[0x12];
              param_1[0x12] = 0;
              goto joined_r0x006e8d48;
            }
            goto LAB_006e8d50;
          }
          iVar7 = iVar2;
          if (iVar2 == 0) goto LAB_006e8d50;
        }
        ClearExclusiveLocal();
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
LAB_006e8d50:
    plVar8 = (long *)0x0;
    lVar6 = param_1[0x12];
    param_1[0x12] = 0;
joined_r0x006e8d48:
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (param_1[0x12] == 0) goto LAB_006e8d98;
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
  }
  param_1[0x12] = 0;
LAB_006e8d98:
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x006e8dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}



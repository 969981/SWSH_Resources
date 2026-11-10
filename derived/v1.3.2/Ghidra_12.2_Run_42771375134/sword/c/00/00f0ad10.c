/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f0ad10; name: FUN_00f0ad10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0ad10(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN_00f0ae50(param_1,lVar9);
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar11 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar10 + 0x58);
        lVar8 = FUN_00f0b4a0();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00f0adf0;
          if (plVar12 == (long *)lVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar11) break;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            uVar2 = *param_2;
            uVar3 = param_2[1];
            uVar4 = param_2[3];
            *(undefined8 *)(lVar10 + 0x48) = param_2[2];
            *(undefined8 *)(lVar10 + 0x50) = uVar4;
            *(undefined8 *)(lVar10 + 0x38) = uVar2;
            *(undefined8 *)(lVar10 + 0x40) = uVar3;
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
            goto joined_r0x00f0ade8;
          }
          goto LAB_00f0adf0;
        }
        iVar11 = iVar5;
        if (iVar5 == 0) goto LAB_00f0adf0;
      }
      ClearExclusiveLocal();
      iVar11 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00f0adf0:
  _DAT_00000098 = param_2[2];
  _DAT_000000a0 = param_2[3];
  _DAT_00000088 = *param_2;
  _DAT_00000090 = param_2[1];
joined_r0x00f0ade8:
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f0ae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}



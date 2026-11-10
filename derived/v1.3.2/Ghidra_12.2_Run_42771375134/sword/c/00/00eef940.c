/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eef940; name: FUN_00eef940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eef940(long *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_00eefa80(param_1,lVar6);
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar5 = FUN_00ef0450();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00eefa24;
          if (plVar9 == (long *)lVar5) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(uint *)(lVar7 + 0x120) = param_2 & 0xff;
            *(undefined4 *)(lVar7 + 0x124) = param_3;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            goto joined_r0x00eefa1c;
          }
          goto LAB_00eefa24;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00eefa24;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00eefa24:
  _DAT_00000170 = param_2 & 0xff;
  _DAT_00000174 = param_3;
joined_r0x00eefa1c:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00eefa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}



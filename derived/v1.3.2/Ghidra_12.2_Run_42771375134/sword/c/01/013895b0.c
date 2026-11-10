/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013895b0; name: FUN_013895b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013895b0(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)_DAT_02a70e90 >> 0x20),
                      (float)*param_2 + (float)_DAT_02a70e90);
  uStack_38 = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                       (float)((ulong)uRam0000000002a70e98 >> 0x20),
                       (float)param_2[1] + (float)uRam0000000002a70e98);
  FUN_012dc9c0(param_1,&local_40);
  FUN_012dc620(param_1,&DAT_02a70ea0);
  lVar7 = *param_3;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x58);
    if (*(long *)(lVar8 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
      *(undefined8 *)(lVar8 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar7;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return;
}



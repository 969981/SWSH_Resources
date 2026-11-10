/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070c3a0; name: FUN_0070c3a0
 */


void FUN_0070c3a0(long *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_28 [2];
  
  local_28[0] = param_2;
  FUN_006d8b50();
  puVar5 = PTR_DAT_02715a30;
  param_1[0x35] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x160);
  param_1[10] = (long)(puVar5 + 0x1a0);
  param_1[0x31] = (long)(puVar5 + 0x1c8);
  param_1[0x32] = (long)(puVar5 + 0x290);
  param_1[0x33] = (long)(puVar5 + 0x3a0);
  param_1[0x34] = (long)(puVar5 + 0x480);
  lVar6 = FUN_0070ee60(param_1,param_1[1],local_28);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x58);
    if (*(long *)(lVar9 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x60))();
      *(undefined8 *)(lVar9 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[0x35];
  param_1[0x35] = lVar6;
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  return;
}



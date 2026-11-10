/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddb420; name: FUN_00ddb420
 */


void FUN_00ddb420(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined4 local_38 [2];
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar10 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar10);
    lVar7 = (long)puVar2 + (ulong)*puVar2;
  }
  local_38[0] = param_5;
  FUN_00db5850(param_1,param_2,param_3,lVar7);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  puVar6 = PTR_DAT_0271ebc0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[9] = (long)(puVar6 + 0x1b0);
  param_1[10] = (long)(puVar6 + 0x1f0);
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  lVar7 = FUN_00ddb5f0(param_1,param_2,local_38);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x58);
    if (*(long *)(lVar11 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x60))();
      *(undefined8 *)(lVar11 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)param_1[0x74];
  param_1[0x74] = lVar7;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  lVar7 = param_1[0x74];
  plVar9 = (long *)(lVar7 + 0x78);
  *(ulong *)(lVar7 + 0x138) = *(ulong *)(lVar7 + 0x138) & 0xfffffffffffffffc | 0x10;
  (**(code **)(*plVar9 + 0x10))(plVar9);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  lVar7 = param_1[0x75];
  param_1[0x75] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(*(long *)(param_1[0x74] + 0xa0) + 0xcc) = 0x48260400;
  (**(code **)(*param_1 + 0x180))(param_1,1);
  *(undefined1 *)((long)param_1 + 0x1c7) = 1;
  return;
}



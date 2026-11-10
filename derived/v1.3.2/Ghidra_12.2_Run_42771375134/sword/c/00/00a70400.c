/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a70400; name: FUN_00a70400
 */


void FUN_00a70400(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  bool bVar12;
  
  iVar1 = (**(code **)(*param_1 + 0x870))();
  uVar4 = 1;
  if (iVar1 == 1) {
    uVar4 = 2;
  }
  uVar6 = 0;
  bVar12 = false;
  uVar11 = 0;
  uVar5 = 4;
  if (iVar1 != 2) {
    uVar5 = uVar4;
  }
  lVar7 = 0x548;
  do {
    plVar10 = *(long **)((long)param_1 + lVar7);
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 9;
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar4 = (**(code **)(*plVar10 + 400))(plVar10);
      if ((uVar4 & 1) != 0) {
        uVar2 = (**(code **)(*plVar10 + 0x218))(plVar10);
        if ((uVar11 & 0xff) <= (uVar2 & 0xff)) {
          uVar11 = uVar2;
        }
        bVar12 = true;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x10;
  } while (uVar6 < uVar5);
  iVar1 = (**(code **)(*param_1 + 0x870))(param_1);
  uVar4 = 0;
  bVar8 = false;
  uVar2 = 0;
  uVar6 = 1;
  if (iVar1 == 1) {
    uVar6 = 2;
  }
  lVar7 = 0x550;
  do {
    plVar10 = *(long **)((long)param_1 + lVar7);
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 9;
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar5 = (**(code **)(*plVar10 + 400))(plVar10);
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*plVar10 + 0x218))(plVar10);
        if ((uVar2 & 0xff) <= (uVar3 & 0xff)) {
          uVar2 = uVar3;
        }
        bVar8 = true;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    uVar4 = uVar4 + 1;
    lVar7 = lVar7 + 0x10;
  } while (uVar4 < uVar6);
  if (!bVar12) {
    uVar11 = 1;
  }
  if (!bVar8) {
    uVar2 = 1;
  }
  FUN_00a6f8d0(param_1);
  FUN_00a705d0(param_1,uVar11,uVar2,0,param_2,param_3,param_4,param_5,param_6);
  return;
}



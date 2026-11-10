/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6f710; name: FUN_00a6f710
 */


uint FUN_00a6f710(long *param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  
  iVar2 = (**(code **)(*param_1 + 0x870))();
  if (iVar2 == 2) {
    uVar5 = 4;
    if (param_2 == 1) {
      uVar5 = 1;
    }
  }
  else if (iVar2 == 1) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  uVar10 = 0;
  uVar11 = 0;
  bVar9 = false;
  uVar8 = 0;
  if ((param_3 & 1) == 0) {
    do {
      uVar3 = uVar10 | param_2 == 1;
      if ((uVar3 != 0xff) && (plVar7 = (long *)param_1[(ulong)uVar3 + 0xa9], plVar7 != (long *)0x0))
      {
        plVar6 = plVar7 + 9;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = (**(code **)(*plVar7 + 400))(plVar7);
        if (((uVar4 & 1) != 0) && (cVar1 = FUN_00ad59f0(plVar7), cVar1 == '\0')) {
          uVar3 = (**(code **)(*plVar7 + 0x218))(plVar7);
          if ((uVar8 & 0xff) <= (uVar3 & 0xff)) {
            uVar8 = uVar3;
          }
          bVar9 = true;
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + 2;
    } while (uVar11 < uVar5);
  }
  else {
    do {
      uVar3 = uVar10 | param_2 == 1;
      if ((uVar3 != 0xff) && (plVar7 = (long *)param_1[(ulong)uVar3 + 0xa9], plVar7 != (long *)0x0))
      {
        plVar6 = plVar7 + 9;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = (**(code **)(*plVar7 + 400))(plVar7);
        if ((uVar4 & 1) != 0) {
          uVar3 = (**(code **)(*plVar7 + 0x218))(plVar7);
          if ((uVar8 & 0xff) <= (uVar3 & 0xff)) {
            uVar8 = uVar3;
          }
          bVar9 = true;
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + 2;
    } while (uVar11 < uVar5);
  }
  if (!bVar9) {
    uVar8 = 1;
  }
  return uVar8;
}



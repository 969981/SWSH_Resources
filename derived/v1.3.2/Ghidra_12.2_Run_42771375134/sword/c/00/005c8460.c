/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8460; name: FUN_005c8460
 */


long FUN_005c8460(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_2;
  if (param_2 < 0) {
    lVar8 = param_2 + 1;
  }
  lVar3 = 1;
  if (1 < param_2) {
    lVar3 = lVar8 >> 1;
  }
  if (lVar3 < param_2) {
    if (lVar3 != 0) {
      uVar5 = *param_3;
      *param_3 = param_3[lVar3];
      param_3[lVar3] = uVar5;
    }
    plVar6 = (long *)*param_3;
    lVar8 = 1;
    lVar3 = param_2 + -1;
    if (lVar3 != 0 && 0 < param_2) {
      do {
        plVar7 = (long *)param_3[lVar8];
        iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
        iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
        if (iVar2 <= iVar1) {
          iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
          iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          if (iVar2 < iVar1) {
            do {
              lVar8 = lVar8 + 1;
              if (lVar3 <= lVar8) break;
              plVar7 = (long *)param_3[lVar8];
              iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
              iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
              if (iVar1 < iVar2) break;
              iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
              iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
            } while (iVar2 < iVar1);
          }
        }
        plVar7 = (long *)param_3[lVar3];
        iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
        iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
        if (iVar1 < iVar2) {
LAB_005c85f4:
          do {
            lVar3 = lVar3 + -1;
            if (lVar3 <= lVar8) break;
            plVar7 = (long *)param_3[lVar3];
            iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
            iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
            uVar4 = 0xffffffff;
            if (iVar2 <= iVar1) {
              iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
              iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
              uVar4 = (uint)(iVar2 < iVar1);
            }
          } while ((int)uVar4 < 1);
        }
        else {
          iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
          iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          if (iVar1 <= iVar2) goto LAB_005c85f4;
        }
        if (lVar8 < lVar3) {
          uVar5 = param_3[lVar8];
          param_3[lVar8] = param_3[lVar3];
          param_3[lVar3] = uVar5;
        }
      } while (lVar8 <= lVar3);
      plVar6 = (long *)*param_3;
    }
    lVar8 = lVar8 + -1;
    *param_3 = param_3[lVar8];
    param_3[lVar8] = plVar6;
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}



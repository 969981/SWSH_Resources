/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dabd0; name: FUN_006dabd0
 */


bool FUN_006dabd0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = (**(code **)(*(long *)param_2[-1] + 0x30))();
    uVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
    if (uVar1 < uVar2) {
      lVar7 = *param_1;
      *param_1 = 0;
      lVar9 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar9;
      if ((long *)param_2[-1] != (long *)0x0) {
        (**(code **)(*(long *)param_2[-1] + 0x18))();
        param_2[-1] = 0;
      }
      param_2[-1] = lVar7;
      return true;
    }
    break;
  case 3:
    FUN_006da680(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_006da880(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_006da9f0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_006da680(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      plVar8 = param_1 + 3;
      plVar3 = param_1 + 2;
      do {
        plVar5 = plVar8;
        uVar1 = (**(code **)(*(long *)*plVar5 + 0x30))();
        uVar2 = (**(code **)(*(long *)*plVar3 + 0x30))();
        if (uVar1 < uVar2) {
          plVar8 = (long *)*plVar5;
          *plVar5 = 0;
          lVar7 = lVar9;
          while( true ) {
            lVar11 = lVar7;
            uVar6 = *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            *(undefined8 *)((long)param_1 + lVar11 + 0x10) = 0;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) = uVar6;
            if (lVar11 == -0x10) break;
            uVar1 = (**(code **)(*plVar8 + 0x30))(plVar8);
            uVar2 = (**(code **)(**(long **)((long)param_1 + lVar11 + 8) + 0x30))();
            if (uVar2 <= uVar1) {
              plVar3 = (long *)((long)param_1 + lVar11 + 0x10);
              plVar4 = (long *)*plVar3;
              goto joined_r0x006dad6c;
            }
            plVar3 = *(long **)((long)param_1 + lVar11 + 0x10);
            lVar7 = lVar11 + -8;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x18))();
              *(undefined8 *)((long)param_1 + lVar11 + 0x10) = 0;
            }
          }
          plVar4 = (long *)*param_1;
          plVar3 = param_1;
joined_r0x006dad6c:
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
            *plVar3 = 0;
          }
          iVar10 = iVar10 + 1;
          *plVar3 = (long)plVar8;
          if (iVar10 == 8) {
            return plVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        plVar8 = plVar5 + 1;
        plVar3 = plVar5;
      } while (plVar5 + 1 != param_2);
    }
  }
  return true;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2e880; name: FUN_00e2e880
 */


bool FUN_00e2e880(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = *param_3;
    plVar6 = (long *)*param_1;
    fVar11 = (float)(**(code **)(*(long *)param_2[-1] + 0xb0))((long *)param_2[-1],lVar8 + 0x70);
    fVar12 = (float)(**(code **)(*plVar6 + 0xb0))(plVar6,lVar8 + 0x70);
    if (fVar11 < fVar12) {
      uVar2 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar2;
    }
    break;
  case 3:
    FUN_00e2e390(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00e2e550(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00e2e6b0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00e2e390(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar1 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar1;
        plVar6 = (long *)*puVar5;
        lVar4 = *param_3;
        fVar11 = (float)(**(code **)(*(long *)*puVar3 + 0xb0))((long *)*puVar3,lVar4 + 0x70);
        fVar12 = (float)(**(code **)(*plVar6 + 0xb0))(plVar6,lVar4 + 0x70);
        if (fVar11 < fVar12) {
          plVar6 = (long *)*puVar3;
          lVar4 = lVar8;
          do {
            lVar10 = lVar4;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            if (lVar10 == -0x10) {
              *param_1 = plVar6;
              goto joined_r0x00e2ea24;
            }
            plVar7 = *(long **)((long)param_1 + lVar10 + 8);
            lVar4 = *param_3;
            fVar11 = (float)(**(code **)(*plVar6 + 0xb0))(plVar6,lVar4 + 0x70);
            fVar12 = (float)(**(code **)(*plVar7 + 0xb0))(plVar7,lVar4 + 0x70);
            lVar4 = lVar10 + -8;
          } while (fVar11 < fVar12);
          *(long **)((long)param_1 + lVar10 + 0x10) = plVar6;
joined_r0x00e2ea24:
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 8;
        puVar1 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}



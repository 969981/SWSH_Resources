/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f0ce0; name: FUN_006f0ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006f0ce0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if ((param_2[-1] != 0) &&
       (puVar6 = *(undefined8 **)(param_2[-1] + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar6)(puVar6);
      lVar2 = FUN_006f10c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar6 = puVar6 + -10;
          goto LAB_006f0d6c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_006f0d6c:
    puVar7 = *(undefined8 **)(*param_1 + 0x60);
    plVar1 = (long *)(**(code **)*puVar7)(puVar7);
    lVar2 = FUN_006f10c0();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    if (*(int *)(puVar6 + 0x28) < *(int *)(puVar7 + 0x1e)) {
      lVar9 = *param_1;
      *param_1 = 0;
      lVar2 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar2;
      if (param_2[-1] != 0) {
        (**(code **)(*(long *)(param_2[-1] + 0x48) + 0x18))();
        param_2[-1] = 0;
      }
      param_2[-1] = lVar9;
    }
    break;
  case 3:
    FUN_006f0370(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_006f06f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_006f0980(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_006f0370(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      iVar8 = 0;
      plVar1 = param_1 + 3;
      plVar4 = param_1 + 2;
LAB_006f0e14:
      plVar3 = plVar1;
      if ((*plVar3 != 0) && (puVar6 = *(undefined8 **)(*plVar3 + 0x60), puVar6 != (undefined8 *)0x0)
         ) {
        plVar1 = (long *)(**(code **)*puVar6)(puVar6);
        lVar2 = FUN_006f10c0();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            puVar6 = puVar6 + -10;
            goto LAB_006f0e58;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_006f0e58:
      puVar7 = *(undefined8 **)(*plVar4 + 0x60);
      plVar1 = (long *)(**(code **)*puVar7)(puVar7);
      lVar2 = FUN_006f10c0();
      for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
      }
      if (*(int *)(puVar6 + 0x28) < *(int *)(puVar7 + 0x1e)) {
        lVar9 = *plVar3;
        lVar2 = 0;
        *plVar3 = 0;
        plVar1 = plVar3;
        if (lVar9 != 0) {
          do {
            plVar5 = plVar4;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
              *plVar1 = 0;
            }
            lVar2 = *plVar5;
            *plVar5 = 0;
            *plVar1 = lVar2;
            if (plVar5 == param_1) goto LAB_006f0ff8;
            puVar6 = *(undefined8 **)(lVar9 + 0x60);
            if (puVar6 != (undefined8 *)0x0) {
              plVar1 = (long *)(**(code **)*puVar6)(puVar6);
              lVar2 = FUN_006f10c0();
              for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
                if (plVar1 == (long *)lVar2) {
                  puVar6 = puVar6 + -10;
                  goto LAB_006f0f24;
                }
              }
            }
            puVar6 = (undefined8 *)0x0;
LAB_006f0f24:
            puVar7 = *(undefined8 **)(plVar5[-1] + 0x60);
            plVar1 = (long *)(**(code **)*puVar7)(puVar7);
            lVar2 = FUN_006f10c0();
            for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
            }
            if (*(int *)(puVar7 + 0x1e) <= *(int *)(puVar6 + 0x28)) goto LAB_006f0ffc;
            lVar2 = *plVar5;
            plVar4 = plVar5 + -1;
            plVar1 = plVar5;
          } while( true );
        }
        while( true ) {
          plVar5 = plVar4;
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
            *plVar1 = 0;
          }
          lVar2 = *plVar5;
          *plVar5 = 0;
          *plVar1 = lVar2;
          if (plVar5 == param_1) goto LAB_006f0ff8;
          puVar6 = *(undefined8 **)(plVar5[-1] + 0x60);
          plVar1 = (long *)(**(code **)*puVar6)(puVar6);
          lVar2 = FUN_006f10c0();
          for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
          }
          if (*(int *)(puVar6 + 0x1e) <= _DAT_00000140) break;
          lVar2 = *plVar5;
          plVar4 = plVar5 + -1;
          plVar1 = plVar5;
        }
        goto LAB_006f0ffc;
      }
      goto LAB_006f1024;
    }
  }
  return true;
LAB_006f0ff8:
  plVar5 = param_1;
LAB_006f0ffc:
  if (*plVar5 != 0) {
    (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  iVar8 = iVar8 + 1;
  *plVar5 = lVar9;
  if (iVar8 == 8) {
    return plVar3 + 1 == param_2;
  }
LAB_006f1024:
  plVar1 = plVar3 + 1;
  plVar4 = plVar3;
  if (plVar3 + 1 == param_2) {
    return true;
  }
  goto LAB_006f0e14;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00706060; name: FUN_00706060
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00706060(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if ((param_2[-1] != 0) &&
       (puVar10 = *(undefined8 **)(param_2[-1] + 0x60), puVar10 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_02715888 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)PTR_DAT_02715890 = uVar6;
        __cxa_guard_release(PTR_DAT_02715888);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_02715890) {
          puVar10 = puVar10 + -10;
          goto LAB_00706104;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
LAB_00706104:
    puVar11 = *(undefined8 **)(*param_1 + 0x60);
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_02715888 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)PTR_DAT_02715890 = uVar6;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar5 != (long *)PTR_DAT_02715890; plVar5 = (long *)*plVar5) {
    }
    if (*(int *)(puVar10 + 0x35) < *(int *)(puVar11 + 0x2b)) {
      lVar12 = *param_1;
      *param_1 = 0;
      lVar7 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar7;
      if (param_2[-1] != 0) {
        (**(code **)(*(long *)(param_2[-1] + 0x48) + 0x18))();
        param_2[-1] = 0;
      }
      param_2[-1] = lVar12;
    }
    break;
  case 3:
    FUN_00705180(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_007056f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00705b10(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_00705180(param_1,param_1 + 1,param_1 + 2);
    puVar2 = PTR_DAT_02715890;
    puVar1 = PTR_DAT_02715888;
    if (param_1 + 3 != param_2) {
      iVar4 = 0;
      plVar5 = param_1 + 3;
      plVar9 = param_1 + 2;
LAB_00706208:
      plVar8 = plVar5;
      if ((*plVar8 != 0) &&
         (puVar10 = *(undefined8 **)(*plVar8 + 0x60), puVar10 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar10)(puVar10);
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            puVar10 = puVar10 + -10;
            goto LAB_0070624c;
          }
        }
      }
      puVar10 = (undefined8 *)0x0;
LAB_0070624c:
      puVar11 = *(undefined8 **)(*plVar9 + 0x60);
      plVar5 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
      }
      if (*(int *)(puVar10 + 0x35) < *(int *)(puVar11 + 0x2b)) {
        lVar12 = *plVar8;
        lVar7 = 0;
        *plVar8 = 0;
        plVar5 = plVar8;
        if (lVar12 != 0) {
          do {
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
              *plVar5 = 0;
            }
            lVar7 = *plVar9;
            *plVar9 = 0;
            *plVar5 = lVar7;
            if (plVar9 == param_1) goto LAB_007064a4;
            puVar10 = *(undefined8 **)(lVar12 + 0x60);
            if (puVar10 != (undefined8 *)0x0) {
              plVar5 = (long *)(**(code **)*puVar10)(puVar10);
              if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
                uVar6 = FUN_00702ff0();
                *(undefined8 *)puVar2 = uVar6;
                __cxa_guard_release(puVar1);
              }
              for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
                if (plVar5 == (long *)puVar2) {
                  puVar10 = puVar10 + -10;
                  goto LAB_00706344;
                }
              }
            }
            puVar10 = (undefined8 *)0x0;
LAB_00706344:
            puVar11 = *(undefined8 **)(plVar9[-1] + 0x60);
            plVar5 = (long *)(**(code **)*puVar11)(puVar11);
            if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
              uVar6 = FUN_00702ff0();
              *(undefined8 *)puVar2 = uVar6;
              __cxa_guard_release(puVar1);
            }
            for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
            }
            if (*(int *)(puVar11 + 0x2b) <= *(int *)(puVar10 + 0x35)) goto LAB_007064a8;
            lVar7 = *plVar9;
            plVar5 = plVar9;
            plVar9 = plVar9 + -1;
          } while( true );
        }
        while( true ) {
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            *plVar5 = 0;
          }
          lVar7 = *plVar9;
          *plVar9 = 0;
          *plVar5 = lVar7;
          if (plVar9 == param_1) goto LAB_007064a4;
          puVar10 = *(undefined8 **)(plVar9[-1] + 0x60);
          plVar5 = (long *)(**(code **)*puVar10)(puVar10);
          if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
          }
          if (*(int *)(puVar10 + 0x2b) <= _DAT_000001a8) break;
          lVar7 = *plVar9;
          plVar5 = plVar9;
          plVar9 = plVar9 + -1;
        }
        goto LAB_007064a8;
      }
      goto LAB_007064d4;
    }
  }
  return true;
LAB_007064a4:
  plVar9 = param_1;
LAB_007064a8:
  if (*plVar9 != 0) {
    (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
    *plVar9 = 0;
  }
  *plVar9 = lVar12;
  iVar4 = iVar4 + 1;
  if (iVar4 == 8) {
    return plVar8 + 1 == param_2;
  }
LAB_007064d4:
  plVar5 = plVar8 + 1;
  plVar9 = plVar8;
  if (plVar8 + 1 == param_2) {
    return true;
  }
  goto LAB_00706208;
}



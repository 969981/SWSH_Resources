/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00703f20; name: FUN_00703f20
 */


void FUN_00703f20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar10 = *(long **)(param_1 + 0xb8);
  if (((plVar11 != plVar10) && (*plVar11 != 0)) && (*(int *)(*plVar11 + 0x54) != 0)) {
    do {
      plVar11 = plVar11 + 1;
      plVar12 = plVar10;
      if (plVar10 == plVar11) goto LAB_00703fe0;
    } while ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x54) != 0));
  }
  plVar12 = plVar11;
  if (plVar11 != plVar10) {
    while( true ) {
      plVar11 = plVar11 + 1;
      if (plVar11 == plVar10) break;
      if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x54) != 0)) {
        if (*plVar12 != 0) {
          (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
          *plVar12 = 0;
        }
        lVar8 = *plVar11;
        *plVar11 = 0;
        *plVar12 = lVar8;
        plVar12 = plVar12 + 1;
      }
    }
  }
LAB_00703fe0:
  plVar11 = *(long **)(param_1 + 0xb8);
  if (plVar12 != plVar11) {
    if ((long *)((long)plVar12 + ((long)plVar11 - (long)plVar12)) != plVar11) {
      lVar8 = (long)plVar11 - (long)plVar12 >> 3;
      plVar10 = plVar12;
      do {
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          *plVar10 = 0;
        }
        lVar9 = plVar10[lVar8];
        plVar10[lVar8] = 0;
        plVar12 = plVar10 + 1;
        *plVar10 = lVar9;
        plVar10 = plVar12;
      } while (plVar11 + -lVar8 != plVar12);
      plVar11 = *(long **)(param_1 + 0xb8);
    }
    if (plVar11 != plVar12) {
      do {
        plVar10 = plVar11 + -1;
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          plVar11[-1] = 0;
        }
        plVar11 = plVar10;
      } while (plVar12 != plVar10);
    }
    *(long **)(param_1 + 0xb8) = plVar12;
  }
  FUN_007041a0(*(undefined8 *)(param_1 + 0xb0),plVar12);
  puVar3 = PTR_DAT_02715890;
  puVar2 = PTR_DAT_02715888;
  puVar1 = PTR_DAT_02715500;
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar10 = *(long **)(param_1 + 0xb8);
  do {
    if (plVar11 == plVar10) {
      return;
    }
    if (*plVar11 == 0) {
LAB_0070411c:
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = *(long **)(*plVar11 + 0x60);
      if (plVar12 != (long *)0x0) {
        plVar6 = (long *)(**(code **)*plVar12)(plVar12);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar5 = FUN_00702ff0();
          *(undefined8 *)puVar3 = uVar5;
          __cxa_guard_release(puVar2);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar3) {
            plVar12 = plVar12 + -10;
            goto LAB_00704120;
          }
        }
        goto LAB_0070411c;
      }
    }
LAB_00704120:
    uVar7 = (**(code **)(*plVar12 + 0x58))(plVar12);
    if ((((uVar7 & 1) != 0) && (lVar8 = plVar12[0xc], *(char *)(lVar8 + 0x108) != '\0')) &&
       (*(char *)(lVar8 + 0x109) != '\0')) {
      FUN_0199dee0(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar1 * 0x170,
                   *(long *)(lVar8 + 0x58) + (long)*(int *)puVar1 * 0x170);
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



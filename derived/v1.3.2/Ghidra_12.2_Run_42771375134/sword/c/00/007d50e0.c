/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d50e0; name: FUN_007d50e0
 */


/* WARNING: Removing unreachable block (ram,0x007d5230) */

void FUN_007d50e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long local_38;
  
  local_38 = param_2;
  FUN_007ce7b0(*(undefined8 *)(param_1 + 0xb0),&local_38);
  FUN_007da640(*(undefined8 *)(param_1 + 0xd0),&local_38);
  FUN_007d3b50(*(undefined8 *)(param_1 + 0xf0),&local_38);
  FUN_007d7c70(*(undefined8 *)(param_1 + 0x110),&local_38);
  lVar1 = local_38;
  plVar6 = *(long **)(param_1 + 0x70);
  plVar7 = *(long **)(param_1 + 0x78);
  if (plVar6 != plVar7) {
    lVar3 = *plVar6;
    while (lVar3 != local_38) {
      plVar6 = plVar6 + 1;
      if (plVar7 == plVar6) goto LAB_007d5240;
      lVar3 = *plVar6;
    }
  }
  if ((plVar6 != plVar7) && (plVar2 = plVar6 + 1, plVar2 != plVar7)) {
    uVar4 = (long)plVar7 + (-0x10 - (long)plVar6);
    if (((uint)uVar4 >> 3 & 1) == 0) {
      plVar5 = plVar6;
      if (*plVar2 != local_38) {
        plVar5 = plVar6 + 1;
        *plVar6 = *plVar2;
      }
      plVar2 = plVar6 + 2;
      plVar6 = plVar5;
    }
    if (7 < uVar4) {
      do {
        while (*plVar2 != local_38) {
          plVar5 = plVar6 + 1;
          *plVar6 = *plVar2;
          lVar3 = plVar2[1];
          plVar6 = plVar5;
          if (lVar3 == local_38) goto LAB_007d51dc;
LAB_007d5200:
          plVar6 = plVar5 + 1;
          *plVar5 = lVar3;
          plVar2 = plVar2 + 2;
          if (plVar2 == plVar7) goto LAB_007d5210;
        }
        lVar3 = plVar2[1];
        plVar5 = plVar6;
        if (lVar3 != local_38) goto LAB_007d5200;
LAB_007d51dc:
        plVar2 = plVar2 + 2;
      } while (plVar2 != plVar7);
    }
LAB_007d5210:
    plVar7 = *(long **)(param_1 + 0x78);
  }
  if (plVar7 != plVar6) {
    *(long **)(param_1 + 0x78) = plVar6;
  }
LAB_007d5240:
  plVar6 = *(long **)(param_1 + 0x40);
  plVar7 = *(long **)(param_1 + 0x48);
  if ((plVar6 != plVar7) && (*(long *)(*plVar6 + 0x68) != local_38)) {
    do {
      plVar6 = plVar6 + 1;
      if (plVar7 == plVar6) {
        return;
      }
    } while (*(long *)(*plVar6 + 0x68) != local_38);
  }
  if (plVar6 != plVar7) {
    plVar2 = plVar6 + 1;
    plVar5 = plVar6;
    if (plVar2 != plVar7) {
      do {
        lVar3 = *plVar2;
        plVar6 = plVar5;
        if (*(long *)(lVar3 + 0x68) != lVar1) {
          if (*plVar5 != 0) {
            (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
            *plVar5 = 0;
            lVar3 = *plVar2;
          }
          *plVar2 = 0;
          plVar6 = plVar5 + 1;
          *plVar5 = lVar3;
        }
        plVar2 = plVar2 + 1;
        plVar5 = plVar6;
      } while (plVar7 != plVar2);
      plVar7 = *(long **)(param_1 + 0x48);
    }
  }
  if (plVar7 != plVar6) {
    if ((long *)((long)plVar6 + ((long)plVar7 - (long)plVar6)) != plVar7) {
      lVar1 = (long)plVar7 - (long)plVar6 >> 3;
      plVar2 = plVar6;
      do {
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          *plVar2 = 0;
        }
        lVar3 = plVar2[lVar1];
        plVar2[lVar1] = 0;
        plVar6 = plVar2 + 1;
        *plVar2 = lVar3;
        plVar2 = plVar6;
      } while (plVar7 + -lVar1 != plVar6);
      plVar7 = *(long **)(param_1 + 0x48);
    }
    if (plVar7 != plVar6) {
      do {
        plVar2 = plVar7 + -1;
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          plVar7[-1] = 0;
        }
        plVar7 = plVar2;
      } while (plVar6 != plVar2);
    }
    *(long **)(param_1 + 0x48) = plVar6;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01336550; name: FUN_01336550
 */


void FUN_01336550(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x70);
  plVar4 = *(long **)(param_1 + 0x78);
  if (plVar4 != plVar2) {
    uVar3 = 0;
LAB_0133657c:
    do {
      if (plVar2[uVar3 * 4] != 0) {
        if (*(int *)(plVar2[uVar3 * 4] + 0x54) != 0) {
          plVar2 = *(long **)(param_1 + 0x70);
          plVar4 = *(long **)(param_1 + 0x78);
          uVar3 = uVar3 + 1;
          if ((ulong)((long)plVar4 - (long)plVar2 >> 5) <= uVar3) break;
          goto LAB_0133657c;
        }
        plVar2 = *(long **)(param_1 + 0x70);
        plVar4 = *(long **)(param_1 + 0x78);
      }
      lVar5 = plVar4[-4];
      plVar2 = plVar2 + uVar3 * 4;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar1 = *plVar2;
      *plVar2 = lVar5;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar5 = plVar4[-3];
      lVar1 = plVar4[-2];
      *(char *)(plVar2 + 3) = (char)plVar4[-1];
      plVar2[1] = lVar5;
      plVar2[2] = lVar1;
      plVar4 = (long *)(*(long *)(param_1 + 0x78) + -0x20);
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar2 = *(long **)(param_1 + 0x70);
      *(long **)(param_1 + 0x78) = plVar4;
    } while (uVar3 < (ulong)((long)plVar4 - (long)plVar2 >> 5));
  }
  plVar2 = *(long **)(param_1 + 0xa0);
  plVar4 = *(long **)(param_1 + 0xa8);
  if (plVar4 != plVar2) {
    uVar3 = 0;
    do {
      if (plVar2[uVar3 * 3] == 0) {
LAB_01336674:
        lVar5 = plVar4[-3];
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar1 = plVar2[uVar3 * 3];
        plVar2[uVar3 * 3] = lVar5;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar5 = plVar4[-1];
        plVar2[uVar3 * 3 + 1] = plVar4[-2];
        plVar2[uVar3 * 3 + 2] = lVar5;
        plVar4 = (long *)(*(long *)(param_1 + 0xa8) + -0x18);
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar2 = *(long **)(param_1 + 0xa0);
        *(long **)(param_1 + 0xa8) = plVar4;
      }
      else {
        if (*(int *)(plVar2[uVar3 * 3] + 0x54) == 0) {
          plVar2 = *(long **)(param_1 + 0xa0);
          plVar4 = *(long **)(param_1 + 0xa8);
          goto LAB_01336674;
        }
        plVar2 = *(long **)(param_1 + 0xa0);
        plVar4 = *(long **)(param_1 + 0xa8);
        uVar3 = uVar3 + 1;
      }
    } while (uVar3 < (ulong)(((long)plVar4 - (long)plVar2 >> 3) * -0x5555555555555555));
  }
  return;
}



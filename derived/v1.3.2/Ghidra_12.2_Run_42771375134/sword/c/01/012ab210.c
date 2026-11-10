/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab210; name: FUN_012ab210
 */


void FUN_012ab210(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  plVar9 = *(long **)(param_1 + 0x78);
  plVar10 = *(long **)(param_1 + 0x80);
  if (((plVar9 != plVar10) && (*plVar9 != 0)) && (uVar3 = FUN_012ad0b0(), (uVar3 & 1) != 0)) {
    do {
      plVar9 = plVar9 + 4;
      plVar8 = plVar10;
      if (plVar10 == plVar9) goto LAB_012ab2f4;
    } while ((*plVar9 != 0) && (uVar3 = FUN_012ad0b0(), (uVar3 & 1) != 0));
  }
  plVar8 = plVar9;
  plVar2 = plVar9;
  if (plVar9 != plVar10) {
    while( true ) {
      plVar1 = plVar2;
      plVar2 = plVar1 + 4;
      plVar8 = plVar9;
      if (plVar2 == plVar10) break;
      if (*plVar2 != 0) {
        uVar3 = FUN_012ad0b0();
        if ((uVar3 & 1) != 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          puVar7 = (undefined8 *)*plVar9;
          *plVar9 = lVar4;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7);
            (**(code **)(*(long *)plVar9[1] + 0x18))((long *)plVar9[1],puVar7,plVar9[2],plVar9[3]);
          }
          lVar4 = plVar1[5];
          lVar6 = plVar1[7];
          plVar9[2] = plVar1[6];
          plVar9[3] = lVar6;
          plVar9[1] = lVar4;
          plVar9 = plVar9 + 4;
        }
      }
    }
  }
LAB_012ab2f4:
  plVar9 = *(long **)(param_1 + 0x80);
  if (plVar8 != plVar9) {
    if ((long *)((long)plVar8 + ((long)plVar9 - (long)plVar8)) != plVar9) {
      lVar4 = (long)plVar9 - (long)plVar8 >> 5;
      do {
        lVar6 = plVar8[lVar4 * 4];
        plVar8[lVar4 * 4] = 0;
        puVar7 = (undefined8 *)*plVar8;
        *plVar8 = lVar6;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(*(long *)plVar8[1] + 0x18))((long *)plVar8[1],puVar7,plVar8[2],plVar8[3]);
        }
        lVar6 = plVar8[lVar4 * 4 + 1];
        lVar5 = plVar8[lVar4 * 4 + 3];
        plVar8[2] = plVar8[lVar4 * 4 + 2];
        plVar8[3] = lVar5;
        plVar8[1] = lVar6;
        plVar8 = plVar8 + 4;
      } while (plVar9 + lVar4 * -4 != plVar8);
      plVar9 = *(long **)(param_1 + 0x80);
    }
    if (plVar9 != plVar8) {
      do {
        plVar10 = plVar9 + -4;
        puVar7 = (undefined8 *)*plVar10;
        *plVar10 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(*(long *)plVar9[-3] + 0x18))((long *)plVar9[-3],puVar7,plVar9[-2],plVar9[-1])
          ;
        }
        plVar9 = plVar10;
      } while (plVar8 != plVar10);
    }
    *(long **)(param_1 + 0x80) = plVar8;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  return;
}



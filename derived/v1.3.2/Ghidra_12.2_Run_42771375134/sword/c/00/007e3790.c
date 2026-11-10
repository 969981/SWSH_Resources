/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3790; name: FUN_007e3790
 */


long FUN_007e3790(long *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    FUN_00801420(lVar10);
  }
  lVar11 = param_1[4];
  if (*(long *)(lVar11 + 0x58) != 0) {
    puVar1 = *(void **)(lVar11 + 0x50);
    while (puVar1 != (void *)0x0) {
      pvVar12 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar12;
    }
    uVar9 = *(ulong *)(lVar11 + 0x48);
    *(undefined8 *)(lVar11 + 0x50) = 0;
    if (uVar9 != 0) {
      uVar3 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar4 = lVar7 * 8;
          lVar7 = lVar7 + 4;
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + lVar4) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + lVar4 + 0x18) = 0;
        } while (uVar9 - uVar3 != lVar7);
      }
      if (uVar3 != 0) {
        lVar7 = lVar7 << 3;
        lVar4 = -uVar3;
        do {
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + lVar7) = 0;
          lVar7 = lVar7 + 8;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
    *(undefined8 *)(lVar11 + 0x58) = 0;
    lVar11 = param_1[4];
  }
  if (*(long *)(lVar11 + 0x30) != 0) {
    puVar1 = *(void **)(lVar11 + 0x28);
    while (puVar1 != (void *)0x0) {
      pvVar12 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar12;
    }
    uVar9 = *(ulong *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x28) = 0;
    if (uVar9 != 0) {
      uVar3 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar4 = lVar7 * 8;
          lVar7 = lVar7 + 4;
          *(undefined8 *)(*(long *)(lVar11 + 0x18) + lVar4) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x18) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x18) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar11 + 0x18) + lVar4 + 0x18) = 0;
        } while (uVar9 - uVar3 != lVar7);
      }
      if (uVar3 != 0) {
        lVar7 = lVar7 << 3;
        lVar4 = -uVar3;
        do {
          *(undefined8 *)(*(long *)(lVar11 + 0x18) + lVar7) = 0;
          lVar7 = lVar7 + 8;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
    *(undefined8 *)(lVar11 + 0x30) = 0;
    lVar11 = param_1[4];
  }
  plVar8 = *(long **)(lVar11 + 0x148);
  if (plVar8 != (long *)0x0) {
    plVar5 = (long *)(lVar11 + 0x148);
    do {
      while (param_2 <= (ulong)plVar8[4]) {
        if ((param_2 < (ulong)plVar8[4]) || (param_3 <= (int)plVar8[5])) {
          plVar6 = (long *)*plVar8;
          plVar5 = plVar8;
        }
        else {
          plVar6 = (long *)plVar8[1];
        }
        plVar8 = plVar6;
        if (plVar8 == (long *)0x0) goto LAB_007e39b0;
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar8 != (long *)0x0);
LAB_007e39b0:
    if ((((plVar5 != (long *)(lVar11 + 0x148)) && ((ulong)plVar5[4] <= param_2)) &&
        (((ulong)plVar5[4] < param_2 || ((int)plVar5[5] <= param_3)))) &&
       (lVar11 = plVar5[6], lVar11 != 0)) goto LAB_007e3a98;
  }
  if ((param_1[3] == 0) || (lVar11 = FUN_007e3790(param_1[3],param_2,param_3), lVar11 == 0)) {
    uVar9 = FUN_007e3ac0(param_1,param_2,param_3);
    if ((uVar9 & 1) != 0) {
      plVar8 = *(long **)(param_1[4] + 0x148);
      if (plVar8 != (long *)0x0) {
        plVar5 = (long *)(param_1[4] + 0x148);
        plVar6 = plVar5;
        do {
          while (param_2 <= (ulong)plVar8[4]) {
            if ((param_2 < (ulong)plVar8[4]) || (param_3 <= (int)plVar8[5])) {
              plVar2 = (long *)*plVar8;
              plVar6 = plVar8;
            }
            else {
              plVar2 = (long *)plVar8[1];
            }
            plVar8 = plVar2;
            if (plVar8 == (long *)0x0) goto LAB_007e3a68;
          }
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != (long *)0x0);
LAB_007e3a68:
        if ((((plVar6 != plVar5) && ((ulong)plVar6[4] <= param_2)) &&
            (((ulong)plVar6[4] < param_2 || ((int)plVar6[5] <= param_3)))) &&
           (lVar11 = plVar6[6], lVar11 != 0)) goto LAB_007e3a98;
      }
    }
    lVar11 = 0;
  }
LAB_007e3a98:
  if (lVar10 != 0) {
    FUN_008014c0(lVar10);
  }
  return lVar11;
}



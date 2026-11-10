/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00487e20; name: FUN_00487e20
 */


void FUN_00487e20(long param_1,long param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  plVar3 = (long *)*puVar4;
  puVar2 = (uint *)(puVar4 + 1);
  uVar5 = *puVar2;
  plVar9 = plVar3;
  if (uVar5 != 0) {
    lVar7 = (ulong)uVar5 << 4;
    while( true ) {
      if (*plVar9 == param_2) break;
      lVar7 = lVar7 + -0x10;
      plVar9 = plVar9 + 2;
      if (lVar7 == 0) {
        return;
      }
    }
  }
  plVar8 = plVar3 + (ulong)uVar5 * 2;
  if (plVar9 == plVar8) {
    return;
  }
  puVar10 = (undefined8 *)plVar9[1];
  if (puVar10 != (undefined8 *)0x0) {
    if ((*(short *)(puVar10 + 0xe) != 0) || (*(short *)((long)puVar10 + 0x72) != 0))
    goto LAB_00487ff0;
    if (puVar10[9] == 0) {
LAB_00487ed0:
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar10)(puVar10);
      FUN_00404870(uVar1,puVar10);
    }
    else {
      *(undefined4 *)(puVar10 + 10) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      puVar10[9] = 0;
      *(undefined4 *)((long)puVar10 + 0x54) = 0;
      puVar10 = (undefined8 *)plVar9[1];
      if (puVar10 != (undefined8 *)0x0) goto LAB_00487ed0;
    }
    plVar9[1] = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x70);
    plVar3 = (long *)*puVar4;
    puVar2 = (uint *)(puVar4 + 1);
    uVar5 = *puVar2;
    plVar8 = plVar3 + (ulong)uVar5 * 2;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar3 == param_2) goto LAB_00487f30;
      plVar3 = plVar3 + 2;
    } while (plVar8 != plVar3);
    plVar3 = plVar8;
  }
LAB_00487f30:
  if (plVar8 != plVar3) {
    if (plVar3 < plVar8 + -2) {
      uVar6 = (long)plVar8 + (~(ulong)plVar3 - 0x10);
      uVar5 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
      if ((uVar5 & 7) != 0) {
        lVar7 = -((ulong)uVar5 & 7);
        plVar9 = plVar3;
        do {
          plVar3 = plVar9 + 2;
          *plVar9 = *plVar3;
          plVar9[1] = plVar9[3];
          lVar7 = lVar7 + 1;
          plVar9 = plVar3;
        } while (lVar7 != 0);
      }
      if (0x6f < uVar6) {
        do {
          *plVar3 = plVar3[2];
          plVar3[1] = plVar3[3];
          plVar3[2] = plVar3[4];
          plVar3[3] = plVar3[5];
          plVar3[4] = plVar3[6];
          plVar3[5] = plVar3[7];
          plVar3[6] = plVar3[8];
          plVar3[7] = plVar3[9];
          plVar3[8] = plVar3[10];
          plVar3[9] = plVar3[0xb];
          plVar3[10] = plVar3[0xc];
          plVar3[0xb] = plVar3[0xd];
          plVar3[0xc] = plVar3[0xe];
          plVar3[0xd] = plVar3[0xf];
          plVar9 = plVar3 + 0x10;
          plVar3[0xe] = *plVar9;
          plVar3[0xf] = plVar3[0x11];
          plVar3 = plVar9;
        } while (plVar9 < plVar8 + -2);
      }
      uVar5 = *puVar2;
    }
    *puVar2 = uVar5 - 1;
    puVar4 = *(undefined8 **)(param_1 + 0x70);
  }
LAB_00487ff0:
  if ((((puVar4 == (undefined8 *)0x0) || (0 < *(short *)(puVar4 + 0x12))) ||
      (0 < *(short *)((long)puVar4 + 0x94))) ||
     (((*(short *)(puVar4 + 0x11) != 0 || (*(short *)((long)puVar4 + 0x8a) != 0)) ||
      ((puVar4[2] != 0 || (*(int *)(puVar4 + 1) != 0)))))) {
    return;
  }
  FUN_00481ff0(param_1);
  return;
}



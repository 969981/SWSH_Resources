/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468de0; name: FUN_00468de0
 */


int * FUN_00468de0(long *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  puVar3 = PTR_DAT_02712a90;
  piVar6 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar7 = piVar6;
  if (uVar2 == 0) {
LAB_00468e6c:
    if (piVar7 != piVar6 + (ulong)uVar2 * 10) {
      return piVar7 + 6;
    }
  }
  else {
    lVar8 = (ulong)uVar2 * 0x28;
    do {
      if (((*piVar7 == *param_2) && (piVar7[4] == param_2[4])) &&
         (*(long *)(piVar7 + 2) == *(long *)(param_2 + 2))) goto LAB_00468e6c;
      lVar8 = lVar8 + -0x28;
      piVar7 = piVar7 + 10;
    } while (lVar8 != 0);
  }
  uVar9 = *(uint *)((long)param_1 + 0xc);
  if (uVar9 <= uVar2) {
    uVar9 = uVar9 + 1;
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 * 0x28);
    if (lVar8 == 0) {
      return (int *)0x0;
    }
    lVar4 = *param_1;
    if ((lVar4 != 0) && (lVar4 != lVar8)) {
      uVar10 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar4 = 0;
        do {
          if ((void *)(lVar8 + lVar4) != (void *)0x0) {
            puVar1 = (undefined4 *)(lVar8 + lVar4);
            *puVar1 = 0;
            *(undefined8 *)(puVar1 + 2) = 0;
            puVar1[4] = 0;
          }
          memcpy((void *)(lVar8 + lVar4),(void *)(*param_1 + lVar4),0x28);
          uVar10 = uVar10 - 1;
          lVar4 = lVar4 + 0x28;
        } while (uVar10 != 0);
        lVar4 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar3,lVar4);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar9;
  }
  if (uVar2 < uVar9) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined8 *)(*param_1 + (ulong)uVar2 * 0x28);
    if (puVar5 != (undefined8 *)0x0) {
      lVar8 = *param_1 + (ulong)uVar2 * 0x28;
      *(undefined4 *)puVar5 = 0;
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined4 *)(lVar8 + 0x10) = 0;
      *(int *)(puVar5 + 2) = param_2[4];
      puVar5[1] = *(undefined8 *)(param_2 + 2);
      *puVar5 = *(undefined8 *)param_2;
      return (int *)(lVar8 + 0x18);
    }
  }
  return (int *)0x0;
}



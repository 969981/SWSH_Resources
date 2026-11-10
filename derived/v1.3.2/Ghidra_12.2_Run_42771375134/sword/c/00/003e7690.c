/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7690; name: FUN_003e7690
 */


void FUN_003e7690(long param_1,long *param_2,uint param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  
  if (param_3 != 0) {
    uVar12 = (ulong)param_3;
    if (param_6 == 0) {
      do {
        piVar5 = *(int **)(param_1 + 0x1138);
        lVar1 = *param_2 + param_4;
        lVar7 = *(long *)(piVar5 + 4);
        iVar2 = piVar5[1];
        uVar3 = (ulong)(uint)piVar5[2];
        puVar9 = (undefined8 *)(lVar7 + uVar3 * 0x18 + 8);
        puVar11 = (undefined8 *)*puVar9;
        if (puVar11 == (undefined8 *)0x0) {
          piVar10 = (int *)(lVar7 + uVar3 * 0x18 + 0x10);
          iVar4 = *piVar10;
          if (iVar4 != *piVar5) {
            *piVar10 = iVar4 + 1;
            puVar11 = (undefined8 *)(*(long *)(lVar7 + uVar3 * 0x18) + (ulong)(uint)(iVar4 * iVar2))
            ;
            if (puVar11 != (undefined8 *)0x0) goto LAB_003e7854;
          }
          puVar11 = (undefined8 *)FUN_003f1aa0();
          if (puVar11 != (undefined8 *)0x0) goto LAB_003e7854;
        }
        else {
          *puVar9 = *puVar11;
LAB_003e7854:
          FUN_003fc5c0(puVar11,param_5,lVar1);
        }
        lVar7 = param_1 + (long)*(int *)(lVar1 + 0x48) * 4;
        *(int *)(lVar7 + 0x1298) = *(int *)(lVar7 + 0x1298) + 1;
        (**(code **)(**(long **)(param_1 + 0x760) + 0x20))
                  (*(long **)(param_1 + 0x760),puVar11 + 4,*(undefined4 *)(puVar11 + 9));
        plVar6 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
        (**(code **)(*plVar6 + 0x58))(plVar6,lVar1 + 0x20);
        param_2 = param_2 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    else {
      puVar13 = (undefined4 *)(param_6 + 0xc);
      do {
        piVar5 = *(int **)(param_1 + 0x1138);
        lVar1 = *param_2 + param_4;
        lVar7 = *(long *)(piVar5 + 4);
        iVar2 = piVar5[1];
        uVar3 = (ulong)(uint)piVar5[2];
        puVar9 = (undefined8 *)(lVar7 + uVar3 * 0x18 + 8);
        puVar11 = (undefined8 *)*puVar9;
        if (puVar11 == (undefined8 *)0x0) {
          piVar10 = (int *)(lVar7 + uVar3 * 0x18 + 0x10);
          iVar4 = *piVar10;
          if (iVar4 != *piVar5) {
            *piVar10 = iVar4 + 1;
            puVar11 = (undefined8 *)(*(long *)(lVar7 + uVar3 * 0x18) + (ulong)(uint)(iVar4 * iVar2))
            ;
            if (puVar11 != (undefined8 *)0x0) goto LAB_003e7738;
          }
          puVar11 = (undefined8 *)FUN_003f1aa0();
          if (puVar11 != (undefined8 *)0x0) goto LAB_003e7738;
        }
        else {
          *puVar9 = *puVar11;
LAB_003e7738:
          FUN_003fc5c0(puVar11,param_5,lVar1);
        }
        lVar7 = param_1 + (long)*(int *)(lVar1 + 0x48) * 4;
        *(int *)(lVar7 + 0x1298) = *(int *)(lVar7 + 0x1298) + 1;
        (**(code **)(**(long **)(param_1 + 0x760) + 0x20))
                  (*(long **)(param_1 + 0x760),puVar11 + 4,*(undefined4 *)(puVar11 + 9));
        puVar8 = (undefined4 *)
                 (*(long *)(*(long *)(param_1 + 0x808) + 8) +
                 ((ulong)*(uint *)(puVar11 + 3) & 0x1fffffff) * 0x18);
        puVar13[-3] = *puVar8;
        puVar13[-2] = puVar8[1];
        puVar13[-1] = puVar8[2];
        *puVar13 = puVar8[3];
        puVar13[1] = puVar8[4];
        puVar13[2] = puVar8[5];
        plVar6 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
        (**(code **)(*plVar6 + 0x58))(plVar6,lVar1 + 0x20);
        param_2 = param_2 + 1;
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 6;
      } while (uVar12 != 0);
    }
  }
  return;
}



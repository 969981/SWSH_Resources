/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff7b0; name: FUN_004ff7b0
 */


void FUN_004ff7b0(long param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  while( true ) {
    piVar4 = (int *)(param_1 + (ulong)param_2 * 0x18);
    uVar6 = (ulong)param_2;
    piVar8 = piVar4 + 4;
    piVar9 = *(int **)piVar8;
    if (piVar9 == (int *)0x0 || param_3 < piVar9) {
      piVar5 = (int *)0x0;
      iVar2 = *(int *)(param_1 + 0x31c);
      piVar11 = piVar9;
    }
    else {
      piVar11 = piVar9;
      do {
        piVar5 = piVar11;
        piVar11 = *(int **)piVar5;
      } while (piVar11 != (int *)0x0 && piVar11 <= param_3);
      iVar2 = *(int *)(param_1 + 0x31c);
    }
    if (iVar2 - 1U <= param_2) break;
    iVar2 = *(int *)(param_1 + 0x318);
    uVar1 = param_2 + 1;
    iVar3 = 1 << (ulong)(iVar2 + uVar1 & 0x1f);
    if (((piVar5 == (int *)0x0) || ((iVar3 - 1U & (int)piVar5 - *(int *)(param_1 + 0x300)) != 0)) ||
       ((long)param_3 - (long)piVar5 != (ulong)(uint)(1 << (ulong)(iVar2 + param_2 & 0x1f)))) {
      if (piVar11 == (int *)0x0) {
        piVar9 = (int *)0x0;
        goto LAB_004ff92c;
      }
      if (((iVar3 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) != 0) ||
         ((long)piVar11 - (long)param_3 != (ulong)(uint)(1 << (ulong)(iVar2 + param_2 & 0x1f))))
      break;
      if (piVar11 != piVar9) {
        piVar8 = piVar5;
      }
      *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
      puVar7 = (undefined8 *)(param_1 + uVar6 * 0x18 + 8);
      if ((int *)*puVar7 == piVar11) {
        *puVar7 = piVar5;
      }
      *piVar4 = *piVar4 + -1;
      param_2 = uVar1;
    }
    else {
      piVar10 = (int *)0x0;
      piVar11 = piVar9;
      if ((piVar9 != (int *)0x0) && (piVar9 != piVar5)) {
        do {
          piVar10 = piVar11;
          piVar11 = *(int **)piVar10;
        } while (piVar11 != (int *)0x0 && piVar11 != piVar5);
      }
      param_3 = piVar5;
      param_2 = uVar1;
      if (piVar11 != (int *)0x0) {
        if (piVar11 != piVar9) {
          piVar8 = piVar10;
        }
        *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
        puVar7 = (undefined8 *)(param_1 + uVar6 * 0x18 + 8);
        if ((int *)*puVar7 == piVar11) {
          *puVar7 = piVar10;
        }
        *piVar4 = *piVar4 + -1;
      }
    }
  }
  piVar9 = piVar11;
LAB_004ff92c:
  if (piVar5 != (int *)0x0) {
    piVar8 = piVar5;
  }
  *(int **)param_3 = piVar11;
  *(int **)piVar8 = param_3;
  if (piVar9 == (int *)0x0) {
    *(int **)(param_1 + uVar6 * 0x18 + 8) = param_3;
    *piVar4 = *piVar4 + 1;
    return;
  }
  *piVar4 = *piVar4 + 1;
  return;
}



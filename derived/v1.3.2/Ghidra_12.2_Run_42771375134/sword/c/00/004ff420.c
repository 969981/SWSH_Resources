/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff420; name: FUN_004ff420
 */


void FUN_004ff420(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  
  uVar1 = *(uint *)(param_1 + 0x318);
  iVar6 = -1;
  do {
    iVar4 = iVar6;
    uVar5 = uVar1;
    uVar1 = uVar5 + 1;
    iVar6 = iVar4 + 1;
  } while (((1 << (ulong)(uVar1 & 0x1f)) - 1U & param_3) == 0);
  uVar2 = 1 << (ulong)(uVar5 & 0x1f);
  uVar5 = iVar4 + 2;
  uVar14 = (ulong)uVar5;
  if (((uVar2 & param_3) == 0) || ((uVar2 - 1 & param_3) == 0)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)
             (*(long *)(param_1 + 0x300) +
             (ulong)(uVar2 + param_2 + (-1 << (ulong)(uVar1 & 0x1f) & param_3)));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
    }
  }
  piVar3 = (int *)FUN_004ff640(param_1,iVar6,puVar8,param_2,param_3);
  uVar1 = *(int *)(param_1 + 0x31c) - 1;
  uVar7 = (ulong)uVar1;
  if (uVar5 < uVar1) {
    uVar14 = (ulong)uVar5;
    do {
      uVar1 = 1 << (ulong)(*(int *)(param_1 + 0x318) + (int)uVar14 & 0x1f);
      if (param_3 <= uVar1) break;
      if ((uVar1 & param_3) == 0) {
        if ((piVar3 != (int *)0x0) && ((*(int *)(param_1 + 0x310) - param_3 & uVar1) != 0)) {
          piVar9 = (int *)(param_1 + uVar14 * 0x18);
          piVar10 = (int *)0x0;
          piVar11 = piVar9 + 4;
          piVar12 = *(int **)piVar11;
          piVar13 = piVar12;
          if (piVar12 == (int *)0x0) {
            if (uVar14 < uVar7) goto LAB_004ff538;
LAB_004ff584:
            if (piVar10 != (int *)0x0) {
              piVar11 = piVar10;
            }
            *(int **)piVar3 = piVar13;
            *(int **)piVar11 = piVar3;
            if (piVar13 == (int *)0x0) {
              *(int **)(param_1 + uVar14 * 0x18 + 8) = piVar3;
            }
            piVar3 = (int *)0x0;
            iVar6 = *piVar9 + 1;
          }
          else {
            if (piVar12 <= piVar3) {
              do {
                piVar10 = piVar13;
                piVar13 = *(int **)piVar10;
              } while (piVar13 != (int *)0x0 && piVar13 <= piVar3);
            }
            if (uVar7 <= uVar14) goto LAB_004ff584;
LAB_004ff538:
            if ((piVar13 == (int *)0x0) || ((long)piVar13 - (long)piVar3 != (ulong)uVar1))
            goto LAB_004ff584;
            if (piVar13 != piVar12) {
              piVar11 = piVar10;
            }
            *(undefined8 *)piVar11 = *(undefined8 *)piVar13;
            puVar8 = (undefined8 *)(param_1 + uVar14 * 0x18 + 8);
            if ((int *)*puVar8 == piVar13) {
              *puVar8 = piVar10;
            }
            iVar6 = *piVar9 + -1;
          }
          *piVar9 = iVar6;
        }
      }
      else {
        piVar3 = (int *)FUN_004ff640(param_1,uVar14 & 0xffffffff,piVar3,param_2,param_3);
      }
      uVar14 = uVar14 + 1;
      uVar7 = (ulong)(*(int *)(param_1 + 0x31c) - 1);
    } while (uVar14 < uVar7);
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_004ff7b0(param_1,uVar14 & 0xffffffff,piVar3);
  return;
}



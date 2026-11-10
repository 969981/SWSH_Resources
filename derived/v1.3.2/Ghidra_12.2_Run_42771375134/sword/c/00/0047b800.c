/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b800; name: FUN_0047b800
 */


int * FUN_0047b800(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  
  piVar7 = *(int **)(param_1 + 0x88);
  uVar6 = *(uint *)(param_1 + 0x90);
  piVar10 = piVar7;
  if (uVar6 == 0) {
LAB_0047b85c:
    if (piVar10 != piVar7 + (ulong)uVar6 * 6) {
      piVar10 = piVar10 + 2;
      goto LAB_0047b8c8;
    }
  }
  else {
    lVar8 = (ulong)uVar6 * 0x18;
    do {
      if (*piVar10 == param_2) goto LAB_0047b85c;
      lVar8 = lVar8 + -0x18;
      piVar10 = piVar10 + 6;
    } while (lVar8 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x94);
  if (uVar5 <= uVar6) {
    uVar4 = FUN_0047e000((undefined8 *)(param_1 + 0x88),1);
    if ((uVar4 & 1) == 0) {
      return (int *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x94);
  }
  if (uVar5 <= uVar6) {
    return (int *)0x0;
  }
  uVar6 = *(uint *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = uVar6 + 1;
  piVar7 = (int *)(*(long *)(param_1 + 0x88) + (ulong)uVar6 * 0x18);
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
  lVar8 = *(long *)(param_1 + 0x88) + (ulong)uVar6 * 0x18;
  piVar10 = (int *)(lVar8 + 8);
  piVar10[0] = 0;
  piVar10[1] = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *piVar7 = param_2;
LAB_0047b8c8:
  iVar3 = FUN_004a87b0(*(undefined4 *)(param_1 + 0x4c),param_2,piVar10);
  puVar2 = PTR_DAT_02712a90;
  if (iVar3 == 1) {
    return piVar10;
  }
  piVar10 = *(int **)(param_1 + 0x88);
  uVar6 = *(uint *)(param_1 + 0x90);
  piVar7 = piVar10 + (ulong)uVar6 * 6;
  if (uVar6 != 0) {
    lVar8 = (ulong)uVar6 * 0x18;
    do {
      if (*piVar10 == param_2) goto LAB_0047b920;
      lVar8 = lVar8 + -0x18;
      piVar10 = piVar10 + 6;
    } while (lVar8 != 0);
    piVar10 = piVar7;
  }
LAB_0047b920:
  if (piVar7 == piVar10) {
    return (int *)0x0;
  }
  if (piVar10 < piVar7 + -6) {
    do {
      piVar11 = piVar10 + 6;
      *piVar10 = *piVar11;
      if (*(long *)(piVar10 + 2) != 0) {
        piVar10[4] = 0;
        FUN_004047f0(*(undefined4 *)puVar2);
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[5] = 0;
      }
      iVar3 = piVar10[10];
      iVar1 = piVar10[0xb];
      uVar9 = *(undefined8 *)(piVar10 + 8);
      piVar10[8] = 0;
      piVar10[9] = 0;
      piVar10[10] = 0;
      piVar10[0xb] = 0;
      *(undefined8 *)(piVar10 + 2) = uVar9;
      piVar10[4] = iVar3;
      piVar10[5] = iVar1;
      piVar10 = piVar11;
    } while (piVar11 < piVar7 + -6);
    uVar6 = *(uint *)(param_1 + 0x90);
  }
  *(uint *)(param_1 + 0x90) = uVar6 - 1;
  return (int *)0x0;
}



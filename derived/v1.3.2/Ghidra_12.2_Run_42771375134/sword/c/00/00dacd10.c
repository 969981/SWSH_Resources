/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dacd10; name: FUN_00dacd10
 */


undefined4 FUN_00dacd10(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_2 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar9 = *param_2;
    uVar13 = param_2[1] - lVar9;
    uVar11 = (long)uVar13 >> 2;
    lVar1 = 0;
    if (lVar9 != param_2[1]) {
      lVar1 = lVar9;
    }
    FUN_00daf4a0(param_1,uVar11,4);
    uVar12 = uVar13;
    while (uVar12 != 0) {
      uVar11 = uVar11 - 1;
      iVar4 = *(int *)(lVar1 + uVar11 * 4);
      if (*(ulong *)(param_1 + 0x48) < 4) {
        *(undefined8 *)(param_1 + 0x48) = 4;
      }
      lVar9 = *(long *)(param_1 + 0x30);
      uVar5 = -((*(int *)(param_1 + 0x20) - (int)lVar9) + *(int *)(param_1 + 0x28));
      uVar12 = (ulong)uVar5 & 3;
      if ((ulong)(lVar9 - *(long *)(param_1 + 0x38)) < uVar12) {
        FUN_00dae400(param_1,uVar12);
        puVar7 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar12);
        *(undefined1 **)(param_1 + 0x30) = puVar7;
        *puVar7 = 0;
joined_r0x00dacdd8:
        if (uVar12 != 1) {
          uVar5 = (int)uVar12 - 1;
          uVar8 = (ulong)uVar5 & 7;
          if (uVar12 - 2 < 7) {
            lVar10 = 1;
          }
          else {
            lVar9 = 8;
            do {
              lVar10 = lVar9;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -7) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -6) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -5) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -4) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -3) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -2) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10 + -1) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10) = 0;
              lVar9 = lVar10 + 8;
            } while (((uVar8 + 1) - uVar12) + lVar10 + 8 != 8);
            lVar10 = lVar10 + 1;
          }
          if ((uVar5 & 7) != 0) {
            lVar9 = -uVar8;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar10) = 0;
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0);
          }
        }
      }
      else {
        *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar9 - uVar12);
        if ((uVar5 & 3) != 0) {
          *(undefined1 *)(lVar9 - uVar12) = 0;
          goto joined_r0x00dacdd8;
        }
      }
      FUN_00daec30(param_1,(4 - iVar4) +
                           (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                           *(int *)(param_1 + 0x28));
      uVar12 = uVar11;
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
    uVar6 = FUN_00daec30(param_1,uVar13 >> 2);
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_00daf2e0(param_1,4,uVar6);
  uVar6 = FUN_00dae710(param_1,(iVar4 - iVar2) + iVar3);
  return uVar6;
}



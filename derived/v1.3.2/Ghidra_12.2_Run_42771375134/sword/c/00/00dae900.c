/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dae900; name: FUN_00dae900
 */


int FUN_00dae900(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = -((*(int *)(param_1 + 0x20) - (int)lVar4) + *(int *)(param_1 + 0x28));
  uVar6 = (ulong)uVar1 & 3;
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < uVar6) {
    FUN_00dae400(param_1,uVar6);
    puVar2 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar6);
    *(undefined1 **)(param_1 + 0x30) = puVar2;
    *puVar2 = 0;
  }
  else {
    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar4 - uVar6);
    if ((uVar1 & 3) == 0) goto LAB_00daea18;
    *(undefined1 *)(lVar4 - uVar6) = 0;
  }
  if (uVar6 != 1) {
    uVar1 = (int)uVar6 - 1;
    uVar3 = (ulong)uVar1 & 3;
    if (uVar6 - 2 < 3) {
      lVar5 = 1;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5 + 2) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5 + 3) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5 + 4) = 0;
        lVar4 = lVar5 + 4;
      } while ((uVar6 - 1) - uVar3 != lVar5 + 4);
      lVar5 = lVar5 + 5;
    }
    if ((uVar1 & 3) != 0) {
      lVar4 = -uVar3;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5) = 0;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_00daea18:
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_00dae400(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar4 + -4;
  *(undefined4 *)(lVar4 + -4) = param_2;
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}



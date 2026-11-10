/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dae540; name: FUN_00dae540
 */


void FUN_00dae540(long param_1,ushort param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  uVar2 = -((*(int *)(param_1 + 0x20) - (int)lVar5) + *(int *)(param_1 + 0x28));
  uVar9 = (ulong)uVar2 & 3;
  if ((ulong)(lVar5 - *(long *)(param_1 + 0x38)) < uVar9) {
    FUN_00dae400(param_1,uVar9);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    *puVar3 = 0;
  }
  else {
    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar5 - uVar9);
    if ((uVar2 & 3) == 0) goto LAB_00dae660;
    *(undefined1 *)(lVar5 - uVar9) = 0;
  }
  if (uVar9 != 1) {
    uVar2 = (int)uVar9 - 1;
    uVar4 = (ulong)uVar2 & 3;
    if (uVar9 - 2 < 3) {
      lVar7 = 1;
    }
    else {
      lVar5 = 0;
      do {
        lVar7 = lVar5;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7 + 2) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7 + 3) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7 + 4) = 0;
        lVar5 = lVar7 + 4;
      } while ((uVar9 - 1) - uVar4 != lVar7 + 4);
      lVar7 = lVar7 + 5;
    }
    if ((uVar2 & 3) != 0) {
      lVar5 = -uVar4;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7) = 0;
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_00dae660:
  lVar5 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar5 - *(long *)(param_1 + 0x38)) < 0xc) {
    FUN_00dae400(param_1,0xc);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar5 + -0xc;
  uVar8 = *param_3;
  *(undefined4 *)(lVar5 + -4) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar5 + -0xc) = uVar8;
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  puVar6 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar7 - (long)puVar6) < 8) {
    FUN_00dae400(param_1,8);
    puVar6 = *(ulong **)(param_1 + 0x38);
  }
  *puVar6 = (lVar5 - lVar7) + lVar1 & 0xffffffffU | (ulong)(uint)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if ((uint)param_2 <= (uint)*(ushort *)(param_1 + 0x44)) {
    param_2 = *(ushort *)(param_1 + 0x44);
  }
  *(ushort *)(param_1 + 0x44) = param_2;
  return;
}



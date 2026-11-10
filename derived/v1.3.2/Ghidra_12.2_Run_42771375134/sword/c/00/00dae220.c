/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dae220; name: FUN_00dae220
 */


void FUN_00dae220(float param_1,float param_2,long param_3,ushort param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  if ((param_1 == param_2) && (*(char *)(param_3 + 0x50) == '\0')) {
    return;
  }
  if (*(ulong *)(param_3 + 0x48) < 4) {
    *(undefined8 *)(param_3 + 0x48) = 4;
  }
  lVar5 = *(long *)(param_3 + 0x30);
  uVar2 = -((*(int *)(param_3 + 0x20) - (int)lVar5) + *(int *)(param_3 + 0x28));
  uVar8 = (ulong)uVar2 & 3;
  if ((ulong)(lVar5 - *(long *)(param_3 + 0x38)) < uVar8) {
    FUN_00dae400(param_3,uVar8);
    puVar3 = (undefined1 *)(*(long *)(param_3 + 0x30) - uVar8);
    *(undefined1 **)(param_3 + 0x30) = puVar3;
    *puVar3 = 0;
  }
  else {
    *(undefined1 **)(param_3 + 0x30) = (undefined1 *)(lVar5 - uVar8);
    if ((uVar2 & 3) == 0) goto LAB_00dae350;
    *(undefined1 *)(lVar5 - uVar8) = 0;
  }
  if (uVar8 != 1) {
    uVar2 = (int)uVar8 - 1;
    uVar4 = (ulong)uVar2 & 3;
    if (uVar8 - 2 < 3) {
      lVar7 = 1;
    }
    else {
      lVar5 = 0;
      do {
        lVar7 = lVar5;
        *(undefined1 *)(*(long *)(param_3 + 0x30) + lVar7 + 1) = 0;
        *(undefined1 *)(*(long *)(param_3 + 0x30) + lVar7 + 2) = 0;
        *(undefined1 *)(*(long *)(param_3 + 0x30) + lVar7 + 3) = 0;
        *(undefined1 *)(*(long *)(param_3 + 0x30) + lVar7 + 4) = 0;
        lVar5 = lVar7 + 4;
      } while ((uVar8 - 1) - uVar4 != lVar7 + 4);
      lVar7 = lVar7 + 5;
    }
    if ((uVar2 & 3) != 0) {
      lVar5 = -uVar4;
      do {
        *(undefined1 *)(*(long *)(param_3 + 0x30) + lVar7) = 0;
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_00dae350:
  lVar5 = *(long *)(param_3 + 0x30);
  if ((ulong)(lVar5 - *(long *)(param_3 + 0x38)) < 4) {
    FUN_00dae400(param_3,4);
    lVar5 = *(long *)(param_3 + 0x30);
  }
  *(long *)(param_3 + 0x30) = lVar5 + -4;
  *(float *)(lVar5 + -4) = param_1;
  lVar5 = *(long *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(param_3 + 0x30);
  puVar6 = *(ulong **)(param_3 + 0x38);
  if ((ulong)(lVar7 - (long)puVar6) < 8) {
    FUN_00dae400(param_3,8);
    puVar6 = *(ulong **)(param_3 + 0x38);
  }
  *puVar6 = (lVar5 - lVar7) + lVar1 & 0xffffffffU | (ulong)(uint)param_4 << 0x20;
  *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x38) + 8;
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  if ((uint)param_4 <= (uint)*(ushort *)(param_3 + 0x44)) {
    param_4 = *(ushort *)(param_3 + 0x44);
  }
  *(ushort *)(param_3 + 0x44) = param_4;
  return;
}



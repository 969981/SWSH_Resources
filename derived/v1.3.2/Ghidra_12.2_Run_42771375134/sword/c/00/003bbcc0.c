/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bbcc0; name: FUN_003bbcc0
 */


void FUN_003bbcc0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      if (*(long *)(*(long *)(param_1 + 0x28) + uVar9 * 8) == param_2) goto LAB_003bbd08;
      uVar9 = (ulong)(uVar8 + 1);
    } while (uVar8 + 1 < *(uint *)(param_1 + 0x30));
  }
  uVar8 = 0x80000000;
LAB_003bbd08:
  FUN_003c0d10(0,param_2,0,1,0);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar1 = uVar8 + 1;
  if (uVar1 < uVar2) {
    uVar9 = (ulong)uVar1;
    lVar10 = (uVar9 + (ulong)uVar1 * 2) * 0x10;
    uVar1 = uVar8;
    do {
      memcpy((void *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x30),
             (void *)(*(long *)(param_1 + 0x18) + lVar10),0x30);
      lVar3 = uVar9 * 8;
      lVar5 = (ulong)uVar1 * 8;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar5) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3);
      uVar1 = uVar1 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar5) =
           *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
      uVar2 = *(uint *)(param_1 + 0x20);
      lVar10 = lVar10 + 0x30;
    } while ((uint)uVar9 < uVar2);
  }
  if (uVar2 != 0) {
    uVar9 = 1L << ((ulong)uVar8 & 0x3f);
    uVar4 = uVar9 - 1;
    uVar6 = ~(uVar4 | uVar9);
    uVar9 = (ulong)uVar2;
    puVar7 = *(ulong **)(param_1 + 0x18);
    do {
      if ((uint)puVar7[5] != 0xffffffff && uVar8 < (uint)puVar7[5]) {
        puVar7[1] = puVar7[1] & uVar4 | (puVar7[1] & uVar6) >> 1;
      }
      uVar9 = uVar9 - 1;
      *puVar7 = *puVar7 & uVar4 | (*puVar7 & uVar6) >> 1;
      puVar7 = puVar7 + 6;
    } while (uVar9 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar2 - 1;
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



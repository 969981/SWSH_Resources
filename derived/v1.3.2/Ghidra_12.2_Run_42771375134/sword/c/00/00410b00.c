/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00410b00; name: FUN_00410b00
 */


/* WARNING: Removing unreachable block (ram,0x00410b40) */

void FUN_00410b00(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 auStack_210 [128];
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulong)uVar2;
  lVar3 = (long)auStack_210 + (0x200 - (uVar4 * 4 + 0xf & 0x7fffffff0));
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (uVar2 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined4 *)(lVar5 + 0x20);
      do {
        puVar1 = (undefined4 *)(lVar3 + lVar6 * 4);
        lVar6 = lVar6 + 2;
        *puVar1 = puVar7[-6];
        puVar1[1] = *puVar7;
        puVar7 = puVar7 + 0xc;
      } while (uVar4 - (uVar4 & 1) != lVar6);
      if ((uVar2 & 1) == 0) goto LAB_00410b84;
    }
    *(undefined4 *)(lVar3 + lVar6 * 4) = *(undefined4 *)(lVar5 + lVar6 * 0x18 + 8);
  }
LAB_00410b84:
  FUN_0045bd80(*(long *)(param_1 + 0x78) + 0x110,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x10),
               lVar3,uVar4,0,0,0);
  return;
}



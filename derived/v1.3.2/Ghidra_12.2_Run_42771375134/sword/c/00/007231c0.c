/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007231c0; name: FUN_007231c0
 */


void FUN_007231c0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = (*(long *)(param_1 + 0x1c0) - *(long *)(param_1 + 0x1b8) >> 4) * 0x286bca1b;
  if (((int)uVar6 < 1) || (lVar5 = *(long *)(param_1 + 0x1b0), lVar5 == 0)) {
    return;
  }
  iVar2 = *(int *)PTR_DAT_02715500;
  *(int *)(lVar5 + 0x138) = iVar2;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar5);
  lVar5 = lVar5 + (long)iVar2 * 0x70;
  lVar1 = lVar5 + 0x58;
  puVar3 = (undefined8 *)thunk_FUN_0199c7e0(lVar1);
  uVar6 = uVar6 & 0xffffffff;
  lVar8 = 0x128;
  do {
    lVar4 = *(long *)(*(long *)(param_1 + 0x1b8) + lVar8);
    if (*(char *)(lVar4 + 0x104) != '\0') {
      if (*(int *)(lVar4 + 0x100) == 1) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x1b8) + lVar8 + -8);
        iVar2 = *(int *)(lVar4 + 0x40);
        FUN_00723030(lVar7,iVar2);
        lVar4 = *(long *)(lVar7 + 0x1b8) + (long)iVar2 * 0x130;
        uVar9 = *(undefined8 *)(lVar4 + 0xe0);
        uVar11 = *(undefined8 *)(lVar4 + 0xf8);
        uVar10 = *(undefined8 *)(lVar4 + 0xf0);
        uVar13 = *(undefined8 *)(lVar4 + 0x108);
        uVar12 = *(undefined8 *)(lVar4 + 0x100);
        uVar15 = *(undefined8 *)(lVar4 + 0x118);
        uVar14 = *(undefined8 *)(lVar4 + 0x110);
        puVar3[1] = *(undefined8 *)(lVar4 + 0xe8);
        *puVar3 = uVar9;
        puVar3[3] = uVar11;
        puVar3[2] = uVar10;
        puVar3[5] = uVar13;
        puVar3[4] = uVar12;
        puVar3[7] = CONCAT44(0x3f800000,(int)uVar15);
        puVar3[6] = uVar14;
      }
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar5 + 0xc0));
    }
    lVar8 = lVar8 + 0x130;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  thunk_FUN_0199c800(lVar1);
  return;
}



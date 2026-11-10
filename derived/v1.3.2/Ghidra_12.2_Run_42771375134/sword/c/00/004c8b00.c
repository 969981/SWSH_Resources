/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8b00; name: FUN_004c8b00
 */


void FUN_004c8b00(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar6 = PTR_DAT_02713508;
  puVar5 = PTR_DAT_02713240;
  puVar4 = PTR_DAT_02712de0;
  lVar8 = *(long *)(PTR_DAT_02713240 + 0x10);
  do {
    if (lVar8 == 0) {
LAB_004c8b80:
      bVar3 = *PTR_DAT_02712ec8 == '\0' | *PTR_DAT_02712ed0 & 1;
      FUN_004c8c20(bVar3);
      puVar4 = PTR_DAT_027134f8;
      if (bVar3 != 0) {
        uVar2 = *(uint *)(PTR_DAT_027134f8 + 8);
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          uVar9 = *(undefined8 *)(*(long *)puVar4 + (ulong)uVar2 * 8);
          FUN_004c54a0(uVar9);
          FUN_004d44e0(uVar9);
        }
      }
      for (lVar8 = *(long *)(puVar5 + 0x10); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_0047b190(lVar8);
      }
      *(undefined4 *)PTR_DAT_02713200 = *(undefined4 *)((long)PTR_DAT_02713200 + 4);
      FUN_004c8700();
      return;
    }
    uVar7 = (**(code **)(**(long **)(lVar8 + 0xf8) + 0x58))();
    if ((uVar7 & 1) != 0) {
      (**(code **)(**(long **)(lVar8 + 0xf8) + 0x60))();
      iVar1 = *(int *)puVar6;
      if ((iVar1 == 0) || (8 < (uint)(*(int *)(*(long *)puVar4 + 0x78) - iVar1))) {
        *(int *)puVar6 = *(int *)(*(long *)puVar4 + 0x78);
        goto LAB_004c8b80;
      }
    }
    lVar8 = *(long *)(lVar8 + 8);
  } while( true );
}



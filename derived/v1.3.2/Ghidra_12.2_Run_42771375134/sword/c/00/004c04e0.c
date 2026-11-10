/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c04e0; name: FUN_004c04e0
 */


void FUN_004c04e0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_02713288;
  if (*PTR_DAT_02713288 != '\0' && *PTR_DAT_02713280 == '\0') {
    for (lVar5 = *(long *)(PTR_DAT_027134a8 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 400)) {
      FUN_0048bcd0(lVar5);
    }
    *puVar2 = 0;
  }
  puVar1 = (undefined8 *)PTR_DAT_027134b0;
  for (lVar5 = *(long *)(PTR_DAT_027134a8 + 0x10); PTR_DAT_027134b0 = (undefined *)puVar1,
      lVar5 != 0; lVar5 = *(long *)(lVar5 + 400)) {
    *(uint *)(lVar5 + 0x26b) = *(uint *)(lVar5 + 0x26b) & 0xfdffffff;
    puVar1 = (undefined8 *)PTR_DAT_027134b0;
  }
  uVar3 = (ulong)*(uint *)(puVar1 + 1);
  if (*(uint *)(puVar1 + 1) != 0) {
    plVar4 = (long *)*puVar1;
    plVar6 = plVar4;
    do {
      if (*plVar6 != 0) {
        FUN_00481c40();
        plVar4 = (long *)*puVar1;
        uVar3 = (ulong)*(uint *)(puVar1 + 1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4 + uVar3);
  }
  return;
}



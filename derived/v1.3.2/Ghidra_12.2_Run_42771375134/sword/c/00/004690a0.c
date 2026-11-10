/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004690a0; name: FUN_004690a0
 */


void FUN_004690a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02713118;
  puVar1 = PTR_DAT_02712e28;
  lVar3 = *(long *)PTR_DAT_02713118;
  uVar4 = *(uint *)(PTR_DAT_02713118 + 8);
  if (uVar4 != 0) {
    lVar5 = lVar3;
    do {
      if ((*(char *)(lVar5 + 0x24) != '\0') && (*(long *)(lVar5 + 0x18) != 0)) {
        FUN_00404870(*(undefined4 *)puVar1,*(long *)(lVar5 + 0x18));
        lVar3 = *(long *)puVar2;
        uVar4 = *(uint *)(puVar2 + 8);
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar3 + (ulong)uVar4 * 0x28);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(puVar2 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  return;
}



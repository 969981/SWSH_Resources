/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5600; name: FUN_004c5600
 */


void FUN_004c5600(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_027134f8;
  puVar3 = PTR_DAT_02712e28;
  uVar1 = *(uint *)(PTR_DAT_027134f8 + 8);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    lVar6 = *(long *)(*(long *)puVar4 + (ulong)uVar1 * 8);
    if (lVar6 != 0) {
      uVar2 = *(undefined4 *)puVar3;
      if (((*(long *)(lVar6 + 0x48) == 0) &&
          (((*(long *)(lVar6 + 0x70) == 0 || (*(long *)(*(long *)(lVar6 + 0x70) + 0x80) == 0)) &&
           (lVar5 = FUN_0047d760(lVar6 + 0x70), lVar5 != 0)))) &&
         (*(long *)(lVar5 + 0x118) == lVar6 || *(long *)(lVar5 + 0x118) == 0)) {
        FUN_0047b000();
      }
      FUN_004d43c0(lVar6);
      FUN_00404870(uVar2,lVar6);
    }
  }
  *(undefined4 *)(puVar4 + 8) = 0;
  return;
}



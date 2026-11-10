/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a2c30; name: FUN_005a2c30
 */


undefined8 FUN_005a2c30(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_02713c58;
  uVar2 = *(ulong *)PTR_DAT_02713c58;
  if (uVar2 != 0) {
    uVar3 = uVar2 + *(long *)(uVar2 - 8) * 0x1b04;
    do {
      uVar3 = uVar3 - 0x1b04;
    } while (uVar2 <= uVar3);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    *(undefined8 *)puVar1 = 0;
  }
  return 0;
}



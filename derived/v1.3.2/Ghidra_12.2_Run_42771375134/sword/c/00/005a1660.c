/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a1660; name: FUN_005a1660
 */


undefined8 FUN_005a1660(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_02713a78;
  puVar2 = PTR_PTR_02713988;
  uVar7 = *(ulong *)PTR_DAT_02713a78;
  if (uVar7 != 0) {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    uVar1 = uVar7 + *(long *)(uVar7 - 8) * 0xa8;
    while (uVar7 <= uVar1 - 0xa8) {
      uVar4 = *(ulong *)(uVar1 - 8);
      if (uVar4 != 0) {
        uVar5 = uVar4 + *(long *)(uVar4 - 8) * 0xc;
        do {
          uVar5 = uVar5 - 0xc;
        } while (uVar4 <= uVar5);
        FUN_005b9b10(*(undefined8 *)puVar2);
        *(undefined8 *)(uVar1 - 8) = 0;
      }
      *(undefined8 *)(uVar1 - 0x10) = 0;
      *(undefined8 *)(uVar1 - 8) = 0;
      *(undefined8 *)(uVar1 - 0x28) = 0;
      *(undefined8 *)(uVar1 - 0x20) = 0;
      *(undefined8 *)(uVar1 - 0x18) = 0;
      uVar1 = uVar1 - 0xa8;
    }
    FUN_005b9b10(uVar6,(long *)(uVar7 - 8));
    *(undefined8 *)puVar3 = 0;
  }
  return 0;
}



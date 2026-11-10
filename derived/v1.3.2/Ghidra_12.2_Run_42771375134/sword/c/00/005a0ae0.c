/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0ae0; name: FUN_005a0ae0
 */


undefined8 FUN_005a0ae0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_02713c48;
  puVar3 = PTR_PTR_02713988;
  puVar8 = *(undefined8 **)PTR_DAT_02713c48;
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)PTR_PTR_02713988;
    puVar1 = puVar8 + puVar8[-1] * 5;
    while (puVar2 = puVar1 + -5, puVar8 <= puVar2) {
      uVar5 = puVar1[-1];
      if (uVar5 != 0) {
        uVar6 = uVar5 + *(long *)(uVar5 - 8) * 0xc;
        do {
          uVar6 = uVar6 - 0xc;
        } while (uVar5 <= uVar6);
        FUN_005b9b10(*(undefined8 *)puVar3);
        puVar1[-1] = 0;
      }
      puVar2[3] = 0;
      puVar2[4] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar1 = puVar2;
    }
    FUN_005b9b10(uVar7,puVar8 + -1);
    *(undefined8 *)puVar4 = 0;
  }
  return 0;
}



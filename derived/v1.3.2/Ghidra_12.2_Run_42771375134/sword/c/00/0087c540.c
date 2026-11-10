/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087c540; name: FUN_0087c540
 */


undefined8 FUN_0087c540(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  cVar1 = FUN_00864ca0();
  if (cVar1 != '\0') {
    uVar7 = 0;
    do {
      iVar2 = FUN_00864cb0(uVar7);
      if (iVar2 == param_2) {
        uVar4 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
        uVar5 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
        FUN_008649f0(uVar4,uVar5);
        uVar6 = FUN_00864a60(uVar7 & 0xff);
        return uVar6;
      }
      uVar7 = uVar7 + 1;
      uVar3 = FUN_00864ca0();
    } while ((uVar7 & 0xff) < (uVar3 & 0xff));
  }
  return 0;
}



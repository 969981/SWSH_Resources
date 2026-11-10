/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ce00; name: FUN_0087ce00
 */


undefined4 FUN_0087ce00(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar2 = FUN_0086b720(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 1) + (uVar2 & 1) + (uVar4 & 1) == 1) {
    uVar3 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
    bVar1 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
    uVar2 = 2;
    if ((bVar1 & 1) == 0) {
      uVar2 = uVar3 & 1;
    }
    iVar5 = FUN_008693a0(*(undefined8 *)(param_1 + 0x98));
    uVar6 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar7 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    FUN_008649f0(uVar6,uVar7);
    iVar8 = FUN_00864a10(0x1a);
    if ((uVar2 == 0) && (iVar5 == iVar8)) {
      uVar6 = 0;
    }
    else {
      iVar8 = FUN_00864a10(0x1b);
      if ((uVar2 == 1) && (iVar5 == iVar8)) {
        uVar6 = 1;
      }
      else {
        iVar8 = FUN_00864a10(0x1c);
        uVar6 = 2;
        if ((bVar1 & iVar5 == iVar8) == 0) {
          uVar6 = 0xffffffff;
        }
      }
    }
  }
  else {
    uVar6 = 0xff;
  }
  return uVar6;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b490; name: FUN_0087b490
 */


void FUN_0087b490(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_00876c70(uVar3,uVar4,uVar2);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_00868910();
  }
  iVar6 = 100;
  if (uVar1 + 1 < 100) {
    iVar6 = uVar1 + 1;
  }
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864b10(uVar3,uVar4);
  FUN_00864ba0(iVar6);
  return;
}



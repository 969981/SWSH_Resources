/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b1d0; name: FUN_0087b1d0
 */


void FUN_0087b1d0(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar6 & 1) == 0) {
    uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_00876c70(uVar3,uVar4,uVar2);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_00868910();
  }
  uVar5 = uVar1 + (param_2 & 0xff);
  if (99 < uVar5) {
    uVar5 = 100;
  }
  if (uVar5 == uVar1) {
    return;
  }
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864b10(uVar3,uVar4);
  uVar5 = FUN_00864ba0(uVar5);
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864b10(uVar3,uVar4);
  uVar1 = FUN_00864ba0(100);
  if (uVar5 <= uVar1) {
    uVar1 = uVar5;
  }
  FUN_0086fcc0(*(undefined8 *)(param_1 + 0x98),uVar1);
  FUN_00879500(param_1,0);
  return;
}



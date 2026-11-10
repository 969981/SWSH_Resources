/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878ce0; name: FUN_00878ce0
 */


void FUN_00878ce0(long param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if ((iVar2 == 0x232) && (sVar1 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98)), sVar1 == 1)) {
    iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    if ((iVar2 == 0x232) && (sVar1 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98)), sVar1 == 1)) {
      FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
      iVar2 = FUN_008807e0();
      iVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    }
    else {
      iVar2 = 0;
      iVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    }
    if ((iVar3 == 0x232) && (sVar1 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98)), sVar1 == 1)) {
      uVar5 = FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
      uVar4 = FUN_008807f0(uVar5,iVar2 + param_2);
      FUN_008766a0(*(undefined8 *)(param_1 + 0x98),uVar4);
      return;
    }
  }
  return;
}



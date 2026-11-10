/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878c70; name: FUN_00878c70
 */


void FUN_00878c70(long param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0x232) {
    sVar1 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 == 1) {
      uVar4 = FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
      uVar3 = FUN_008807f0(uVar4,param_2);
      FUN_008766a0(*(undefined8 *)(param_1 + 0x98),uVar3);
      return;
    }
  }
  return;
}



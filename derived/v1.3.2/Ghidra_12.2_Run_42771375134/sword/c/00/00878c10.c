/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878c10; name: FUN_00878c10
 */


undefined8 FUN_00878c10(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0x232) {
    sVar1 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 == 1) {
      FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
      uVar3 = FUN_008807e0();
      return uVar3;
    }
  }
  return 0;
}



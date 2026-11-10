/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087eca0; name: FUN_0087eca0
 */


void FUN_0087eca0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  iVar2 = FUN_008693a0(*(undefined8 *)(param_1 + 0x98));
  if ((iVar1 == 0x1ed) && (iVar2 == 0x79)) {
    FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
    FUN_00877770();
    return;
  }
  if ((iVar1 == 0x305) && (iVar2 == 0xe1)) {
    FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
    FUN_00877840();
    return;
  }
  uVar3 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_008649f0(iVar1,uVar3);
  FUN_00864a10(6);
  return;
}



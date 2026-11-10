/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8880; name: FUN_005b8880
 */


void FUN_005b8880(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_0059ed30();
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x34) = param_2[1];
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  iVar2 = FUN_005b88e0(param_1);
  if (iVar2 < 0) {
    return;
  }
  FUN_0059ece0(param_1,uVar3);
  return;
}



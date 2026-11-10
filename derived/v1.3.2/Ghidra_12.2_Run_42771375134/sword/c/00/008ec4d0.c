/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec4d0; name: FUN_008ec4d0
 */


undefined8 FUN_008ec4d0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00864d20();
  bVar1 = FUN_00864d90();
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      iVar3 = FUN_00864da0(uVar4);
      if ((iVar3 == 4) && (bVar2 = FUN_00864df0(uVar4), bVar2 <= param_3)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar1);
  }
  return 0;
}



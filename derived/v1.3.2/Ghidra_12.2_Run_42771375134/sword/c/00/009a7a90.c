/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7a90; name: FUN_009a7a90
 */


undefined8 FUN_009a7a90(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((uVar2 = FUN_008ec410(uVar3), (uVar2 & 1) == 0 ||
         (iVar1 = FUN_01521090(param_1,uVar3), iVar1 == 0))) {
    uVar3 = uVar3 + 1;
    if (0x647 < (uVar3 & 0xffff)) {
      return 0;
    }
  }
  return 1;
}



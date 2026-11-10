/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df6e0; name: FUN_008df6e0
 */


uint FUN_008df6e0(long param_1,ulong param_2,char param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  
  lVar1 = param_1 + (param_2 & 0xff) * 0x38 + 8;
  bVar2 = FUN_009141c0(lVar1);
  if (bVar2 != 0) {
    uVar4 = 0;
    do {
      FUN_00914330(lVar1,uVar4);
      cVar3 = FUN_008e0a00();
      if (cVar3 == param_3) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar2);
  }
  return 0xffffffff;
}



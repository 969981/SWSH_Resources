/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015031a0; name: FUN_015031a0
 */


undefined4 FUN_015031a0(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  
  lVar1 = 0x74;
  if (param_2 != 0) {
    lVar1 = 0x75;
  }
  bVar2 = *(byte *)(param_1 + lVar1);
  if (bVar2 < 2) {
    return 0;
  }
  if (bVar2 < 4) {
    return 1;
  }
  if (bVar2 < 6) {
    return 2;
  }
  if (bVar2 < 9) {
    return 3;
  }
  if (bVar2 < 0xc) {
    return 4;
  }
  if (bVar2 < 0xf) {
    return 5;
  }
  if (bVar2 < 0x13) {
    return 6;
  }
  if (bVar2 < 0x17) {
    return 7;
  }
  if (bVar2 < 0x1b) {
    return 8;
  }
  if (bVar2 < 0x21) {
    return 9;
  }
  uVar3 = 10;
  if (bVar2 != 0x21) {
    uVar3 = 0;
  }
  return uVar3;
}



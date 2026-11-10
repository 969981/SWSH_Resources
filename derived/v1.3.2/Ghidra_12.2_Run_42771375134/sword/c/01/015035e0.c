/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015035e0; name: FUN_015035e0
 */


int FUN_015035e0(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = 0x72;
  if (param_2 != 0) {
    lVar1 = 0x73;
  }
  bVar2 = *(byte *)(param_1 + lVar1);
  if (bVar2 < 2) {
    uVar3 = 0;
  }
  else if (bVar2 < 4) {
    uVar3 = 1;
  }
  else if (bVar2 < 6) {
    uVar3 = 2;
  }
  else if (bVar2 < 9) {
    uVar3 = 3;
  }
  else if (bVar2 < 0xc) {
    uVar3 = 4;
  }
  else if (bVar2 < 0xf) {
    uVar3 = 5;
  }
  else if (bVar2 < 0x13) {
    uVar3 = 6;
  }
  else if (bVar2 < 0x17) {
    uVar3 = 7;
  }
  else if (bVar2 < 0x1b) {
    uVar3 = 8;
  }
  else if (bVar2 < 0x21) {
    uVar3 = 9;
  }
  else {
    uVar3 = 10;
    if (bVar2 != 0x21) {
      uVar3 = 0;
    }
  }
  uVar4 = 10;
  if (uVar3 + 1 < 10) {
    uVar4 = uVar3 + 1;
  }
  return (&DAT_0217241c)[uVar4] - (&DAT_0217241c)[uVar3];
}



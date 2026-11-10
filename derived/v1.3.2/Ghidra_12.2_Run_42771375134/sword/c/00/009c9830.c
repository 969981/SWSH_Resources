/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9830; name: FUN_009c9830
 */


int FUN_009c9830(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  
  uVar1 = param_1 & 0xff;
  if (uVar1 < 6) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (uVar1 < 0x1e) {
      lVar6 = 4;
    }
    lVar2 = 3;
    if (0x17 < uVar1) {
      lVar2 = lVar6;
    }
    lVar3 = 1;
    if (0x11 < uVar1) {
      lVar3 = lVar2;
    }
    lVar6 = 2;
    if (0xb < uVar1) {
      lVar6 = lVar3;
    }
  }
  bVar4 = (&DAT_0214c960)[lVar6];
  if ((param_1 & 0xff) < (uint)bVar4) {
    return 0;
  }
  iVar5 = param_1 - bVar4;
  if (bVar4 + 6 <= (param_1 & 0xff)) {
    iVar5 = 0;
  }
  return iVar5;
}



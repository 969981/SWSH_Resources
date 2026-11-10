/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e2f60; name: FUN_009e2f60
 */


int FUN_009e2f60(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  short *psVar3;
  ulong uVar4;
  int iVar5;
  
  psVar3 = (short *)FUN_0077d470(*param_1);
  if (psVar3 == (short *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      while( true ) {
        for (; *psVar3 != 0x10; psVar3 = psVar3 + 1) {
          if (*psVar3 == 0) {
            return iVar5;
          }
        }
        uVar4 = FUN_014bf030(psVar3);
        if ((uVar4 & 1) != 0) break;
        psVar3 = (short *)FUN_0077db30(psVar3);
      }
      thunk_FUN_0077dba0(psVar3,0);
      cVar1 = FUN_014bf260(psVar3);
      uVar2 = FUN_014bed40(psVar3);
      psVar3 = (short *)FUN_0077db30(psVar3);
      if (((cVar1 == '\x01') && (psVar3 != (short *)0x0)) &&
         ((((uVar2 & 0xff) < 0xd && ((1 << (ulong)(uVar2 & 0x1f) & 0x1006U) != 0)) ||
          ((uVar2 & 0xff) == 0xd1)))) {
        iVar5 = iVar5 + 1;
      }
    } while (psVar3 != (short *)0x0);
  }
  return iVar5;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015036c0; name: FUN_015036c0
 */


int FUN_015036c0(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0x72;
  if (param_2 != 0) {
    lVar2 = 0x73;
  }
  bVar1 = *(byte *)(param_1 + lVar2);
  if (1 < bVar1) {
    if (bVar1 < 4) {
      lVar2 = 1;
      goto LAB_0150377c;
    }
    if (bVar1 < 6) {
      lVar2 = 2;
      goto LAB_0150377c;
    }
    if (bVar1 < 9) {
      lVar2 = 3;
      goto LAB_0150377c;
    }
    if (bVar1 < 0xc) {
      lVar2 = 4;
      goto LAB_0150377c;
    }
    if (bVar1 < 0xf) {
      lVar2 = 5;
      goto LAB_0150377c;
    }
    if (bVar1 < 0x13) {
      lVar2 = 6;
      goto LAB_0150377c;
    }
    if (bVar1 < 0x17) {
      lVar2 = 7;
      goto LAB_0150377c;
    }
    if (bVar1 < 0x1b) {
      lVar2 = 8;
      goto LAB_0150377c;
    }
    if (bVar1 < 0x21) {
      lVar2 = 9;
      goto LAB_0150377c;
    }
    if (bVar1 == 0x21) {
      lVar2 = 10;
      goto LAB_0150377c;
    }
  }
  lVar2 = 0;
LAB_0150377c:
  return (uint)bVar1 - (&DAT_0217241c)[lVar2];
}



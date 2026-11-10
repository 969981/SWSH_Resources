/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119d1d0; name: FUN_0119d1d0
 */


ulong FUN_0119d1d0(long param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x278);
  if ((((((lVar2 == 0) || (*(char *)(param_1 + 0x280) != param_2)) &&
        ((lVar2 = *(long *)(param_1 + 0x288), lVar2 == 0 || (*(char *)(param_1 + 0x290) != param_2))
        )) && ((lVar2 = *(long *)(param_1 + 0x298), lVar2 == 0 ||
               (*(char *)(param_1 + 0x2a0) != param_2)))) &&
      ((lVar2 = *(long *)(param_1 + 0x2a8), lVar2 == 0 || (*(char *)(param_1 + 0x2b0) != param_2))))
     && ((((lVar2 = *(long *)(param_1 + 0x2b8), lVar2 == 0 ||
           (*(char *)(param_1 + 0x2c0) != param_2)) &&
          ((lVar2 = *(long *)(param_1 + 0x2c8), lVar2 == 0 ||
           (*(char *)(param_1 + 0x2d0) != param_2)))) &&
         ((lVar2 = *(long *)(param_1 + 0x2d8), lVar2 == 0 || (*(char *)(param_1 + 0x2e0) != param_2)
          ))))) {
    lVar2 = *(long *)(param_1 + 0x2e8);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x2f0) != param_2) {
      return 0;
    }
  }
  uVar1 = FUN_007b5850(lVar2);
  return (uVar1 & 0xff) << 8 | (ulong)(((uint)uVar1 & 0xff) != 0xfd);
}



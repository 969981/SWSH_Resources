/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dae710; name: FUN_00dae710
 */


void FUN_00dae710(long param_1)

{
  long lVar1;
  ushort uVar2;
  ulong __n;
  
  FUN_00dae900(param_1,0);
  uVar2 = *(short *)(param_1 + 0x44) + 2;
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  *(ushort *)(param_1 + 0x44) = uVar2;
  __n = (ulong)uVar2;
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < __n) {
    FUN_00dae400(param_1,__n);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  *(void **)(param_1 + 0x30) = (void *)(lVar1 - __n);
                    /* WARNING: Subroutine does not return */
  memset((void *)(lVar1 - __n),0,__n);
}



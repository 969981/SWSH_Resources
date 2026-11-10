/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82750; name: FUN_00c82750
 */


void FUN_00c82750(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar2 + 0x50) != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
      if (*(ulong *)(lVar2 + 0x48) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar2 + 0x40);
      lVar1 = *(long *)(lVar5 + lVar4);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + lVar4) = 0;
        lVar2 = *(long *)(param_1 + 0x30);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < *(ulong *)(lVar2 + 0x50));
  }
  return;
}



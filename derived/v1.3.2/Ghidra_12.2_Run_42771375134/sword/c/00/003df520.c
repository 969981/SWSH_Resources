/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003df520; name: FUN_003df520
 */


void FUN_003df520(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x10ac) != 0) {
    lVar5 = *(long *)(param_1 + 0x1080);
    uVar4 = 0;
    do {
      lVar2 = FUN_003bd8a0(*(undefined8 *)(lVar5 + uVar4 * 8));
      *(ushort *)(lVar2 + 0xb4) = *(ushort *)(lVar2 + 0xb4) & 0xff8f;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10ac));
  }
  if (*(int *)(param_1 + 0x10e4) != 0) {
    lVar5 = *(long *)(param_1 + 0x10b8);
    uVar4 = 0;
    do {
      lVar2 = FUN_003bd8a0(*(undefined8 *)(lVar5 + uVar4 * 8));
      *(ushort *)(lVar2 + 0xb4) = *(ushort *)(lVar2 + 0xb4) & 0xff4f;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10e4));
  }
  uVar1 = *(uint *)(param_1 + 0x109c);
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x10ac) != 0)) {
    uVar4 = 0;
    do {
      uVar3 = *(uint *)((long)*(void **)(param_1 + 0x1090) + uVar4 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x1088) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0x1090),-1,(ulong)(uVar1 << 2));
  }
  uVar1 = *(uint *)(param_1 + 0x10d4);
  if ((uVar1 == 0) || (*(int *)(param_1 + 0x10e4) == 0)) {
    *(undefined2 *)(param_1 + 0x10e8) = 0x101;
    return;
  }
  uVar4 = 0;
  do {
    uVar3 = *(uint *)((long)*(void **)(param_1 + 0x10c8) + uVar4 * 4);
    if (uVar3 != 0xffffffff) {
      do {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x10c0) + (ulong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar1);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x10c8),-1,(ulong)(uVar1 << 2));
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00123420; name: FUN_00123420
 */


void FUN_00123420(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0x1b4) + -1) ||
     (*(int *)(param_1 + 0xb8) == 0)) {
    FUN_003ff570(*(undefined8 *)(param_1 + 0x1d0));
    lVar2 = *(long *)(param_1 + 0xc0);
    uVar1 = *(int *)(lVar2 + (ulong)*(uint *)(param_1 + 0xd0) * 0x10 + 8) +
            *(uint *)(param_1 + 0xd0) * 0x80;
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        lVar6 = (uVar5 >> 7) * 0x10;
        uVar7 = (ulong)((uint)uVar5 & 0x7f);
        lVar2 = *(long *)(*(long *)(lVar2 + lVar6) + uVar7 * 0x40 + 0x28);
        lVar3 = *(long *)(lVar2 + 0x20);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x23) != '\0')) {
          uVar4 = *(uint *)(param_1 + 0x130);
          if (uVar4 < (*(uint *)(param_1 + 0x134) & 0x7fffffff)) {
            *(long *)(*(long *)(param_1 + 0x128) + (ulong)uVar4 * 8) = lVar2;
            *(uint *)(param_1 + 0x130) = uVar4 + 1;
          }
          else {
            FUN_00127920(param_1 + 0x128);
          }
        }
        lVar2 = *(long *)(param_1 + 0xc0);
        lVar3 = *(long *)(*(long *)(lVar2 + lVar6) + uVar7 * 0x40 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = 0;
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar4;
        *(undefined2 *)(*(long *)(lVar3 + 0x28) + 0x9c) = 0;
      } while (uVar1 != uVar4);
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0xc0) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0xf0) + 8) = 0;
  uVar1 = *(uint *)(param_1 + 0x15c);
  if ((uVar1 == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    return;
  }
  uVar5 = 0;
  do {
    uVar4 = *(uint *)((long)*(void **)(param_1 + 0x150) + uVar5 * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x148) + (ulong)uVar4 * 4);
      } while (uVar4 != 0xffffffff);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != uVar1);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x150),-1,(ulong)(uVar1 << 2));
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cafe0; name: FUN_001cafe0
 */


void FUN_001cafe0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x34);
  if (*(uint *)(param_1 + 0x34) != 0) {
    lVar6 = *(long *)(param_1 + 8);
    uVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar6 + uVar5 * 8);
      uVar1 = *(uint *)(puVar4 + 1);
      if ((uVar1 >> 0x1e) - 1 < 2) {
        *(uint *)(puVar4 + 1) = uVar1 & 0xfffffff | 0x80000000;
      }
      else {
        *(uint *)(puVar4 + 1) = uVar1 & 0xfffffff;
        *puVar4 = 0;
      }
      if ((uVar1 >> 0x1d & 1) != 0) {
        FUN_001ba7d0(*(undefined8 *)(lVar6 + uVar5 * 8));
        uVar2 = (ulong)*(uint *)(param_1 + 0x34);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
    if ((int)uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x24);
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar3 = *(uint *)((long)*(void **)(param_1 + 0x18) + uVar2 * 4);
          if (uVar3 != 0xffffffff) {
            do {
              uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 4);
            } while (uVar3 != 0xffffffff);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar1);
                    /* WARNING: Subroutine does not return */
        memset(*(void **)(param_1 + 0x18),-1,(ulong)(uVar1 << 2));
      }
    }
  }
  return;
}



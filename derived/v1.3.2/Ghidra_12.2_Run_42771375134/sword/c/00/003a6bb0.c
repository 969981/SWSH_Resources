/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6bb0; name: FUN_003a6bb0
 */


void FUN_003a6bb0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_0039f890(param_1 + 0x10);
  local_28 = 0;
  FUN_001ed3f0(param_1 + 0x1ee8,0,&local_28);
  FUN_001ed4d0(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x1ef0));
  local_24 = 0;
  FUN_001ed3f0(param_1 + 0x1ef8,0,&local_24);
  FUN_001ed4d0(param_1 + 0x1ef8,*(undefined4 *)(param_1 + 0x1f00));
  uVar2 = *(uint *)(param_1 + 0x1ecc);
  if ((uVar2 == 0) || (*(int *)(param_1 + 0x1edc) == 0)) {
    if (*(int *)(param_1 + 0x1f1c) != 0) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1f10) + lVar5);
        puVar1[1] = 0;
        FUN_00397700(*puVar1,1);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar3 < *(uint *)(param_1 + 0x1f1c));
    }
    *(undefined4 *)(param_1 + 0x1f18) = 0;
    return;
  }
  uVar3 = 0;
  do {
    uVar4 = *(uint *)((long)*(void **)(param_1 + 0x1ec0) + uVar3 * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x1eb8) + (ulong)uVar4 * 4);
      } while (uVar4 != 0xffffffff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar2);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x1ec0),-1,(ulong)(uVar2 << 2));
}



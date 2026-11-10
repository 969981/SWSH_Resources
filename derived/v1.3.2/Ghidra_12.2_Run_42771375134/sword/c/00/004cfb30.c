/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cfb30; name: FUN_004cfb30
 */


void FUN_004cfb30(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  do {
    if (uVar3 == 0) {
      return;
    }
    while( true ) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 8 + -8);
      local_50 = *(long *)(lVar4 + 0x48);
      lStack_48 = 0;
      if (local_50 == 0) break;
      lVar5 = 0;
      lVar6 = local_50;
      while (lVar2 = FUN_004699e0(lVar6), lVar2 != param_1) {
        plVar1 = (long *)(lVar6 + 0x40);
        lVar5 = lVar6;
        lVar6 = *plVar1;
        if (*plVar1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x18);
          goto LAB_004cfba0;
        }
      }
      local_50 = lVar6;
      lStack_48 = lVar5;
      FUN_004cf990(lVar4,&local_50);
      uVar3 = *(uint *)(param_1 + 0x18);
      if (uVar3 == 0) {
        return;
      }
    }
LAB_004cfba0:
    uVar3 = uVar3 - 1;
    *(uint *)(param_1 + 0x18) = uVar3;
  } while( true );
}



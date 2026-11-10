/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dcd50; name: FUN_003dcd50
 */


void FUN_003dcd50(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int local_3c [3];
  
  lVar2 = *(long *)(param_1 + 0x1118);
  lVar1 = lVar2;
  if (*(int *)(lVar2 + 0x38) != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        while (local_3c[0] = *(int *)(*(long *)(lVar2 + 0x30) + uVar3 * 4),
              *(int *)(lVar2 + 8) + -1 == local_3c[0]) {
          *(int *)(lVar2 + 8) = local_3c[0];
          uVar3 = uVar3 + 1;
          if (*(uint *)(lVar2 + 0x38) <= uVar3) goto LAB_003dce08;
        }
        if ((*(uint *)(lVar2 + 0x1c) & 0x7fffffff) <= *(uint *)(lVar2 + 0x18)) break;
        *(int *)(*(long *)(lVar2 + 0x10) + (ulong)*(uint *)(lVar2 + 0x18) * 4) = local_3c[0];
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
        uVar3 = uVar3 + 1;
        if (*(uint *)(lVar2 + 0x38) <= uVar3) goto LAB_003dce08;
      }
      FUN_001b4230(lVar2 + 0x10,local_3c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(lVar2 + 0x38));
LAB_003dce08:
    lVar1 = *(long *)(param_1 + 0x1118);
  }
  *(undefined4 *)(lVar2 + 0x38) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(lVar1 + 0x20),0,(ulong)(uint)(*(int *)(lVar1 + 0x28) << 2));
}



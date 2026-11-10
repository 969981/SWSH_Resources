/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013ba20; name: FUN_0013ba20
 */


/* WARNING: Removing unreachable block (ram,0x0013ba54) */

void FUN_0013ba20(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 0x88);
  uVar1 = *puVar5;
  if (uVar1 != 0) {
    lVar2 = *(long *)(puVar5 + 4);
    if (uVar1 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      plVar4 = (long *)(lVar2 + 0x58);
      do {
        if (plVar4[-7] != 0) {
          *(undefined4 *)(plVar4[-7] + 0xc0) = 0;
        }
        if (*plVar4 != 0) {
          *(undefined4 *)(*plVar4 + 0xc0) = 0;
        }
        lVar3 = lVar3 + 2;
        plVar4 = plVar4 + 0xe;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar3);
      if ((uVar1 & 1) == 0) goto LAB_0013baa4;
    }
    lVar2 = *(long *)(lVar2 + lVar3 * 0x38 + 0x20);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0xc0) = 0;
    }
  }
LAB_0013baa4:
  FUN_0013a780(puVar5 + 0xc,*(undefined8 *)(puVar5 + 8),param_1,puVar5 + 0x1e,puVar5 + 0x22);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(puVar5 + 0x1e),0,(ulong)(puVar5[0x20] << 2));
}



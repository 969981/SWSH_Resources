/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008679c0; name: FUN_008679c0
 */


void FUN_008679c0(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0x10),0,0x148);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    lVar2 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar2 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  if (lVar4 != 0) {
    uVar1 = FUN_00867720(lVar4 + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar1;
    FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    lVar2 = *(long *)(param_1 + 8);
  }
  if ((lVar2 != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN_008677c0(lVar2,0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



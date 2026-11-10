/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647410; name: FUN_00647410
 */


void FUN_00647410(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *__s1;
  long *plVar4;
  undefined8 *puVar5;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x490) + 0x2a0))();
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)(**(code **)(**(long **)(param_1 + 0x490) + 0x108))();
    if (*plVar4 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x490) + 0x108))();
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x50))();
    __s1 = (void *)(lVar3 + 0x168);
  }
  else {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
    if (*(long **)(lVar3 + 8) == (long *)0x0) {
      return;
    }
    __s1 = (void *)(**(code **)(**(long **)(lVar3 + 8) + 0x100))();
  }
  iVar1 = memcmp(__s1,(void *)(param_1 + 0x498),900);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + 0x20),0xff,0x140);
  }
  return;
}



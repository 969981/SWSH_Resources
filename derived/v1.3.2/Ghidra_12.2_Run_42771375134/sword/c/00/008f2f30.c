/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f2f30; name: FUN_008f2f30
 */


undefined8 FUN_008f2f30(long param_1,int *param_2)

{
  uint uVar1;
  void *__src;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  uint local_24;
  
  if (*(long *)(param_1 + 0xd8) == 0 &&
      (*(ulong *)(param_1 + 0xe0) == 0 ||
      (*(ulong *)(param_1 + 0xe0) & 1) == 0 && *(long *)(param_1 + 0xd8) == 0)) {
    if (((*(byte *)(param_1 + 0x183) & 1) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xae8) = 6;
    }
  }
  else {
    if (*param_2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0xa40))();
      *param_2 = *param_2 + 1;
    }
    FUN_008f26c0(param_1);
    lVar5 = *(long *)(param_1 + 0x758);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) != 0) {
        local_24 = 0;
        __src = (void *)FUN_009cade0(lVar5,0,&local_24);
        if (__src != (void *)0x0) {
          lVar5 = *(long *)(param_1 + 0x88);
          memcpy((void *)(*(long *)(lVar5 + 0xb00) + (ulong)*(uint *)(lVar5 + 0xb08)),__src,
                 (ulong)local_24);
          uVar1 = *(int *)(lVar5 + 0xb08) + local_24;
          *(uint *)(lVar5 + 0xb08) = uVar1;
          *(uint *)(param_1 + 0x468) = *(uint *)(param_1 + 0x468) & 0x80000000 | uVar1 & 0x7fffffff;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    pcVar3 = *(code **)(param_1 + 0xd8);
    uVar2 = *(ulong *)(param_1 + 0xe0);
    if ((pcVar3 != (code *)0x0) || (uVar2 != 0 && (uVar2 & 1) != 0)) {
      if ((uVar2 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + ((long)uVar2 >> 1)));
      }
      uVar2 = (*pcVar3)();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    FUN_008f30d0(param_1);
    (**(code **)(**(long **)(param_1 + 0x90) + 0xa48))();
  }
  return 1;
}



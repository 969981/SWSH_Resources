/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00138c10; name: FUN_00138c10
 */


void FUN_00138c10(long param_1,uint param_2,uint param_3,uint param_4)

{
  long *plVar1;
  void *__s;
  size_t __n;
  uint uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) < param_2) {
      FUN_0013bf20(param_1 + 0x10);
    }
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      return;
    }
    uVar2 = param_4 - 1;
    if ((uVar2 & param_4) != 0) {
      param_4 = param_4 | param_4 >> 1;
      param_4 = param_4 | param_4 >> 2;
      param_4 = param_4 | param_4 >> 4;
      param_4 = param_4 | param_4 >> 8;
      uVar2 = param_4 | param_4 >> 0x10;
      param_4 = uVar2 + 1;
    }
    *(uint *)(param_1 + 0x30) = param_4;
    *(uint *)(param_1 + 0x34) = uVar2;
    *(uint *)(param_1 + 0x58) = param_4;
    FUN_00136790(param_1 + 0x30);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) < param_3) {
    FUN_0013c030(param_1 + 0x20,param_3);
  }
  uVar2 = param_3 >> 5;
  lVar3 = *(long *)(param_1 + 0x14d0);
  if ((param_3 & 0x1f) != 0) {
    uVar2 = uVar2 + 1;
  }
  *(uint *)(param_1 + 0x14d8) = uVar2;
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    uVar2 = *(uint *)(param_1 + 0x14d8);
    *(undefined8 *)(param_1 + 0x14d0) = 0;
  }
  if (uVar2 == 0) {
    __n = 0;
    __s = (void *)0x0;
  }
  else {
    plVar1 = (long *)FUN_00400d30();
    __s = (void *)(**(code **)(*plVar1 + 0x10))
                            (plVar1,(ulong)uVar2 << 2,"NonTrackedAlloc",
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                             ,0x106);
    __n = (size_t)(uint)(*(int *)(param_1 + 0x14d8) << 2);
  }
  *(void **)(param_1 + 0x14d0) = __s;
                    /* WARNING: Subroutine does not return */
  memset(__s,0,__n);
}



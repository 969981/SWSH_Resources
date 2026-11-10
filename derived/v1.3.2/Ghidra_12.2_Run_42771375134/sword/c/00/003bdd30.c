/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bdd30; name: FUN_003bdd30
 */


undefined8 FUN_003bdd30(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *__s;
  code *pcVar10;
  ulong *local_48;
  
  __s = *(ulong **)(param_1 + 0xb0);
  if (__s == (ulong *)0x0) {
    __s = *(ulong **)(param_2 + 0x230);
    if (__s == (ulong *)0x0) {
      iVar2 = *(int *)(param_2 + 0x228);
      if (iVar2 == 0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        plVar5 = (long *)FUN_00400d30();
        pcVar10 = *(code **)(*plVar5 + 0x10);
        plVar6 = (long *)FUN_00400d60();
        uVar7 = (**(code **)(*plVar6 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::SimStateData>::getName() [T = physx::Sc::SimStateData]"
        ;
        if ((uVar7 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar8 = (ulong *)(*pcVar10)(plVar5,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_2 + 0x218);
      local_48 = puVar8;
      if (uVar3 < (*(uint *)(param_2 + 0x21c) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_2 + 0x210) + (ulong)uVar3 * 8) = puVar8;
        *(uint *)(param_2 + 0x218) = uVar3 + 1;
      }
      else {
        FUN_003beb00(param_2 + 8,&local_48);
      }
      if (puVar8 + (ulong)*(uint *)(param_2 + 0x220) * 8 + -8 < puVar8) {
        __s = *(ulong **)(param_2 + 0x230);
      }
      else {
        puVar4 = puVar8 + (ulong)*(uint *)(param_2 + 0x220) * 8 + -8;
        puVar9 = *(ulong **)(param_2 + 0x230);
        do {
          __s = puVar4;
          *__s = (ulong)puVar9;
          puVar4 = __s + -8;
          puVar9 = __s;
        } while (puVar8 <= __s + -8);
        *(ulong **)(param_2 + 0x230) = __s;
      }
    }
    *(ulong *)(param_2 + 0x230) = *__s;
    *(int *)(param_2 + 0x224) = *(int *)(param_2 + 0x224) + 1;
    if (__s == (ulong *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,0x40);
}



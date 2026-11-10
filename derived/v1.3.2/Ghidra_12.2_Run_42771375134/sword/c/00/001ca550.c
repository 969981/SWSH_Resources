/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ca550; name: FUN_001ca550
 */


undefined8 FUN_001ca550(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    uVar3 = 0;
    do {
      if (*(long *)(lVar4 + (uVar3 & 0xffffffff) * 8) == param_2) {
        *(uint *)(param_1 + 0x40) = uVar1 - 1;
        *(undefined8 *)(lVar4 + uVar3 * 8) = *(undefined8 *)(lVar4 + (ulong)(uVar1 - 1) * 8);
        lVar4 = *(long *)((long)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_2 + 8) * 8) + 0x98);
        FUN_001e15e0(param_2 + *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_2 + 8) * 8),0,
                     param_2);
        FUN_001e50a0(param_1 + 0x10,param_2 + lVar4,param_3 & 1);
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((uint)uVar3 < uVar1);
  }
  uVar2 = FUN_00400880();
  FUN_00400890(uVar2,2,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpAggregate.cpp"
               ,0xbc,"PxAggregate: can\'t remove actor, actor doesn\'t belong to aggregate");
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ca8c0; name: FUN_001ca8c0
 */


undefined8 FUN_001ca8c0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_02711080;
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  else {
    bVar7 = false;
    uVar8 = 0;
    do {
      while( true ) {
        iVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + uVar8 * 8) + 0x30))();
        if (iVar3 == 4) break;
LAB_001ca934:
        uVar1 = (uint)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        if (*(uint *)(param_1 + 0x40) <= uVar1) goto LAB_001ca99c;
      }
      lVar6 = *(long *)(param_1 + 0x48);
      lVar5 = *(long *)(lVar6 + uVar8 * 8);
      if (*(long *)(lVar5 + 0x180) != param_2) goto LAB_001ca934;
      uVar1 = *(int *)(param_1 + 0x40) - 1;
      *(uint *)(param_1 + 0x40) = uVar1;
      *(undefined8 *)(lVar6 + uVar8 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8);
      lVar6 = *(long *)((long)(puVar2 + (ulong)*(ushort *)(lVar5 + 8) * 8) + 0x98);
      FUN_001e15e0(lVar5 + *(long *)(puVar2 + (ulong)*(ushort *)(lVar5 + 8) * 8),0);
      FUN_001e50a0(param_1 + 0x10,lVar5 + lVar6,param_3 & 1);
      bVar7 = true;
    } while ((uint)uVar8 < *(uint *)(param_1 + 0x40));
LAB_001ca99c:
    *(undefined8 *)(param_2 + 0x98) = 0;
    if (bVar7) {
      return 1;
    }
  }
  uVar4 = FUN_00400880();
  FUN_00400890(uVar4,2,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpAggregate.cpp"
               ,0x11b,
               "PxAggregate: can\'t remove articulation, articulation doesn\'t belong to aggregate")
  ;
  return 0;
}



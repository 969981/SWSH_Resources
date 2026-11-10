/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f180; name: FUN_0029f180
 */


undefined8 FUN_0029f180(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  short *psVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  
  uVar4 = FUN_002af7f0(0x56,0x41,0x4c,0x45,auStack_34,local_38,param_2);
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = FUN_002af410(local_38[0],param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar3 = FUN_002af410(local_38[0],param_2);
    lVar13 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x14) = iVar3;
    if (lVar13 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar13);
      iVar3 = *(int *)(param_1 + 0x14);
    }
    lVar13 = (ulong)(*(int *)(param_1 + 0x10) + 3U & 0xfffffffc) * 4;
    iVar3 = iVar3 + (int)lVar13;
    if (iVar3 == 0) {
      lVar6 = 0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      lVar6 = (**(code **)(*plVar5 + 0x10))
                        (plVar5,iVar3,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/convex/GuBigConvexData.cpp"
                         ,99);
    }
    *(long *)(param_1 + 0x18) = lVar6;
    *(long *)(param_1 + 0x20) = lVar6 + lVar13;
    *(long *)(param_1 + 0x28) = lVar6;
    uVar7 = FUN_002af410(local_38[0],param_2);
    FUN_002afb10(uVar7,*(undefined4 *)(param_1 + 0x10),lVar6,param_2,local_38[0]);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 != 0) {
      uVar11 = uVar1 - 1;
      lVar13 = *(long *)(param_1 + 0x18);
      *(undefined2 *)(lVar13 + (ulong)uVar11 * 4) = *(undefined2 *)(lVar6 + (ulong)uVar11 * 2);
      if (uVar11 != 0) {
        uVar10 = uVar1 - 2;
        uVar11 = 1;
        do {
          uVar4 = (ulong)uVar10;
          uVar12 = (ulong)uVar10;
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 - 1;
          *(undefined2 *)(lVar13 + uVar12 * 4) = *(undefined2 *)(lVar6 + uVar4 * 2);
        } while (uVar11 < uVar1);
      }
    }
    (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x14));
    psVar8 = *(short **)(param_1 + 0x18);
    psVar8[1] = 0;
    if (1 < *(uint *)(param_1 + 0x10)) {
      sVar9 = 0;
      lVar13 = (ulong)*(uint *)(param_1 + 0x10) - 1;
      do {
        sVar9 = *psVar8 + sVar9;
        psVar8[3] = sVar9;
        lVar13 = lVar13 + -1;
        psVar8 = psVar8 + 2;
      } while (lVar13 != 0);
    }
    uVar7 = 1;
  }
  return uVar7;
}



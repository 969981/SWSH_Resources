/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a1100; name: FUN_002a1100
 */


undefined8 FUN_002a1100(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  char local_48 [4];
  char local_44 [4];
  char local_38 [4];
  char local_34 [4];
  
  if (((*(byte *)(param_1 + 0x54) & 1) == 0) && (lVar6 = *(long *)(param_1 + 0x58), lVar6 != 0)) {
    lVar8 = *(long *)(lVar6 + -8);
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6 - lVar8);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_002af330(local_34,local_38,local_44,local_48,param_2);
  uVar5 = 0;
  if ((((local_34[0] == 'R') && (local_38[0] == 'T')) && (local_44[0] == 'R')) &&
     (local_48[0] == 'E')) {
    uVar2 = FUN_002af410(0,param_2);
    uVar9 = 1;
    if ((uVar2 != 1) && (uVar2 != 0x1000000)) {
      uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      if ((param_4 & 1) == 0) {
        uVar9 = uVar2;
      }
      if (2 < uVar9) {
        return 0;
      }
      uVar9 = param_4 & 1;
    }
    FUN_002af4d0(param_1,4,uVar9,param_2);
    FUN_002af4d0(param_1 + 0x10,4,uVar9,param_2);
    FUN_002af4d0(param_1 + 0x20,4,uVar9,param_2);
    FUN_002af4d0(param_1 + 0x30,4,uVar9,param_2);
    uVar3 = FUN_002af410(uVar9,param_2);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar3 = FUN_002af410(uVar9,param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    uVar3 = FUN_002af410(uVar9,param_2);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    uVar3 = FUN_002af410(uVar9,param_2);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    uVar3 = FUN_002af410(uVar9,param_2);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    FUN_002af410(uVar9,param_2);
    uVar2 = *(uint *)(param_1 + 0x50);
    plVar4 = (long *)FUN_00400d30();
    lVar6 = (**(code **)(*plVar4 + 0x10))
                      (plVar4,(ulong)uVar2 * 0x70 + 0x87,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/mesh/GuRTree.cpp"
                       ,0x58);
    if (lVar6 == 0) {
      uVar7 = 0;
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      uVar7 = lVar6 + 0x87U & 0xffffffffffffff80;
      *(ulong *)(uVar7 - 8) = uVar7 - lVar6;
      iVar1 = *(int *)(param_1 + 0x50);
      *(ulong *)(param_1 + 0x58) = uVar7;
    }
    if (iVar1 != 0) {
      lVar6 = 0;
      uVar10 = 1;
      while( true ) {
        FUN_002af4d0(uVar7 + lVar6,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x10,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x20,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x30,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x40,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x50,4,uVar9,param_2);
        FUN_002af4d0(*(long *)(param_1 + 0x58) + lVar6 + 0x60,4,uVar9,param_2);
        if (*(uint *)(param_1 + 0x50) <= uVar10) break;
        uVar7 = *(ulong *)(param_1 + 0x58);
        lVar6 = lVar6 + 0x70;
        uVar10 = uVar10 + 1;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



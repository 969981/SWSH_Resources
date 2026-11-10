/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a0750; name: FUN_002a0750
 */


undefined8 FUN_002a0750(long param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  char local_58 [4];
  char local_54 [4];
  char local_48 [4];
  char local_44 [4];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
                    /* try { // try from 002a0788 to 002a079b has its CatchHandler @ 002a0990 */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar8);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != 0) {
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar8);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_002af330(local_44,local_48,local_54,local_58,param_2);
  uVar5 = 0;
  if ((((local_44[0] == 'B') && (local_48[0] == 'V')) && (local_54[0] == '3')) &&
     (local_58[0] == '2')) {
    uVar2 = FUN_002af410(0,param_2);
    uVar7 = 1;
    if ((uVar2 != 1) && (uVar2 != 0x1000000)) {
      uVar7 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if ((param_3 & 1) == 0) {
        uVar7 = uVar2;
      }
      if (2 < uVar7) {
        return 0;
      }
      uVar7 = param_3 & 1;
    }
    uVar10 = FUN_002af470(uVar7,param_2);
    *(undefined4 *)(param_1 + 8) = uVar10;
    uVar10 = FUN_002af470(uVar7,param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    uVar10 = FUN_002af470(uVar7,param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar10;
    uVar10 = FUN_002af470(uVar7,param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar10;
    uVar10 = FUN_002af410(uVar7,param_2);
    *(undefined4 *)(param_1 + 0x34) = uVar10;
    uVar2 = FUN_002af410(uVar7,param_2);
    *(uint *)(param_1 + 0x30) = uVar2;
    if (uVar2 != 0) {
      uVar9 = (ulong)uVar2;
      plVar4 = (long *)FUN_00400d30();
      lVar6 = (**(code **)(*plVar4 + 0x10))
                        (plVar4,(ulong)uVar2 * 0x490,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/mesh/GuBV32.cpp"
                         ,0xa7);
      lVar8 = 0x480;
      *(long *)(param_1 + 0x28) = lVar6;
      while( true ) {
        uVar9 = uVar9 - 1;
        iVar3 = FUN_002af410(uVar7,param_2);
        piVar1 = (int *)(lVar6 + lVar8);
        *piVar1 = iVar3;
        FUN_002af4d0(piVar1 + -0x20,iVar3,uVar7,param_2);
        iVar3 = *piVar1;
        FUN_002af4d0(piVar1 + -0x120,iVar3 << 2,uVar7,param_2);
        FUN_002af4d0(piVar1 + -0xa0,iVar3 << 2,uVar7,param_2);
        if (uVar9 == 0) break;
        lVar6 = *(long *)(param_1 + 0x28);
        lVar8 = lVar8 + 0x490;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



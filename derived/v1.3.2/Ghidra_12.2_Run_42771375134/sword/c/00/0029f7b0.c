/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f7b0; name: FUN_0029f7b0
 */


undefined8 FUN_0029f7b0(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
                    /* try { // try from 0029f7e4 to 0029f7f7 has its CatchHandler @ 0029fa08 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_002af330(local_44,local_48,local_4c,local_50,param_2);
  uVar4 = 0;
  if ((((local_44[0] == 'B') && (local_48[0] == 'V')) && (local_4c[0] == '4')) &&
     (local_50[0] == ' ')) {
    uVar2 = FUN_002af410(0,param_2);
    uVar6 = 1;
    if ((uVar2 != 1) && (uVar2 != 0x1000000)) {
      uVar6 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((param_3 & 1) == 0) {
        uVar6 = uVar2;
      }
      if (2 < uVar6) {
        return 0;
      }
      uVar6 = param_3 & 1;
    }
    FUN_002af4d0(param_1 + 8,3,uVar6,param_2);
    uVar9 = FUN_002af470(uVar6,param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    uVar9 = FUN_002af410(uVar6,param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    FUN_002af4d0(param_1 + 0x2c,3,uVar6,param_2);
    FUN_002af4d0(param_1 + 0x38,3,uVar6,param_2);
    uVar2 = FUN_002af410(uVar6,param_2);
    uVar8 = (ulong)uVar2;
    *(uint *)(param_1 + 0x18) = uVar2;
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      plVar3 = (long *)FUN_00400d30();
      lVar7 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,uVar8 << 4,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/mesh/GuBV4.cpp"
                         ,0xf7);
      *(long *)(param_1 + 0x20) = lVar7;
      FUN_002af560(lVar7,uVar2 << 3,0,param_2);
      if (uVar6 != 0) {
        puVar5 = (undefined1 *)(lVar7 + 7);
        do {
          uVar1 = puVar5[-7];
          puVar5[-7] = puVar5[-6];
          puVar5[-6] = uVar1;
          uVar1 = puVar5[-5];
          puVar5[-5] = puVar5[-4];
          puVar5[-4] = uVar1;
          uVar1 = puVar5[-3];
          puVar5[-3] = puVar5[-2];
          puVar5[-2] = uVar1;
          uVar1 = puVar5[-1];
          puVar5[-1] = *puVar5;
          *puVar5 = uVar1;
          uVar1 = puVar5[1];
          puVar5[1] = puVar5[2];
          puVar5[2] = uVar1;
          uVar1 = puVar5[3];
          puVar5[3] = puVar5[4];
          puVar5[4] = uVar1;
          uVar1 = puVar5[5];
          puVar5[5] = puVar5[8];
          puVar5[8] = uVar1;
          uVar1 = puVar5[6];
          puVar5[6] = puVar5[7];
          puVar5[7] = uVar1;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 0x10;
        } while (uVar8 != 0);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



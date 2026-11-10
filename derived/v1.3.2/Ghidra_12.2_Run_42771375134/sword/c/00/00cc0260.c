/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc0260; name: FUN_00cc0260
 */


void FUN_00cc0260(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_d8 [2];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  FUN_012b4da0(auStack_80,*(undefined8 *)(*(long *)(param_2 + 0x68) + 400),
               *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x180));
  local_a8 = 0xe0346c57550c6825;
  local_a0 = "DATA";
  local_98 = 4;
  FUN_012b4250(auStack_90,auStack_80,&local_a8);
  lVar1 = FUN_012b40f0(auStack_90);
  if (lVar1 != 0) {
    uVar5 = 1;
    do {
      FUN_012b4190(auStack_b8,auStack_90,(long)(int)(uVar5 - 1));
      local_a8 = 0xfd07074159b797bd;
      local_a0 = "categoryHash";
      local_98 = 0xc;
      FUN_012b4250(auStack_c8,auStack_b8,&local_a8);
      local_d8[0] = 0;
      lVar1 = FUN_012b4b40(auStack_c8,local_d8);
      local_a8 = 0x4bb7c6e790d4fc0a;
      local_a0 = "nameHash";
      local_98 = 8;
      FUN_012b4250(auStack_c8,auStack_b8,&local_a8);
      local_d8[0] = 0;
      lVar2 = FUN_012b4b40(auStack_c8,local_d8);
      if ((lVar1 == *param_3) && (lVar2 == *param_4)) {
        param_1[2] = 0x3f800000;
        param_1[3] = 0x543340000;
        param_1[4] = 0x3f00000000000005;
        local_a8 = 0x86e542ecf527a6af;
        local_a0 = "changeTiming";
        *param_1 = 0;
        param_1[1] = 0;
        local_98 = 0xc;
        FUN_012b4250(auStack_c8,auStack_b8,&local_a8);
        uVar4 = FUN_012b4090(auStack_c8);
        if ((uVar4 & 1) != 0) {
          uVar6 = FUN_012b4630(0,auStack_c8);
          *(undefined4 *)param_1 = uVar6;
          uVar6 = FUN_012b4630(0,auStack_c8);
          *(undefined4 *)((long)param_1 + 4) = uVar6;
        }
        local_a8 = 0x5f379ba4926093b9;
        local_a0 = "changeTimingL";
        local_98 = 0xd;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        FUN_012b4070(auStack_c8,local_d8);
        uVar4 = FUN_012b4090(auStack_c8);
        if ((uVar4 & 1) != 0) {
          uVar6 = FUN_012b4630(0,auStack_c8);
          *(undefined4 *)param_1 = uVar6;
        }
        local_a8 = 0x5f37b5a49260bfe7;
        local_a0 = "changeTimingR";
        local_98 = 0xd;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        FUN_012b4070(auStack_c8,local_d8);
        uVar4 = FUN_012b4090(auStack_c8);
        if ((uVar4 & 1) != 0) {
          uVar6 = FUN_012b4630(0,auStack_c8);
          *(undefined4 *)((long)param_1 + 4) = uVar6;
        }
        local_a8 = 0x2455742ab040a9ea;
        local_a0 = "ikFrameMin";
        local_98 = 10;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        fVar7 = (float)FUN_012b4630(0,local_d8);
        local_98 = 10;
        *(int *)((long)param_1 + 0x1c) = (int)fVar7;
        local_a8 = 0x24707e2ab05782a0;
        local_a0 = "ikFrameMax";
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        fVar7 = (float)FUN_012b4630(0,local_d8);
        local_a8 = 0xd3bc45e90b1773db;
        *(int *)(param_1 + 4) = (int)fVar7;
        local_a0 = "ikDegreeMin";
        local_98 = 0xb;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        local_a8 = 0xd3a13be90b009b25;
        local_a0 = "ikDegreeMax";
        *(undefined4 *)((long)param_1 + 0x14) = uVar6;
        local_98 = 0xb;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        local_a8 = 0x1fef7538714591ee;
        *(undefined4 *)(param_1 + 3) = uVar6;
        local_a0 = "ikFactor";
        local_98 = 8;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        local_a8 = 0x99ab08543d2753f2;
        local_a0 = "slideMin";
        *(undefined4 *)(param_1 + 2) = uVar6;
        local_98 = 8;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        local_a8 = 0x999012543d109d38;
        local_a0 = "slideMax";
        *(undefined4 *)(param_1 + 1) = uVar6;
        local_98 = 8;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        local_a8 = 0x5182c20a06b5a962;
        local_a0 = "turnAngleFactor";
        local_98 = 0xf;
        *(undefined4 *)((long)param_1 + 0xc) = uVar6;
        FUN_012b4250(local_d8,auStack_b8,&local_a8);
        uVar6 = FUN_012b4630(0,local_d8);
        *(undefined4 *)((long)param_1 + 0x24) = uVar6;
        return;
      }
      uVar3 = FUN_012b40f0(auStack_90);
      uVar4 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[2] = 0x3f800000;
  param_1[3] = 0x543340000;
  param_1[4] = 0x3f00000000000005;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



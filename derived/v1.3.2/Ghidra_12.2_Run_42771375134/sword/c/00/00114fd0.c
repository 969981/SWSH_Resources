/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114fd0; name: FUN_00114fd0
 */


void FUN_00114fd0(long *param_1,byte param_2,ulong param_3,uint param_4,ulong param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar8 = param_5 >> 6 & 0x3ffffff;
  uVar7 = (uint)uVar8;
  if (uVar7 != (*(uint *)((long)param_1 + 0x24) & 0x7fffffff)) goto LAB_00115080;
  uVar4 = *(uint *)((long)param_1 + 0x24) * 2;
  if (uVar4 < 0x101) {
    uVar4 = 0x100;
  }
  if (uVar7 < uVar4) {
    FUN_0011afa0(param_1 + 3,uVar4);
    if ((*(uint *)((long)param_1 + 0xfc) & 0x7fffffff) < uVar4) goto LAB_001151a0;
LAB_00115044:
    if (uVar4 <= (*(uint *)((long)param_1 + 0xec) & 0x7fffffff)) goto LAB_00115054;
LAB_001151bc:
    FUN_00114950(param_1 + 0x1c,uVar4);
    if ((*(uint *)((long)param_1 + 0xdc) & 0x7fffffff) < uVar4) goto LAB_001151d8;
LAB_00115064:
    uVar2 = *(uint *)((long)param_1 + 0x34);
  }
  else {
    if (uVar4 <= (*(uint *)((long)param_1 + 0xfc) & 0x7fffffff)) goto LAB_00115044;
LAB_001151a0:
    FUN_001ed4d0(param_1 + 0x1e,uVar4);
    if ((*(uint *)((long)param_1 + 0xec) & 0x7fffffff) < uVar4) goto LAB_001151bc;
LAB_00115054:
    if (uVar4 <= (*(uint *)((long)param_1 + 0xdc) & 0x7fffffff)) goto LAB_00115064;
LAB_001151d8:
    FUN_001ed4d0(param_1 + 0x1a,uVar4);
    uVar2 = *(uint *)((long)param_1 + 0x34);
  }
  if ((uVar2 & 0x7fffffff) < uVar4) {
    FUN_001ed4d0(param_1 + 5,uVar4);
  }
LAB_00115080:
  uVar4 = *(uint *)(param_1 + 4);
  local_78 = 0;
  if (uVar4 <= uVar7 + 1) {
    uVar4 = uVar7 + 1;
  }
  local_80 = (ulong)local_80._4_4_ << 0x20;
  local_90 = 0x8ffffffff;
  uStack_88 = 0xffffffc0ffffffc0;
                    /* try { // try from 001150a8 to 001150b7 has its CatchHandler @ 00115358 */
  FUN_00115360(param_1 + 3,uVar4,&local_90);
  local_90 = local_90 & 0xffffffff00000000;
  FUN_001ed3f0(param_1 + 0x1e,uVar4,&local_90);
  local_90._0_4_ = 0xffffffc0;
  FUN_00113990(param_1 + 0x1c,uVar4,&local_90);
  local_90 = (ulong)local_90._4_4_ << 0x20;
  FUN_001ed3f0(param_1 + 0x1a,uVar4,&local_90);
  local_90 = local_90 & 0xffffffff00000000;
  FUN_001ed3f0(param_1 + 5,uVar4,&local_90);
  lVar5 = uVar8 * 4;
  *(undefined4 *)(param_1[5] + lVar5) = 0x3ffffff;
  lVar6 = param_1[3] + uVar8 * 0x20;
  bVar1 = ~param_2 & 1 | 4;
  if ((param_3 & 1) == 0) {
    bVar1 = ~param_2 & 1;
  }
  *(char *)(lVar6 + 5) = (char)param_4;
  *(byte *)(lVar6 + 4) = bVar1;
  *(undefined4 *)(param_1[0x1e] + lVar5) = 0xffffffff;
  *(undefined4 *)(param_1[0x1c] + lVar5) = 0xffffffc0;
  *(undefined4 *)(param_1[0x1a] + lVar5) = 0;
  if ((param_3 & 1) == 0) {
    if ((int)param_1[1] == 0) {
      uVar7 = *(uint *)(param_1 + 2);
      *(uint *)(param_1 + 2) = uVar7 + 1;
    }
    else {
      uVar4 = (int)param_1[1] - 1;
      uVar7 = *(uint *)(*param_1 + (ulong)uVar4 * 4);
      *(uint *)(param_1 + 1) = uVar4;
    }
    if (uVar7 == (*(uint *)((long)param_1 + 100) & 0x7fffffff)) {
      uVar4 = *(uint *)((long)param_1 + 100) * 2;
      if (uVar4 < 0x101) {
        uVar4 = 0x100;
      }
      if (uVar7 < uVar4) {
        FUN_0011b530(param_1 + 0xb,uVar4);
      }
      FUN_00190b50(param_1 + 0x20,uVar4);
      if ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) < uVar4) {
        FUN_001ed4d0(param_1 + 0xd,uVar4);
      }
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = uVar7 + 1;
    local_90 = 0xffffffc0ffffffc0;
    uStack_88 = 0;
    local_70 = 0xffffffff;
    local_80 = -1;
    local_78 = 0xffffffffffffffff;
    if (uVar2 <= uVar4) {
      uVar2 = uVar7 + 1;
    }
    local_68 = 0;
    FUN_00115540(param_1 + 0xb,uVar2,&local_90);
    uVar2 = *(uint *)(param_1 + 0xc);
    local_90 = local_90 & 0xffffffff00000000;
    if (uVar2 <= uVar4) {
      uVar2 = uVar7 + 1;
    }
    FUN_001ed3f0(param_1 + 0xd,uVar2,&local_90);
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 <= uVar4) {
      uVar2 = uVar7 + 1;
    }
    FUN_00190b50(param_1 + 0x20,uVar2 + 1);
    lVar6 = (ulong)(uVar2 >> 5) * 4;
    *(uint *)(param_1[0x20] + lVar6) =
         *(uint *)(param_1[0x20] + lVar6) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
    puVar3 = (undefined4 *)(param_1[0xb] + (ulong)uVar7 * 0x2c);
    *puVar3 = (int)param_5;
    puVar3[1] = (int)param_5;
    puVar3[(ulong)param_4 + 2] = 1;
    *(uint *)(param_1[0x1e] + uVar8 * 4) = uVar7;
    *(undefined4 *)(param_1[0xd] + (ulong)uVar7 * 4) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_001155d0(param_1,param_5 & 0xffffffff);
  }
  return;
}



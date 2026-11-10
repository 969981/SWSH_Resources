/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f1aa0; name: FUN_003f1aa0
 */


uint * FUN_003f1aa0(uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar4 = param_1[6];
  uVar9 = (ulong)uVar4;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar7 = param_1;
  if (uVar4 != 0) {
    uVar5 = param_1[2];
    lVar12 = 0;
    uVar11 = 0;
    do {
      if (uVar5 != uVar11) {
        lVar13 = *(long *)(param_1 + 4);
        lVar1 = lVar13 + lVar12;
        puVar7 = *(uint **)(lVar1 + 8);
        if (puVar7 != (uint *)0x0) {
          *(undefined8 *)(lVar1 + 8) = *(undefined8 *)puVar7;
LAB_003f1c08:
          param_1[2] = (uint)uVar11;
          return puVar7;
        }
        uVar6 = *(uint *)(lVar1 + 0x10);
        puVar7 = (uint *)0x0;
        if (uVar6 != uVar2) {
          *(uint *)(lVar1 + 0x10) = uVar6 + 1;
          puVar7 = (uint *)(*(long *)(lVar13 + lVar12) + (ulong)(uVar6 * uVar3));
          if (puVar7 != (uint *)0x0) goto LAB_003f1c08;
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
    } while (uVar11 < uVar9);
  }
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 8) = 1;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if ((ulong)uVar3 * (ulong)uVar2 == 0) {
    local_58 = 0;
  }
  else {
    plVar8 = (long *)FUN_00400d30(puVar7);
    local_58 = (**(code **)(*plVar8 + 0x10))
                         (plVar8,(ulong)uVar3 * (ulong)uVar2,"NonTrackedAlloc",
                          "./../../Common/src\\CmPreallocatingPool.h",0x3c);
    uVar9 = (ulong)param_1[6];
  }
  if ((uint)uVar9 < (param_1[7] & 0x7fffffff)) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 4) + uVar9 * 0x18);
    puVar10[2] = CONCAT44(uStack_44,local_48);
    puVar10[1] = local_50;
    *puVar10 = local_58;
    plVar8 = (long *)(*(long *)(param_1 + 4) + (ulong)param_1[6] * 0x18);
    param_1[6] = param_1[6] + 1;
    puVar7 = (uint *)plVar8[1];
  }
  else {
    plVar8 = (long *)FUN_003f17c0(param_1 + 4,&local_58);
    puVar7 = (uint *)plVar8[1];
  }
  if (puVar7 == (uint *)0x0) {
    uVar4 = *(uint *)(plVar8 + 2);
    if (uVar4 == uVar2) {
      puVar7 = (uint *)0x0;
    }
    else {
      *(uint *)(plVar8 + 2) = uVar4 + 1;
      puVar7 = (uint *)(*plVar8 + (ulong)(uVar4 * uVar3));
    }
  }
  else {
    plVar8[1] = *(long *)puVar7;
  }
  return puVar7;
}



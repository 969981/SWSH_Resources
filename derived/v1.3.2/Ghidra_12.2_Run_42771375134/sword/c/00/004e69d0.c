/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e69d0; name: FUN_004e69d0
 */


long FUN_004e69d0(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float local_34;
  long local_30;
  long local_28;
  
  local_28 = FUN_004edd60(param_1 + 0x18,*(undefined8 *)(param_2 + 0x20));
  if (local_28 == 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    lVar7 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0x3f800000;
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0x3f800000;
    if (lVar7 != -1) {
      *(undefined2 *)(param_2 + 0x68) = 0x101;
    }
    if (lVar6 == -1) {
      return 0;
    }
    local_28 = 0;
  }
  else {
    lVar6 = FUN_004e8900(local_28,param_3,&local_28,&local_30,&local_34);
    fVar12 = *(float *)(local_28 + 0x4c);
    lVar7 = *(long *)(local_28 + 0x38);
    uVar5 = *(undefined4 *)(local_28 + 0x48);
    uVar1 = *(undefined4 *)(local_28 + 0x54);
    uVar2 = *(undefined4 *)(local_28 + 0x58);
    if (local_30 == 0) {
      uVar8 = 0;
      uVar10 = 0;
      uVar9 = 0xffffffffffffffff;
      uVar11 = 0x3f800000;
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(local_30 + 0x4c) - *(float *)(local_30 + 0x4c) * local_34 * local_34;
      uVar9 = *(undefined8 *)(local_30 + 0x38);
      uVar8 = *(undefined4 *)(local_30 + 0x48);
      uVar11 = *(undefined4 *)(local_30 + 0x54);
      uVar10 = *(undefined4 *)(local_30 + 0x58);
    }
    lVar3 = *(long *)(param_2 + 0x28);
    lVar4 = *(long *)(param_2 + 0x30);
    *(long *)(param_2 + 0x28) = lVar6;
    *(long *)(param_2 + 0x30) = lVar7;
    *(undefined4 *)(param_2 + 0x38) = uVar5;
    *(float *)(param_2 + 0x3c) = fVar12 - fVar12 * (1.0 - local_34) * (1.0 - local_34);
    *(undefined4 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x44) = uVar2;
    *(undefined8 *)(param_2 + 0x48) = uVar9;
    *(undefined4 *)(param_2 + 0x50) = uVar8;
    *(float *)(param_2 + 0x54) = fVar13;
    *(undefined4 *)(param_2 + 0x58) = uVar11;
    *(undefined4 *)(param_2 + 0x5c) = uVar10;
    *(float *)(param_2 + 0x60) = local_34;
    if (lVar4 != lVar7) {
      *(undefined2 *)(param_2 + 0x68) = 0x101;
    }
    if (lVar3 == lVar6) {
      return local_28;
    }
  }
  *(undefined1 *)(param_2 + 0x69) = 1;
  return local_28;
}



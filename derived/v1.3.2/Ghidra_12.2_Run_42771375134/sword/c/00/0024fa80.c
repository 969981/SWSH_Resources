/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024fa80; name: FUN_0024fa80
 */


undefined8 FUN_0024fa80(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char local_58 [4];
  undefined1 auStack_54 [4];
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 != 0) {
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar7 = FUN_002af620(0x48,0x46,0x48,0x46,auStack_54,local_58,param_2);
  if ((uVar7 & 1) == 0) {
LAB_0024fd40:
    uVar8 = 0;
  }
  else {
    uVar5 = FUN_002af410(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    uVar5 = FUN_002af410(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    uVar4 = FUN_002af3c0(local_58[0],param_2);
    *(undefined2 *)(param_1 + 0x60) = uVar4;
    uVar5 = FUN_002af410(local_58[0],param_2);
    *(undefined4 *)(param_1 + 100) = uVar5;
    fVar10 = (float)FUN_002af470(local_58[0],param_2);
    fVar11 = (float)FUN_002af470(local_58[0],param_2);
    fVar12 = (float)FUN_002af470(local_58[0],param_2);
    fVar13 = (float)FUN_002af470(local_58[0],param_2);
    fVar14 = (float)FUN_002af470(local_58[0],param_2);
    fVar15 = (float)FUN_002af470(local_58[0],param_2);
    *(float *)(param_1 + 0x20) = (fVar10 + fVar13) * 0.5;
    *(float *)(param_1 + 0x24) = (fVar11 + fVar14) * 0.5;
    *(float *)(param_1 + 0x28) = (fVar12 + fVar15) * 0.5;
    *(float *)(param_1 + 0x2c) = (fVar13 - fVar10) * 0.5;
    *(float *)(param_1 + 0x30) = (fVar14 - fVar11) * 0.5;
    *(float *)(param_1 + 0x34) = (fVar15 - fVar12) * 0.5;
    uVar5 = FUN_002af410(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    uVar5 = FUN_002af410(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    uVar5 = FUN_002af470(local_58[0],param_2);
    uVar3 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (uVar3 != 0) {
      plVar6 = (long *)FUN_00400d30();
      lVar9 = (**(code **)(*plVar6 + 0x10))
                        (plVar6,(ulong)uVar3 << 2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/hf/GuHeightField.cpp"
                         ,0x103);
      *(long *)(param_1 + 0x50) = lVar9;
      if (lVar9 == 0) {
        uVar8 = FUN_00400880();
        FUN_00400890(uVar8,0x10,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/hf/GuHeightField.cpp"
                     ,0x106,"Gu::HeightField::load: PX_ALLOC failed!");
        goto LAB_0024fd40;
      }
      (**(code **)*param_2)(param_2,lVar9,*(int *)(param_1 + 0x6c) << 2);
      if ((local_58[0] != '\0') && (*(int *)(param_1 + 0x6c) != 0)) {
        lVar9 = 0;
        uVar7 = 0;
        do {
          puVar1 = (undefined1 *)(*(long *)(param_1 + 0x50) + lVar9);
          lVar9 = lVar9 + 4;
          uVar2 = *puVar1;
          *puVar1 = puVar1[1];
          puVar1[1] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 0x6c));
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



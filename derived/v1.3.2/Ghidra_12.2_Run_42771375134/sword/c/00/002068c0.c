/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002068c0; name: FUN_002068c0
 */


void FUN_002068c0(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  bool bVar13;
  byte local_60 [8];
  byte local_58 [8];
  undefined4 local_48 [2];
  
  bVar3 = *param_2;
  if (*(int *)(param_1 + 0x98) - 5U < 2) {
    if ((bVar3 >> 2 & 1) != 0) {
      uVar10 = FUN_00400880();
      pcVar12 = "PxShape::setFlag(s): triangle mesh and heightfield triggers are not supported!";
      uVar11 = 0x1ff;
      goto LAB_002069a8;
    }
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (((bVar3 ^ 0xff) & 5) == 0) {
    uVar10 = FUN_00400880();
    pcVar12 = 
    "PxShape::setFlag(s): shapes cannot simultaneously be trigger shapes and simulation shapes.";
    uVar11 = 0x206;
LAB_002069a8:
    FUN_00400890(uVar10,4,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShape.cpp"
                 ,uVar11,pcVar12);
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x90);
  pbVar2 = pbVar1;
  if ((*(byte *)(param_1 + 0x38) & 0x40) != 0) {
    pbVar2 = (byte *)(*(long *)(param_1 + 0x40) + 0x34);
  }
  bVar4 = *pbVar2;
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[1];
    if ((short)lVar8 == 6) {
      (**(code **)(*plVar7 + 0x180))(local_60);
      local_60[0] = local_60[0] & 1;
    }
    else {
      local_60[0] = 0;
    }
    if ((((((bVar4 & 1) == 0) && ((short)lVar8 != 7)) && (local_60[0] == 0)) && ((bVar3 & 1) != 0))
       && ((bVar13 || (*(int *)(param_1 + 0x98) == 1)))) {
      uVar10 = FUN_00400880();
      FUN_00400890(uVar10,4,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShape.cpp"
                   ,0x21e,
                   "PxShape::setFlag(s): triangle mesh, heightfield and plane shapes can only be simulation shapes if part of a PxRigidStatic!"
                  );
      return;
    }
  }
  bVar3 = *param_2;
  uVar6 = *(uint *)(param_1 + 0x38) >> 0x1e;
  if (uVar6 == 2) {
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x1fb9) != '\0') goto LAB_00206a90;
LAB_00206a30:
    bVar5 = *pbVar1;
    *pbVar1 = bVar3;
    if ((uVar6 == 1) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_00206ac4;
    local_48[0] = 0x40;
    local_58[0] = bVar5;
    FUN_003d9690(*(long *)(param_1 + 0x28) + 0x80,param_1 + 0x50,local_48,local_58,0);
    if ((bVar4 >> 1 & 1) == (bVar3 & 2) >> 1) {
      return;
    }
  }
  else {
    if (uVar6 != 3) goto LAB_00206a30;
LAB_00206a90:
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) {
      lVar8 = FUN_001d1a00(*(undefined8 *)(param_1 + 0x30),*(uint *)(param_1 + 0x38) >> 0x18 & 0xf);
      *(long *)(param_1 + 0x40) = lVar8;
    }
    *(byte *)(lVar8 + 0x34) = bVar3;
    FUN_001d1850(*(undefined8 *)(param_1 + 0x30),(long *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40;
LAB_00206ac4:
    if ((bVar4 >> 1 & 1) == (bVar3 & 2) >> 1) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar8 = FUN_001e1e70();
  lVar9 = FUN_001e18a0(*(undefined8 *)(param_1 + 0x28));
  if (lVar8 != 0) {
    if ((bVar3 >> 1 & 1) != 0) {
      FUN_00207c40(lVar9,lVar8 + 0x2430,*(undefined8 *)(param_1 + 0x28),param_1);
      lVar8 = *(long *)(lVar9 + 0x20);
      goto joined_r0x00206b2c;
    }
    FUN_00207ce0(lVar9,lVar8 + 0x2430,param_1);
  }
  lVar8 = *(long *)(lVar9 + 0x20);
joined_r0x00206b2c:
  if (lVar8 != 0) {
    uVar10 = FUN_00400880();
    FUN_00400890(uVar10,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShape.cpp"
                 ,0x238,
                 "PxShape::setFlag: Shape is a part of pruning structure, pruning structure is now invalid!"
                );
    FUN_00396ea0(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



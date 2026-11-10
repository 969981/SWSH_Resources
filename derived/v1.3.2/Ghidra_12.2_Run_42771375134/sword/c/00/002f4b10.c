/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f4b10; name: FUN_002f4b10
 */


long * FUN_002f4b10(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  float fVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  ulong uVar30;
  int iVar31;
  long local_f8;
  undefined *local_f0;
  ulong local_e8;
  uint *local_e0;
  uint *puStack_d8;
  long local_d0;
  long *plStack_c8;
  long *local_c0;
  undefined4 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  uint local_84;
  int local_80;
  int iStack_7c;
  uint *local_78;
  char local_64 [4];
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  puVar28 = (uint *)(param_1 + 0x18 + ((ulong)(uint)-(int)(param_1 + 0x18) & 0xf));
  puVar19 = puVar28 + 1;
  uVar7 = *puVar28;
  puVar19 = (uint *)((long)puVar19 + ((ulong)(uint)-(int)puVar19 & 0xf));
  puVar28 = puVar19 + 1;
  uVar22 = (ulong)*puVar19;
  puVar19 = (uint *)0x0;
  if (uVar22 != 0) {
    puVar19 = puVar28;
  }
  puVar28 = puVar28 + uVar22 * 2;
  uVar8 = *puVar28;
  puVar28 = (uint *)((long)(puVar28 + 1) + ((ulong)(uint)-(int)(puVar28 + 1) & 0xf));
  puVar23 = puVar28 + 1;
  uVar9 = *puVar28;
  puVar28 = puVar23 + (ulong)uVar9 * 4;
  puVar2 = (uint *)0x0;
  if ((ulong)uVar9 != 0) {
    puVar2 = puVar23;
  }
  local_78 = puVar28;
  if (param_3 == (long *)0x0) {
    if (uVar9 != 0) {
      uVar29 = FUN_00400880();
      FUN_00400890(uVar29,4,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/Binary/SnBinaryDeserialization.cpp"
                   ,0x79,
                   "PxSerialization::createCollectionFromBinary: External references needed but no externalRefs collection specified."
                  );
      return (long *)0x0;
    }
  }
  else if (uVar9 != 0) {
    uVar22 = 0;
    do {
      uVar29 = *(undefined8 *)(puVar2 + uVar22 * 4);
      sVar11 = (short)(puVar2 + uVar22 * 4)[2];
      lVar13 = (**(code **)(*param_3 + 0x50))(param_3,uVar29);
      if (lVar13 == 0) {
        uVar15 = FUN_00400880();
        FUN_00400890(uVar15,4,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/Binary/SnBinaryDeserialization.cpp"
                     ,0x87,
                     "PxSerialization::createCollectionFromBinary: External reference %lu expected in externalRefs collection but not found."
                     ,uVar29);
        return (long *)0x0;
      }
      if (*(short *)(lVar13 + 8) != sVar11) {
        uVar29 = FUN_00400880();
        FUN_00400890(uVar29,4,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/Binary/SnBinaryDeserialization.cpp"
                     ,0x8c,
                     "PxSerialization::createCollectionFromBinary: External reference %d type mismatch. Expected %d but found %d in externalRefs collection."
                     ,sVar11,*(undefined2 *)(lVar13 + 8));
        return (long *)0x0;
      }
      uVar1 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar1;
    } while (uVar1 < uVar9);
  }
  fVar12 = DAT_01d4bdfc;
  puVar28 = (uint *)((long)puVar28 + ((ulong)(uint)-(int)puVar28 & 0xf));
  puVar23 = puVar28 + 1;
  uVar9 = *puVar28;
  uVar22 = (ulong)uVar9;
  puVar28 = puVar23;
  if (uVar22 == 0) {
    puVar28 = (uint *)0x0;
  }
  puVar23 = (uint *)((long)(puVar23 + uVar22 * 4) +
                    ((ulong)(uint)-(int)(puVar23 + uVar22 * 4) & 0xf));
  puVar20 = puVar23 + 1;
  uVar1 = *puVar23;
  uVar30 = (ulong)uVar1;
  puVar23 = (uint *)0x0;
  if (uVar30 != 0) {
    puVar23 = puVar20;
  }
  puVar20 = puVar20 + uVar30 * 4;
  uVar10 = *puVar20;
  uVar27 = (ulong)uVar10;
  local_80 = 0;
  iStack_7c = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  puVar24 = (uint *)0x0;
  if (uVar27 != 0) {
    puVar24 = puVar20 + 1;
  }
  local_78 = puVar20 + 1 + uVar27 * 3;
  local_90 = 0;
  uStack_88 = 0x3f400000;
  local_84 = 0xffffffff;
  if ((int)((float)(uVar1 + uVar10 + 1) * DAT_01d4bdfc) != 0) {
    FUN_002f52d0(&local_b0);
  }
  if (uVar1 != 0) {
    puVar23 = puVar23 + 2;
    do {
      lVar26 = *(long *)(puVar23 + -2);
      uVar18 = lVar26 + (lVar26 << 0x20 ^ 0xffffffffffffffffU);
      uVar4 = *puVar23;
      uVar5 = puVar23[1];
      uVar1 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
      uVar3 = (uVar1 ^ uVar1 >> 10) * 9;
      uVar3 = uVar3 ^ uVar3 >> 6;
      uVar18 = uVar18 ^ uVar18 >> 0x16;
      uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
      uVar18 = uVar18 + (uVar18 << 0xd ^ 0xffffffffffffffff);
      uVar18 = (uVar18 ^ uVar18 >> 8) * 9;
      uVar18 = uVar18 ^ uVar18 >> 0xf;
      uVar18 = uVar18 + (uVar18 << 0x1b ^ 0xffffffffffffffff);
      uVar1 = local_84 + 1;
      lVar13 = (ulong)((uVar3 ^ uVar3 >> 0x10 ^
                       ((uint)(uVar18 >> 0x1f) ^ (uint)uVar18 ^ 0xfc955b95) * 0xf4247) &
                      local_90._4_4_ - 1) * 4;
      *(undefined4 *)(local_a0 + (ulong)local_84 * 4) = *(undefined4 *)(lStack_98 + lVar13);
      uVar30 = uVar30 - 1;
      *(uint *)(lStack_98 + lVar13) = local_84;
      iStack_7c = iStack_7c + 1;
      local_80 = local_80 + 1;
      plVar16 = (long *)(local_a8 + (ulong)local_84 * 0x18);
      *plVar16 = lVar26;
      *(uint *)(plVar16 + 1) = uVar4;
      *(uint *)(plVar16 + 2) = uVar5;
      puVar23 = puVar23 + 4;
      local_84 = uVar1;
    } while (uVar30 != 0);
  }
  if (uVar10 != 0) {
    puVar24 = puVar24 + 1;
    do {
      uVar18 = (ulong)puVar24[-1];
      uVar3 = *puVar24;
      uVar1 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
      uVar10 = (uVar1 ^ uVar1 >> 10) * 9;
      uVar30 = (uVar18 << 0x20 ^ 0xffffffffffffffff) + uVar18;
      uVar30 = uVar30 ^ uVar30 >> 0x16;
      uVar10 = uVar10 ^ uVar10 >> 6;
      uVar10 = uVar10 + (uVar10 << 0xb ^ 0xffffffff);
      uVar30 = uVar30 + (uVar30 << 0xd ^ 0xffffffffffffffff);
      uVar30 = (uVar30 ^ uVar30 >> 8) * 9;
      uVar30 = uVar30 ^ uVar30 >> 0xf;
      uVar30 = uVar30 + (uVar30 << 0x1b ^ 0xffffffffffffffff);
      uVar1 = local_84 + 1;
      uVar4 = puVar24[1];
      puVar24 = puVar24 + 3;
      lVar13 = (ulong)((uVar10 ^ uVar10 >> 0x10 ^
                       ((uint)(uVar30 >> 0x1f) ^ (uint)uVar30 ^ 0xfc955b95) * 0xf4247) &
                      local_90._4_4_ - 1) * 4;
      *(undefined4 *)(local_a0 + (ulong)local_84 * 4) = *(undefined4 *)(lStack_98 + lVar13);
      uVar27 = uVar27 - 1;
      *(uint *)(lStack_98 + lVar13) = local_84;
      iStack_7c = iStack_7c + 1;
      local_80 = local_80 + 1;
      puVar17 = (ulong *)(local_a8 + (ulong)local_84 * 0x18);
      *puVar17 = uVar18;
      *(uint *)(puVar17 + 1) = uVar3;
      *(uint *)(puVar17 + 2) = uVar4;
      local_84 = uVar1;
    } while (uVar27 != 0);
  }
                    /* try { // try from 002f4e74 to 002f4ecb has its CatchHandler @ 002f5234 */
  plVar16 = (long *)FUN_002d05a0();
  if (*(uint *)((long)plVar16 + 100) < (int)((float)uVar7 * fVar12) + 1U) {
    FUN_002f54d0(plVar16 + 8);
  }
  if ((uVar9 != 0) && (*(uint *)((long)plVar16 + 0x2c) < (int)((float)uVar9 * fVar12) + 1U)) {
    FUN_002f5670(plVar16 + 1);
  }
  lVar13 = (long)local_78 + ((ulong)(uint)-(int)local_78 & 0xf);
  local_f0 = PTR_DAT_02712098 + 0x10;
  local_e8 = lVar13 + (ulong)uVar8 + ((ulong)(uint)-(int)(lVar13 + (ulong)uVar8) & 0xf);
  plStack_c8 = &local_b0;
  local_e0 = puVar19;
  puStack_d8 = puVar2;
  local_d0 = lVar13;
  local_c0 = param_3;
  local_b8 = uVar6;
  if (uVar7 != 0) {
    iVar31 = -uVar7;
    do {
      iVar31 = iVar31 + 1;
      local_e8 = local_e8 + 0xf & 0xfffffffffffffff0;
      local_78 = (uint *)((long)local_78 + ((ulong)(uint)-(int)local_78 & 0xf));
      uVar7 = local_78[2];
                    /* try { // try from 002f4f64 to 002f4f6f has its CatchHandler @ 002f5254 */
      plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2,(short)uVar7);
                    /* try { // try from 002f4f78 to 002f4f83 has its CatchHandler @ 002f5244 */
      lVar26 = (**(code **)(*plVar14 + 0x38))(plVar14,&local_78,&local_f0);
      if (lVar26 == 0) {
                    /* try { // try from 002f5160 to 002f5193 has its CatchHandler @ 002f5220 */
        uVar29 = FUN_00400880();
        FUN_00400890(uVar29,4,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/Binary/SnBinaryDeserialization.cpp"
                     ,0x115,"Cannot create class instance for concrete type %d.",(short)uVar7);
        (**(code **)(*plVar16 + 0x70))(plVar16);
        plVar16 = (long *)0x0;
        lVar13 = local_b0;
        goto joined_r0x002f519c;
      }
      uVar7 = *(uint *)((long)plVar16 + 0x6c);
      uVar30 = (lVar26 << 0x20 ^ 0xffffffffffffffffU) + lVar26;
      uVar30 = uVar30 ^ uVar30 >> 0x16;
      *(uint *)((long)plVar16 + 0x6c) = uVar7 + 1;
      uVar30 = uVar30 + (uVar30 << 0xd ^ 0xffffffffffffffff);
      uVar30 = (uVar30 ^ uVar30 >> 8) * 9;
      uVar30 = uVar30 ^ uVar30 >> 0xf;
      uVar30 = uVar30 + (uVar30 << 0x1b ^ 0xffffffffffffffff);
      lVar25 = plVar16[0xb];
      lVar21 = (ulong)(*(int *)((long)plVar16 + 100) - 1U & ((uint)(uVar30 >> 0x1f) ^ (uint)uVar30))
               * 4;
      *(undefined4 *)(plVar16[10] + (ulong)uVar7 * 4) = *(undefined4 *)(lVar25 + lVar21);
      *(uint *)(lVar25 + lVar21) = uVar7;
      *(int *)(plVar16 + 0xe) = (int)plVar16[0xe] + 1;
      *(int *)((long)plVar16 + 0x74) = *(int *)((long)plVar16 + 0x74) + 1;
      plVar14 = (long *)(plVar16[9] + (ulong)uVar7 * 0x10);
      *plVar14 = lVar26;
      plVar14[1] = 0;
    } while (iVar31 != 0);
  }
  if (uVar9 != 0) {
    uVar30 = 0;
    puVar28 = puVar28 + 2;
    do {
      local_f8 = lVar13 + (ulong)puVar19[((ulong)*puVar28 & 0x7fffffff) * 2];
      lVar25 = *(long *)(puVar28 + -2);
      uVar7 = *(uint *)((long)plVar16 + 0x34);
      *(uint *)((long)plVar16 + 0x34) = uVar7 + 1;
      uVar27 = lVar25 + (lVar25 << 0x20 ^ 0xffffffffffffffffU);
      uVar27 = uVar27 ^ uVar27 >> 0x16;
      uVar27 = uVar27 + (uVar27 << 0xd ^ 0xffffffffffffffff);
      uVar27 = (uVar27 ^ uVar27 >> 8) * 9;
      uVar27 = uVar27 ^ uVar27 >> 0xf;
      uVar27 = uVar27 + (uVar27 << 0x1b ^ 0xffffffffffffffff);
      lVar21 = plVar16[4];
      lVar26 = (ulong)(*(int *)((long)plVar16 + 0x2c) - 1U & ((uint)(uVar27 >> 0x1f) ^ (uint)uVar27)
                      ) * 4;
      *(undefined4 *)(plVar16[3] + (ulong)uVar7 * 4) = *(undefined4 *)(lVar21 + lVar26);
      *(uint *)(lVar21 + lVar26) = uVar7;
      *(int *)(plVar16 + 7) = (int)plVar16[7] + 1;
      *(int *)((long)plVar16 + 0x3c) = *(int *)((long)plVar16 + 0x3c) + 1;
      plVar14 = (long *)(plVar16[2] + (ulong)uVar7 * 0x10);
      *plVar14 = lVar25;
      plVar14[1] = local_f8;
                    /* try { // try from 002f50b4 to 002f50c3 has its CatchHandler @ 002f5264 */
      plVar14 = (long *)FUN_002f5810(plVar16 + 8,&local_f8,local_64);
      if (local_64[0] == '\0') {
        *plVar14 = local_f8;
        plVar14[1] = 0;
      }
      uVar30 = uVar30 + 1;
      puVar28 = puVar28 + 4;
      plVar14[1] = lVar25;
    } while (uVar30 < uVar22);
  }
                    /* try { // try from 002f50f4 to 002f50fb has its CatchHandler @ 002f5210 */
  FUN_001b4100(plVar16);
  lVar13 = local_b0;
joined_r0x002f519c:
  if (local_90._4_4_ != 0) {
    uVar22 = 0;
    do {
      for (uVar7 = *(uint *)(lStack_98 + uVar22 * 4); uVar7 != 0xffffffff;
          uVar7 = *(uint *)(local_a0 + (ulong)uVar7 * 4)) {
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != local_90._4_4_);
  }
  if (lVar13 != 0) {
    local_b0 = lVar13;
                    /* try { // try from 002f51d4 to 002f51e7 has its CatchHandler @ 002f5230 */
    plVar14 = (long *)FUN_00400d30();
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13);
  }
  return plVar16;
}



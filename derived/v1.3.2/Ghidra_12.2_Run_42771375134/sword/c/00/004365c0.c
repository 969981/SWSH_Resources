/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004365c0; name: FUN_004365c0
 */


void FUN_004365c0(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  char local_64 [4];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  uVar21 = nn::os::GetSystemTick();
  *(undefined8 *)(PTR_DAT_02712eb8 + 0x10) = uVar21;
  FUN_0042edb0(2);
  uVar20 = thunk_FUN_0047cea0();
  if (*PTR_DAT_02712ec0 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
LAB_004366cc:
    if (uVar20 != 0) goto LAB_004366d0;
    uVar20 = *(int *)(param_1 + 0x90) + 1;
    *(uint *)(param_1 + 0x90) = uVar20;
    uVar2 = 0;
    if (*(uint *)PTR_DAT_02712e58 != 0) {
      uVar2 = *(uint *)(PTR_DAT_02712b90 + 0x40) / *(uint *)PTR_DAT_02712e58;
    }
    if ((uVar20 <= uVar2) ||
       (((*PTR_DAT_02712ec8 != '\0' && ((*PTR_DAT_02712ed0 & 1) == 0)) ||
        (lVar23 = *(long *)(PTR_DAT_02712eb8 + 0x10),
        (float)(lVar23 - *(long *)(param_1 + 0x88)) / *(float *)PTR_DAT_02712db0 <=
        (float)*(uint *)(PTR_DAT_02712b90 + 0x40))))) {
      uVar20 = 0;
      fVar24 = DAT_01d4c6ac;
      puVar5 = PTR_DAT_02712b18;
      puVar6 = PTR_DAT_02712d20;
      puVar7 = PTR_DAT_02712dc0;
      puVar8 = PTR_DAT_02712dc8;
      puVar9 = PTR_DAT_02712ec8;
      puVar10 = PTR_DAT_02712ed8;
      puVar11 = PTR_DAT_02712ee0;
      goto joined_r0x00436724;
    }
    FUN_0047c380(1,1);
    uVar20 = 0;
    *(long *)(param_1 + 0x88) = lVar23;
  }
  else {
    if ((*PTR_DAT_02712ec8 == '\0') || ((*PTR_DAT_02712ed0 & 1) != 0)) {
      uVar2 = *(uint *)PTR_DAT_02712b38;
      uVar3 = *(ushort *)PTR_DAT_02712ac0;
      fVar24 = *(float *)(param_1 + 0x98) +
               ((float)(*(long *)(PTR_DAT_02712eb8 + 0x10) - *(long *)(param_1 + 0x88)) /
               *(float *)PTR_DAT_02712db0) * ((float)uVar2 / (float)uVar3) * DAT_01d4c6ac;
      uVar20 = (uint)fVar24;
      if (uVar20 != 0) {
        *(float *)(param_1 + 0x98) = fVar24 - (float)uVar20;
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      if (uVar20 <= uVar4) goto LAB_004366cc;
    }
    uVar20 = 1;
LAB_004366d0:
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(PTR_DAT_02712eb8 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  fVar24 = DAT_01d4c6ac;
  puVar5 = PTR_DAT_02712b18;
  puVar6 = PTR_DAT_02712d20;
  puVar7 = PTR_DAT_02712dc0;
  puVar8 = PTR_DAT_02712dc8;
  puVar9 = PTR_DAT_02712ec8;
  puVar10 = PTR_DAT_02712ed8;
  puVar11 = PTR_DAT_02712ee0;
joined_r0x00436724:
  do {
    puVar19 = PTR_DAT_02712ee0;
    puVar18 = PTR_DAT_02712ed8;
    puVar17 = PTR_DAT_02712ec8;
    puVar16 = PTR_DAT_02712dc8;
    puVar15 = PTR_DAT_02712dc0;
    puVar14 = PTR_DAT_02712d20;
    puVar13 = PTR_DAT_02712b18;
    fVar12 = DAT_01d4c6ac;
    DAT_01d4c6ac = fVar24;
    PTR_DAT_02712b18 = puVar5;
    PTR_DAT_02712d20 = puVar6;
    PTR_DAT_02712dc0 = puVar7;
    PTR_DAT_02712dc8 = puVar8;
    PTR_DAT_02712ec8 = puVar9;
    PTR_DAT_02712ed8 = puVar10;
    PTR_DAT_02712ee0 = puVar11;
    if (uVar20 != 0) {
      FUN_0042edb0(4);
    }
    local_64[0] = '\0';
    uVar22 = FUN_00436990(param_1,0,local_64);
    if (*puVar18 == '\0' && local_64[0] == '\0') {
LAB_00436888:
      FUN_00438020(param_1);
    }
    else {
      uVar20 = thunk_FUN_0047cea0();
      if (*PTR_DAT_02712ec0 == '\0') {
        *(undefined4 *)(param_1 + 0x98) = 0;
        FUN_00438020(param_1);
      }
      else {
        if ((*puVar17 != '\0') && ((*PTR_DAT_02712ed0 & 1) == 0)) {
          uVar20 = 1;
          goto LAB_00436888;
        }
        uVar2 = *(uint *)PTR_DAT_02712b38;
        uVar3 = *(ushort *)PTR_DAT_02712ac0;
        fVar24 = *(float *)(param_1 + 0x98) +
                 ((float)(*(long *)(PTR_DAT_02712eb8 + 0x10) - *(long *)(param_1 + 0x88)) /
                 *(float *)PTR_DAT_02712db0) * ((float)uVar2 / (float)uVar3) * fVar12;
        uVar20 = (uint)fVar24;
        if (uVar20 != 0) {
          *(float *)(param_1 + 0x98) = fVar24 - (float)uVar20;
        }
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        if (uVar4 < uVar20) {
          uVar20 = 1;
        }
        FUN_00438020(param_1);
      }
    }
    if ((uVar22 & 1) != 0) {
      FUN_0042edb0(8);
      FUN_0042c170();
      FUN_00499660(*(undefined8 *)puVar14);
    }
    if (*puVar19 != '\0') {
      FUN_00468290();
    }
    if (uVar20 == 0) {
      FUN_0042edb0(0x40);
      nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
      return;
    }
    FUN_0042edb0(0x10);
    iVar1 = *(int *)(param_1 + 0x78) + 1;
    FUN_004be620(*(undefined8 *)puVar13,iVar1);
    FUN_0048b0a0(*(undefined8 *)puVar16,iVar1);
    FUN_00468260();
    FUN_004789e0(*(undefined8 *)puVar15);
    thunk_FUN_004c8b00();
    FUN_004bfe80();
    FUN_0042edb0(0x20);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    uVar20 = uVar20 - 1;
    fVar24 = DAT_01d4c6ac;
    puVar5 = PTR_DAT_02712b18;
    puVar6 = PTR_DAT_02712d20;
    puVar7 = PTR_DAT_02712dc0;
    puVar8 = PTR_DAT_02712dc8;
    puVar9 = PTR_DAT_02712ec8;
    puVar10 = PTR_DAT_02712ed8;
    puVar11 = PTR_DAT_02712ee0;
    PTR_DAT_02712ee0 = puVar19;
    PTR_DAT_02712ed8 = puVar18;
    PTR_DAT_02712ec8 = puVar17;
    PTR_DAT_02712dc8 = puVar16;
    PTR_DAT_02712dc0 = puVar15;
    PTR_DAT_02712d20 = puVar14;
    PTR_DAT_02712b18 = puVar13;
    DAT_01d4c6ac = fVar12;
  } while( true );
}



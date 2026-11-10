/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004910f0; name: FUN_004910f0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_004910f0(long *param_1,uint *param_2,undefined4 param_3)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 local_64;
  uint *local_58;
  
  local_64 = param_3;
  local_58 = param_2;
  iVar11 = (**(code **)(*param_1 + 0x88))();
  if (iVar11 != 2) {
    uVar21 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar13 = param_1[2];
    uVar12 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar21,(int)lVar13,2,uVar12);
    return 0x5a;
  }
  local_58 = param_2 + 1;
  iVar11 = FUN_004854e0(param_1,&local_58,&local_64,0);
  if (iVar11 != 1) {
    return iVar11;
  }
  sVar7 = (short)*local_58;
  sVar8 = *(short *)((long)local_58 + 2);
  uVar19 = local_58[1];
  *(short *)((long)param_1 + 0xf4) = sVar7;
  sVar9 = 0;
  if (sVar7 != 0) {
    sVar9 = sVar8;
  }
  sVar8 = 0;
  if (sVar7 != 0) {
    sVar8 = (short)uVar19;
  }
  *(short *)((long)param_1 + 0xf6) = sVar9;
  *(short *)(param_1 + 0x1f) = sVar8;
  psVar1 = (short *)((long)local_58 + 0x16);
  uVar12 = *(undefined4 *)((long)local_58 + 6);
  uVar2 = *(undefined4 *)((long)local_58 + 10);
  uVar3 = *(undefined4 *)((long)local_58 + 0xe);
  sVar9 = *(short *)((long)local_58 + 0x12);
  bVar15 = (byte)local_58[5];
  bVar5 = *(byte *)((long)local_58 + 0x15);
  bVar6 = *(byte *)((long)local_58 + 0x17);
  local_58 = local_58 + 6;
  iVar11 = FUN_004914c0(param_1,*(undefined1 *)psVar1);
  if (iVar11 != 1) {
    return iVar11;
  }
  *(undefined4 *)(param_1 + 0x1d) = uVar12;
  *(undefined4 *)((long)param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  if (*(short *)((long)param_1 + 0xfa) == sVar9) {
    bVar16 = *(byte *)((long)param_1 + 0xfc);
    uVar19 = (uint)bVar16;
    if ((bVar16 & 0xf) == (uint)bVar15) goto LAB_004911f8;
LAB_00491384:
    *(byte *)((long)param_1 + 0xfc) = bVar16 & 0xf0 | bVar15 & 0xf;
    FUN_00493260(param_1);
    bVar15 = *(byte *)((long)param_1 + 0xfc);
    uVar19 = (uint)(bVar15 >> 4);
  }
  else {
    *(short *)((long)param_1 + 0xfa) = sVar9;
    FUN_00493260(param_1);
    bVar16 = *(byte *)((long)param_1 + 0xfc);
    uVar19 = (uint)bVar16;
    if ((uVar19 & 0xf) != (uint)bVar15) goto LAB_00491384;
LAB_004911f8:
    bVar15 = (byte)uVar19;
    uVar19 = uVar19 >> 4;
  }
  if ((uVar19 & 3) != (uint)bVar5) {
    *(byte *)((long)param_1 + 0xfc) = bVar15 & 0xcf | (byte)((bVar5 & 3) << 4);
    FUN_00493260(param_1);
  }
  uVar10 = *(ushort *)((long)param_1 + 0xfd);
  uVar19 = bVar6 & 8;
  if ((bVar6 & 2) >> 1 != (uVar10 >> 4 & 1)) {
    *(ushort *)((long)param_1 + 0xfd) = uVar10 & 0xffef | (ushort)((bVar6 & 2) << 3);
    FUN_00493260(param_1);
    uVar10 = *(ushort *)((long)param_1 + 0xfd);
  }
  uVar18 = (bVar6 >> 2 & 1) << 5;
  uVar17 = uVar10 & 0xffdf | uVar18;
  uVar22 = bVar6 & 0x10;
  *(ushort *)((long)param_1 + 0xfd) = uVar17;
  if (uVar19 >> 3 == (uVar10 >> 6 & 1)) {
    if (uVar22 >> 4 != (uVar10 >> 7 & 1)) {
LAB_004913d4:
      *(ushort *)((long)param_1 + 0xfd) = uVar17 & 0xff7f | (ushort)(uVar22 << 3);
      FUN_00493260(param_1);
      uVar19 = *local_58;
      goto joined_r0x00491290;
    }
  }
  else {
    *(ushort *)((long)param_1 + 0xfd) = uVar10 & 0xff9f | uVar18 | (ushort)(uVar19 << 3);
    FUN_00493260(param_1);
    uVar17 = *(ushort *)((long)param_1 + 0xfd);
    if (uVar22 >> 4 != (uVar17 >> 7 & 1)) goto LAB_004913d4;
  }
  uVar19 = *local_58;
joined_r0x00491290:
  local_58 = local_58 + 1;
  if (uVar19 == 0) {
    uVar10 = (ushort)*local_58;
  }
  else {
    lVar13 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar19 << 3);
    param_1[0x17] = lVar13;
    if (lVar13 == 0) {
      return 0x34;
    }
    uVar22 = 0;
    *(uint *)((long)param_1 + 0xc4) = uVar19;
    do {
      uVar4 = *local_58;
      local_58 = local_58 + 1;
      iVar11 = (**(code **)(*param_1 + 0x58))(param_1,uVar4);
      if (iVar11 != 0xf && iVar11 != 1) {
        return iVar11;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar19);
    if (iVar11 != 1) {
      return iVar11;
    }
    uVar10 = (ushort)*local_58;
  }
  if (uVar10 != 0) {
    local_58 = (uint *)((long)local_58 + 2);
    uVar19 = 1;
    while( true ) {
      puVar20 = local_58 + 2;
      uVar4 = *local_58;
      uVar22 = local_58[1];
      uVar18 = *(ushort *)((long)param_1 + 0xfd);
      if (uVar22 != 50000) {
        uVar18 = uVar18 | 8;
        *(ushort *)((long)param_1 + 0xfd) = uVar18;
      }
      local_58 = puVar20;
      if (((uVar18 & 7) != 1) &&
         (uVar14 = (**(code **)(*(long *)param_1[0x19] + 0x48))((long *)param_1[0x19],uVar4),
         (uVar14 & 1) != 0)) {
        return 0x23;
      }
      iVar11 = (**(code **)(*(long *)param_1[0x19] + 0x30))((long *)param_1[0x19],uVar4,uVar22);
      if (iVar11 != 0xf) {
        if (iVar11 != 1) {
          return iVar11;
        }
        FUN_00493260(param_1);
      }
      if (uVar10 <= uVar19) break;
      uVar19 = uVar19 + 1;
    }
  }
  return 1;
}



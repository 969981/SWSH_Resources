/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061c3a0; name: FUN_0061c3a0
 */


int FUN_0061c3a0(long param_1,ushort param_2,undefined8 *param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  int local_34;
  
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  local_34 = 0;
  uVar2 = *(ushort *)(param_1 + 0x230);
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x248);
    uVar6 = 0xffffffff;
    bVar3 = false;
    uVar8 = 0xffffffff;
    puVar11 = (ushort *)(lVar5 + 4);
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    uVar7 = 0;
LAB_0061c3f8:
    uVar1 = uVar9;
    if ((puVar11[1] != param_2) || (puVar11[2] == 0)) goto switchD_0061c420_default;
    switch(puVar11[-2]) {
    case 0:
    case 2:
      uVar6 = uVar7;
      goto joined_r0x0061c4b4;
    case 1:
      goto switchD_0061c420_caseD_1;
    case 3:
      if ((((uVar8 == 0xffffffff) || ((*puVar11 & 0x3ff) == 9)) && (puVar11[-1] < 0xb)) &&
         ((1 << (ulong)(puVar11[-1] & 0x1f) & 0x403U) != 0)) {
        bVar3 = (*puVar11 & 0x3ff) == 9;
        uVar8 = uVar7;
      }
    default:
switchD_0061c420_default:
joined_r0x0061c4b4:
      uVar9 = uVar1;
      puVar11 = puVar11 + 0x10;
      uVar7 = uVar7 + 1;
      if (uVar2 <= uVar7) goto LAB_0061c4d0;
      goto LAB_0061c3f8;
    }
  }
  goto LAB_0061c5e0;
switchD_0061c420_caseD_1:
  if (*puVar11 != 0) {
    uVar1 = uVar7;
    if (puVar11[-1] != 0) {
      uVar1 = uVar9;
    }
    goto joined_r0x0061c4b4;
  }
  uVar1 = uVar7 + 1;
  puVar11 = puVar11 + 0x10;
  uVar10 = uVar7;
  uVar7 = uVar1;
  if (uVar2 <= uVar1) goto LAB_0061c4d0;
  goto LAB_0061c3f8;
LAB_0061c4d0:
  if ((int)uVar10 < 0) {
    uVar10 = uVar9;
  }
  if ((int)uVar8 < 0) {
    if (-1 < (int)uVar10) {
LAB_0061c53c:
      lVar5 = lVar5 + (long)(int)uVar10 * 0x20;
      pcVar14 = FUN_0061dfd0;
      goto joined_r0x0061c518;
    }
    if (-1 < (int)uVar6) {
      lVar5 = lVar5 + (long)(int)uVar6 * 0x20;
      pcVar14 = FUN_0061df10;
      if (lVar5 == 0) goto LAB_0061c5e0;
      goto LAB_0061c51c;
    }
  }
  else {
    if ((-1 < (int)uVar10) && (!bVar3)) goto LAB_0061c53c;
    lVar5 = lVar5 + (long)(int)uVar8 * 0x20;
    uVar4 = 0;
    if ((10 < *(ushort *)(lVar5 + 2)) ||
       ((1 << (ulong)(*(ushort *)(lVar5 + 2) & 0x1f) & 0x403U) == 0)) goto LAB_0061c5e4;
    pcVar14 = FUN_0061df10;
joined_r0x0061c518:
    if (lVar5 != 0) {
LAB_0061c51c:
      if (*(long *)(lVar5 + 0x18) == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x260);
        uVar4 = FUN_006029c0(uVar12,1,0,*(undefined2 *)(lVar5 + 8),0,&local_34);
        *(undefined8 *)(lVar5 + 0x18) = uVar4;
        if (((local_34 != 0) ||
            (local_34 = FUN_006069e0(uVar13,*(undefined8 *)(lVar5 + 0x10)), local_34 != 0)) ||
           (local_34 = FUN_00606a60(uVar13,*(undefined8 *)(lVar5 + 0x18),*(undefined2 *)(lVar5 + 8))
           , local_34 != 0)) {
          FUN_006028c0(uVar12,*(undefined8 *)(lVar5 + 0x18));
          uVar4 = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined2 *)(lVar5 + 8) = 0;
          goto LAB_0061c5e4;
        }
      }
      uVar4 = (*pcVar14)(lVar5,uVar12);
      goto LAB_0061c5e4;
    }
  }
LAB_0061c5e0:
  uVar4 = 0;
LAB_0061c5e4:
  *param_3 = uVar4;
  return local_34;
}



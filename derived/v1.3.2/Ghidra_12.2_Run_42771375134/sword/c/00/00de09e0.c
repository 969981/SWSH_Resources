/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de09e0; name: FUN_00de09e0
 */


void FUN_00de09e0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  plVar8 = (long *)(param_1 + 8);
  puVar12 = (undefined8 *)*plVar8;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar12;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar11 = (undefined8 *)(param_1 + 0x40);
  *puVar11 = 0;
  puVar9 = (undefined8 *)(param_1 + 0x60);
  *puVar9 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar6 = *(int *)((long)param_2 + 0xc);
  *(int *)(param_1 + 0x84) = iVar6;
  cVar3 = (char)param_2[2];
  *(char *)(param_1 + 0x88) = cVar3;
  if (iVar6 == 1) {
    iVar6 = (int)param_2[1];
    if (iVar6 < 3) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      goto LAB_00de0a64;
    }
LAB_00de0a70:
    puVar4 = PTR_DAT_02710860;
    lVar13 = 0;
    lVar14 = 1;
    while( true ) {
      local_70 = 0;
      local_78 = ((undefined8 *)(*param_2 + lVar13))[1];
      local_80 = *(undefined8 *)(*param_2 + lVar13);
      if (puVar12 == *(undefined8 **)(param_1 + 0x18)) {
        FUN_00de1490(plVar8,&local_80);
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00de0cd4;
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        puVar12[3] = local_68;
        puVar12[1] = local_78;
        puVar12[2] = CONCAT44(uStack_6c,local_70);
        *puVar12 = local_80;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x20;
      }
      if (iVar6 <= lVar14) break;
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      lVar13 = lVar13 + 0x10;
      lVar14 = lVar14 + 1;
    }
    cVar3 = *(char *)(param_1 + 0x88);
  }
  else {
LAB_00de0a64:
    iVar6 = (int)param_2[1];
    if (0 < iVar6) goto LAB_00de0a70;
  }
  if (cVar3 != '\0') {
    local_70 = 0;
    local_78 = ((undefined8 *)*param_2)[1];
    local_80 = *(undefined8 *)*param_2;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    if (puVar12 == *(undefined8 **)(param_1 + 0x18)) {
      FUN_00de1490(plVar8,&local_80);
      iVar6 = *(int *)(param_1 + 0x84);
      goto joined_r0x00de0bd8;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00de0cd4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    puVar12[3] = local_68;
    puVar12[1] = local_78;
    puVar12[2] = CONCAT44(uStack_6c,local_70);
    *puVar12 = local_80;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x20;
  }
  iVar6 = *(int *)(param_1 + 0x84);
joined_r0x00de0bd8:
  if (iVar6 == 1) {
    puVar12 = *(undefined8 **)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x10) - (long)puVar12;
    uVar7 = lVar13 >> 5;
    if (*(char *)(param_1 + 0x88) == '\0') {
      if ((lVar13 == 0) || (uVar7 < 2)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar15 = puVar12[1];
      uVar10 = *puVar12;
      uVar18 = puVar12[5];
      uVar16 = puVar12[4];
      puVar1 = puVar12 + (uVar7 - 1) * 4;
      uVar19 = puVar1[1];
      uVar17 = *puVar1;
      uVar21 = puVar12[uVar7 * 4 + -7];
      uVar20 = puVar12[uVar7 * 4 + -8];
      uVar2 = *(undefined4 *)(puVar12 + 2);
      *(undefined8 *)(param_1 + 0x48) = puVar12[1];
      *puVar11 = *puVar12;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(ulong *)(param_1 + 0x48) =
           CONCAT44(((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar18 >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                    ((float)uVar15 - (float)uVar18) + (float)*(undefined8 *)(param_1 + 0x48));
      *puVar11 = CONCAT44(((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar16 >> 0x20)) +
                          (float)((ulong)*puVar11 >> 0x20),
                          ((float)uVar10 - (float)uVar16) + (float)*puVar11);
      uVar2 = *(undefined4 *)(puVar1 + 2);
      *(undefined8 *)(param_1 + 0x68) = puVar1[1];
      *puVar9 = *puVar1;
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      *(ulong *)(param_1 + 0x68) =
           CONCAT44(((float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar21 >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                    ((float)uVar19 - (float)uVar21) + (float)*(undefined8 *)(param_1 + 0x68));
      *puVar9 = CONCAT44(((float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar20 >> 0x20)) +
                         (float)((ulong)*puVar9 >> 0x20),
                         ((float)uVar17 - (float)uVar20) + (float)*puVar9);
    }
    else {
      uVar10 = puVar12[uVar7 * 4 + -8];
      uVar15 = puVar12[uVar7 * 4 + -7];
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar12 + uVar7 * 4 + -6);
      *puVar11 = uVar10;
      *(undefined8 *)(param_1 + 0x48) = uVar15;
      uVar10 = puVar12[4];
      uVar15 = puVar12[5];
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(puVar12 + 6);
      *puVar9 = uVar10;
      *(undefined8 *)(param_1 + 0x68) = uVar15;
    }
  }
  FUN_00de0dc0(param_1);
  return;
}



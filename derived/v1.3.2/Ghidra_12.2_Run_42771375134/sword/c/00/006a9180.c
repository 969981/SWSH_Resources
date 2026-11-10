/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9180; name: FUN_006a9180
 */


/* WARNING: Removing unreachable block (ram,0x006a93f0) */
/* WARNING: Removing unreachable block (ram,0x006a92a4) */
/* WARNING: Removing unreachable block (ram,0x006a9454) */

void FUN_006a9180(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar6 = PTR_PTR_02715108;
  lVar9 = *(long *)(param_2 + 0x18);
  puVar5 = PTR_PTR_02715108;
  for (lVar13 = *(long *)(param_2 + 0x10); PTR_PTR_02715108 = puVar5, lVar13 != lVar9;
      lVar13 = lVar13 + 0x10) {
    if ((ulong)((*(long *)(param_3 + 0x10) - *(long *)(param_3 + 8) >> 2) * -0x5555555555555555) <=
        (ulong)*(uint *)(lVar13 + 8)) goto LAB_006a94ac;
    puVar12 = (uint *)(*(long *)(param_3 + 8) + (ulong)*(uint *)(lVar13 + 8) * 0xc);
    local_64 = 0;
    if (*(char *)(lVar13 + 0xc) != '\0') {
      local_64 = 0x3f800000;
    }
    pcVar8 = *(code **)(puVar6 + (ulong)*puVar12 * 0x10);
    uVar16 = *(ulong *)((long)(puVar6 + (ulong)*puVar12 * 0x10) + 8);
    plVar1 = (long *)((long)puVar12 + ((long)uVar16 >> 1));
    if ((uVar16 & 1) != 0) {
      pcVar8 = *(code **)(pcVar8 + *plVar1);
    }
    (*pcVar8)(param_1,plVar1,&local_64);
    puVar5 = PTR_PTR_02715108;
  }
  lVar13 = *(long *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x48) == lVar13) {
    return;
  }
  lVar9 = 0;
  uVar16 = 0;
  while( true ) {
    bVar2 = *(byte *)(lVar13 + uVar16);
    if (bVar2 != 0) break;
    uVar16 = uVar16 + 1;
    lVar9 = lVar9 + -8;
    if ((ulong)(*(long *)(param_2 + 0x48) - lVar13) <= uVar16) {
      return;
    }
  }
  uVar11 = (uint)bVar2 & -(uint)bVar2;
  if (uVar11 == 1) {
    lVar13 = 0;
    if (lVar9 == 1) {
      return;
    }
  }
  else {
    iVar14 = 0;
    iVar15 = 4;
    do {
      uVar3 = (uVar11 & 0xff) >> iVar15;
      iVar4 = 0;
      if ((uVar3 & 0xff) != 0) {
        uVar11 = uVar3;
        iVar4 = iVar15;
      }
      iVar15 = iVar15 >> 1;
      iVar14 = iVar4 + iVar14;
    } while ((uVar11 & 0xff) != 1);
    lVar13 = (long)iVar14;
    if (lVar13 + 1 == lVar9) {
      return;
    }
  }
  uVar16 = lVar13 - lVar9;
LAB_006a92fc:
  do {
    if ((ulong)((*(long *)(param_3 + 0x10) - *(long *)(param_3 + 8) >> 2) * -0x5555555555555555) <=
        (uVar16 & 0xffffffff)) {
LAB_006a94ac:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar12 = (uint *)(*(long *)(param_3 + 8) + (uVar16 & 0xffffffff) * 0xc);
    local_68 = 0x3f800000;
    pcVar8 = *(code **)(puVar5 + (ulong)*puVar12 * 0x10);
    uVar10 = *(ulong *)((long)(puVar5 + (ulong)*puVar12 * 0x10) + 8);
    plVar1 = (long *)((long)puVar12 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar8 = *(code **)(pcVar8 + *plVar1);
    }
    (*pcVar8)(param_1,plVar1,&local_68);
    if (*(long *)(param_2 + 0x70) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x70) - 1U <= uVar16) {
      return;
    }
    lVar13 = *(long *)(param_2 + 0x40);
    uVar10 = uVar16 + 1;
    uVar18 = uVar10 >> 3;
    bVar2 = *(byte *)(lVar13 + uVar18) >> (ulong)((uint)uVar10 & 7);
    if (bVar2 == 0) {
      uVar16 = uVar18 + 1;
      uVar17 = *(long *)(param_2 + 0x48) - lVar13;
      if (uVar17 <= uVar16) {
        return;
      }
      uVar10 = uVar18 * 8;
      while( true ) {
        uVar10 = uVar10 + 8;
        bVar2 = *(byte *)(lVar13 + uVar16);
        if (bVar2 != 0) break;
        uVar16 = uVar16 + 1;
        if (uVar17 <= uVar16) {
          return;
        }
      }
      uVar11 = (uint)bVar2 & -(uint)bVar2;
      uVar16 = uVar10;
      if (uVar11 != 1) {
        iVar14 = 0;
        iVar15 = 4;
        do {
          uVar3 = (uVar11 & 0xff) >> iVar15;
          iVar4 = 0;
          if ((uVar3 & 0xff) != 0) {
            uVar11 = uVar3;
            iVar4 = iVar15;
          }
          iVar15 = iVar15 >> 1;
          iVar14 = iVar4 + iVar14;
        } while ((uVar11 & 0xff) != 1);
        goto LAB_006a947c;
      }
    }
    else {
      uVar11 = -(uint)bVar2 & (uint)bVar2;
      if (uVar11 == 1) {
        bVar7 = uVar16 == 0xfffffffffffffffe;
        uVar16 = uVar10;
        if (bVar7) {
          return;
        }
        goto LAB_006a92fc;
      }
      iVar14 = 0;
      iVar15 = 4;
      do {
        uVar3 = (uVar11 & 0xff) >> iVar15;
        iVar4 = 0;
        if ((uVar3 & 0xff) != 0) {
          uVar11 = uVar3;
          iVar4 = iVar15;
        }
        iVar15 = iVar15 >> 1;
        iVar14 = iVar4 + iVar14;
      } while ((uVar11 & 0xff) != 1);
LAB_006a947c:
      uVar16 = (long)iVar14 + uVar10;
    }
    if (uVar16 == 0xffffffffffffffff) {
      return;
    }
  } while( true );
}



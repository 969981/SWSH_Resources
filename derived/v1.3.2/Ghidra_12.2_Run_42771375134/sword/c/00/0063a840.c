/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063a840; name: FUN_0063a840
 */


void FUN_0063a840(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_02714488;
  if (*(long *)(param_1 + 0x1b0) == 0) {
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    do {
      while( true ) {
        lVar11 = *(long *)(param_1 + 0x1c8);
        iVar5 = (**(code **)puVar3)(lVar11 + uVar13 * 0x50 + 0x10,0);
        if (iVar5 == 0) break;
        uVar12 = *(ulong *)(param_1 + 0x1b0);
        uVar13 = uVar13 + 1;
        if (uVar12 <= uVar13) goto LAB_0063a990;
      }
      plVar10 = (long *)(lVar11 + uVar13 * 0x50);
      plVar6 = (long *)*plVar10;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
        *plVar10 = 0;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x48))
                (*(long **)(param_1 + 8),*(undefined8 *)(lVar11 + uVar13 * 0x50 + 8),
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                 ,0x16f);
      uVar12 = *(ulong *)(param_1 + 0x1b0);
      if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("iIndex<m_itemCount","../../../../Include\\SiCore/SiCore_Array.h",0x3ef,
                      "RemoveByIndex");
      }
      lVar11 = uVar13 + 1;
      if (lVar11 < (long)uVar12) {
        lVar14 = uVar13 * 0x50;
        do {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar14);
          lVar11 = lVar11 + 1;
          lVar14 = lVar14 + 0x50;
          *puVar1 = puVar1[10];
          puVar1[1] = puVar1[0xb];
          puVar1[4] = puVar1[0xe];
          puVar1[5] = puVar1[0xf];
          puVar1[2] = puVar1[0xc];
          puVar1[3] = puVar1[0xd];
          puVar1[8] = puVar1[0x12];
          puVar1[9] = puVar1[0x13];
          puVar1[6] = puVar1[0x10];
          puVar1[7] = puVar1[0x11];
          uVar12 = *(ulong *)(param_1 + 0x1b0);
        } while (lVar11 < (long)uVar12);
      }
      uVar12 = uVar12 - 1;
      *(ulong *)(param_1 + 0x1b0) = uVar12;
      if (uVar12 == 0) {
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        break;
      }
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1c8);
      *(ulong *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1c8) + uVar12 * 0x50;
    } while (uVar13 < uVar12);
  }
LAB_0063a990:
  puVar4 = PTR_DAT_02714730;
  puVar3 = PTR_DAT_02714478;
  if (*(long *)(param_1 + 0x160) == 0) {
LAB_0063ab0c:
    uVar8 = (**(code **)PTR_DAT_027146f0)(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    return;
  }
  plVar6 = (long *)(param_1 + 0x178);
  lVar11 = 0;
  lVar14 = uVar12 * 0x50;
  uVar13 = 1;
  uVar9 = *(long *)(param_1 + 0x160) + uVar12;
  if (uVar12 == uVar9) goto LAB_0063aa44;
  do {
    if ((uVar9 < *(ulong *)(param_1 + 0x1b8)) ||
       (uVar7 = FUN_0063adc0(param_1 + 0x1a0,uVar9,1), (uVar7 & 1) != 0)) {
      *(ulong *)(param_1 + 0x1b0) = uVar9;
      if (uVar9 == 0) goto LAB_0063aa40;
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1c8);
      *(ulong *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1c8) + uVar9 * 0x50;
    }
    else {
      *(undefined8 *)(param_1 + 0x1b0) = 0;
LAB_0063aa40:
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
LAB_0063aa44:
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x178) + lVar11);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      uVar8 = (**(code **)(**(long **)(param_1 + 0x18) + 0x2a8))();
      (**(code **)puVar3)(puVar2 + 2,uVar8);
      (**(code **)puVar4)(*(undefined8 *)(param_1 + 0x88),puVar2 + 2,0,1);
      if (*(ulong *)(param_1 + 0x160) <= uVar13) {
        if (((*(byte *)(param_1 + 0x198) & 1) == 0) && (lVar11 = *plVar6, lVar11 != 0)) {
          plVar10 = *(long **)(param_1 + 0x158);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x50))(plVar10,lVar11);
            (**(code **)(*plVar10 + 0x48))
                      (plVar10,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *plVar6 = 0;
        }
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *plVar6 = 0;
        goto LAB_0063ab0c;
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + 0x50;
      uVar9 = *(ulong *)(param_1 + 0x160) + uVar12;
    } while (*(ulong *)(param_1 + 0x1b0) == uVar9);
  } while( true );
}



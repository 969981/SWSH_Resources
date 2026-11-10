/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468450; name: FUN_00468450
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00468450(void)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  
  puVar4 = PTR_DAT_02713108;
  puVar3 = PTR_DAT_02712e28;
  plVar10 = *(long **)PTR_DAT_02713108;
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
      lVar2 = plVar10[2];
      bVar14 = false;
      plVar11 = plVar10 + 1;
      plVar8 = plVar10;
      plVar12 = plVar13;
      do {
        while( true ) {
          plVar7 = plVar8;
          if ((int)lVar2 != (int)plVar7[2]) goto LAB_00468534;
          if (((*(ushort *)((long)plVar7 + 0x14) & 0x1fe) == 0) &&
             ((lVar6 = plVar7[1], (*(uint *)(lVar6 + 0x26b) >> 0xc & 1) == 0 ||
              (*(int *)(lVar6 + 0x2b8) != -1)))) break;
          plVar8 = (long *)*plVar7;
joined_r0x00468530:
          plVar12 = plVar7;
          if (plVar8 == (long *)0x0) goto LAB_00468534;
        }
        if (*(long *)(lVar6 + 0x200) == 0) {
LAB_004685ac:
          plVar10 = (long *)puVar4;
          if (*(long **)puVar4 != plVar7) {
            plVar10 = plVar12;
          }
          *plVar10 = *plVar7;
          if (*(long **)(puVar4 + 8) == plVar7) {
            *(long **)(puVar4 + 8) = plVar12;
            plVar10 = *(long **)(puVar4 + 0x18);
            if (plVar10 <= plVar7) goto LAB_0046860c;
LAB_00468630:
            FUN_00404870(*(undefined4 *)puVar3,plVar7);
          }
          else {
            plVar10 = *(long **)(puVar4 + 0x18);
            if (plVar7 < plVar10) goto LAB_00468630;
LAB_0046860c:
            if (plVar10 + (ulong)*(uint *)(puVar4 + 0x20) * 3 <= plVar7) goto LAB_00468630;
            *plVar7 = *(long *)(puVar4 + 0x10);
            *(long **)(puVar4 + 0x10) = plVar7;
          }
          *(int *)(puVar4 + 0x24) = *(int *)(puVar4 + 0x24) + -1;
          plVar11 = *(long **)puVar4;
          plVar13 = (long *)0x0;
          goto joined_r0x00468650;
        }
        iVar5 = FUN_004c6920();
        if (iVar5 == 0x3f) {
          bVar14 = true;
          plVar8 = (long *)*plVar7;
          goto joined_r0x00468530;
        }
        if (iVar5 == 2) goto LAB_004685ac;
        *(ushort *)((long)plVar7 + 0x14) = *(ushort *)((long)plVar7 + 0x14) | 0x100;
        plVar8 = (long *)*plVar7;
        plVar12 = plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
LAB_00468534:
      if (bVar14) {
        do {
          plVar13 = plVar10;
          plVar10 = (long *)*plVar13;
          if (plVar10 == (long *)0x0) {
            return;
          }
          plVar11 = plVar10;
        } while ((int)lVar2 == (int)plVar10[2]);
        goto joined_r0x00468650;
      }
      uVar1 = *(ushort *)((long)plVar10 + 0x14);
      if ((uVar1 >> 8 & 1) == 0) {
        if ((uVar1 & 0xfe) == 0) {
          plVar8 = (long *)0x0;
          goto joined_r0x0046865c;
        }
        plVar8 = (long *)FUN_004c5f00(plVar11);
        if (plVar8 != (long *)0x0) {
          uVar1 = *(ushort *)((long)plVar10 + 0x14);
          goto joined_r0x0046865c;
        }
        goto switchD_0046859c_default;
      }
      plVar8 = *(long **)(*plVar11 + 0x200);
joined_r0x0046865c:
      if ((uVar1 >> 8 & 1) == 0) {
        plVar11 = (long *)*plVar10;
        plVar13 = plVar10;
        goto joined_r0x00468650;
      }
      switch(uVar1 & 0xff) {
      case 0:
        FUN_004da6e0(plVar8);
        break;
      case 1:
        FUN_004da6e0(plVar8);
      case 2:
        pcVar9 = *(code **)(*plVar8 + 0x98);
        goto LAB_004686a4;
      case 3:
        pcVar9 = *(code **)(*plVar8 + 0xa0);
        goto LAB_004686a4;
      case 4:
        (**(code **)(*plVar8 + 0xa8))(plVar8,*plVar11);
        break;
      case 5:
        pcVar9 = *(code **)(*plVar8 + 0xb0);
LAB_004686a4:
        (*pcVar9)(plVar8);
      }
switchD_0046859c_default:
      plVar11 = (long *)*plVar10;
      plVar8 = (long *)puVar4;
      if (*(long **)puVar4 != plVar10) {
        plVar8 = plVar13;
      }
      *plVar8 = (long)plVar11;
      if (*(long **)(puVar4 + 8) == plVar10) {
        *(long **)(puVar4 + 8) = plVar13;
        plVar8 = *(long **)(puVar4 + 0x18);
        if (plVar8 <= plVar10) goto LAB_004686ec;
LAB_00468710:
        FUN_00404870(*(undefined4 *)puVar3,plVar10);
      }
      else {
        plVar8 = *(long **)(puVar4 + 0x18);
        if (plVar10 < plVar8) goto LAB_00468710;
LAB_004686ec:
        if (plVar8 + (ulong)*(uint *)(puVar4 + 0x20) * 3 <= plVar10) goto LAB_00468710;
        *plVar10 = *(long *)(puVar4 + 0x10);
        *(long **)(puVar4 + 0x10) = plVar10;
      }
      *(int *)(puVar4 + 0x24) = *(int *)(puVar4 + 0x24) + -1;
joined_r0x00468650:
      plVar10 = plVar11;
    } while (plVar10 != (long *)0x0);
  }
  return;
}



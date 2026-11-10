/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042f060; name: FUN_0042f060
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0042f060(void *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_02712d88;
  puVar2 = PTR_DAT_02712d80;
  *(undefined4 *)PTR_DAT_02712d78 = 3;
  *(undefined4 *)puVar2 = 3;
  *(undefined4 *)puVar3 = 3;
  *(undefined8 *)PTR_DAT_02712d90 = 0;
  uVar6 = FUN_00404590();
  puVar2 = PTR_DAT_02712b90;
  if ((uVar6 & 1) == 0) {
    return 0x4a;
  }
  if (*(long *)PTR_DAT_02712d98 == 0) {
    return 0x4b;
  }
  if (param_1 == (void *)0x0) {
    *(undefined8 *)PTR_DAT_02712b90 = 0;
    *(undefined8 *)(puVar2 + 8) = 0x1000000000000ff;
    *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
    puVar2[0x1c] = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0x400003f800000;
    *(undefined8 *)(puVar2 + 0x20) = 0x40000000001;
    *(undefined8 *)(puVar2 + 0x28) = 0x1000000040000;
    *(undefined2 *)(puVar2 + 0x44) = 0x101;
    *(undefined4 *)(puVar2 + 0x40) = 1000;
    thunk_FUN_00468bb0(puVar2 + 0x30);
    lVar10 = *(long *)PTR_DAT_02712b90;
    puVar2 = PTR_DAT_02712b90;
  }
  else {
    memcpy(PTR_DAT_02712b90,param_1,0x60);
    lVar10 = *(long *)PTR_DAT_02712b90;
    puVar2 = PTR_DAT_02712b90;
  }
  PTR_DAT_02712b90 = puVar2;
  if (lVar10 != 0) {
    *(long *)PTR_PTR_02712da0 = lVar10;
  }
  FUN_00468aa0(param_2);
  puVar3 = PTR_DAT_02712a90;
  if ((DAT_02737d70 & 1) != 0) {
    return 2;
  }
  if (*(int *)PTR_DAT_02712a90 == -1) {
    uVar11 = *(uint *)(puVar2 + 0xc);
    if (uVar11 < 0x41) {
      uVar11 = 0x1000000;
    }
    iVar5 = FUN_00405500(0,uVar11,0x40,1,0);
    puVar4 = PTR_PTR_02712da8;
    *(int *)puVar3 = iVar5;
    *(int *)(puVar4 + 8) = iVar5;
    if (iVar5 == -1) {
      iVar5 = 0x34;
      goto joined_r0x0042f72c;
    }
  }
  lVar10 = nn::os::GetSystemTickFrequency();
  *(float *)PTR_DAT_02712db0 = (float)(lVar10 / 1000);
  puVar4 = PTR_DAT_02712b50;
  puVar7 = (undefined8 *)PTR_DAT_02712ae8;
  if (*(long *)PTR_DAT_02712ae8 == 0) {
    pvVar9 = (void *)FUN_00404690(*(undefined4 *)puVar3,0x310);
    if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar9,0,0x310);
    }
LAB_0042f678:
    *puVar7 = 0;
    iVar5 = 0x34;
    goto joined_r0x0042f670;
  }
  if (*(long *)PTR_DAT_02712b50 == 0) {
    lVar10 = FUN_00404690(*(undefined4 *)puVar3,0xc0);
    puVar7 = (undefined8 *)puVar4;
    if (lVar10 == 0) goto LAB_0042f678;
    FUN_0049a970(lVar10);
    *(long *)puVar4 = lVar10;
    iVar5 = FUN_0049a9c0(lVar10);
    if (iVar5 == 1) goto LAB_0042f1cc;
    goto joined_r0x0042f670;
  }
LAB_0042f1cc:
  puVar7 = (undefined8 *)PTR_DAT_02712d40;
  puVar4 = PTR_DAT_02712ae0;
  if (*(long *)PTR_DAT_02712d40 == 0) {
    pvVar9 = (void *)FUN_00404690(*(undefined4 *)puVar3,0x68);
    if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar9,0,0x68);
    }
    goto LAB_0042f678;
  }
  if (*(long *)PTR_DAT_02712ae0 == 0) {
    if (puVar2[0x44] == '\0') {
      uVar1 = *(undefined4 *)puVar3;
      *(undefined8 *)PTR_DAT_02712dd0 = 0;
      plVar8 = (long *)FUN_00404690(uVar1,0x130);
      puVar7 = (undefined8 *)puVar4;
      if (plVar8 == (long *)0x0) goto LAB_0042f678;
      FUN_004429d0(plVar8);
LAB_0042f550:
      *(long **)puVar4 = plVar8;
    }
    else {
      uVar1 = *(undefined4 *)puVar3;
      *(undefined **)PTR_DAT_02712dd0 = PTR_LAB_02712dd8;
      plVar8 = (long *)FUN_00404690(uVar1,0x1a8);
      if (plVar8 == (long *)0x0) goto LAB_0042f550;
      FUN_004bcef0(plVar8);
      *(long **)puVar4 = plVar8;
    }
    if (plVar8 == (long *)0x0) {
      iVar5 = 0x34;
    }
    else {
      iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if (iVar5 == 1) goto LAB_0042f1ec;
    }
  }
  else {
LAB_0042f1ec:
    puVar4 = PTR_DAT_02712db8;
    puVar7 = (undefined8 *)PTR_DAT_02712d20;
    puVar12 = (undefined8 *)PTR_DAT_02712ad0;
    if (*(long *)PTR_DAT_02712ad0 == 0) {
      pvVar9 = (void *)FUN_00404690(*(undefined4 *)puVar3,0xa0);
      if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar9,0,0xa0);
      }
    }
    else {
      if (*(long *)PTR_DAT_02712db8 != 0) {
        if (*(long *)PTR_DAT_02712d20 == 0) {
          lVar10 = FUN_00404690(*(undefined4 *)puVar3,0x48);
          if (lVar10 == 0) goto LAB_0042f678;
          FUN_00497600(lVar10);
          *puVar7 = lVar10;
          iVar5 = FUN_00497660(lVar10);
          if (iVar5 != 1) goto joined_r0x0042f670;
        }
        puVar7 = (undefined8 *)PTR_DAT_02712dc0;
        if (*(long *)PTR_DAT_02712dc0 == 0) {
          lVar10 = FUN_00404690(*(undefined4 *)puVar3,0x20);
          if (lVar10 == 0) goto LAB_0042f678;
          FUN_00477620(lVar10);
          *puVar7 = lVar10;
          iVar5 = FUN_00477640(lVar10);
          if (iVar5 != 1) goto joined_r0x0042f670;
        }
        puVar4 = PTR_DAT_02712b18;
        if (*(long *)PTR_DAT_02712b18 == 0) {
          puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar3,0x20);
          if (puVar7 == (undefined8 *)0x0) {
            *(undefined8 *)puVar4 = 0;
            iVar5 = 0x34;
            goto joined_r0x0042f670;
          }
          puVar7[2] = 0;
          puVar7[3] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          *(undefined8 **)puVar4 = puVar7;
        }
        puVar7 = (undefined8 *)PTR_DAT_02712dc8;
        if (*(long *)PTR_DAT_02712dc8 == 0) {
          lVar10 = FUN_00404690(*(undefined4 *)puVar3,0x18);
          if (lVar10 == 0) goto LAB_0042f678;
          FUN_0048a7a0(lVar10);
          uVar1 = *(undefined4 *)(puVar2 + 8);
          *puVar7 = lVar10;
          iVar5 = FUN_0048a7c0(lVar10,uVar1);
          if (iVar5 != 1) goto joined_r0x0042f670;
        }
        puVar7 = (undefined8 *)PTR_DAT_02712b98;
        if (*(long *)PTR_DAT_02712b98 == 0) {
          lVar10 = FUN_00404690(*(undefined4 *)puVar3,0x48);
          if (lVar10 == 0) goto LAB_0042f678;
          FUN_004bac70(lVar10);
          *puVar7 = lVar10;
          iVar5 = FUN_004baca0(lVar10);
          if ((iVar5 == 1) && (*(long *)PTR_DAT_02712b68 == 0)) goto LAB_0042f63c;
        }
        else if (*(long *)PTR_DAT_02712b68 == 0) {
LAB_0042f63c:
          lVar10 = FUN_00404690(*(undefined4 *)puVar3,0xa8);
          if (lVar10 == 0) {
            *(undefined8 *)PTR_DAT_02712b68 = 0;
            iVar5 = 0x34;
          }
          else {
            FUN_004b3d90(lVar10);
            *(long *)PTR_DAT_02712b68 = lVar10;
            iVar5 = FUN_004b3e00(lVar10);
          }
        }
        else {
          iVar5 = 1;
        }
        goto joined_r0x0042f670;
      }
      pvVar9 = (void *)FUN_00404690(*(undefined4 *)puVar3,0x48);
      puVar12 = (undefined8 *)puVar4;
      if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar9,0,0x48);
      }
    }
    *puVar12 = 0;
    iVar5 = 0x34;
  }
joined_r0x0042f670:
  if (param_1 != (void *)0x0) {
    memcpy(param_1,PTR_DAT_02712b90,0x60);
  }
  if (iVar5 == 1) {
    iVar5 = FUN_004be900();
    puVar2 = PTR_DAT_02712de0;
    if ((iVar5 == 1) && (*(long *)PTR_DAT_02712de0 == 0)) {
      lVar10 = FUN_00404690(*(undefined4 *)puVar3,0xb0);
      if (lVar10 == 0) {
        *(undefined8 *)puVar2 = 0;
        iVar5 = 0x34;
        FUN_0042f800();
        goto joined_r0x0042f72c;
      }
      FUN_00435960(lVar10);
      *(long *)puVar2 = lVar10;
      iVar5 = FUN_004359f0(lVar10);
      if (iVar5 != 1) goto LAB_0042f738;
      iVar5 = FUN_0043c640(*(undefined8 *)puVar2);
    }
    if (iVar5 == 1) {
      lVar10 = FUN_004c24a0();
      if (lVar10 != 0) {
        DAT_02737d70 = 1;
        return 1;
      }
      iVar5 = 2;
    }
  }
LAB_0042f738:
  FUN_0042f800();
joined_r0x0042f72c:
  if (((DAT_02737d70 & 1) == 0) && (*(int *)puVar3 != -1)) {
    FUN_00405710();
    *(undefined4 *)puVar3 = 0xffffffff;
  }
  return iVar5;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01498620; name: FUN_01498620
 */


void FUN_01498620(int *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *local_d8;
  int *local_d0;
  int local_bc;
  int *local_b8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_d8 = param_2;
LAB_01498668:
  local_d0 = local_d8 + -1;
LAB_014986a4:
  piVar14 = param_1;
  lVar11 = (long)local_d8 - (long)piVar14;
  uVar9 = lVar11 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    return;
  case 2:
    local_88 = 0x2a939633d19cfb16;
    local_80 = "ribbon_table";
    local_78 = 0xc;
    FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)local_d8[-1]);
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar4 = FUN_012b4420(auStack_98,0);
    FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar5 = FUN_012b4420(auStack_98,0);
    if (iVar4 < iVar5) {
      iVar4 = *piVar14;
      *piVar14 = local_d8[-1];
      local_d8[-1] = iVar4;
      return;
    }
    return;
  case 3:
    FUN_014993d0(piVar14,piVar14 + 1,local_d0,param_3);
    return;
  case 4:
    FUN_01499770(piVar14,piVar14 + 1,piVar14 + 2,local_d0,param_3);
    return;
  case 5:
    FUN_01499a30(piVar14,piVar14 + 1,piVar14 + 2,piVar14 + 3,local_d0,param_3);
    return;
  }
  if (0x7b < lVar11) {
    uVar7 = uVar9;
    if ((long)uVar9 < 0) {
      uVar7 = uVar9 + 1;
    }
    local_b8 = (int *)((long)piVar14 + (uVar7 & 0x7ffffffffffffffe) * 2);
    if (lVar11 < 0xf9d) {
      local_bc = FUN_014993d0(piVar14,local_b8,local_d0,param_3);
    }
    else {
      uVar7 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar7 = uVar9;
      }
      local_bc = FUN_01499a30(piVar14,(long)piVar14 + (uVar7 & 0xfffffffffffffffc),local_b8,
                              (long)local_b8 + (uVar7 & 0xfffffffffffffffc),local_d0,param_3);
    }
    local_88 = 0x2a939633d19cfb16;
    local_80 = "ribbon_table";
    local_78 = 0xc;
    FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar4 = FUN_012b4420(auStack_98,0);
    FUN_012b4190(auStack_a8,auStack_70,(long)*local_b8);
    local_78 = 7;
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar5 = FUN_012b4420(auStack_98,0);
    if (iVar5 <= iVar4) {
      piVar10 = local_d8 + -2;
LAB_01498818:
      piVar13 = piVar10;
      if (piVar14 != piVar13) goto code_r0x01498820;
      local_78 = 0xc;
      local_88 = 0x2a939633d19cfb16;
      local_80 = "ribbon_table";
      FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
      piVar10 = piVar14 + 1;
      FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
      local_88 = 0xc0f8c07cd4198abc;
      local_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar4 = FUN_012b4420(auStack_98,0);
      FUN_012b4190(auStack_a8,auStack_70,(long)*local_d0);
      local_88 = 0xc0f8c07cd4198abc;
      local_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar5 = FUN_012b4420(auStack_98,0);
      if (iVar5 <= iVar4) {
        if (piVar10 == local_d0) {
          return;
        }
        piVar10 = piVar14 + 2;
        while( true ) {
          local_88 = 0x2a939633d19cfb16;
          local_80 = "ribbon_table";
          local_78 = 0xc;
          FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
          FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar4 = FUN_012b4420(auStack_98,0);
          FUN_012b4190(auStack_a8,auStack_70,(long)piVar10[-1]);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar5 = FUN_012b4420(auStack_98,0);
          if (iVar4 < iVar5) break;
          piVar10 = piVar10 + 1;
          if (local_d8 == piVar10) {
            return;
          }
        }
        iVar4 = piVar10[-1];
        piVar10[-1] = *local_d0;
        *local_d0 = iVar4;
      }
      if (piVar10 == local_d0) {
        return;
      }
      while( true ) {
        param_1 = piVar10 + -1;
        do {
          piVar10 = param_1;
          local_88 = 0x2a939633d19cfb16;
          local_80 = "ribbon_table";
          local_78 = 0xc;
          FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
          FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar4 = FUN_012b4420(auStack_98,0);
          param_1 = piVar10 + 1;
          FUN_012b4190(auStack_a8,auStack_70,(long)*param_1);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar5 = FUN_012b4420(auStack_98,0);
        } while (iVar5 <= iVar4);
        piVar10 = piVar10 + 2;
        do {
          local_78 = 0xc;
          local_88 = 0x2a939633d19cfb16;
          local_80 = "ribbon_table";
          FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
          FUN_012b4190(auStack_a8,auStack_70,(long)*piVar14);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar4 = FUN_012b4420(auStack_98,0);
          local_d0 = local_d0 + -1;
          FUN_012b4190(auStack_a8,auStack_70,(long)*local_d0);
          local_88 = 0xc0f8c07cd4198abc;
          local_80 = "showNum";
          local_78 = 7;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar5 = FUN_012b4420(auStack_98,0);
        } while (iVar4 < iVar5);
        if (local_d0 <= param_1) break;
        iVar4 = *param_1;
        *param_1 = *local_d0;
        *local_d0 = iVar4;
      }
      uVar8 = 4;
      goto LAB_01498fd8;
    }
    piVar10 = piVar14 + 1;
    piVar13 = local_d0;
    if (piVar10 < local_d0) goto LAB_0149890c;
    goto LAB_01498ad8;
  }
  FUN_014993d0(piVar14,piVar14 + 1,piVar14 + 2,param_3);
  if (piVar14 + 3 == local_d8) {
    return;
  }
  lVar11 = 0;
  piVar10 = piVar14 + 3;
  piVar13 = piVar14 + 2;
  goto LAB_0149915c;
code_r0x01498820:
  local_78 = 0xc;
  local_88 = 0x2a939633d19cfb16;
  local_80 = "ribbon_table";
  FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
  FUN_012b4190(auStack_a8,auStack_70,(long)*piVar13);
  local_88 = 0xc0f8c07cd4198abc;
  local_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar4 = FUN_012b4420(auStack_98,0);
  FUN_012b4190(auStack_a8,auStack_70,(long)*local_b8);
  local_88 = 0xc0f8c07cd4198abc;
  local_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar5 = FUN_012b4420(auStack_98,0);
  piVar10 = piVar13 + -1;
  if (iVar4 < iVar5) goto code_r0x014988e4;
  goto LAB_01498818;
code_r0x014988e4:
  iVar4 = *piVar14;
  *piVar14 = *piVar13;
  *piVar13 = iVar4;
  local_bc = local_bc + 1;
  piVar10 = piVar14 + 1;
  if (piVar10 < piVar13) {
LAB_0149890c:
    piVar15 = piVar14 + 1;
    while( true ) {
      piVar10 = piVar15 + -1;
      do {
        piVar15 = piVar10;
        local_88 = 0x2a939633d19cfb16;
        local_80 = "ribbon_table";
        local_78 = 0xc;
        FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
        piVar10 = piVar15 + 1;
        FUN_012b4190(auStack_a8,auStack_70,(long)*piVar10);
        local_88 = 0xc0f8c07cd4198abc;
        local_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar4 = FUN_012b4420(auStack_98,0);
        FUN_012b4190(auStack_a8,auStack_70,(long)*local_b8);
        local_88 = 0xc0f8c07cd4198abc;
        local_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar5 = FUN_012b4420(auStack_98,0);
      } while (iVar4 < iVar5);
      piVar15 = piVar15 + 2;
      do {
        local_88 = 0x2a939633d19cfb16;
        local_80 = "ribbon_table";
        local_78 = 0xc;
        FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
        piVar13 = piVar13 + -1;
        FUN_012b4190(auStack_a8,auStack_70,(long)*piVar13);
        local_88 = 0xc0f8c07cd4198abc;
        local_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar4 = FUN_012b4420(auStack_98,0);
        FUN_012b4190(auStack_a8,auStack_70,(long)*local_b8);
        local_88 = 0xc0f8c07cd4198abc;
        local_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar5 = FUN_012b4420(auStack_98,0);
      } while (iVar5 <= iVar4);
      if (piVar13 < piVar10) break;
      iVar4 = *piVar10;
      *piVar10 = *piVar13;
      *piVar13 = iVar4;
      local_bc = local_bc + 1;
      piVar1 = piVar13;
      if (local_b8 != piVar10) {
        piVar1 = local_b8;
      }
      local_b8 = piVar1;
    }
  }
LAB_01498ad8:
  if (piVar10 == local_b8) {
joined_r0x01498bdc:
    if (local_bc != 0) goto LAB_01498c30;
  }
  else {
    local_78 = 0xc;
    local_88 = 0x2a939633d19cfb16;
    local_80 = "ribbon_table";
    FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)*local_b8);
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar4 = FUN_012b4420(auStack_98,0);
    FUN_012b4190(auStack_a8,auStack_70,(long)*piVar10);
    local_78 = 7;
    local_88 = 0xc0f8c07cd4198abc;
    local_80 = "showNum";
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar5 = FUN_012b4420(auStack_98,0);
    if (iVar5 <= iVar4) goto joined_r0x01498bdc;
    iVar4 = *piVar10;
    *piVar10 = *local_b8;
    *local_b8 = iVar4;
    if (local_bc != -1) goto LAB_01498c30;
  }
  uVar9 = FUN_01499de0(piVar14,piVar10,param_3);
  uVar7 = FUN_01499de0(piVar10 + 1,local_d8,param_3);
  if ((uVar7 & 1) != 0) goto LAB_01498ff0;
  param_1 = piVar10 + 1;
  if ((uVar9 & 1) != 0) goto LAB_014986a4;
LAB_01498c30:
  if ((long)local_d8 - (long)piVar10 <= (long)piVar10 - (long)piVar14) {
    FUN_01498620(piVar10 + 1,local_d8,param_3);
    param_1 = piVar14;
    local_d8 = piVar10;
    goto LAB_01498668;
  }
  FUN_01498620(piVar14,piVar10,param_3);
  param_1 = piVar10 + 1;
  goto LAB_014986a4;
LAB_01498ff0:
  bVar3 = (uVar9 & 1) == 0;
  if (bVar3) {
    local_d8 = piVar10;
  }
  uVar8 = 1;
  if (bVar3) {
    uVar8 = 2;
  }
  param_1 = piVar14;
  if (4 < uVar8) {
    return;
  }
LAB_01498fd8:
  if ((1 << (ulong)uVar8 & 0x15U) == 0) {
    return;
  }
  goto LAB_01498668;
LAB_0149915c:
  piVar15 = piVar10;
  local_88 = 0x2a939633d19cfb16;
  local_80 = "ribbon_table";
  local_78 = 0xc;
  FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
  FUN_012b4190(auStack_a8,auStack_70,(long)*piVar15);
  local_88 = 0xc0f8c07cd4198abc;
  local_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar4 = FUN_012b4420(auStack_98,0);
  FUN_012b4190(auStack_a8,auStack_70,(long)*piVar13);
  local_88 = 0xc0f8c07cd4198abc;
  local_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar5 = FUN_012b4420(auStack_98,0);
  if (iVar4 < iVar5) {
    iVar4 = *piVar15;
    lVar2 = lVar11;
    do {
      lVar12 = lVar2;
      *(undefined4 *)((long)piVar14 + lVar12 + 0xc) = *(undefined4 *)((long)piVar14 + lVar12 + 8);
      if (lVar12 == -8) {
        piVar10 = piVar14;
        goto LAB_0149933c;
      }
      local_88 = 0x2a939633d19cfb16;
      local_80 = "ribbon_table";
      local_78 = 0xc;
      FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
      FUN_012b4190(auStack_a8,auStack_70,(long)iVar4);
      local_88 = 0xc0f8c07cd4198abc;
      local_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar5 = FUN_012b4420(auStack_98,0);
      FUN_012b4190(auStack_a8,auStack_70,(long)*(int *)((long)piVar14 + lVar12 + 4));
      local_88 = 0xc0f8c07cd4198abc;
      local_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar6 = FUN_012b4420(auStack_98,0);
      lVar2 = lVar12 + -4;
    } while (iVar5 < iVar6);
    piVar10 = (int *)((long)piVar14 + lVar12 + 8);
LAB_0149933c:
    *piVar10 = iVar4;
  }
  lVar11 = lVar11 + 4;
  piVar10 = piVar15 + 1;
  piVar13 = piVar15;
  if (piVar15 + 1 == local_d8) {
    return;
  }
  goto LAB_0149915c;
}



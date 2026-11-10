/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e2740; name: FUN_009e2740
 */


void FUN_009e2740(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_48;
  
  puVar5 = PTR_DAT_02718ad8;
  if ((int)param_2 < 0xf0) {
    uVar11 = 0;
    switch(param_2) {
    case 0xc:
      uVar11 = 0xb;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
LAB_009e2e30:
      lVar12 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x30) + 0x60);
      if (lVar12 == 0) {
        FUN_0077e740(0,param_2 & 0xffff,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
        local_48 = *(long *)(puVar5 + 0x18);
        if (local_48 == 0) goto LAB_009e2f20;
LAB_009e2ea8:
        plVar13 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        cVar6 = FUN_009e2f60(&local_48);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        local_48 = 0;
      }
      else {
        plVar13 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0077e740(lVar12,param_2 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
        (**(code **)(*plVar13 + 0x18))(plVar13);
        local_48 = *(long *)(puVar5 + 0x18);
        if (local_48 != 0) goto LAB_009e2ea8;
LAB_009e2f20:
        cVar6 = FUN_009e2f60(&local_48);
      }
      if (cVar6 == '\x02') {
        FUN_009e3050(param_1,param_2,param_3);
        return;
      }
      goto switchD_009e17dc_caseD_3b;
    case 0x10:
      uVar11 = 0xc;
      break;
    case 0x14:
      uVar11 = 0xd;
      break;
    case 0x1c:
      uVar11 = 0xe;
      break;
    case 0x20:
      uVar11 = 0xf;
      break;
    case 0x24:
      uVar11 = 0x10;
      break;
    case 0x2c:
      break;
    default:
      if (param_2 == 0x80) {
        uVar11 = 1;
      }
      else {
        if (param_2 != 0xd4) goto LAB_009e2e30;
        uVar11 = 2;
      }
    }
  }
  else if ((int)param_2 < 0x58a) {
    if ((int)param_2 < 0x252) {
      if (param_2 == 0xf0) {
        uVar11 = 3;
      }
      else {
        if (param_2 != 0x1c4) goto LAB_009e2e30;
        uVar11 = 9;
      }
    }
    else if (param_2 == 0x252) {
      uVar11 = 0x11;
    }
    else if (param_2 == 0x4f8) {
      uVar11 = 4;
    }
    else {
      if (param_2 != 0x586) goto LAB_009e2e30;
      uVar11 = 7;
    }
  }
  else if ((int)param_2 < 0x66c) {
    if (param_2 == 0x58a) {
      uVar11 = 8;
    }
    else {
      if (param_2 != 0x606) goto LAB_009e2e30;
      uVar11 = 10;
    }
  }
  else if (param_2 == 0x66c) {
    uVar11 = 0x12;
  }
  else if (param_2 == 0x6a4) {
    uVar11 = 5;
  }
  else {
    if (param_2 != 0x6f8) goto LAB_009e2e30;
    uVar11 = 6;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar11) {
  case 0:
  case 1:
  case 5:
    uVar7 = *param_3;
    iVar9 = param_3[1];
    iVar4 = param_3[2];
    uVar8 = FUN_008f94e0(uVar7);
    puVar5 = PTR_DAT_02718ad8;
    iVar10 = 0x38;
    if (iVar4 < 3) {
      iVar10 = 0;
    }
    iVar3 = 0x1c;
    if (iVar4 != 2) {
      iVar3 = iVar10;
    }
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar7);
      uVar11 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar5 + 0x10),0,uVar11);
    }
    FUN_009e1420(10,uVar8);
    iVar10 = FUN_009e31b0(uVar7);
    lVar12 = *(long *)(*(long *)(puVar5 + 0x30) + 0x60);
    uVar1 = (iVar9 * 4 + 0x3fcU & 0x3fc) + (iVar3 + param_2 & 0xffff) + iVar10;
    if (lVar12 == 0) {
      FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0077e740(lVar12,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    FUN_014c62d0(*(undefined8 *)(puVar5 + 0x10),param_1,*(undefined8 *)(puVar5 + 0x18));
    return;
  case 2:
  case 3:
    uVar7 = FUN_008f94e0(*param_3);
    puVar5 = PTR_DAT_02718ad8;
    iVar10 = param_3[1];
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),*param_3);
      uVar11 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar5 + 0x10),0,uVar11);
    }
    FUN_009e1420(10,uVar7);
    iVar9 = FUN_009e31b0(*param_3);
    uVar1 = (iVar10 * 4 + 0x3fcU & 0x3fc) + (param_2 & 0xffff) + iVar9;
    lVar12 = *(long *)(*(long *)(puVar5 + 0x30) + 0x60);
    if (lVar12 == 0) {
      FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0077e740(lVar12,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    FUN_014c62d0(*(undefined8 *)(puVar5 + 0x10),param_1,*(undefined8 *)(puVar5 + 0x18));
    return;
  case 4:
    uVar7 = *param_3;
    iVar9 = param_3[2];
    iVar4 = param_3[3];
    uVar8 = FUN_008f94e0(uVar7);
    iVar10 = 0x38;
    if (iVar4 < 3) {
      iVar10 = 0;
    }
    iVar3 = 0x1c;
    if (iVar4 != 2) {
      iVar3 = iVar10;
    }
    iVar10 = FUN_009e31b0(uVar7);
    puVar5 = PTR_DAT_02718ad8;
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar7);
      uVar11 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar5 + 0x10),0,uVar11);
    }
    uVar1 = iVar10 + (iVar9 * 4 + 0x3fcU & 0x3fc) + (iVar3 + param_2 & 0xffff);
    FUN_009e1420(10,uVar8);
    FUN_014c9900(*(undefined8 *)(puVar5 + 0x10),1,param_3[1],1);
    lVar12 = *(long *)(*(long *)(puVar5 + 0x30) + 0x60);
    if (lVar12 == 0) {
      FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0077e740(lVar12,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    FUN_014c62d0(*(undefined8 *)(puVar5 + 0x10),param_1,*(undefined8 *)(puVar5 + 0x18));
    return;
  case 6:
    uVar7 = *param_3;
    iVar9 = param_3[1];
    uVar8 = FUN_008f94e0(uVar7);
    iVar10 = 4;
    if (iVar9 != 2) {
      iVar10 = (uint)(2 < iVar9) << 3;
    }
    iVar9 = FUN_009e31b0(*param_3);
    puVar5 = PTR_DAT_02718ad8;
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar7);
      uVar11 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar5 + 0x10),0,uVar11);
    }
    param_2 = iVar9 + iVar10 + param_2;
    FUN_009e1420(10,uVar8);
    lVar12 = *(long *)(*(long *)(puVar5 + 0x30) + 0x60);
    if (lVar12 == 0) {
      FUN_0077e740(0,param_2 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0077e740(lVar12,param_2 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    FUN_014c62d0(*(undefined8 *)(puVar5 + 0x10),param_1,*(undefined8 *)(puVar5 + 0x18));
    return;
  }
switchD_009e17dc_caseD_3b:
  iVar10 = FUN_009e31b0(*param_3);
  puVar5 = PTR_DAT_02718ad8;
  uVar1 = iVar10 + param_2;
  uVar2 = (uVar1 - 0xf) * 0x4000 & 0xffff | uVar1 - 0xf >> 2 & 0x3fff;
  if (uVar2 == 3) {
    param_2 = uVar1;
  }
  if (uVar2 < 7) {
    uVar1 = param_2;
  }
  lVar12 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x30) + 0x60);
  if (lVar12 == 0) {
    FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
    local_48 = *(long *)(puVar5 + 0x18);
  }
  else {
    plVar13 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0077e740(lVar12,uVar1 & 0xffff,*(undefined8 *)(puVar5 + 0x18));
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_48 = *(long *)(puVar5 + 0x18);
  }
  if (local_48 == 0) {
    FUN_009e1d60(&local_48,param_3);
  }
  else {
    plVar13 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_009e1d60(&local_48,param_3);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_48 = 0;
  }
  if (((uVar1 & 0xffff) == 0x4cc) && (iVar10 = FUN_009e2170(*param_3,param_3[1]), -1 < iVar10)) {
    FUN_014c97b0(*(undefined8 *)(puVar5 + 0x10),1,iVar10);
  }
  FUN_014c62d0(*(undefined8 *)(puVar5 + 0x10),param_1,*(undefined8 *)(puVar5 + 0x18));
  return;
}



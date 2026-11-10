/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b1050; name: FUN_008b1050
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008b1050(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_38;
  
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  local_58 = 0x300000002;
  uVar4 = FUN_008c7c50(uVar10);
  if ((uVar4 & 1) == 0) {
    uVar4 = 2;
    uVar5 = FUN_008c7c60(uVar10);
  }
  else {
    uVar4 = 3;
    local_50[0]._0_4_ = 4;
    uVar5 = FUN_008c7c60(uVar10);
  }
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)((long)&local_58 + uVar4 * 4) = 5;
    uVar4 = (ulong)((int)uVar4 + 1);
  }
  *(undefined4 *)((long)&local_58 + uVar4 * 4) = 7;
  if ((int)uVar4 + 1U < 5) {
    lVar12 = uVar4 + 1;
    uVar3 = -(int)uVar4 & 3;
    if (uVar3 != 0) {
      lVar9 = -(ulong)uVar3;
      do {
        *(undefined4 *)((long)&local_58 + lVar12 * 4) = 8;
        lVar12 = lVar12 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0);
    }
    if (2 < 3 - uVar4) {
      lVar9 = 5 - lVar12;
      puVar11 = (undefined8 *)((long)local_50 + lVar12 * 4);
      do {
        puVar11[-1] = 0x800000008;
        *puVar11 = 0x800000008;
        lVar9 = lVar9 + -4;
        puVar11 = puVar11 + 2;
      } while (lVar9 != 0);
    }
  }
  uVar3 = FUN_010386e0(*(undefined8 *)(param_1 + 0xc0));
  if (4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = *(int *)((long)&local_58 + (ulong)uVar3 * 4);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 == (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    plVar7 = (long *)FUN_00897d00();
    puVar13 = (undefined8 *)0x0;
    if (plVar6 != (long *)0x0) {
      do {
        if (plVar6 == plVar7) {
          puVar13 = puVar11 + -10;
          goto LAB_008b11a0;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      puVar13 = (undefined8 *)0x0;
    }
  }
LAB_008b11a0:
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  switch(iVar1) {
  case 2:
    FUN_01521eb0(lVar12,*(undefined4 *)
                         (*(long *)(param_1 + 0x78) +
                          (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 + 0x64c));
    *(undefined8 *)(param_1 + 0xd0) = 0x200000008;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 1;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
    cVar2 = *(char *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = 0x2992c364034ea30b;
    break;
  case 3:
    local_38 = puVar13[0x27];
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x3b0) + 0x10))(local_38 + 0x3b0);
    }
    FUN_01521f50(lVar12,&stack0xffffffffffffffc8,*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x828),
                 *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x824));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x3b0) + 0x18))(local_38 + 0x3b0);
      local_38 = 0;
    }
    uVar10 = 0x2992c464034ea4be;
    goto LAB_008b1368;
  case 4:
    FUN_01521440(lVar12,*(undefined4 *)
                         (*(long *)(param_1 + 0x78) +
                          (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 + 0x64c));
    *(undefined8 *)(param_1 + 0xd0) = 0x200000008;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 1;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
    cVar2 = *(char *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = 0x2992c764034ea9d7;
    break;
  case 5:
    uVar10 = 0x2992c664034ea824;
    FUN_01521930(lVar12,*(undefined4 *)
                         (*(long *)(param_1 + 0x78) +
                          (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 + 0x64c));
LAB_008b1368:
    *(undefined8 *)(param_1 + 0xd0) = 0x200000008;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 1;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
    cVar2 = *(char *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    break;
  default:
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_01038270(*(undefined8 *)(param_1 + 0xc0),1);
    }
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 2;
    if (iVar1 == 7) goto LAB_008b1418;
    goto LAB_008b13c4;
  }
  if (iVar1 == 0) {
    FUN_008a6b70();
  }
  else {
    FUN_008a6c20(uVar8,uVar10,cVar2 == '\0');
  }
  *(undefined1 *)(param_1 + 200) = 1;
LAB_008b13c4:
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x810) = 0xffffffff;
  FUN_006cf0a0(auStack_78,&DAT_02617268);
  FUN_016d3620(auStack_78);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
LAB_008b1418:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}



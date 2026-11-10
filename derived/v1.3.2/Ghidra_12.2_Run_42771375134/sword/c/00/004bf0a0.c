/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bf0a0; name: FUN_004bf0a0
 */


int FUN_004bf0a0(long *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  char local_9c [4];
  undefined4 local_98 [6];
  undefined4 local_80 [2];
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  short local_64;
  undefined4 local_58;
  uint local_54;
  
  lVar16 = *(long *)(param_3 + 2);
  iVar7 = FUN_00480360(param_1,local_80);
  iVar10 = iVar7;
  if (iVar7 == 3) {
    if ((lVar16 == 0) || (iVar7 = (**(code **)(*param_1 + 0x20))(param_1), iVar7 == 9)) {
      iVar10 = 2;
      iVar7 = 2;
    }
    else {
      uVar11 = (**(code **)(*param_1 + 0x228))(param_1,lVar16);
      iVar7 = 1;
      if ((uVar11 & 1) != 0) {
        iVar7 = 2;
      }
      iVar10 = 2;
    }
  }
  FUN_004bebe0(local_98,param_1,*(undefined8 *)(param_3 + 4),&local_58);
  uVar3 = local_98[0];
  uVar11 = FUN_004bfad0(local_98[0]);
  if ((uVar11 & 1) == 0) {
    local_54 = 0x22;
LAB_004bf250:
    uVar14 = *(byte *)(param_3 + 0x62) & 2;
  }
  else {
    local_54 = 0x21;
    iVar8 = FUN_004bfc00(uVar3);
    if (iVar8 == 2) goto LAB_004bf250;
    if ((param_2[6] & 0xffff0000) == 0x80000) {
      lVar16 = *(long *)(param_3 + 8);
      if (lVar16 != 0) {
        param_2 = (uint *)FUN_004a8060(param_2);
        if (param_2 == (uint *)0x0) {
          iVar9 = 0x34;
          bVar5 = false;
          plVar15 = (long *)0x0;
          local_9c[0] = '\0';
          goto LAB_004bf4e0;
        }
        if (*(uint *)(lVar16 + 4) != 0) {
          uVar14 = 0;
          plVar15 = (long *)(lVar16 + 0x18);
          do {
            if (param_2[1] == *(uint *)(plVar15 + -2)) {
              iVar9 = *(int *)((long)plVar15 + 0xc);
              if (iVar9 == 0) {
                lVar13 = plVar15[-1];
                if (lVar13 == 0) {
                  if ((*(uint *)(plVar15 + 1) == 0) || (*plVar15 == 0)) goto LAB_004bf1dc;
                  FUN_004a7e70(param_2,*(int *)((long)plVar15 + -0xc) << 0x10 | 1,*plVar15,
                               (ulong)*param_2 | 0xffffffff00000000,
                               (ulong)*(uint *)(plVar15 + 1) | 0x18c00000000);
                  goto LAB_004bf358;
                }
                iVar4 = *(int *)((long)plVar15 + -0xc);
                uVar14 = *param_2;
                iVar9 = -1;
                uVar12 = 1;
              }
              else {
                iVar4 = *(int *)((long)plVar15 + -0xc);
                uVar14 = *param_2;
                lVar13 = plVar15[-1];
                uVar12 = 0;
              }
              FUN_004a7cd0(param_2,uVar14,iVar4 << 0x10 | 1,lVar13,iVar9,uVar12,1);
              goto LAB_004bf358;
            }
LAB_004bf1dc:
            uVar14 = uVar14 + 1;
            plVar15 = plVar15 + 4;
          } while (uVar14 < *(uint *)(lVar16 + 4));
        }
        uVar3 = *(undefined4 *)PTR_DAT_02712a90;
        FUN_004a7c60(param_2);
        FUN_00404870(uVar3,param_2);
      }
      iVar9 = 2;
      bVar5 = false;
      plVar15 = (long *)0x0;
      local_9c[0] = '\0';
LAB_004bf4e0:
      if (plVar15 != (long *)0x0) {
        if (!bVar5) {
LAB_004bf4e8:
          *(uint *)((long)plVar15 + 0x26b) = *(uint *)((long)plVar15 + 0x26b) | 0x100000;
        }
        goto LAB_004bf4f8;
      }
      if (!bVar5) goto LAB_004bf534;
      local_78 = *(undefined8 *)(param_3 + 4);
      local_68 = 1;
      local_80[0] = 0;
      local_70 = (long *)0x0;
      local_64 = 0x100;
      (**(code **)(*param_1 + 0x120))(param_1,local_80);
      uVar14 = *(byte *)(param_3 + 0x62) & 2;
      if (iVar9 != 3) goto LAB_004bf544;
    }
    else {
LAB_004bf358:
      local_9c[0] = '\0';
      plVar15 = (long *)(**(code **)(**(long **)(param_3 + 2) + 0x28))
                                  (*(long **)(param_3 + 2),param_1,param_2,param_3,local_98);
      if (plVar15 == (long *)0x0) {
        bVar5 = false;
        iVar9 = 2;
        goto LAB_004bf4e0;
      }
      plVar2 = plVar15 + 3;
      if (*param_3 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x22) + 0x10);
      }
      iVar9 = FUN_0044eaf0(local_58,plVar2,uVar12,iVar7 != 1,&local_54,param_3 + 0x2a,local_9c);
      if (iVar9 != 1) {
        bVar5 = false;
joined_r0x004bf470:
        if ((plVar15 == (long *)0x0) || (param_3[0xd] == 0)) goto LAB_004bf4e0;
        FUN_0048fb90(*(undefined8 *)PTR_DAT_02712ad0,param_3[0xd],plVar15,local_80);
        if (bVar5) goto LAB_004bf4f8;
        goto LAB_004bf4e8;
      }
      puVar1 = (uint *)((long)plVar15 + 0x26b);
      local_78 = *(undefined8 *)(param_3 + 4);
      local_68 = 1;
      local_80[0] = local_98[0];
      local_64 = (ushort)((iVar10 == 0 || local_9c[0] == '\0') && (*puVar1 & 0x4000000) == 0) << 8;
      local_70 = plVar15 + 0x55;
      iVar10 = (**(code **)(*param_1 + 0x118))(param_1,local_80,1,0);
      if ((iVar10 == 2) ||
         (((iVar8 == 0x50 || (iVar10 == 0x50)) && (*puVar1 = *puVar1 | 0x2000000, iVar7 == 1)))) {
        iVar9 = 3;
        local_54 = 0x20;
LAB_004bf4d8:
        bVar5 = true;
        goto joined_r0x004bf470;
      }
      iVar9 = (**(code **)(*plVar15 + 0x18))(plVar15);
      if (iVar9 != 1) goto LAB_004bf4d8;
      if ((*(ushort *)((long)plVar15 + 0x16c) >> 5 & 1) == 0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_3 + 0x2a);
      }
      else if ((*(ushort *)((long)plVar15 + 0x16c) >> 9 & 1) != 0) {
        (**(code **)(*plVar2 + 0x58))(plVar2);
      }
      FUN_0048d550(plVar15,param_3 + 0x56,1);
      if ((*(long *)(param_3 + 0x22) != 0) && (plVar15[0xd] != 0)) {
        FUN_00479bb0(plVar15[0xd],1,*(long *)(param_3 + 0x22) + 0x28);
      }
      uVar12 = *(undefined8 *)(param_3 + 6);
      iVar7 = param_3[0x20];
      FUN_0048beb0(plVar15);
      iVar9 = FUN_0048c3a0(plVar15,uVar12,iVar7 == 1,0);
      if (iVar9 == 1) {
        plVar15[0x32] = 0;
        puVar6 = PTR_DAT_027134a8;
        plVar2 = (long *)(PTR_DAT_027134a8 + 0x10);
        if (*(long *)(PTR_DAT_027134a8 + 0x10) != 0) {
          plVar2 = (long *)(*(long *)(PTR_DAT_027134a8 + 8) + 400);
        }
        *plVar2 = (long)plVar15;
        *(long **)(puVar6 + 8) = plVar15;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        return 1;
      }
LAB_004bf4f8:
      (**(code **)(*plVar15 + 0x20))(plVar15,1);
      uVar3 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)(*plVar15 + 8))(plVar15);
      FUN_00404870(uVar3,plVar15);
LAB_004bf534:
      uVar14 = *(byte *)(param_3 + 0x62) & 2;
      if (iVar9 != 3) {
LAB_004bf544:
        local_54 = uVar14 >> 1 ^ 0x1f;
        goto LAB_004bf294;
      }
    }
  }
  if (uVar14 == 0) {
    if (local_54 == 0x20) {
      local_54 = 0x23;
    }
    else if (local_54 == 0x21) {
      local_54 = 0x24;
    }
    else if (local_54 == 0x22) {
      local_54 = 0x25;
    }
  }
  iVar9 = 3;
LAB_004bf294:
  FUN_004a7c20(param_1,local_54,*(undefined8 *)(*(long *)(param_3 + 4) + 0x48),param_3 + 8,
               param_3 + 0xe);
  return iVar9;
}



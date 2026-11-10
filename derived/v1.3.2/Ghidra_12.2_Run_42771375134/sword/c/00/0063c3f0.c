/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063c3f0; name: FUN_0063c3f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063c3f0(long param_1)

{
  bool bVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 local_280;
  int local_278;
  ulong local_270;
  undefined8 auStack_268 [65];
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x2a8))();
  if (*(int *)(param_1 + 0x3a68) != 0) {
    FUN_0063f880(param_1);
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if (uVar4 != 0) {
    if ((uVar4 & 1) == 0) {
      if ((uVar4 >> 1 & 1) != 0) goto LAB_0063c4c4;
LAB_0063c448:
      if ((uVar4 >> 2 & 1) != 0) goto LAB_0063c508;
LAB_0063c44c:
      iVar11 = *(int *)(param_1 + 0x2794);
      iVar5 = *(int *)(param_1 + 0x2798);
      if (iVar11 <= iVar5) goto LAB_0063c538;
LAB_0063c45c:
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    else {
      (**(code **)PTR_DAT_02714768)
                (*(undefined8 *)(param_1 + 0x3a60),*(undefined4 *)(param_1 + 0x540),
                 *(undefined8 *)(param_1 + 0xa88),*(undefined8 *)(param_1 + 0xa90),
                 *(undefined8 *)(param_1 + 0xa98),*(undefined8 *)(param_1 + 0xaa0));
      uVar4 = *(uint *)(param_1 + 0x30);
      if ((uVar4 >> 1 & 1) == 0) goto LAB_0063c448;
LAB_0063c4c4:
      (**(code **)PTR_DAT_02714770)
                (*(undefined8 *)(param_1 + 0x3a60),0,*(undefined4 *)(param_1 + 0x538),
                 param_1 + 0x544);
      (**(code **)PTR_DAT_02714778)
                (*(undefined4 *)(param_1 + 0x644),*(undefined4 *)(param_1 + 0x648),
                 *(undefined8 *)(param_1 + 0x3a60));
      if ((*(uint *)(param_1 + 0x30) >> 2 & 1) == 0) goto LAB_0063c44c;
LAB_0063c508:
      (**(code **)PTR_DAT_02714780)
                (*(undefined8 *)(param_1 + 0x3a60),0,*(undefined4 *)(param_1 + 0x53c),
                 param_1 + 0x6c4);
      iVar11 = *(int *)(param_1 + 0x2794);
      iVar5 = *(int *)(param_1 + 0x2798);
      if (iVar5 < iVar11) goto LAB_0063c45c;
LAB_0063c538:
      (**(code **)PTR_DAT_02714788)
                (*(undefined8 *)(param_1 + 0x3a60),iVar11,(1 - iVar11) + iVar5,param_1 + 0x7c8);
      *(int *)(param_1 + 0x2794) = *(int *)(param_1 + 0x2790) + 1;
      *(undefined4 *)(param_1 + 0x2798) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x27a0) = 0;
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      (**(code **)PTR_DAT_02714790)
                (*(undefined8 *)(param_1 + 0x3a60),*(undefined4 *)(param_1 + 0x9e4),param_1 + 0x9e8)
      ;
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 0xb & 1) != 0) {
      (**(code **)PTR_DAT_02714798)
                (*(undefined8 *)(param_1 + 0x3a60),*(undefined4 *)(param_1 + 0x960),param_1 + 0x964)
      ;
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      (**(code **)PTR_DAT_027147a0)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x930);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 0xf & 1) != 0) {
      (**(code **)PTR_DAT_027147a8)
                (*(undefined4 *)(param_1 + 0xa6c),*(undefined4 *)(param_1 + 0xa68),
                 *(undefined4 *)(param_1 + 0xa70),*(undefined8 *)(param_1 + 0x3a60));
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 0x10 & 1) != 0) {
      (**(code **)PTR_DAT_027147b0)
                (*(undefined8 *)(param_1 + 0x3a60),*(undefined1 *)(param_1 + 0xa74));
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 6 & 1) != 0) {
      (**(code **)PTR_DAT_027147b8)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x940);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 7 & 1) != 0) {
      (**(code **)PTR_DAT_027147c0)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x938);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 8 & 1) != 0) {
      (**(code **)PTR_DAT_027147c8)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x8f0);
      (**(code **)PTR_DAT_027147d0)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x8dc);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 9 & 1) != 0) {
      (**(code **)PTR_DAT_027147d8)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x958);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 10 & 1) != 0) {
      (**(code **)PTR_DAT_027147e0)(*(undefined8 *)(param_1 + 0x3a60),param_1 + 0x95c);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar4 >> 0xd & 1) != 0) {
      if (*(int *)(param_1 + 0xa80) != 0) {
        (**(code **)PTR_DAT_027147e8)
                  (*(undefined8 *)(param_1 + 0x3a60),*(undefined8 *)(param_1 + 0xa78));
      }
      bVar13 = true;
      goto LAB_0063c708;
    }
  }
  bVar13 = false;
LAB_0063c708:
  local_278 = -1;
  local_280 = 0x4100000040;
  local_270 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar8 = 0;
    do {
      uVar10 = (ulong)*(uint *)(param_1 + 0x30 + lVar8 * 4 + 8);
      lVar7 = param_1 + 0x30 + uVar10 * 0x18;
      iVar11 = *(int *)(lVar7 + 0x277c);
      iVar5 = *(int *)(lVar7 + 0x2780);
      if (iVar11 <= iVar5) {
        puVar2 = (ulong *)(param_1 + uVar10 * 0x18 + 0x27b8);
        uVar12 = (long)iVar11;
        do {
          if ((*puVar2 & 1L << (uVar12 & 0x3f)) != 0) {
            (**(code **)PTR_DAT_027147f0)
                      (*(undefined8 *)(param_1 + 0x3a60),uVar10,iVar11,
                       *(undefined8 *)(param_1 + uVar10 * 0x70 + uVar12 * 8 + 0xaa8),
                       (long)*(int *)(param_1 + uVar10 * 0x38 + uVar12 * 4 + 0xd48));
            iVar5 = *(int *)(lVar7 + 0x2780);
            bVar13 = true;
          }
          iVar11 = iVar11 + 1;
          bVar1 = (long)uVar12 < (long)iVar5;
          uVar12 = uVar12 + 1;
        } while (bVar1);
        *(int *)(lVar7 + 0x277c) = *(int *)(param_1 + uVar10 * 0x18 + 0x27a8) + 1;
        *(int *)(lVar7 + 0x2780) = -1;
        *puVar2 = 0;
      }
      lVar7 = param_1 + uVar10 * 0x18;
      iVar11 = *(int *)(lVar7 + 0x28d0);
      if (*(int *)(lVar7 + 0x28cc) <= iVar11) {
        puVar2 = (ulong *)(param_1 + uVar10 * 0x18 + 0x28d8);
        uVar12 = (long)*(int *)(lVar7 + 0x28cc);
        do {
          if ((*puVar2 & 1L << (uVar12 & 0x3f)) != 0) {
            (**(code **)PTR_DAT_027147f8)
                      (*(undefined8 *)(param_1 + 0x3a60),uVar10,uVar12 & 0xffffffff,
                       *(undefined8 *)(param_1 + uVar10 * 0x70 + uVar12 * 8 + 0xe98),
                       (long)*(int *)(param_1 + 0x1138 + uVar10 * 0x38 + uVar12 * 4));
            iVar11 = *(int *)(lVar7 + 0x28d0);
          }
          bVar1 = (long)uVar12 < (long)iVar11;
          uVar12 = uVar12 + 1;
        } while (bVar1);
        *(int *)(lVar7 + 0x28cc) = *(int *)(param_1 + uVar10 * 0x18 + 0x28c8) + 1;
        *(int *)(lVar7 + 0x28d0) = -1;
        *puVar2 = 0;
      }
      FUN_0063ff20(param_1,uVar3,param_1 + uVar10 * 0x18 + 0x2838,param_1 + 0x29e8,auStack_268,
                   &local_280);
      uVar12 = local_270;
      lVar7 = (long)local_278;
      if (local_280._4_4_ <= local_278) {
        uVar9 = (long)local_280._4_4_;
        do {
          if ((uVar12 & 1L << (uVar9 & 0x3f)) != 0) {
            (**(code **)PTR_DAT_02714800)
                      (*(undefined8 *)(param_1 + 0x3a60),uVar10,
                       *(undefined4 *)(param_1 + 0x2188 + uVar10 * 0x100 + uVar9 * 4),
                       auStack_268[uVar9]);
          }
          bVar1 = (long)uVar9 < lVar7;
          uVar9 = uVar9 + 1;
        } while (bVar1);
        local_280 = CONCAT44((int)local_280 + 1,(int)local_280);
        local_278 = -1;
        local_270 = 0;
      }
      lVar7 = param_1 + uVar10 * 0x18;
      iVar11 = *(int *)(lVar7 + 0x2960);
      if (*(int *)(lVar7 + 0x295c) <= iVar11) {
        puVar2 = (ulong *)(param_1 + uVar10 * 0x18 + 0x2968);
        uVar12 = (long)*(int *)(lVar7 + 0x295c);
        do {
          if ((*puVar2 & 1L << (uVar12 & 0x3f)) != 0) {
            (**(code **)PTR_DAT_02714808)
                      (*(undefined8 *)(param_1 + 0x3a60),uVar10,uVar12 & 0xffffffff,
                       *(undefined8 *)(&DAT_00001588 + uVar12 * 8 + uVar10 * 0x200 + param_1));
            iVar11 = *(int *)(lVar7 + 0x2960);
          }
          bVar1 = (long)uVar12 < (long)iVar11;
          uVar12 = uVar12 + 1;
        } while (bVar1);
        *(int *)(lVar7 + 0x295c) = *(int *)(param_1 + uVar10 * 0x18 + 0x2958) + 1;
        *(int *)(lVar7 + 0x2960) = -1;
        *puVar2 = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x34));
  }
  uVar4 = *(uint *)(param_1 + 0x2788);
  uVar6 = *(uint *)(param_1 + 0x30);
  if (bVar13) {
    uVar6 = uVar6 | 0x20000;
    uVar4 = uVar4 | 0x20;
    *(uint *)(param_1 + 0x30) = uVar6;
  }
  if ((uVar4 != 0) && ((uVar6 >> 0x11 & 1) != 0)) {
    (**(code **)PTR_DAT_02714810)(*(undefined8 *)(param_1 + 0x3a60));
    *(undefined4 *)(param_1 + 0x2788) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



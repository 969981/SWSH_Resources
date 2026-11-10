/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00535230; name: FUN_00535230
 */


uint FUN_00535230(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long *local_48;
  
  if (((*(char *)(param_1 + 8) == '\0') && (*(char *)(param_1 + 0x67b) == '\0')) &&
     (iVar7 = *(int *)(param_1 + 0x400), 0 < iVar7)) {
    uVar2 = *(uint *)(param_1 + 0x298);
    if (uVar2 == 0x7fffffff) {
      lVar10 = 0;
      do {
        lVar11 = lVar10 * 4;
        lVar10 = lVar10 + 1;
        *(int *)(*(long *)(param_1 + 0x290) + lVar11) =
             *(int *)(*(long *)(param_1 + 0x290) + lVar11) + 1;
      } while (lVar10 < *(int *)(param_1 + 0x400));
    }
    else {
      uVar13 = 0;
      lVar10 = (ulong)uVar2 * 4;
      do {
        if (uVar2 == uVar13) {
          *(int *)(*(long *)(param_1 + 0x290) + lVar10) =
               *(int *)(*(long *)(param_1 + 0x290) + lVar10) + 1;
          iVar7 = *(int *)(param_1 + 0x400);
        }
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)iVar7);
    }
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (((param_2 & 1) != 0) && (*(char *)((long)plVar8 + 0x14ef5) != '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  local_48 = (long *)0x0;
  (**(code **)(*plVar8 + 0x50))(plVar8,0,&local_48);
  if (local_48 == (long *)0x0) {
    uVar6 = 0;
    uVar2 = 0;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_005352f8;
LAB_00535364:
    *(undefined1 *)(param_1 + 0x106c) = 0;
LAB_00535368:
    piVar9 = (int *)(param_1 + 0x5e0);
  }
  else {
    local_60 = *(undefined4 *)((long)local_48 + 0x4c);
    uStack_5c = (undefined4)local_48[10];
    local_68 = 0;
    local_58 = 0x3f80000000000000;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))(*(long **)(param_1 + 0x18),&local_68);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
      local_48 = (long *)0x0;
    }
    uVar2 = uVar6;
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_00535364;
LAB_005352f8:
    uVar6 = uVar2;
    if (*(char *)(param_1 + 0x1068) != '\0') goto LAB_00535364;
    if (*(char *)(param_1 + 0x59c) != '\0') {
      *(char *)(param_1 + 0x106c) = *(char *)(param_1 + 0x106a);
      if (*(char *)(param_1 + 0x106a) != '\0') {
        iVar7 = *(int *)(param_1 + 0x5d8);
        lVar10 = *(long *)(param_1 + 400);
        goto joined_r0x0053532c;
      }
      goto LAB_00535368;
    }
    *(undefined1 *)(param_1 + 0x106c) = 1;
    iVar7 = *(int *)(param_1 + 0x5d8);
    lVar10 = *(long *)(param_1 + 400);
joined_r0x0053532c:
    if (iVar7 == -1) {
      iVar7 = *(int *)(lVar10 + 0x90);
      iVar12 = *(int *)(lVar10 + 0x30);
      if (iVar7 < iVar12) goto LAB_0053533c;
LAB_00535ecc:
      lVar11 = 0;
      iVar7 = *(int *)(param_1 + 0x5e0);
    }
    else {
      iVar12 = *(int *)(lVar10 + 0x30);
      if (iVar12 <= iVar7) goto LAB_00535ecc;
LAB_0053533c:
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + (long)iVar7 * 8);
      iVar7 = *(int *)(param_1 + 0x5e0);
    }
    if (iVar7 == -1) {
      iVar7 = *(int *)(lVar10 + 0x90);
    }
    if (iVar12 <= iVar7) {
      lVar10 = 0;
      if (*(uint *)(lVar11 + 0x54) <= uRam0000000000000054) goto LAB_00535f18;
      goto LAB_00535364;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + (long)iVar7 * 8);
    if (*(uint *)(lVar10 + 0x54) < *(uint *)(lVar11 + 0x54)) goto LAB_00535364;
LAB_00535f18:
    if (*(uint *)(lVar10 + 0x58) < *(uint *)(lVar11 + 0x58)) goto LAB_00535364;
    piVar9 = (int *)(param_1 + 0x5d8);
  }
  cVar3 = *(char *)(param_1 + 0x10d7);
  iVar7 = *piVar9;
  *(int *)(param_1 + 0x5ec) = iVar7;
  *(char *)(param_1 + 0x67c) = cVar3;
  if (*(char *)(param_1 + 0x106d) == '\0') {
    iVar12 = iVar7;
  }
  else {
    iVar15 = *(int *)(param_1 + 0x5e0);
    iVar12 = *(int *)(param_1 + 0x5e4);
    if (iVar15 != iVar7) {
      if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar15 = iVar7 + 1;
      }
      iVar12 = iVar15;
    }
  }
  *(int *)(param_1 + 0x5f0) = iVar12;
  *(int *)(param_1 + 0x5f4) = iVar12;
  if (*(char *)(param_1 + 0x10de) == '\0') {
    iVar7 = iVar12;
  }
  else {
    iVar15 = *(int *)(param_1 + 0x5e0);
    iVar7 = *(int *)(param_1 + 0x5e4);
    if (iVar15 != iVar12) {
      if (iVar12 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar15 = iVar12 + 1;
      }
      iVar7 = iVar15;
    }
  }
  *(int *)(param_1 + 0x5f8) = iVar7;
  *(int *)(param_1 + 0x5fc) = iVar7;
  if (*(char *)(param_1 + 0x10df) == '\0') {
    *(int *)(param_1 + 0x600) = iVar7;
    if (cVar3 != '\0') goto LAB_00535444;
LAB_00535530:
    cVar3 = *(char *)(param_1 + 0x1080);
    iVar12 = iVar7;
joined_r0x00535534:
    iVar7 = iVar12;
    if (cVar3 != '\0') goto LAB_00535538;
LAB_0053546c:
    *(int *)(param_1 + 0x628) = iVar7;
    if (*(char *)(param_1 + 0x1090) == '\0') goto LAB_00535728;
LAB_0053547c:
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 == iVar7) {
      cVar3 = *(char *)(param_1 + 0x67c);
      *(int *)(param_1 + 0x62c) = iVar15;
      iVar12 = iVar15;
      goto joined_r0x00535734;
    }
    if (iVar7 + 1U <= (iVar15 + *(int *)(param_1 + 0x444)) - 1U) {
      iVar12 = iVar7 + 1;
    }
    *(int *)(param_1 + 0x62c) = iVar12;
    if (*(char *)(param_1 + 0x67c) == '\0') goto LAB_00535738;
LAB_00535498:
    cVar3 = *(char *)(param_1 + 0x5a2);
    *(int *)(param_1 + 0x610) = iVar12;
    iVar7 = iVar12;
joined_r0x00535f74:
    if (cVar3 != '\0') goto LAB_005354a4;
LAB_00535764:
    *(int *)(param_1 + 0x614) = iVar7;
    cVar3 = *(char *)(param_1 + 0x1080);
    iVar12 = iVar7;
joined_r0x00535770:
    if (cVar3 != '\0') goto LAB_005354c0;
LAB_00535640:
    *(int *)(param_1 + 0x618) = iVar12;
    if (*(char *)(param_1 + 0x1075) == '\0') {
LAB_00535840:
      iVar1 = iVar12;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5e4);
      iVar15 = *(int *)(param_1 + 0x5e0);
      *(int *)(param_1 + 0x61c) = iVar12;
      *(int *)(param_1 + 0x624) = iVar12;
      iVar7 = iVar1;
      if (iVar15 != iVar12) {
        iVar7 = iVar15;
        if (iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U) {
          iVar7 = iVar12 + 1;
        }
      }
      iVar12 = iVar7;
      if (*(int *)(param_1 + 0x107c) < 2) {
        if (*(int *)(param_1 + 0x1078) == 2) goto LAB_005356c4;
        goto LAB_00535840;
      }
      *(int *)(param_1 + 0x61c) = iVar12;
      iVar7 = iVar1;
      if (iVar15 != iVar12) {
        iVar7 = iVar15;
        if (iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U) {
          iVar7 = iVar12 + 1;
        }
      }
      iVar12 = iVar7;
      if (*(int *)(param_1 + 0x1078) != 2) goto LAB_00535840;
LAB_005356c4:
      if ((*(long *)(param_1 + 0xd38) != 0) || (*(long *)(param_1 + 0x1d8) != 0)) goto LAB_00535840;
      *(int *)(param_1 + 0x624) = iVar12;
      if (iVar15 != iVar12) {
        if (iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U) {
          iVar15 = iVar12 + 1;
        }
        iVar1 = iVar15;
      }
    }
    iVar12 = iVar1;
    *(int *)(param_1 + 0x620) = iVar12;
    *(int *)(param_1 + 0x630) = iVar12;
    if (*(char *)(param_1 + 0x106e) != '\0') goto LAB_005354d0;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x5e4);
    if ((*(int *)(param_1 + 0x5e0) != iVar7) &&
       (iVar12 = *(int *)(param_1 + 0x5e0),
       iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U)) {
      iVar12 = iVar7 + 1;
    }
    *(int *)(param_1 + 0x600) = iVar12;
    iVar7 = iVar12;
    if (cVar3 == '\0') goto LAB_00535530;
LAB_00535444:
    *(int *)(param_1 + 0x604) = iVar7;
    *(int *)(param_1 + 0x608) = iVar7;
    if ((*(char *)(param_1 + 0x104f) != '\0') && (*(char *)(param_1 + 0x5a1) == '\0')) {
      iVar12 = *(int *)(param_1 + 0x5e0);
      iVar15 = *(int *)(param_1 + 0x5e4);
      if (iVar12 != iVar7) {
        if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
          iVar12 = iVar7 + 1;
        }
        iVar15 = iVar12;
      }
      *(int *)(param_1 + 0x608) = iVar15;
      iVar7 = FUN_005b7370(*(undefined8 *)(param_1 + 0x1a0));
      if (iVar7 == 0) {
        *(int *)(param_1 + 0x60c) = iVar15;
        cVar3 = *(char *)(param_1 + 0x1080);
        iVar12 = iVar15;
        goto joined_r0x00535e98;
      }
      iVar12 = *(int *)(param_1 + 0x5e0);
      iVar7 = *(int *)(param_1 + 0x5e4);
      if (iVar12 == iVar15) goto LAB_00535460;
      if (iVar15 + 1U <= (iVar7 + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar15 + 1;
      }
      *(int *)(param_1 + 0x60c) = iVar12;
      cVar3 = *(char *)(param_1 + 0x1080);
      goto joined_r0x00535534;
    }
LAB_00535460:
    *(int *)(param_1 + 0x60c) = iVar7;
    cVar3 = *(char *)(param_1 + 0x1080);
    iVar12 = iVar7;
joined_r0x00535e98:
    iVar7 = iVar12;
    if (cVar3 == '\0') goto LAB_0053546c;
LAB_00535538:
    *(int *)(param_1 + 0x618) = iVar12;
    iVar7 = iVar12;
    if (*(char *)(param_1 + 0x1075) != '\0') {
      iVar1 = *(int *)(param_1 + 0x5e4);
      iVar15 = *(int *)(param_1 + 0x5e0);
      *(int *)(param_1 + 0x61c) = iVar12;
      *(int *)(param_1 + 0x624) = iVar12;
      iVar7 = iVar1;
      if ((iVar15 != iVar12) &&
         (iVar7 = iVar15, iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U)) {
        iVar7 = iVar12 + 1;
      }
      if (*(int *)(param_1 + 0x107c) < 2) {
        iVar12 = iVar7;
        if (*(int *)(param_1 + 0x1078) == 2) goto LAB_005355bc;
      }
      else {
        *(int *)(param_1 + 0x61c) = iVar7;
        iVar12 = iVar1;
        if ((iVar15 != iVar7) &&
           (iVar12 = iVar15, iVar7 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U)) {
          iVar12 = iVar7 + 1;
        }
        iVar7 = iVar12;
        if (*(int *)(param_1 + 0x1078) == 2) {
LAB_005355bc:
          iVar7 = iVar12;
          if ((*(long *)(param_1 + 0xd38) == 0) && (*(long *)(param_1 + 0x1d8) == 0)) {
            *(int *)(param_1 + 0x624) = iVar12;
            iVar7 = iVar1;
            if (iVar15 != iVar12) {
              if (iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U) {
                iVar15 = iVar12 + 1;
              }
              iVar7 = iVar15;
            }
          }
        }
      }
    }
    *(int *)(param_1 + 0x620) = iVar7;
    *(int *)(param_1 + 0x628) = iVar7;
    if (*(char *)(param_1 + 0x1090) != '\0') goto LAB_0053547c;
LAB_00535728:
    cVar3 = *(char *)(param_1 + 0x67c);
    *(int *)(param_1 + 0x62c) = iVar7;
    iVar12 = iVar7;
joined_r0x00535734:
    if (cVar3 != '\0') goto LAB_00535498;
LAB_00535738:
    *(int *)(param_1 + 0x604) = iVar12;
    *(int *)(param_1 + 0x608) = iVar12;
    if ((*(char *)(param_1 + 0x104f) == '\0') || (*(char *)(param_1 + 0x5a1) != '\0')) {
LAB_00535754:
      *(int *)(param_1 + 0x60c) = iVar12;
      cVar3 = *(char *)(param_1 + 0x5a2);
      *(int *)(param_1 + 0x610) = iVar12;
      iVar7 = iVar12;
      goto joined_r0x00535f74;
    }
    iVar7 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar7 != iVar12) {
      if (iVar12 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar7 = iVar12 + 1;
      }
      iVar15 = iVar7;
    }
    *(int *)(param_1 + 0x608) = iVar15;
    iVar7 = FUN_005b7370(*(undefined8 *)(param_1 + 0x1a0));
    if (iVar7 == 0) {
      *(int *)(param_1 + 0x60c) = iVar15;
      cVar3 = *(char *)(param_1 + 0x5a2);
      *(int *)(param_1 + 0x610) = iVar15;
      iVar7 = iVar15;
      goto joined_r0x00535f74;
    }
    iVar7 = *(int *)(param_1 + 0x5e0);
    iVar12 = *(int *)(param_1 + 0x5e4);
    if (iVar7 == iVar15) goto LAB_00535754;
    if (iVar15 + 1U <= (iVar12 + *(int *)(param_1 + 0x444)) - 1U) {
      iVar7 = iVar15 + 1;
    }
    *(int *)(param_1 + 0x60c) = iVar7;
    *(int *)(param_1 + 0x610) = iVar7;
    if (*(char *)(param_1 + 0x5a2) == '\0') goto LAB_00535764;
LAB_005354a4:
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 == iVar7) {
      *(int *)(param_1 + 0x614) = iVar15;
      cVar3 = *(char *)(param_1 + 0x1080);
      iVar12 = iVar15;
      goto joined_r0x00535770;
    }
    if (iVar7 + 1U <= (iVar15 + *(int *)(param_1 + 0x444)) - 1U) {
      iVar12 = iVar7 + 1;
    }
    *(int *)(param_1 + 0x614) = iVar12;
    if (*(char *)(param_1 + 0x1080) == '\0') goto LAB_00535640;
LAB_005354c0:
    *(int *)(param_1 + 0x630) = iVar12;
    if (*(char *)(param_1 + 0x106e) != '\0') {
LAB_005354d0:
      iVar1 = *(int *)(param_1 + 0x5e4);
      iVar15 = *(int *)(param_1 + 0x5e0);
      iVar7 = iVar1;
      if ((iVar15 != iVar12) &&
         (iVar7 = iVar15, iVar12 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U)) {
        iVar7 = iVar12 + 1;
      }
      *(int *)(param_1 + 0x634) = iVar7;
      iVar12 = iVar1;
      if (iVar15 != iVar7) {
        if (iVar7 + 1U <= (iVar1 + *(int *)(param_1 + 0x444)) - 1U) {
          iVar15 = iVar7 + 1;
        }
        iVar12 = iVar15;
      }
    }
  }
  *(int *)(param_1 + 0x638) = iVar12;
  *(int *)(param_1 + 0x63c) = iVar12;
  if (*(char *)(param_1 + 0x1074) == '\0') {
    cVar3 = *(char *)(param_1 + 0xf39);
    *(int *)(param_1 + 0x644) = iVar12;
    *(int *)(param_1 + 0x660) = iVar12;
    iVar7 = iVar12;
joined_r0x00535950:
    if (cVar3 == '\0') goto LAB_00535954;
LAB_005358a4:
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 != iVar7) {
      if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar7 + 1;
      }
      iVar15 = iVar12;
    }
    *(int *)(param_1 + 0x664) = iVar15;
    *(int *)(param_1 + 0x650) = iVar15;
    iVar7 = iVar15;
    if (*(char *)(param_1 + 0xc2d) == '\0') goto LAB_00535968;
LAB_005358dc:
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 != iVar7) {
      if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar7 + 1;
      }
      iVar15 = iVar12;
    }
    *(int *)(param_1 + 0x654) = iVar15;
    *(int *)(param_1 + 0x658) = iVar15;
    iVar7 = iVar15;
    if (*(char *)(param_1 + 0xc35) == '\0') goto LAB_0053597c;
LAB_00535914:
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 != iVar7) {
      if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar7 + 1;
      }
      iVar15 = iVar12;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5e4);
    iVar15 = *(int *)(param_1 + 0x5e0);
    if (iVar15 == iVar12) {
      *(int *)(param_1 + 0x640) = iVar7;
      iVar1 = iVar7;
    }
    else {
      iVar1 = iVar15;
      if (iVar12 + 1U <= (iVar7 + *(int *)(param_1 + 0x444)) - 1U) {
        iVar1 = iVar12 + 1;
      }
      *(int *)(param_1 + 0x640) = iVar1;
    }
    if (iVar15 != iVar1) {
      if (iVar1 + 1U <= (iVar7 + *(int *)(param_1 + 0x444)) - 1U) {
        iVar15 = iVar1 + 1;
      }
      cVar3 = *(char *)(param_1 + 0xf39);
      *(int *)(param_1 + 0x644) = iVar15;
      *(int *)(param_1 + 0x660) = iVar15;
      iVar7 = iVar15;
      goto joined_r0x00535950;
    }
    *(int *)(param_1 + 0x644) = iVar7;
    *(int *)(param_1 + 0x660) = iVar7;
    if (*(char *)(param_1 + 0xf39) != '\0') goto LAB_005358a4;
LAB_00535954:
    *(int *)(param_1 + 0x664) = iVar7;
    *(int *)(param_1 + 0x650) = iVar7;
    if (*(char *)(param_1 + 0xc2d) != '\0') goto LAB_005358dc;
LAB_00535968:
    *(int *)(param_1 + 0x654) = iVar7;
    *(int *)(param_1 + 0x658) = iVar7;
    if (*(char *)(param_1 + 0xc35) != '\0') goto LAB_00535914;
LAB_0053597c:
    iVar15 = iVar7;
  }
  *(int *)(param_1 + 0x65c) = iVar15;
  *(int *)(param_1 + 0x648) = iVar15;
  if (*(char *)(param_1 + 0x10d5) == '\0') {
    iVar7 = iVar15;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar7 = *(int *)(param_1 + 0x5e4);
    if (iVar12 != iVar15) {
      if (iVar15 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar15 + 1;
      }
      iVar7 = iVar12;
    }
  }
  *(int *)(param_1 + 0x64c) = iVar7;
  *(int *)(param_1 + 0x668) = iVar7;
  *(int *)(param_1 + 0x66c) = iVar7;
  if ((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) {
    *(int *)(param_1 + 0x670) = iVar7;
    *(int *)(param_1 + 0x674) = iVar7;
    cVar3 = *(char *)(param_1 + 0x1069);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x5e0);
    iVar15 = *(int *)(param_1 + 0x5e4);
    if (iVar12 != iVar7) {
      if (iVar7 + 1U <= (*(int *)(param_1 + 0x5e4) + *(int *)(param_1 + 0x444)) - 1U) {
        iVar12 = iVar7 + 1;
      }
      iVar15 = iVar12;
    }
    *(int *)(param_1 + 0x670) = iVar15;
    *(int *)(param_1 + 0x674) = iVar15;
    cVar3 = *(char *)(param_1 + 0x1069);
  }
  if (cVar3 == '\0') {
    *(undefined8 *)PTR_DAT_02713a70 = 0;
  }
  puVar4 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar8,0);
    *(long **)PTR_DAT_027139b8 = plVar8;
    *(undefined4 *)puVar4 = 1;
    if (plVar8 != (long *)0x0) goto LAB_00535a78;
LAB_00535b00:
    iVar7 = 0;
  }
  else {
    plVar8 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (iVar7 + 1 < 2) {
      if (plVar8 == (long *)0x0) goto LAB_00535b00;
LAB_00535a78:
      uVar16 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar16,plVar8);
      iVar7 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  puVar5 = PTR_DAT_02713aa0;
  *(int *)puVar4 = iVar7;
  cVar3 = *puVar5;
  *(char *)(param_1 + 0x104e) = cVar3;
  if (cVar3 != '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      uVar6 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
      if ((-1 < (int)uVar6) && (*(char *)(param_1 + 0x1069) != '\0')) {
        *(undefined1 *)(param_1 + 0x678) = 1;
      }
    }
    else {
      uVar6 = FUN_0059e450(0x3f800000,0,0,0,0,0,0,0,0);
    }
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
  }
  FUN_005714c0(plVar8,0x10,3,0xffffffff);
  FUN_00540e00(*(undefined8 *)(param_1 + 0x18),0);
  if (*(int *)(param_1 + 0x440) <= param_3) {
    param_3 = *(int *)(param_1 + 0x440);
  }
  if ((*(long *)(param_1 + 0x70) != 0) || (param_3 == 0)) goto LAB_00535d64;
  if (*(char *)(param_1 + 0x1069) == '\0') {
LAB_00535cc0:
    if (*(char *)(param_1 + 0x894) == '\0') goto LAB_00535bd4;
LAB_00535cc8:
    uVar14 = *(undefined4 *)(param_1 + 0x690);
  }
  else {
    iVar7 = FUN_0059e340(0x3f800000,0,0,0,0);
    if (iVar7 < 0) {
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x797b)
        ;
        uVar16 = FUN_00546ea0(iVar7);
        FUN_00517ae0("CPostEffectEndPostEffectScene_PreProcess: CRenderTexture::ResolveCurrentDepthStencilTexture() failed (0x%x: %s).\n"
                     ,iVar7,uVar16);
      }
      goto LAB_00535cc0;
    }
    if (*(char *)(param_1 + 0x1069) == '\0') goto LAB_00535cc0;
    *(undefined1 *)(param_1 + 0x678) = 1;
    if (*(char *)(param_1 + 0x894) != '\0') goto LAB_00535cc8;
LAB_00535bd4:
    uVar14 = 0;
  }
  FUN_005706c0(*(undefined4 *)(param_1 + 0x8cc),*(undefined4 *)(param_1 + 0x8d0),plVar8);
  iVar7 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
  if ((-1 < iVar7) && (*(char *)(param_1 + 0x1069) != '\0')) {
    *(undefined1 *)(param_1 + 0x678) = 1;
  }
  FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
  lVar10 = 0x5e8;
  if (-1 < param_3) {
    lVar10 = 0x5dc;
  }
  if (-1 >= param_3) {
    param_3 = 1;
  }
  uVar6 = FUN_005a6650(0x3f800000,*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x5d8),
                       *(undefined4 *)(param_1 + lVar10),param_3,uVar14,1);
  *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x5d8);
LAB_00535d64:
  if ((*(char *)(param_1 + 0x1069) != '\0') && (*(char *)(param_1 + 0x104e) == '\0')) {
    uVar6 = FUN_0059e340(0x3f800000,0,0,0,0);
    if ((int)uVar6 < 0) {
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x7a17)
        ;
        uVar16 = FUN_00546ea0(uVar6);
        FUN_00517ae0("CPostEffectEndPostEffectScene_PreProcess: CRenderTexture::ResolveCurrentDepthStencilTexture() failed (0x%x: %s).\n"
                     ,uVar6,uVar16);
      }
    }
    else if (*(char *)(param_1 + 0x1069) != '\0') {
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
  }
  return uVar6 & (int)uVar6 >> 0x1f;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ee920; name: FUN_005ee920
 */


void FUN_005ee920(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined1 uVar15;
  size_t sVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  long *local_8f8;
  undefined1 *local_8f0;
  size_t local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  ulong local_8d0;
  undefined1 local_8c8 [1024];
  long *local_4c8;
  undefined1 *local_4c0;
  size_t local_4b8;
  long local_4b0;
  ulong local_4a8;
  ulong local_4a0;
  undefined1 local_498 [1024];
  long *local_98;
  void *local_90;
  size_t local_88;
  byte local_70;
  
  FUN_005c47b0(param_2,&DAT_01d38550);
  FUN_005e44b0(&local_98,param_1 + 0x68,0);
  FUN_005ca160(&local_98,&DAT_01cdd9ff,&DAT_01ce4b94,0,0,1);
  FUN_005ca160(&local_98,&DAT_01cf5f85,&DAT_01ce4b94,0,0,1);
  puVar1 = (ulong *)(param_2 + 0x20);
  if (local_88 != 0) {
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + local_88;
    if (*(ulong *)(param_2 + 0x20) <= uVar9) {
      uVar9 = uVar9 + 1;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *(ulong *)(param_2 + 0x20) * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + local_88;
    }
    memcpy((void *)(*(long *)(param_2 + 8) + lVar8),local_90,local_88);
    *(size_t *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + local_88;
    *(undefined1 *)(*(long *)(param_2 + 8) + uVar9) = 0;
  }
  plVar17 = (long *)(param_2 + 0x10);
  lVar8 = *plVar17;
  uVar9 = lVar8 + 1;
  if (*puVar1 <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *puVar1 * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  plVar18 = (long *)(param_2 + 8);
  *(undefined1 *)(*plVar18 + lVar8) = 0x5f;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(param_1 + 0xa0) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0xa0);
    }
    FUN_005c4aa0(&local_4c8,puVar3);
    if (local_4b8 != 0) {
      lVar8 = *plVar17;
      uVar9 = lVar8 + local_4b8;
      if (*puVar1 <= uVar9) {
        uVar9 = uVar9 + 1;
        if (*(long *)(param_2 + 0x18) == 0) {
          uVar19 = *puVar1 * 2;
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
        }
        else {
          uVar9 = *(long *)(param_2 + 0x18) + uVar9;
        }
        FUN_005c5e00(param_2,uVar9,1);
        lVar8 = *(long *)(param_2 + 0x10);
        uVar9 = lVar8 + local_4b8;
      }
      memcpy((void *)(*plVar18 + lVar8),local_4c0,local_4b8);
      *plVar17 = *plVar17 + local_4b8;
      *(undefined1 *)(*plVar18 + uVar9) = 0;
    }
    if (((byte)local_4a0 & 1) == 0) {
      if ((local_4c0 != (void *)0x0) && (local_4c8 != (long *)0x0)) {
        (**(code **)(*local_4c8 + 0x48))
                  (local_4c8,local_4c0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_4c0 = (void *)0x0;
    }
    lVar8 = *plVar17;
    uVar9 = lVar8 + 1;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 2;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 1;
    }
    *(undefined1 *)(*plVar18 + lVar8) = 0x5f;
    *plVar17 = *plVar17 + 1;
    *(undefined1 *)(*plVar18 + uVar9) = 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar20 = *(int *)(param_1 + 0x3c);
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x48);
    iVar20 = *(int *)(param_1 + 0x4c);
  }
  switch(iVar7) {
  case 2:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 3;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 4;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 3;
    }
    uVar15 = 0x4c;
    puVar10 = (undefined2 *)(*plVar18 + lVar8);
    uVar12 = 0x474f;
    break;
  case 3:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 6;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 7;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 6;
    }
    uVar12 = 0x3353;
    puVar11 = (undefined4 *)(*plVar18 + lVar8);
    uVar13 = 0x454c474f;
    goto LAB_005eee80;
  case 4:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 5;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 6;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 5;
    }
    lVar14 = *plVar18;
    uVar15 = 0x31;
    goto LAB_005eedf0;
  case 5:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 5;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 6;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 5;
    }
    lVar14 = *plVar18;
    uVar15 = 0x32;
LAB_005eedf0:
    *(undefined1 *)((undefined4 *)(lVar14 + lVar8) + 1) = uVar15;
    *(undefined4 *)(lVar14 + lVar8) = 0x31443344;
    lVar8 = 5;
    goto LAB_005eeec0;
  case 6:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 3;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 4;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 3;
    }
    uVar15 = 0x34;
    puVar10 = (undefined2 *)(*plVar18 + lVar8);
    uVar12 = 0x5350;
    break;
  case 7:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 6;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 7;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 6;
    }
    uVar12 = 0x6e61;
    puVar11 = (undefined4 *)(*plVar18 + lVar8);
    uVar13 = 0x6b6c7556;
LAB_005eee80:
    *(undefined2 *)(puVar11 + 1) = uVar12;
    *puVar11 = uVar13;
    lVar8 = 6;
    goto LAB_005eeec0;
  case 8:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
    }
    *(undefined2 *)(*plVar18 + lVar8) = 0x584e;
    lVar8 = 2;
    goto LAB_005eeec0;
  default:
    goto switchD_005eec14_default;
  }
  *(undefined1 *)(puVar10 + 1) = uVar15;
  *puVar10 = uVar12;
  lVar8 = 3;
LAB_005eeec0:
  *plVar17 = *plVar17 + lVar8;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
switchD_005eec14_default:
  lVar8 = *plVar17;
  uVar9 = lVar8 + 1;
  if (*puVar1 <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *puVar1 * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  *(undefined1 *)(*plVar18 + lVar8) = 0x5f;
  *plVar17 = *plVar17 + 1;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
  if (iVar20 == 4) {
    lVar8 = *plVar17;
    uVar9 = lVar8 + 4;
    if (uVar9 < *puVar1) {
      uVar13 = 0x4c535350;
    }
    else {
      uVar9 = lVar8 + 5;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 4;
      uVar13 = 0x4c535350;
    }
LAB_005ef058:
    *(undefined4 *)(*plVar18 + lVar8) = uVar13;
    *plVar17 = *plVar17 + 4;
    *(undefined1 *)(*plVar18 + uVar9) = 0;
  }
  else {
    if (iVar20 == 3) {
      lVar8 = *plVar17;
      uVar9 = lVar8 + 4;
      if (*puVar1 <= uVar9) {
        uVar9 = lVar8 + 5;
        if (*(long *)(param_2 + 0x18) == 0) {
          uVar19 = *puVar1 * 2;
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
        }
        else {
          uVar9 = *(long *)(param_2 + 0x18) + uVar9;
        }
        FUN_005c5e00(param_2,uVar9,1);
        lVar8 = *(long *)(param_2 + 0x10);
        uVar9 = lVar8 + 4;
      }
      uVar13 = 0x4c534c48;
      goto LAB_005ef058;
    }
    if (iVar20 == 2) {
      lVar8 = *plVar17;
      uVar9 = lVar8 + 4;
      uVar13 = 0x4c534c47;
      if (*puVar1 <= uVar9) {
        uVar9 = lVar8 + 5;
        if (*(long *)(param_2 + 0x18) == 0) {
          uVar19 = *puVar1 * 2;
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
        }
        else {
          uVar9 = *(long *)(param_2 + 0x18) + uVar9;
        }
        FUN_005c5e00(param_2,uVar9,1);
        lVar8 = *(long *)(param_2 + 0x10);
        uVar9 = lVar8 + 4;
      }
      goto LAB_005ef058;
    }
  }
  lVar8 = *plVar17;
  uVar9 = lVar8 + 1;
  if (*puVar1 <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *puVar1 * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  *(undefined1 *)(*plVar18 + lVar8) = 0x5f;
  *plVar17 = *plVar17 + 1;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 1:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (uVar9 < *puVar1) {
      uVar12 = 0x5356;
    }
    else {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
      uVar12 = 0x5356;
    }
    break;
  case 2:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (uVar9 < *puVar1) {
      uVar12 = 0x5350;
    }
    else {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
      uVar12 = 0x5350;
    }
    break;
  case 3:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (uVar9 < *puVar1) {
      uVar12 = 0x5347;
    }
    else {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
      uVar12 = 0x5347;
    }
    break;
  case 4:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (uVar9 < *puVar1) {
      uVar12 = 0x5344;
    }
    else {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
      uVar12 = 0x5344;
    }
    break;
  case 5:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
    }
    uVar12 = 0x5348;
    break;
  case 6:
    lVar8 = *plVar17;
    uVar9 = lVar8 + 2;
    if (*puVar1 <= uVar9) {
      uVar9 = lVar8 + 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + 2;
    }
    uVar12 = 0x5343;
    break;
  default:
    goto switchD_005ef0f8_default;
  }
  *(undefined2 *)(*plVar18 + lVar8) = uVar12;
  *plVar17 = *plVar17 + 2;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
switchD_005ef0f8_default:
  lVar8 = *plVar17;
  uVar9 = lVar8 + 1;
  if (*puVar1 <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *puVar1 * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + lVar8) = 0x5f;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  *(undefined1 *)(*(long *)(param_2 + 8) + uVar9) = 0;
  FUN_005ee050(param_2,"%d_%d",uVar5,uVar6);
  lVar8 = *(long *)(param_2 + 0x10);
  uVar9 = lVar8 + 1;
  if (*(ulong *)(param_2 + 0x20) <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *(ulong *)(param_2 + 0x20) * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + lVar8) = 0x5f;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  *(undefined1 *)(*(long *)(param_2 + 8) + uVar9) = 0;
  FUN_005ee050(param_2,"%d_%d",*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  lVar8 = *(long *)(param_2 + 0x10);
  uVar9 = lVar8 + 1;
  if (*(ulong *)(param_2 + 0x20) <= uVar9) {
    uVar9 = lVar8 + 2;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *(ulong *)(param_2 + 0x20) * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 1;
  }
  *(undefined1 *)(*plVar18 + lVar8) = 0x5f;
  *plVar17 = *plVar17 + 1;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
  local_4c0 = local_498;
  local_4c8 = (long *)0x0;
  local_4b0 = 0;
  local_4b8 = 0;
  local_4a8 = 0x400;
  local_4a0 = 1;
  lVar8 = FUN_005bc740();
  if (lVar8 == 0) {
    local_4c8 = (long *)FUN_005bc6f0();
  }
  else {
    local_4c8 = (long *)FUN_005bc740();
  }
  *local_4c0 = 0;
  sVar16 = *(size_t *)(param_1 + 0xd8);
  if (sVar16 != 0) {
    uVar9 = local_4b8 + sVar16;
    if (local_4a8 <= uVar9) {
      uVar9 = uVar9 + 1;
      if (local_4b0 == 0) {
        if (uVar9 <= local_4a8 * 2) {
          uVar9 = local_4a8 * 2;
        }
      }
      else {
        uVar9 = local_4b0 + uVar9;
      }
      FUN_005c5e00(&local_4c8,uVar9,1);
      uVar9 = local_4b8 + sVar16;
    }
    memcpy(local_4c0 + local_4b8,*(void **)(param_1 + 0xd0),sVar16);
    local_4b8 = local_4b8 + sVar16;
    local_4c0[uVar9] = 0;
  }
  sVar16 = *(size_t *)(param_1 + 0x108);
  if (sVar16 != 0) {
    uVar9 = local_4b8 + sVar16;
    if (local_4a8 <= uVar9) {
      uVar9 = uVar9 + 1;
      if (local_4b0 == 0) {
        if (uVar9 <= local_4a8 * 2) {
          uVar9 = local_4a8 * 2;
        }
      }
      else {
        uVar9 = local_4b0 + uVar9;
      }
      FUN_005c5e00(&local_4c8,uVar9,1);
      uVar9 = local_4b8 + sVar16;
    }
    memcpy(local_4c0 + local_4b8,*(void **)(param_1 + 0x100),sVar16);
    local_4b8 = local_4b8 + sVar16;
    local_4c0[uVar9] = 0;
  }
  uVar9 = *(ulong *)(param_1 + 0x1e8);
  if (uVar9 == 0) {
    uVar9 = *(ulong *)(param_1 + 0x198);
    if (uVar9 != 0) {
      lVar8 = 0;
      uVar19 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x1b0) + lVar8;
        sVar16 = *(size_t *)(lVar14 + 0x10);
        if (sVar16 != 0) {
          uVar9 = local_4b8 + sVar16;
          if (local_4a8 <= uVar9) {
            uVar9 = uVar9 + 1;
            uVar4 = uVar9;
            if (uVar9 <= local_4a8 * 2) {
              uVar4 = local_4a8 * 2;
            }
            if (local_4b0 != 0) {
              uVar4 = local_4b0 + uVar9;
            }
            FUN_005c5e00(&local_4c8,uVar4,1);
            uVar9 = local_4b8 + sVar16;
          }
          memcpy(local_4c0 + local_4b8,*(void **)(lVar14 + 8),sVar16);
          local_4b8 = local_4b8 + sVar16;
          local_4c0[uVar9] = 0;
          uVar9 = *(ulong *)(param_1 + 0x198);
        }
        uVar19 = uVar19 + 1;
        lVar8 = lVar8 + 0x30;
      } while (uVar19 < uVar9);
    }
  }
  else {
    lVar8 = 0;
    uVar19 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x200) + lVar8;
      sVar16 = *(size_t *)(lVar14 + 0x10);
      if (sVar16 != 0) {
        uVar9 = local_4b8 + sVar16;
        if (local_4a8 <= uVar9) {
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
          if (uVar9 <= local_4a8 * 2) {
            uVar4 = local_4a8 * 2;
          }
          if (local_4b0 != 0) {
            uVar4 = local_4b0 + uVar9;
          }
          FUN_005c5e00(&local_4c8,uVar4,1);
          uVar9 = local_4b8 + sVar16;
        }
        memcpy(local_4c0 + local_4b8,*(void **)(lVar14 + 8),sVar16);
        local_4b8 = local_4b8 + sVar16;
        local_4c0[uVar9] = 0;
        uVar9 = *(ulong *)(param_1 + 0x1e8);
      }
      uVar19 = uVar19 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar19 < uVar9);
  }
  uVar5 = FUN_005c35c0(&local_4c8);
  uVar6 = FUN_005c3610(&local_4c8);
  local_8f0 = local_8c8;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8f8 = (long *)0x0;
  local_8d8 = 0x400;
  local_8d0 = 1;
  lVar8 = FUN_005bc740();
  if (lVar8 == 0) {
    local_8f8 = (long *)FUN_005bc6f0();
  }
  else {
    local_8f8 = (long *)FUN_005bc740();
  }
  *local_8f0 = 0;
  FUN_005c9140(&local_8f8,"_%08x_%08x",uVar5,uVar6);
  sVar16 = local_8e8;
  if (local_8e8 != 0) {
    lVar8 = *plVar17;
    uVar9 = lVar8 + local_8e8;
    if (*puVar1 <= uVar9) {
      uVar9 = uVar9 + 1;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar19 = *puVar1 * 2;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
      }
      else {
        uVar9 = *(long *)(param_2 + 0x18) + uVar9;
      }
      FUN_005c5e00(param_2,uVar9,1);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar9 = lVar8 + sVar16;
    }
    memcpy((void *)(*plVar18 + lVar8),local_8f0,sVar16);
    *plVar17 = *plVar17 + sVar16;
    *(undefined1 *)(*plVar18 + uVar9) = 0;
  }
  lVar8 = *plVar17;
  uVar9 = lVar8 + 0xc;
  if (*puVar1 <= uVar9) {
    uVar9 = lVar8 + 0xd;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar19 = *puVar1 * 2;
      if (uVar9 <= uVar19) {
        uVar9 = uVar19;
      }
    }
    else {
      uVar9 = *(long *)(param_2 + 0x18) + uVar9;
    }
    FUN_005c5e00(param_2,uVar9,1);
    lVar8 = *(long *)(param_2 + 0x10);
    uVar9 = lVar8 + 0xc;
  }
  pcVar2 = (char *)(*plVar18 + lVar8);
  *(undefined8 *)pcVar2 = s__shadercache_01d17991._0_8_;
  pcVar2[8] = 'a';
  pcVar2[9] = 'c';
  pcVar2[10] = 'h';
  pcVar2[0xb] = 'e';
  *plVar17 = *plVar17 + 0xc;
  *(undefined1 *)(*plVar18 + uVar9) = 0;
  if ((local_8d0 & 1) == 0) {
    if ((local_8f0 != (undefined1 *)0x0) && (local_8f8 != (long *)0x0)) {
      (**(code **)(*local_8f8 + 0x48))
                (local_8f8,local_8f0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_8f0 = (undefined1 *)0x0;
  }
  if ((local_4a0 & 1) == 0) {
    if ((local_4c0 != (undefined1 *)0x0) && (local_4c8 != (long *)0x0)) {
      (**(code **)(*local_4c8 + 0x48))
                (local_4c8,local_4c0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_4c0 = (undefined1 *)0x0;
  }
  if ((((local_70 & 1) == 0) && (local_90 != (void *)0x0)) && (local_98 != (long *)0x0)) {
    (**(code **)(*local_98 + 0x48))
              (local_98,local_90,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return;
}



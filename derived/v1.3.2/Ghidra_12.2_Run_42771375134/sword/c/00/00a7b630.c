/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7b630; name: FUN_00a7b630
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a7b630(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ushort uVar14;
  long *plVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined1 auStack_80 [12];
  char local_74;
  
  plVar24 = (long *)(param_2 + 0x18);
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x8fc95125c069b9d) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x48fc95125c069b9d);
    } while (plVar15[2] != 0x48fc95125c069b9d);
  }
  else {
    lVar20 = 0x48fc95125c069b9d;
    if (uVar18 < 0x48fc95125c069b9e) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x48fc95125c069b9d / uVar18;
      }
      lVar20 = 0x48fc95125c069b9d - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x48fc95125c069b9d);
    } while (plVar15[2] != 0x48fc95125c069b9d);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 1:
    iVar9 = (**(code **)(*param_1 + 0x870))(param_1);
    if (iVar9 != 0) {
      return 0;
    }
    break;
  case 2:
    iVar9 = (**(code **)(*param_1 + 0x870))(param_1);
    if (iVar9 != 1) {
      return 0;
    }
    break;
  case 4:
    uVar13 = (**(code **)(*param_1 + 0x870))(param_1);
    iVar9 = (int)uVar13;
    goto joined_r0x00a7b7a0;
  case 5:
    iVar9 = (**(code **)(*param_1 + 0x870))(param_1);
    if (iVar9 != 0) {
      return 0;
    }
    uVar13 = (**(code **)(*param_1 + 0x868))(param_1);
    iVar9 = (int)uVar13;
joined_r0x00a7b7a0:
    if (iVar9 == 0) {
      return uVar13;
    }
    break;
  case 6:
    iVar9 = (**(code **)(*param_1 + 0x870))(param_1);
    if (iVar9 != 2) {
      return 0;
    }
    break;
  case 7:
    iVar9 = (**(code **)(*param_1 + 0x870))(param_1);
    if (iVar9 == 2) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0xe454976f69f0033) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x31bab6890960ffcd);
    } while (plVar15[2] != -0x31bab6890960ffcd);
  }
  else {
    lVar20 = -0x31bab6890960ffcd;
    if (uVar18 < 0xce454976f69f0034) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xce454976f69f0033 / uVar18;
      }
      lVar20 = -0x31bab6890960ffcd - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x31bab6890960ffcd);
    } while (plVar15[2] != -0x31bab6890960ffcd);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 1:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    break;
  case 2:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    goto joined_r0x00a7b8e4;
  case 3:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x1704));
    break;
  case 4:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x1704));
joined_r0x00a7b8e4:
    if ((uVar18 & 1) != 0) {
      return 0;
    }
  default:
    goto switchD_00a7b878_default;
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
switchD_00a7b878_default:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  uVar17 = uVar18 - 1;
  if ((uVar17 & uVar18) == 0) {
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + (uVar17 & 0x679a87fa7daf60a2) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x679a87fa7daf60a2);
    } while (plVar15[2] != 0x679a87fa7daf60a2);
  }
  else {
    lVar21 = 0x679a87fa7daf60a2;
    if (uVar18 < 0x679a87fa7daf60a3) {
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = 0x679a87fa7daf60a2 / uVar18;
      }
      lVar21 = 0x679a87fa7daf60a2 - uVar19 * uVar18;
    }
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x679a87fa7daf60a2);
    } while (plVar15[2] != 0x679a87fa7daf60a2);
  }
  if (*(int *)((long)plVar15 + 0x18) - 1U < 4) {
    return 0;
  }
  if ((uVar17 & uVar18) == 0) {
    plVar15 = *(long **)(lVar20 + (uVar17 & 0xb5f8f91ce12c9ced) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4a0706e31ed36313);
    } while (plVar15[2] != -0x4a0706e31ed36313);
  }
  else {
    lVar21 = -0x4a0706e31ed36313;
    if (uVar18 < 0xb5f8f91ce12c9cee) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xb5f8f91ce12c9ced / uVar18;
      }
      lVar21 = -0x4a0706e31ed36313 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4a0706e31ed36313);
    } while (plVar15[2] != -0x4a0706e31ed36313);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x29) {
    iVar9 = (**(code **)(*param_1 + 0x868))(param_1);
    if (iVar9 != 3) {
      return 0;
    }
  }
  else if ((*(int *)((long)plVar15 + 0x18) == 0x28) &&
          (iVar9 = (**(code **)(*param_1 + 0x868))(param_1), iVar9 == 3)) {
    return 0;
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  uVar17 = uVar18 - 1;
  if ((uVar17 & uVar18) == 0) {
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + (uVar17 & 0xa0d28d44265403fa) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x5f2d72bbd9abfc06);
    } while (plVar15[2] != -0x5f2d72bbd9abfc06);
  }
  else {
    lVar21 = -0x5f2d72bbd9abfc06;
    if (uVar18 < 0xa0d28d44265403fb) {
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = 0xa0d28d44265403fa / uVar18;
      }
      lVar21 = -0x5f2d72bbd9abfc06 - uVar19 * uVar18;
    }
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x5f2d72bbd9abfc06);
    } while (plVar15[2] != -0x5f2d72bbd9abfc06);
  }
  if (*(int *)((long)plVar15 + 0x18) - 0x33U < 5) {
    return 0;
  }
  if ((uVar17 & uVar18) == 0) {
    plVar15 = *(long **)(lVar20 + (uVar17 & 0x1bc53d11f9eb957b) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x643ac2ee06146a85);
    } while (plVar15[2] != -0x643ac2ee06146a85);
  }
  else {
    lVar21 = -0x643ac2ee06146a85;
    if (uVar18 < 0x9bc53d11f9eb957c) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x9bc53d11f9eb957b / uVar18;
      }
      lVar21 = -0x643ac2ee06146a85 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x643ac2ee06146a85);
    } while (plVar15[2] != -0x643ac2ee06146a85);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x3d) {
    if ((*(uint *)((long)param_1 + 0x16fc) != 0xff) &&
       (plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9],
       plVar15 != (long *)0x0)) {
      plVar25 = plVar15 + 9;
      (**(code **)(*plVar25 + 0x10))(plVar25);
      (**(code **)(*plVar15 + 0x220))(auStack_80,plVar15);
      (**(code **)(*plVar25 + 0x18))(plVar25);
      if (local_74 != '\0') {
        return 0;
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x18) == 0x3c) {
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    (**(code **)(*plVar15 + 0x220))(auStack_80,plVar15);
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if (local_74 == '\0') {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0xc6745c3ba170710) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x5398ba3c45e8f8f0);
    } while (plVar15[2] != -0x5398ba3c45e8f8f0);
  }
  else {
    lVar20 = -0x5398ba3c45e8f8f0;
    if (uVar18 < 0xac6745c3ba170711) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xac6745c3ba170710 / uVar18;
      }
      lVar20 = -0x5398ba3c45e8f8f0 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x5398ba3c45e8f8f0);
    } while (plVar15[2] != -0x5398ba3c45e8f8f0);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x3f) {
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 != 0) {
      bVar4 = false;
      lVar20 = 0x5c2;
      do {
        if ((uVar11 != 0xff) && (lVar21 = param_1[(ulong)uVar11 + 0xa9], lVar21 != 0)) {
          plVar15 = (long *)(lVar21 + 0x48);
          (**(code **)(*plVar15 + 0x10))(plVar15);
          cVar5 = FUN_00ad59f0(lVar21);
          bVar4 = (bool)(bVar4 | cVar5 != '\0');
          (**(code **)(*plVar15 + 0x18))(plVar15);
          if (cVar5 != '\0') goto LAB_00a7bed8;
        }
        if ((long)(int)uVar1 <= lVar20 + -0x5c1) goto LAB_00a7bed8;
        uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      } while( true );
    }
  }
  else if (*(int *)((long)plVar15 + 0x18) == 0x3e) {
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 == 0) {
      return 0;
    }
    bVar4 = false;
    lVar20 = 0x5c2;
    do {
      if ((uVar11 != 0xff) && (lVar21 = param_1[(ulong)uVar11 + 0xa9], lVar21 != 0)) {
        plVar15 = (long *)(lVar21 + 0x48);
        (**(code **)(*plVar15 + 0x10))(plVar15);
        cVar5 = FUN_00ad59f0(lVar21);
        bVar4 = (bool)(bVar4 | cVar5 != '\0');
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (cVar5 != '\0') goto LAB_00a7bde4;
      }
      if ((long)(int)uVar1 <= lVar20 + -0x5c1) goto LAB_00a7bde4;
      uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
      lVar20 = lVar20 + 1;
    } while( true );
  }
  goto LAB_00a7bedc;
LAB_00a7bed8:
  if (bVar4) {
    return 0;
  }
  goto LAB_00a7bedc;
LAB_00a7bde4:
  if (!bVar4) {
    return 0;
  }
LAB_00a7bedc:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x1c4fb9bd2e3b1193) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x43b04642d1c4ee6d);
    } while (plVar15[2] != -0x43b04642d1c4ee6d);
  }
  else {
    lVar20 = -0x43b04642d1c4ee6d;
    if (uVar18 < 0xbc4fb9bd2e3b1194) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xbc4fb9bd2e3b1193 / uVar18;
      }
      lVar20 = -0x43b04642d1c4ee6d - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x43b04642d1c4ee6d);
    } while (plVar15[2] != -0x43b04642d1c4ee6d);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x41) {
    if (*(int *)((long)param_1 + 0x1704) != 0xff) {
      lVar20 = (**(code **)(*param_1 + 0x7f8))(param_1);
      if (lVar20 == 0) {
        return 0;
      }
      uVar18 = FUN_008e0b50();
      if ((((uVar18 & 1) == 0) ||
          ((cVar5 = (**(code **)(*param_1 + 0x9f8))(param_1), cVar5 != '\0' &&
           (uVar18 = (**(code **)(*param_1 + 0x9e8))(param_1), (uVar18 & 1) != 0)))) &&
         (uVar18 = FUN_008e0b50(lVar20), (uVar18 & 1) != 0)) {
        return 0;
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x18) == 0x40) {
    if (*(int *)((long)param_1 + 0x1704) == 0xff) {
      return 0;
    }
    lVar20 = (**(code **)(*param_1 + 0x7f8))(param_1);
    if (lVar20 == 0) {
      return 0;
    }
    uVar18 = FUN_008e0b50();
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    cVar5 = (**(code **)(*param_1 + 0x9f8))(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    uVar18 = (**(code **)(*param_1 + 0x9e8))(param_1);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0xf61e7d2fdc48d05) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0xf61e7d2fdc48d05);
    } while (plVar15[2] != 0xf61e7d2fdc48d05);
  }
  else {
    lVar20 = 0xf61e7d2fdc48d05;
    if (uVar18 < 0xf61e7d2fdc48d06) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xf61e7d2fdc48d05 / uVar18;
      }
      lVar20 = 0xf61e7d2fdc48d05 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0xf61e7d2fdc48d05);
    } while (plVar15[2] != 0xf61e7d2fdc48d05);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0x42:
    uVar18 = FUN_00a6f8d0(param_1);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    break;
  case 0x43:
    uVar18 = FUN_00a6f8d0(param_1);
    goto joined_r0x00a7c138;
  case 0x44:
    uVar18 = FUN_00a6fdc0(param_1,0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    uVar18 = FUN_00a6fdc0(param_1,1);
joined_r0x00a7c138:
    if ((uVar18 & 1) != 0) {
      return 0;
    }
    break;
  case 0x45:
    uVar18 = FUN_00a6fdc0(param_1,1);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    uVar18 = FUN_00a6fdc0(param_1,0);
    if ((uVar18 & 1) != 0) {
      return 0;
    }
    break;
  case 0x46:
    uVar18 = FUN_00a6fdc0(param_1,1);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    uVar18 = FUN_00a6fdc0(param_1,0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x1db6719f48a68f04) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x7db6719f48a68f04);
    } while (plVar15[2] != 0x7db6719f48a68f04);
  }
  else {
    lVar20 = 0x7db6719f48a68f04;
    if (uVar18 < 0x7db6719f48a68f05) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x7db6719f48a68f04 / uVar18;
      }
      lVar20 = 0x7db6719f48a68f04 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x7db6719f48a68f04);
    } while (plVar15[2] != 0x7db6719f48a68f04);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0x46:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,(int)param_1[0x2e4]);
    break;
  case 0x47:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,(int)param_1[0x2e4]);
    goto joined_r0x00a7c2b8;
  case 0x48:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x1724));
    break;
  case 0x49:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x1724));
joined_r0x00a7c2b8:
    if ((uVar18 & 1) != 0) {
      return 0;
    }
  default:
    goto switchD_00a7c24c_default;
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
switchD_00a7c24c_default:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x5014e64745a06a3) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x1afeb19b8ba5f95d);
    } while (plVar15[2] != -0x1afeb19b8ba5f95d);
  }
  else {
    lVar20 = -0x1afeb19b8ba5f95d;
    if (uVar18 < 0xe5014e64745a06a4) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xe5014e64745a06a3 / uVar18;
      }
      lVar20 = -0x1afeb19b8ba5f95d - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x1afeb19b8ba5f95d);
    } while (plVar15[2] != -0x1afeb19b8ba5f95d);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x51) {
    cVar5 = (**(code **)(*param_1 + 0xa78))(param_1);
    if (cVar5 == '\x01') {
      return 0;
    }
  }
  else if ((*(int *)((long)plVar15 + 0x18) == 0x50) &&
          (cVar5 = (**(code **)(*param_1 + 0xa78))(param_1), cVar5 != '\x01')) {
    return 0;
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  uVar17 = uVar18 - 1;
  if ((uVar17 & uVar18) == 0) {
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + (uVar17 & 0x6849ca5e2e81de1c) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x6849ca5e2e81de1c);
    } while (plVar15[2] != 0x6849ca5e2e81de1c);
  }
  else {
    lVar21 = 0x6849ca5e2e81de1c;
    if (uVar18 < 0x6849ca5e2e81de1d) {
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = 0x6849ca5e2e81de1c / uVar18;
      }
      lVar21 = 0x6849ca5e2e81de1c - uVar19 * uVar18;
    }
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x6849ca5e2e81de1c);
    } while (plVar15[2] != 0x6849ca5e2e81de1c);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x5a) {
    return 0;
  }
  if ((uVar17 & uVar18) == 0) {
    plVar15 = *(long **)(lVar20 + (uVar17 & 0x86f0614a7ca4f16) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x86f0614a7ca4f16);
    } while (plVar15[2] != 0x86f0614a7ca4f16);
  }
  else {
    lVar21 = 0x86f0614a7ca4f16;
    if (uVar18 < 0x86f0614a7ca4f17) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x86f0614a7ca4f16 / uVar18;
      }
      lVar21 = 0x86f0614a7ca4f16 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x86f0614a7ca4f16);
    } while (plVar15[2] != 0x86f0614a7ca4f16);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 100:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if (((uVar18 & 1) == 0) || (cVar5 = (**(code **)(*plVar15 + 0x218))(plVar15), cVar5 != '\x02'))
    goto LAB_00a7c818;
    goto LAB_00a7c940;
  case 0x65:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if (((uVar18 & 1) == 0) || (bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15), 1 < bVar7))
    goto LAB_00a7c818;
LAB_00a7c940:
    (**(code **)(*plVar25 + 0x18))(plVar25);
    break;
  case 0x66:
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 == 0) {
      return 0;
    }
    bVar4 = false;
    lVar20 = 0x5c2;
    while( true ) {
      if ((uVar11 != 0xff) &&
         (plVar15 = (long *)param_1[(ulong)uVar11 + 0xa9], plVar15 != (long *)0x0)) {
        plVar25 = plVar15 + 9;
        (**(code **)(*plVar25 + 0x10))(plVar25);
        uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
        if ((uVar18 & 1) != 0) {
          cVar5 = (**(code **)(*plVar15 + 0x218))(plVar15);
          bVar4 = (bool)(bVar4 | cVar5 == '\x02');
        }
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      if ((long)(int)uVar1 <= lVar20 + -0x5c1) break;
      uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
      lVar20 = lVar20 + 1;
    }
    if (!bVar4) {
      return 0;
    }
    break;
  case 0x67:
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 != 0) {
      bVar4 = false;
      lVar20 = 0x5c2;
      if (uVar11 == 0xff) goto LAB_00a7c7a8;
      do {
        plVar15 = (long *)param_1[(ulong)uVar11 + 0xa9];
        if (plVar15 == (long *)0x0) goto LAB_00a7c7a8;
        plVar25 = plVar15 + 9;
        (**(code **)(*plVar25 + 0x10))(plVar25);
        uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
        if ((uVar18 & 1) == 0) {
          bVar4 = true;
        }
        else {
          bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15);
          bVar4 = (bool)(bVar4 | 1 < bVar7);
        }
        (**(code **)(*plVar25 + 0x18))(plVar25);
        while( true ) {
          if ((long)(int)uVar1 <= lVar20 + -0x5c1) goto LAB_00a7c938;
          uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
          lVar20 = lVar20 + 1;
          if (uVar11 != 0xff) break;
LAB_00a7c7a8:
          bVar4 = true;
        }
      } while( true );
    }
    break;
  case 0x68:
    if ((*(uint *)((long)param_1 + 0x16fc) != 0xff) &&
       (plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9],
       plVar15 != (long *)0x0)) {
      plVar25 = plVar15 + 9;
      (**(code **)(*plVar25 + 0x10))(plVar25);
      uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
      if (((uVar18 & 1) != 0) && (bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15), bVar7 < 3))
      goto LAB_00a7c818;
      goto LAB_00a7c940;
    }
    break;
  case 0x69:
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 != 0) {
      bVar4 = false;
      lVar20 = 0x5c2;
      while( true ) {
        if ((uVar11 != 0xff) &&
           (plVar15 = (long *)param_1[(ulong)uVar11 + 0xa9], plVar15 != (long *)0x0)) {
          plVar25 = plVar15 + 9;
          (**(code **)(*plVar25 + 0x10))(plVar25);
          uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
          if ((uVar18 & 1) != 0) {
            bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15);
            bVar4 = (bool)(bVar4 | bVar7 < 3);
          }
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
        if ((long)(int)uVar1 <= lVar20 + -0x5c1) break;
        uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      }
LAB_00a7c938:
      if (bVar4) {
        return 0;
      }
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  uVar17 = uVar18 - 1;
  if ((uVar17 & uVar18) == 0) {
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + (uVar17 & 0xf3368093ab9f3ea) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x30cc97f6c5460c16);
    } while (plVar15[2] != -0x30cc97f6c5460c16);
  }
  else {
    lVar21 = -0x30cc97f6c5460c16;
    if (uVar18 < 0xcf3368093ab9f3eb) {
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = 0xcf3368093ab9f3ea / uVar18;
      }
      lVar21 = -0x30cc97f6c5460c16 - uVar19 * uVar18;
    }
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x30cc97f6c5460c16);
    } while (plVar15[2] != -0x30cc97f6c5460c16);
  }
  if ((*(uint *)((long)plVar15 + 0x18) & 0xfffffffe) == 0x6e) {
    return 0;
  }
  if ((uVar17 & uVar18) == 0) {
    plVar15 = *(long **)(lVar20 + (uVar17 & 0x668425514649dbf2) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x668425514649dbf2);
    } while (plVar15[2] != 0x668425514649dbf2);
  }
  else {
    lVar21 = 0x668425514649dbf2;
    if (uVar18 < 0x668425514649dbf3) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x668425514649dbf2 / uVar18;
      }
      lVar21 = 0x668425514649dbf2 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x668425514649dbf2);
    } while (plVar15[2] != 0x668425514649dbf2);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0x78:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7cc6c;
  case 0x79:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7ccb4;
  case 0x7a:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7ccfc;
  case 0x7b:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    iVar9 = FUN_00ad68e0(lVar20);
    if ((iVar9 != 1) && (iVar9 = FUN_00ad68e0(lVar20), iVar9 != 0)) {
LAB_00a7c818:
      (**(code **)(*plVar25 + 0x18))(plVar25);
      return 0;
    }
    goto LAB_00a7cc50;
  case 0x7c:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    iVar9 = FUN_00ad68e0(lVar20);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    goto joined_r0x00a7cb54;
  case 0x7d:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    iVar9 = FUN_00ad68e0(lVar20);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    goto joined_r0x00a7cba8;
  case 0x7e:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    iVar9 = FUN_00ad68e0(lVar20);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (iVar9 != 4) {
      return 0;
    }
    break;
  case 0x7f:
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    iVar9 = FUN_00ad68e0(lVar20);
    if ((iVar9 != 5) && (iVar9 = FUN_00ad68e0(lVar20), iVar9 != 6)) goto LAB_00a7c818;
LAB_00a7cc50:
    (**(code **)(*plVar25 + 0x18))(plVar25);
    break;
  case 0x80:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7cc6c:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar12 = *(uint *)(lVar20 + 0x4c4);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (1 < uVar12) {
      return 0;
    }
    break;
  case 0x81:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7ccb4:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    iVar9 = *(int *)(lVar20 + 0x4c4);
    (**(code **)(*plVar15 + 0x18))(plVar15);
joined_r0x00a7cb54:
    if (iVar9 != 2) {
      return 0;
    }
    break;
  case 0x82:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7ccfc:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xa9];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    iVar9 = *(int *)(lVar20 + 0x4c4);
    (**(code **)(*plVar15 + 0x18))(plVar15);
joined_r0x00a7cba8:
    if (iVar9 != 3) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x485248763a63afa) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x1b7adb789c59c506);
    } while (plVar15[2] != -0x1b7adb789c59c506);
  }
  else {
    lVar20 = -0x1b7adb789c59c506;
    if (uVar18 < 0xe485248763a63afb) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xe485248763a63afa / uVar18;
      }
      lVar20 = -0x1b7adb789c59c506 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x1b7adb789c59c506);
    } while (plVar15[2] != -0x1b7adb789c59c506);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0x82:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    goto joined_r0x00a7ce40;
  case 0x83:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    goto joined_r0x00a7ce5c;
  case 0x84:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,(int)param_1[0x2e0]);
joined_r0x00a7ce40:
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    break;
  case 0x85:
    uVar18 = (**(code **)(*param_1 + 0x748))(param_1,(int)param_1[0x2e0]);
joined_r0x00a7ce5c:
    if ((uVar18 & 1) != 0) {
      return 0;
    }
    break;
  case 0x86:
    if (*(int *)((long)param_1 + 0x16fc) != 0) {
      return 0;
    }
    break;
  case 0x87:
    if (*(int *)((long)param_1 + 0x16fc) != 2) {
      return 0;
    }
    break;
  case 0x88:
    if (*(int *)((long)param_1 + 0x16fc) != 4) {
      return 0;
    }
    break;
  case 0x89:
    if (*(int *)((long)param_1 + 0x16fc) != 6) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0xc0e9e19ede36b76b) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x3f161e6121c94895);
    } while (plVar15[2] != -0x3f161e6121c94895);
  }
  else {
    lVar20 = -0x3f161e6121c94895;
    if (uVar18 < 0xc0e9e19ede36b76c) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xc0e9e19ede36b76b / uVar18;
      }
      lVar20 = -0x3f161e6121c94895 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x3f161e6121c94895);
    } while (plVar15[2] != -0x3f161e6121c94895);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0x4b:
    plVar15 = (long *)param_1[0xb2];
    break;
  case 0x4c:
    plVar15 = (long *)param_1[0xb2];
    goto joined_r0x00a7cfac;
  case 0x4d:
    plVar15 = (long *)param_1[0xb3];
    break;
  case 0x4e:
    plVar15 = (long *)param_1[0xb3];
joined_r0x00a7cfac:
    if (plVar15 != (long *)0x0) {
      (**(code **)(plVar15[9] + 0x10))();
    }
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if (plVar15 != (long *)0x0) {
      (**(code **)(plVar15[9] + 0x18))(plVar15 + 9);
    }
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  default:
    goto switchD_00a7cf44_default;
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(plVar15[9] + 0x10))();
  }
  uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
  if (plVar15 != (long *)0x0) {
    (**(code **)(plVar15[9] + 0x18))(plVar15 + 9);
  }
  if ((uVar18 & 1) != 0) {
    return 0;
  }
switchD_00a7cf44_default:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0xbbcbdc646e370a64) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4434239b91c8f59c);
    } while (plVar15[2] != -0x4434239b91c8f59c);
  }
  else {
    lVar20 = -0x4434239b91c8f59c;
    if (uVar18 < 0xbbcbdc646e370a65) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xbbcbdc646e370a64 / uVar18;
      }
      lVar20 = -0x4434239b91c8f59c - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4434239b91c8f59c);
    } while (plVar15[2] != -0x4434239b91c8f59c);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x6a) {
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      plVar15 = (long *)0x0;
LAB_00a7d230:
      bVar7 = 1;
    }
    else {
      plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
      if (plVar15 == (long *)0x0) goto LAB_00a7d230;
      (**(code **)(plVar15[9] + 0x10))();
      bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15);
    }
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 == 0) {
      uVar3 = false;
    }
    else {
      uVar3 = false;
      lVar20 = 0x5c2;
      while( true ) {
        if ((uVar11 != 0xff) &&
           (plVar25 = (long *)param_1[(ulong)uVar11 + 0xa9], plVar25 != (long *)0x0)) {
          plVar26 = plVar25 + 9;
          (**(code **)(*plVar26 + 0x10))(plVar26);
          bVar6 = (**(code **)(*plVar25 + 0x218))(plVar25);
          uVar3 = uVar3 | bVar7 < bVar6;
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        if ((long)(int)uVar1 <= lVar20 + -0x5c1) break;
        uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      }
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(plVar15[9] + 0x18))(plVar15 + 9);
    }
    if (!(bool)uVar3) {
      return 0;
    }
  }
  else if (*(int *)((long)plVar15 + 0x18) == 0x69) {
    if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
      plVar15 = (long *)0x0;
LAB_00a7d0ec:
      bVar7 = 1;
    }
    else {
      plVar15 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
      if (plVar15 == (long *)0x0) goto LAB_00a7d0ec;
      (**(code **)(plVar15[9] + 0x10))();
      bVar7 = (**(code **)(*plVar15 + 0x218))(plVar15);
    }
    uVar11 = *(uint *)((long)param_1 + 0x1704);
    uVar12 = 1;
    if (uVar11 != 0xff) {
      uVar12 = 2;
    }
    uVar1 = (uint)(uVar11 != 0xff);
    if ((int)param_1[0x2e1] != 0xff) {
      uVar1 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar1 != 0) {
      lVar20 = 0x5c2;
      while( true ) {
        if ((uVar11 != 0xff) &&
           (plVar25 = (long *)param_1[(ulong)uVar11 + 0xa9], plVar25 != (long *)0x0)) {
          plVar26 = plVar25 + 9;
          (**(code **)(*plVar26 + 0x10))(plVar26);
          bVar6 = (**(code **)(*plVar25 + 0x218))(plVar25);
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if (bVar7 < bVar6) {
            bVar4 = true;
            goto joined_r0x00a7d4f8;
          }
        }
        if ((long)(int)uVar1 <= lVar20 + -0x5c1) break;
        uVar11 = *(uint *)((long)param_1 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      }
    }
    bVar4 = false;
joined_r0x00a7d4f8:
    if (plVar15 != (long *)0x0) {
      (**(code **)(plVar15[9] + 0x18))(plVar15 + 9);
    }
    if (bVar4) {
      return 0;
    }
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if ((uVar18 - 1 & uVar18) == 0) {
    plVar15 = *(long **)(*plVar15 + (uVar18 - 1 & 0x194a94886f7f651d) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x594a94886f7f651d);
    } while (plVar15[2] != 0x594a94886f7f651d);
  }
  else {
    lVar20 = 0x594a94886f7f651d;
    if (uVar18 < 0x594a94886f7f651e) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x594a94886f7f651d / uVar18;
      }
      lVar20 = 0x594a94886f7f651d - uVar17 * uVar18;
    }
    plVar15 = *(long **)(*plVar15 + lVar20 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x594a94886f7f651d);
    } while (plVar15[2] != 0x594a94886f7f651d);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0x8d) {
    cVar5 = FUN_008d4270();
    if (cVar5 != '-') {
      return 0;
    }
  }
  else if ((*(int *)((long)plVar15 + 0x18) == 0x8c) && (cVar5 = FUN_008d4270(), cVar5 != ',')) {
    return 0;
  }
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0x2b499f9221b91789;
LAB_00a7d468:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0x2b499f9221b91789;
      if (0x2b499f9221b91789 < uVar18) goto LAB_00a7d468;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x2b499f9221b91789 / uVar18;
      }
      uVar22 = 0x2b499f9221b91789 - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0x2b499f9221b91789 && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0x2b499f9221b91789) && (plVar15[2] == 0x2b499f9221b91789))
          goto LAB_00a7d500;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0x2b499f9221b91789) {
            if (plVar15[2] == 0x2b499f9221b91789) goto LAB_00a7d500;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00a7d5d4:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0xbfde9c12be7c6745;
LAB_00a7d624:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0xbfde9c12be7c6745;
      if (0xbfde9c12be7c6745 < uVar18) goto LAB_00a7d624;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xbfde9c12be7c6745 / uVar18;
      }
      uVar22 = 0xbfde9c12be7c6745 - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0xbfde9c12be7c6745 && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0xbfde9c12be7c6745) && (plVar15[2] == -0x402163ed418398bb))
          goto LAB_00a7d6b0;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0xbfde9c12be7c6745) {
            if (plVar15[2] == -0x402163ed418398bb) goto LAB_00a7d6b0;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00a7d768:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0xd5d6a78a8fc4f229;
LAB_00a7d7b8:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0xd5d6a78a8fc4f229;
      if (0xd5d6a78a8fc4f229 < uVar18) goto LAB_00a7d7b8;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xd5d6a78a8fc4f229 / uVar18;
      }
      uVar22 = 0xd5d6a78a8fc4f229 - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0xd5d6a78a8fc4f229 && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0xd5d6a78a8fc4f229) && (plVar15[2] == -0x2a295875703b0dd7))
          goto LAB_00a7d844;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0xd5d6a78a8fc4f229) {
            if (plVar15[2] == -0x2a295875703b0dd7) goto LAB_00a7d844;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
switchD_00a7d8c4_default:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0x174a0f7d07b582bd;
LAB_00a7d9cc:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0x174a0f7d07b582bd;
      if (0x174a0f7d07b582bd < uVar18) goto LAB_00a7d9cc;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x174a0f7d07b582bd / uVar18;
      }
      uVar22 = 0x174a0f7d07b582bd - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0x174a0f7d07b582bd && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0x174a0f7d07b582bd) && (plVar15[2] == 0x174a0f7d07b582bd))
          goto LAB_00a7da58;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0x174a0f7d07b582bd) {
            if (plVar15[2] == 0x174a0f7d07b582bd) goto LAB_00a7da58;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00a7dbf8:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0xb5d6754aedd3fafd;
LAB_00a7dc48:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0xb5d6754aedd3fafd;
      if (0xb5d6754aedd3fafd < uVar18) goto LAB_00a7dc48;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xb5d6754aedd3fafd / uVar18;
      }
      uVar22 = 0xb5d6754aedd3fafd - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0xb5d6754aedd3fafd && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0xb5d6754aedd3fafd) && (plVar15[2] == -0x4a298ab5122c0503))
          goto LAB_00a7dcd4;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0xb5d6754aedd3fafd) {
            if (plVar15[2] == -0x4a298ab5122c0503) goto LAB_00a7dcd4;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
LAB_00a7dd8c:
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0x80a568ab32d0661a;
LAB_00a7ddc4:
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0x80a568ab32d0661a;
      if (0x80a568ab32d0661a < uVar18) goto LAB_00a7ddc4;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x80a568ab32d0661a / uVar18;
      }
      uVar22 = 0x80a568ab32d0661a - uVar22 * uVar18;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0x80a568ab32d0661a && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0x80a568ab32d0661a) && (plVar15[2] == -0x7f5a9754cd2f99e6))
          goto LAB_00a7de4c;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0x80a568ab32d0661a) {
            if (plVar15[2] == -0x7f5a9754cd2f99e6) goto LAB_00a7de4c;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00a7dee8:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0x3b65d0e6d417540d;
LAB_00a7df38:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0x3b65d0e6d417540d;
      if (0x3b65d0e6d417540d < uVar18) goto LAB_00a7df38;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x3b65d0e6d417540d / uVar18;
      }
      uVar22 = 0x3b65d0e6d417540d - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0x3b65d0e6d417540d && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0x3b65d0e6d417540d) && (plVar15[2] == 0x3b65d0e6d417540d))
          goto LAB_00a7e09c;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0x3b65d0e6d417540d) {
            if (plVar15[2] == 0x3b65d0e6d417540d) goto LAB_00a7e09c;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
switchD_00a7e158_caseD_e4:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - 1;
    uVar17 = uVar19 & uVar18;
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0xc1828d81067c55da;
LAB_00a7e010:
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0xc1828d81067c55da;
      if (0xc1828d81067c55da < uVar18) goto LAB_00a7e010;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xc1828d81067c55da / uVar18;
      }
      uVar22 = 0xc1828d81067c55da - uVar22 * uVar18;
      lVar20 = *plVar15;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0xc1828d81067c55da && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0xc1828d81067c55da) && (plVar15[2] == -0x3e7d727ef983aa26))
          goto LAB_00a7e0d8;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0xc1828d81067c55da) {
            if (plVar15[2] == -0x3e7d727ef983aa26) goto LAB_00a7e0d8;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
LAB_00a7e220:
    if (uVar17 == 0) {
      uVar22 = uVar19 & 0x919aef3beb74b2ce;
LAB_00a7e258:
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    else {
      uVar22 = 0x919aef3beb74b2ce;
      if (0x919aef3beb74b2ce < uVar18) goto LAB_00a7e258;
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x919aef3beb74b2ce / uVar18;
      }
      uVar22 = 0x919aef3beb74b2ce - uVar22 * uVar18;
      plVar15 = *(long **)(lVar20 + uVar22 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 == 0) {
        do {
          uVar23 = plVar15[1];
          if (uVar23 != 0x919aef3beb74b2ce && (uVar23 & uVar19) != uVar22) break;
          if ((uVar23 == 0x919aef3beb74b2ce) && (plVar15[2] == -0x6e6510c4148b4d32))
          goto LAB_00a7e490;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar15[1];
          if (uVar23 == 0x919aef3beb74b2ce) {
            if (plVar15[2] == -0x6e6510c4148b4d32) goto LAB_00a7e490;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar2 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
switchD_00a7e588_default:
  plVar15 = (long *)*plVar24;
  uVar18 = plVar15[1];
joined_r0x00a7ea80:
  if (uVar18 == 0) goto switchD_00a7e5e0_caseD_10b;
  uVar19 = uVar18 - 1;
  uVar17 = uVar19 & uVar18;
  if (uVar17 == 0) {
    uVar22 = uVar19 & 0x56f77a84f6663c5;
LAB_00a7e32c:
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + uVar22 * 8);
  }
  else {
    uVar22 = 0x56f77a84f6663c5;
    if (0x56f77a84f6663c5 < uVar18) goto LAB_00a7e32c;
    uVar22 = 0;
    if (uVar18 != 0) {
      uVar22 = 0x56f77a84f6663c5 / uVar18;
    }
    uVar22 = 0x56f77a84f6663c5 - uVar22 * uVar18;
    lVar20 = *plVar15;
    plVar15 = *(long **)(lVar20 + uVar22 * 8);
  }
  if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
    if (uVar17 == 0) {
      do {
        uVar23 = plVar15[1];
        if (uVar23 != 0x56f77a84f6663c5 && (uVar23 & uVar19) != uVar22) break;
        if ((uVar23 == 0x56f77a84f6663c5) && (plVar15[2] == 0x56f77a84f6663c5)) goto LAB_00a7e4cc;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar23 = plVar15[1];
        if (uVar23 == 0x56f77a84f6663c5) {
          if (plVar15[2] == 0x56f77a84f6663c5) goto LAB_00a7e4cc;
        }
        else {
          if (uVar18 <= uVar23) {
            uVar2 = 0;
            if (uVar18 != 0) {
              uVar2 = uVar23 / uVar18;
            }
            uVar23 = uVar23 - uVar2 * uVar18;
          }
          if (uVar23 != uVar22) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  goto switchD_00a7e5e0_caseD_10b;
LAB_00a7d500:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x2b499f9221b91789) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x2b499f9221b91789);
    } while (plVar15[2] != 0x2b499f9221b91789);
  }
  else {
    lVar21 = 0x2b499f9221b91789;
    if (uVar18 < 0x2b499f9221b9178a) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x2b499f9221b91789 / uVar18;
      }
      lVar21 = 0x2b499f9221b91789 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x2b499f9221b91789);
    } while (plVar15[2] != 0x2b499f9221b91789);
  }
  iVar9 = *(int *)((long)plVar15 + 0x18);
  if (iVar9 == 0x98) {
    cVar5 = (**(code **)(*param_1 + 0xa58))(param_1);
    if (cVar5 != '\x02') {
      return 0;
    }
  }
  else if (iVar9 == 0x97) {
    cVar5 = (**(code **)(*param_1 + 0xa58))(param_1);
    if (cVar5 != '\x01') {
      return 0;
    }
  }
  else if ((iVar9 == 0x96) && (cVar5 = (**(code **)(*param_1 + 0xa58))(param_1), cVar5 != '\0')) {
    return 0;
  }
  goto LAB_00a7d5d4;
LAB_00a7d6b0:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0xbfde9c12be7c6745) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x402163ed418398bb);
    } while (plVar15[2] != -0x402163ed418398bb);
  }
  else {
    lVar21 = -0x402163ed418398bb;
    if (uVar18 < 0xbfde9c12be7c6746) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xbfde9c12be7c6745 / uVar18;
      }
      lVar21 = -0x402163ed418398bb - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x402163ed418398bb);
    } while (plVar15[2] != -0x402163ed418398bb);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0xa1) {
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 != 0) {
      uVar13 = FUN_009c5ff0(param_1);
      uVar18 = FUN_008f35c0(uVar13,0x4000);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x18) == 0xa0) {
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 == 0) {
      return 0;
    }
    uVar13 = FUN_009c5ff0(param_1);
    uVar18 = FUN_008f35c0(uVar13,0x4000);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  goto LAB_00a7d768;
LAB_00a7d844:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0xd5d6a78a8fc4f229) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x2a295875703b0dd7);
    } while (plVar15[2] != -0x2a295875703b0dd7);
  }
  else {
    lVar21 = -0x2a295875703b0dd7;
    if (uVar18 < 0xd5d6a78a8fc4f22a) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0xd5d6a78a8fc4f229 / uVar18;
      }
      lVar21 = -0x2a295875703b0dd7 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x2a295875703b0dd7);
    } while (plVar15[2] != -0x2a295875703b0dd7);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0xaa:
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 == 0) {
      return 0;
    }
    uVar13 = FUN_009c5ff0(param_1);
    uVar18 = FUN_008f35c0(uVar13,0x400);
    break;
  case 0xab:
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 == 0) {
      return 0;
    }
    uVar13 = FUN_009c5ff0(param_1);
    uVar18 = FUN_008f35c0(uVar13,0x800);
    break;
  case 0xac:
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 == 0) {
      return 0;
    }
    uVar13 = FUN_009c5ff0(param_1);
    uVar18 = FUN_008f35c0(uVar13,0x1000);
    break;
  case 0xad:
    lVar20 = FUN_009c5ff0(param_1);
    if (lVar20 != 0) {
      uVar13 = FUN_009c5ff0(param_1);
      uVar18 = FUN_008f35c0(uVar13,0x400);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
      uVar13 = FUN_009c5ff0(param_1);
      uVar18 = FUN_008f35c0(uVar13,0x800);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
      uVar13 = FUN_009c5ff0(param_1);
      uVar18 = FUN_008f35c0(uVar13,0x1000);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
    }
  default:
    goto switchD_00a7d8c4_default;
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  goto switchD_00a7d8c4_default;
LAB_00a7da58:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x174a0f7d07b582bd) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x174a0f7d07b582bd);
    } while (plVar15[2] != 0x174a0f7d07b582bd);
  }
  else {
    lVar21 = 0x174a0f7d07b582bd;
    if (uVar18 < 0x174a0f7d07b582be) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x174a0f7d07b582bd / uVar18;
      }
      lVar21 = 0x174a0f7d07b582bd - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x174a0f7d07b582bd);
    } while (plVar15[2] != 0x174a0f7d07b582bd);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0xb5) {
    bVar4 = *(int *)((long)param_1 + 0x1704) != 0xff;
    uVar12 = 1;
    if (bVar4) {
      uVar12 = 2;
    }
    uVar11 = (uint)bVar4;
    if ((int)param_1[0x2e1] != 0xff) {
      uVar11 = uVar12;
    }
    if (*(int *)((long)param_1 + 0x170c) != 0xff) {
      uVar11 = uVar11 + 1;
    }
    if ((int)param_1[0x2e2] != 0xff) {
      uVar11 = uVar11 + 1;
    }
    if (*(int *)((long)param_1 + 0x1714) != 0xff) {
      uVar11 = uVar11 + 1;
    }
    if ((int)param_1[0x2e3] != 0xff) {
      uVar11 = uVar11 + 1;
    }
    if (*(int *)((long)param_1 + 0x171c) != 0xff) {
      uVar11 = uVar11 + 1;
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    if (uVar11 != 0) {
      bVar4 = false;
      iVar9 = 0;
      do {
        if ((*(uint *)((long)param_1 + 0x16fc) != 0xff) &&
           (lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9], lVar20 != 0)) {
          plVar15 = (long *)(lVar20 + 0x48);
          (**(code **)(*plVar15 + 0x10))(plVar15);
          cVar5 = FUN_00ad59f0(lVar20);
          bVar4 = (bool)(bVar4 | cVar5 != '\0');
          (**(code **)(*plVar15 + 0x18))(plVar15);
          if (cVar5 != '\0') break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar11);
      if (bVar4) {
        return 0;
      }
    }
  }
  else if (((*(int *)((long)plVar15 + 0x18) == 0xb4) && (*(uint *)((long)param_1 + 0x16fc) != 0xff))
          && (lVar20 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9], lVar20 != 0)) {
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    cVar5 = FUN_00ad59f0(lVar20);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (cVar5 == '\0') {
      return 0;
    }
  }
  goto LAB_00a7dbf8;
LAB_00a7dcd4:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0xb5d6754aedd3fafd) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4a298ab5122c0503);
    } while (plVar15[2] != -0x4a298ab5122c0503);
  }
  else {
    lVar21 = -0x4a298ab5122c0503;
    if (uVar18 < 0xb5d6754aedd3fafe) {
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xb5d6754aedd3fafd / uVar18;
      }
      lVar21 = -0x4a298ab5122c0503 - uVar22 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x4a298ab5122c0503);
    } while (plVar15[2] != -0x4a298ab5122c0503);
  }
  iVar9 = *(int *)((long)plVar15 + 0x18);
  if (iVar9 == 0xc0) {
    if ((char)param_1[0x3e6] == '\0') {
      return 0;
    }
    if (*(char *)((long)param_1 + 0xb99) == '\0') {
      return 0;
    }
  }
  else {
    if (iVar9 == 0xbf) {
      cVar5 = (char)param_1[0x3e6];
    }
    else {
      if (iVar9 != 0xbe) goto LAB_00a7dd8c;
      if ((char)param_1[0x3e6] == '\0') {
        return 0;
      }
      cVar5 = *(char *)((long)param_1 + 0xb99);
    }
    if (cVar5 != '\0') {
      return 0;
    }
  }
  goto LAB_00a7dd8c;
LAB_00a7de4c:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x80a568ab32d0661a) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x7f5a9754cd2f99e6);
    } while (plVar15[2] != -0x7f5a9754cd2f99e6);
  }
  else {
    lVar21 = -0x7f5a9754cd2f99e6;
    if (uVar18 < 0x80a568ab32d0661b) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x80a568ab32d0661a / uVar18;
      }
      lVar21 = -0x7f5a9754cd2f99e6 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x7f5a9754cd2f99e6);
    } while (plVar15[2] != -0x7f5a9754cd2f99e6);
  }
  uVar12 = *(int *)((long)plVar15 + 0x18) - 0xc9;
  if (uVar12 < 8) {
    if ((1 << (ulong)(uVar12 & 0x1f) & 0xf3U) == 0) {
      if (uVar12 == 2) {
        iVar9 = (**(code **)(*param_1 + 0x868))(param_1);
        if (iVar9 != 1) {
          return 0;
        }
        uVar10 = *(undefined4 *)((long)param_1 + 0x1704);
        lVar20 = FUN_009c5ff0(param_1);
        if (lVar20 == 0) {
          return 0;
        }
        uVar10 = FUN_008f97f0(lVar20,uVar10);
        uVar10 = FUN_008f96b0(lVar20,uVar10);
        FUN_008fa980(lVar20,uVar10);
        FUN_00905040();
        bVar7 = FUN_009141d0();
        if (bVar7 < 2) {
          return 0;
        }
      }
      else {
        iVar9 = (**(code **)(*param_1 + 0x868))(param_1);
        if (iVar9 != 1) {
          return 0;
        }
        uVar10 = *(undefined4 *)((long)param_1 + 0x1704);
        lVar20 = FUN_009c5ff0(param_1);
        if (lVar20 == 0) {
          return 0;
        }
        uVar10 = FUN_008f97f0(lVar20,uVar10);
        uVar10 = FUN_008f96b0(lVar20,uVar10);
        FUN_008fa980(lVar20,uVar10);
        FUN_00905040();
        cVar5 = FUN_009141d0();
        if (cVar5 != '\x01') {
          return 0;
        }
      }
    }
    else {
      iVar9 = (**(code **)(*param_1 + 0x868))(param_1);
      if (iVar9 != 1) {
        return 0;
      }
    }
  }
  goto LAB_00a7dee8;
LAB_00a7e09c:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x3b65d0e6d417540d) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x3b65d0e6d417540d);
    } while (plVar15[2] != 0x3b65d0e6d417540d);
  }
  else {
    lVar21 = 0x3b65d0e6d417540d;
    if (uVar18 < 0x3b65d0e6d417540e) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x3b65d0e6d417540d / uVar18;
      }
      lVar21 = 0x3b65d0e6d417540d - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x3b65d0e6d417540d);
    } while (plVar15[2] != 0x3b65d0e6d417540d);
  }
  uVar10 = *(undefined4 *)((long)plVar15 + 0x18);
  switch(uVar10) {
  case 0xd2:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 != 0) {
      iVar9 = FUN_008783b0();
      if (iVar9 != 0x34d) {
        return 0;
      }
      sVar8 = FUN_008783c0(lVar20);
      if (sVar8 != 0) {
        return 0;
      }
    }
    break;
  case 0xd3:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if ((lVar20 != 0) && (iVar9 = FUN_008783b0(), iVar9 == 0x34d)) {
      return 0;
    }
    break;
  case 0xd4:
    uVar10 = *(undefined4 *)((long)param_1 + 0x16fc);
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,uVar10);
    if (lVar20 != 0) {
      iVar9 = FUN_008783b0();
      if (iVar9 != 0x34d) {
        return 0;
      }
      sVar8 = FUN_008783c0(lVar20);
      if (sVar8 != 1) {
        return 0;
      }
    }
    goto LAB_00a7ec3c;
  case 0xd5:
    uVar10 = *(undefined4 *)((long)param_1 + 0x16fc);
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,uVar10);
    if (lVar20 != 0) {
      iVar9 = FUN_008783b0();
      if (iVar9 != 0x34d) {
        return 0;
      }
      sVar8 = FUN_008783c0(lVar20);
      if (sVar8 != 2) {
        return 0;
      }
    }
LAB_00a7ec3c:
    lVar20 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar10);
    if (lVar20 != 0) {
      iVar9 = FUN_008e12a0(lVar20,0x13);
      if (iVar9 != 0xf1) {
        return 0;
      }
      uVar18 = FUN_008e1570(lVar20);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
    }
    break;
  case 0xd6:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 != 0) {
      iVar9 = FUN_008783b0();
      if (iVar9 == 0x19) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      if (iVar9 == 0x85) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      if (iVar9 == 0x34) {
        cVar5 = FUN_00879760(lVar20);
joined_r0x00a7eff8:
        if (cVar5 == '\x02') {
          return 0;
        }
      }
    }
    break;
  case 0xd7:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x19) {
      return 0;
    }
    sVar8 = FUN_008783c0(lVar20);
    if (sVar8 != 0) {
      return 0;
    }
    goto LAB_00a7eda4;
  case 0xd8:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x19) {
      return 0;
    }
    sVar8 = FUN_008783c0(lVar20);
    if (sVar8 == 0) {
      return 0;
    }
    goto LAB_00a7eda4;
  case 0xd9:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x19) {
      return 0;
    }
    goto LAB_00a7ee0c;
  case 0xda:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x85) {
      return 0;
    }
LAB_00a7eda4:
    cVar5 = FUN_00879760(lVar20);
    if (cVar5 != '\0') {
      return 0;
    }
    break;
  case 0xdb:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x85) {
      return 0;
    }
    goto LAB_00a7ee0c;
  case 0xdc:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x34) {
      return 0;
    }
LAB_00a7ee0c:
    cVar5 = FUN_00879760(lVar20);
    if (cVar5 != '\x02') {
      return 0;
    }
    break;
  case 0xdd:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if ((lVar20 != 0) && (iVar9 = FUN_008783b0(), iVar9 == 0x32f)) {
      return 0;
    }
    break;
  case 0xde:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x32f) {
      return 0;
    }
    break;
  case 0xdf:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x19) {
      return 0;
    }
    sVar8 = FUN_008783c0(lVar20);
    if (sVar8 != 0) {
      return 0;
    }
    goto LAB_00a7ef14;
  case 0xe0:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x19) {
      return 0;
    }
    sVar8 = FUN_008783c0(lVar20);
    if (sVar8 == 0) {
      return 0;
    }
    goto LAB_00a7ef14;
  case 0xe1:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    if (lVar20 == 0) {
      return 0;
    }
    iVar9 = FUN_008783b0();
    if (iVar9 != 0x85) {
      return 0;
    }
LAB_00a7ef14:
    cVar5 = FUN_00879760(lVar20);
    if (cVar5 != '\x01') {
      return 0;
    }
    break;
  case 0xe2:
  case 0xe3:
  case 0xe5:
  case 0xe7:
  case 0xeb:
    lVar20 = (**(code **)(*param_1 + 0x810))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
    switch(uVar10) {
    case 0xe2:
      if (lVar20 == 0) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      cVar5 = FUN_00879760(lVar20);
      if (iVar9 != 0x32f) {
        return 0;
      }
      if (cVar5 != '\x01') {
        return 0;
      }
      goto switchD_00a7e158_caseD_e4;
    case 0xe3:
      if (lVar20 == 0) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      cVar5 = FUN_00879760(lVar20);
      if (iVar9 != 0x32f) {
        return 0;
      }
      break;
    default:
      if (lVar20 != 0) {
        iVar9 = FUN_008783b0(lVar20);
        cVar5 = FUN_00879760(lVar20);
        if ((iVar9 == 0x32f) && (cVar5 == '\x02')) {
          return 0;
        }
        iVar9 = FUN_008783b0(lVar20);
        cVar5 = FUN_00879760(lVar20);
        if ((iVar9 == 0x32f) && (cVar5 == '\x01')) {
          return 0;
        }
        iVar9 = FUN_008783b0(lVar20);
        cVar5 = FUN_00879760(lVar20);
        if ((iVar9 == 0x32c) && (cVar5 == '\x02')) {
          return 0;
        }
        iVar9 = FUN_008783b0(lVar20);
        cVar5 = FUN_00879760(lVar20);
        if (iVar9 == 0x332) goto joined_r0x00a7eff8;
      }
      goto switchD_00a7e158_caseD_e4;
    case 0xe5:
      if (lVar20 == 0) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      cVar5 = FUN_00879760(lVar20);
      if (iVar9 != 0x32c) {
        return 0;
      }
      break;
    case 0xe7:
      if (lVar20 == 0) {
        return 0;
      }
      iVar9 = FUN_008783b0(lVar20);
      cVar5 = FUN_00879760(lVar20);
      if (iVar9 != 0x332) {
        return 0;
      }
    }
    if (cVar5 != '\x02') {
      return 0;
    }
  }
  goto switchD_00a7e158_caseD_e4;
LAB_00a7e0d8:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0xc1828d81067c55da) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x3e7d727ef983aa26);
    } while (plVar15[2] != -0x3e7d727ef983aa26);
  }
  else {
    lVar21 = -0x3e7d727ef983aa26;
    if (uVar18 < 0xc1828d81067c55db) {
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0xc1828d81067c55da / uVar18;
      }
      lVar21 = -0x3e7d727ef983aa26 - uVar22 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x3e7d727ef983aa26);
    } while (plVar15[2] != -0x3e7d727ef983aa26);
  }
  if (*(int *)((long)plVar15 + 0x18) == 0xdd) {
    if (*(char *)((long)param_1 + 0x1f32) != '\0') {
      return 0;
    }
  }
  else if ((*(int *)((long)plVar15 + 0x18) == 0xdc) && (*(char *)((long)param_1 + 0x1f32) == '\0'))
  {
    return 0;
  }
  goto LAB_00a7e220;
LAB_00a7e490:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x919aef3beb74b2ce) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x6e6510c4148b4d32);
    } while (plVar15[2] != -0x6e6510c4148b4d32);
  }
  else {
    lVar21 = -0x6e6510c4148b4d32;
    if (uVar18 < 0x919aef3beb74b2cf) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x919aef3beb74b2ce / uVar18;
      }
      lVar21 = -0x6e6510c4148b4d32 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != -0x6e6510c4148b4d32);
    } while (plVar15[2] != -0x6e6510c4148b4d32);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0xe6:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7e844;
  case 0xe7:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7e8a0;
  case 0xe8:
    uVar12 = *(uint *)((long)param_1 + 0x16fc);
    goto joined_r0x00a7e900;
  case 0xe9:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7e844:
    if (uVar12 != 0xff) {
      if (param_1[(ulong)uVar12 + 0xa9] != 0) {
        plVar15 = (long *)(param_1[(ulong)uVar12 + 0xa9] + 0x48);
        (**(code **)(*plVar15 + 0x10))(plVar15);
        (**(code **)(*param_1 + 0x810))(param_1,(ulong)uVar12);
        cVar5 = FUN_0087ead0();
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (cVar5 != '\0') {
          return 0;
        }
      }
    }
    break;
  case 0xea:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7e8a0:
    if (uVar12 == 0xff) {
      return 0;
    }
    if (param_1[(ulong)uVar12 + 0xa9] == 0) {
      return 0;
    }
    plVar15 = (long *)(param_1[(ulong)uVar12 + 0xa9] + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    (**(code **)(*param_1 + 0x810))(param_1,(ulong)uVar12);
    cVar5 = FUN_0087ead0();
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (cVar5 != '\x01') {
      return 0;
    }
    break;
  case 0xeb:
    uVar12 = *(uint *)(param_1 + 0x2e0);
joined_r0x00a7e900:
    if (uVar12 == 0xff) {
      return 0;
    }
    if (param_1[(ulong)uVar12 + 0xa9] == 0) {
      return 0;
    }
    plVar15 = (long *)(param_1[(ulong)uVar12 + 0xa9] + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    (**(code **)(*param_1 + 0x810))(param_1,(ulong)uVar12);
    cVar5 = FUN_0087ead0();
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (cVar5 != '\x02') {
      return 0;
    }
    break;
  case 0xec:
    plVar15 = (long *)param_1[0xad];
    if (plVar15 == (long *)0x0) break;
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if ((uVar18 & 1) != 0) {
      pcVar16 = *(code **)(*param_1 + 0x810);
      uVar13 = 4;
LAB_00a7ea54:
      (*pcVar16)(param_1,uVar13);
      cVar5 = FUN_0087ead0();
      if (cVar5 != '\0') goto LAB_00a7c818;
    }
LAB_00a7ea68:
    (**(code **)(*plVar25 + 0x18))(plVar25);
    plVar15 = (long *)*plVar24;
    uVar18 = plVar15[1];
    goto joined_r0x00a7ea80;
  case 0xed:
    plVar15 = (long *)param_1[0xad];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if ((uVar18 & 1) == 0) goto LAB_00a7eb38;
    pcVar16 = *(code **)(*param_1 + 0x810);
    uVar13 = 4;
LAB_00a7eac4:
    (*pcVar16)(param_1,uVar13);
    cVar5 = FUN_0087ead0();
    bVar4 = cVar5 != '\x01';
    goto LAB_00a7eb3c;
  case 0xee:
    plVar15 = (long *)param_1[0xad];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if ((uVar18 & 1) != 0) {
      pcVar16 = *(code **)(*param_1 + 0x810);
      uVar13 = 4;
LAB_00a7eb1c:
      (*pcVar16)(param_1,uVar13);
      cVar5 = FUN_0087ead0();
      bVar4 = cVar5 != '\x02';
      goto LAB_00a7eb3c;
    }
    goto LAB_00a7eb38;
  case 0xef:
    plVar15 = (long *)param_1[0xaf];
    if (plVar15 != (long *)0x0) {
      plVar25 = plVar15 + 9;
      (**(code **)(*plVar25 + 0x10))(plVar25);
      uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
      if ((uVar18 & 1) != 0) {
        pcVar16 = *(code **)(*param_1 + 0x810);
        uVar13 = 6;
        goto LAB_00a7ea54;
      }
      goto LAB_00a7ea68;
    }
    break;
  case 0xf0:
    plVar15 = (long *)param_1[0xaf];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if ((uVar18 & 1) != 0) {
      pcVar16 = *(code **)(*param_1 + 0x810);
      uVar13 = 6;
      goto LAB_00a7eac4;
    }
    goto LAB_00a7eb38;
  case 0xf1:
    plVar15 = (long *)param_1[0xaf];
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    plVar25 = plVar15 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar18 = (**(code **)(*plVar15 + 400))(plVar15);
    if ((uVar18 & 1) != 0) {
      pcVar16 = *(code **)(*param_1 + 0x810);
      uVar13 = 6;
      goto LAB_00a7eb1c;
    }
LAB_00a7eb38:
    bVar4 = true;
LAB_00a7eb3c:
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if (bVar4) {
      return 0;
    }
  }
  goto switchD_00a7e588_default;
LAB_00a7e4cc:
  if (uVar17 == 0) {
    plVar15 = *(long **)(lVar20 + (uVar19 & 0x56f77a84f6663c5) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x56f77a84f6663c5);
    } while (plVar15[2] != 0x56f77a84f6663c5);
  }
  else {
    lVar21 = 0x56f77a84f6663c5;
    if (uVar18 < 0x56f77a84f6663c6) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x56f77a84f6663c5 / uVar18;
      }
      lVar21 = 0x56f77a84f6663c5 - uVar17 * uVar18;
    }
    plVar15 = *(long **)(lVar20 + lVar21 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0x56f77a84f6663c5);
    } while (plVar15[2] != 0x56f77a84f6663c5);
  }
  switch(*(undefined4 *)((long)plVar15 + 0x18)) {
  case 0xf0:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if ((uVar12 & 0xfffe) != 0x4c) {
        return 0;
      }
    }
    break;
  case 0xf1:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if (sVar8 != 0x4e) {
        return 0;
      }
    }
    break;
  case 0xf2:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      uVar14 = sVar8 - 0x4f;
LAB_00a7f1b8:
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if (1 < uVar14) {
        return 0;
      }
    }
    break;
  case 0xf3:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      uVar14 = sVar8 - 0x51;
      goto LAB_00a7f1b8;
    }
    break;
  case 0xf4:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      uVar14 = sVar8 - 0x53;
      goto LAB_00a7f1b8;
    }
    break;
  case 0xf5:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if (sVar8 != 0x55) {
        return 0;
      }
    }
    break;
  case 0xf6:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if ((uVar12 & 0xfffe) != 0x56) {
        return 0;
      }
    }
    break;
  case 0xf7:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if ((uVar12 & 0xfffe) != 0x58) {
        return 0;
      }
    }
    break;
  case 0xf8:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar25 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      if ((1 < (uVar12 & 0xffff) - 0x5a) && ((uVar12 & 0xffff) != 0xb3)) goto LAB_00a7c818;
      goto LAB_00a800a0;
    }
    break;
  case 0xf9:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar15 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if ((uVar12 & 0xfffe) != 0x5c) {
        return 0;
      }
    }
    break;
  case 0xfa:
    if ((*(uint *)(param_1 + 0x2e4) != 0xff) &&
       (lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0], lVar20 != 0)) {
      plVar25 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      uVar10 = FUN_00aceb20(lVar20);
      uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
      uVar12 = uVar12 & 0xffff;
      if ((1 < uVar12 - 0x21) && ((uVar12 != 0xca && (uVar12 != 0xb2)))) goto LAB_00a7c818;
      goto LAB_00a800a0;
    }
    break;
  case 0xfb:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if (((sVar8 != 0x14) && (sVar8 != 0xd1)) && (sVar8 != 0xf8)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0xfc:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar11 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar11 & 0xffff) - 0xcd;
    if (((0x1e < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x40000021U) == 0)) &&
       ((uVar11 & 0xffff) != 0x15)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0xfd:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if (((sVar8 != 0x16) && (sVar8 != 0xd3)) && (sVar8 != 0xea)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0xfe:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar11 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar11 & 0xffff) - 0xd0;
    if (((0x1f < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x80000011U) == 0)) &&
       ((uVar11 & 0xffff) != 0x17)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0xff:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar11 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar11 & 0xffff) - 0xcf;
    if (((0x1e < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x40000041U) == 0)) &&
       ((uVar11 & 0xffff) != 0x18)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x100:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = uVar12 & 0xffff;
    if (((0x23 < uVar12 - 0xd6) || ((1L << ((ulong)(uVar12 - 0xd6) & 0x3f) & 0x800020001U) == 0)) &&
       ((uVar12 != 0xc && (uVar12 != 0x19)))) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x101:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if (((sVar8 != 0x1a) && (sVar8 != 0xd7)) && (sVar8 != 0xf3)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x102:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if (((sVar8 != 0x1b) && (sVar8 != 0xd8)) && (sVar8 != 0xf2)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x103:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = uVar12 & 0xffff;
    if (((0x33 < uVar12 - 0xb9) || ((1L << ((ulong)(uVar12 - 0xb9) & 0x3f) & 0x8800100000001U) == 0)
        ) && ((uVar12 != 0xf && (uVar12 != 0x1c)))) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x104:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar11 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar11 & 0xffff) - 0xce;
    if (((0x20 < uVar12) || ((1L << ((ulong)uVar12 & 0x3f) & 0x100001001U) == 0)) &&
       ((uVar11 & 0xffff) != 0x1d)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x105:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fa78;
  case 0x106:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7faf8;
  case 0x107:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if ((sVar8 != 0xe4) && (sVar8 != 0xf6)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x108:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar12 & 0xffff) - 0xdd;
    if ((9 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x203U) == 0)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x109:
    if (*(uint *)(param_1 + 0x2e4) == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)*(uint *)(param_1 + 0x2e4) + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xe3) {
      return 0;
    }
    break;
  case 0x10a:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fb78;
  case 0x10e:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fa78:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar12 & 0xffff) - 0xdb;
    if (0x21 < uVar12 || (1L << ((ulong)uVar12 & 0x3f) & 0x284000001U) == 0) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x10f:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7faf8:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar12 & 0xffff) - 0xdc;
    if (0x21 < uVar12 || (1L << ((ulong)uVar12 & 0x3f) & 0x281000001U) == 0) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x110:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fb78:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    if ((sVar8 != 0xde) && (sVar8 != 0xe6)) goto LAB_00a7c818;
    goto LAB_00a800a0;
  case 0x113:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fcb8;
  case 0x114:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fd28;
  case 0x115:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fd98;
  case 0x116:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fe08;
  case 0x117:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fe78;
  case 0x118:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7fee8;
  case 0x119:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7ff58;
  case 0x11a:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a7ffc8;
  case 0x11b:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a80038;
  case 0x11d:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fcb8:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xe9) {
      return 0;
    }
    break;
  case 0x11e:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fd28:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xe6) {
      return 0;
    }
    break;
  case 0x11f:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fd98:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xf4) {
      return 0;
    }
    break;
  case 0x120:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fe08:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xeb) {
      return 0;
    }
    break;
  case 0x121:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fe78:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xea) {
      return 0;
    }
    break;
  case 0x122:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7fee8:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xec) {
      return 0;
    }
    break;
  case 0x123:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7ff58:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xee) {
      return 0;
    }
    break;
  case 0x124:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a7ffc8:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xf1) {
      return 0;
    }
    break;
  case 0x125:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a80038:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar25 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    uVar10 = FUN_00aceb20(lVar20);
    uVar12 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    uVar12 = (uVar12 & 0xffff) - 0xe7;
    if (0x12 < uVar12 || (1 << (ulong)(uVar12 & 0x1f) & 0x7d243U) == 0) goto LAB_00a7c818;
LAB_00a800a0:
    (**(code **)(*plVar25 + 0x18))(plVar25);
    plVar24 = (long *)*plVar24;
    uVar18 = plVar24[1];
    goto joined_r0x00a800b8;
  case 0x127:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a80104;
  case 0x128:
    uVar12 = *(uint *)(param_1 + 0x2e4);
    goto joined_r0x00a80174;
  case 0x129:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a80104:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xef) {
      return 0;
    }
    break;
  case 0x12a:
    uVar12 = *(uint *)((long)param_1 + 0x1724);
joined_r0x00a80174:
    if (uVar12 == 0xff) {
      return 0;
    }
    lVar20 = param_1[(ulong)uVar12 + 0xb0];
    if (lVar20 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar10 = FUN_00aceb20(lVar20);
    sVar8 = (**(code **)(*param_1 + 0x908))(param_1,uVar10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (sVar8 != 0xf2) {
      return 0;
    }
  }
switchD_00a7e5e0_caseD_10b:
  plVar24 = (long *)*plVar24;
  uVar18 = plVar24[1];
joined_r0x00a800b8:
  if (uVar18 == 0) {
    return 1;
  }
  uVar19 = uVar18 - 1;
  uVar17 = uVar19 & uVar18;
  if (uVar17 == 0) {
    uVar22 = uVar19 & 0x9fbb0f579bfdfd2e;
  }
  else {
    uVar22 = 0x9fbb0f579bfdfd2e;
    if (uVar18 < 0x9fbb0f579bfdfd2f) {
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = 0x9fbb0f579bfdfd2e / uVar18;
      }
      uVar22 = 0x9fbb0f579bfdfd2e - uVar22 * uVar18;
      lVar20 = *plVar24;
      plVar24 = *(long **)(lVar20 + uVar22 * 8);
      goto joined_r0x00a7e40c;
    }
  }
  lVar20 = *plVar24;
  plVar24 = *(long **)(lVar20 + uVar22 * 8);
joined_r0x00a7e40c:
  if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
    if (uVar17 == 0) {
      do {
        uVar23 = plVar24[1];
        if (uVar23 != 0x9fbb0f579bfdfd2e && (uVar23 & uVar19) != uVar22) {
          return 1;
        }
        if ((uVar23 == 0x9fbb0f579bfdfd2e) && (plVar24[2] == -0x6044f0a8640202d2)) {
LAB_00a7e508:
          if (uVar17 == 0) {
            plVar24 = *(long **)(lVar20 + (uVar19 & 0x9fbb0f579bfdfd2e) * 8);
            do {
              do {
                plVar24 = (long *)*plVar24;
              } while (plVar24[1] != -0x6044f0a8640202d2);
            } while (plVar24[2] != -0x6044f0a8640202d2);
          }
          else {
            lVar21 = -0x6044f0a8640202d2;
            if (uVar18 < 0x9fbb0f579bfdfd2f) {
              uVar17 = 0;
              if (uVar18 != 0) {
                uVar17 = 0x9fbb0f579bfdfd2e / uVar18;
              }
              lVar21 = -0x6044f0a8640202d2 - uVar17 * uVar18;
            }
            plVar24 = *(long **)(lVar20 + lVar21 * 8);
            do {
              do {
                plVar24 = (long *)*plVar24;
              } while (plVar24[1] != -0x6044f0a8640202d2);
            } while (plVar24[2] != -0x6044f0a8640202d2);
          }
          if (*(int *)((long)plVar24 + 0x18) == 0x10f) {
            lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
            if (lVar20 == 0) {
              cVar5 = FUN_01524bf0(0);
            }
            else {
              plVar24 = (long *)(lVar20 + 0x48);
              (**(code **)(*plVar24 + 0x10))(plVar24);
              cVar5 = FUN_01524bf0(lVar20);
              (**(code **)(*plVar24 + 0x18))(plVar24);
            }
            if (cVar5 == '\x01') {
              return 1;
            }
            return 0;
          }
          if (*(int *)((long)plVar24 + 0x18) != 0x10e) {
            return 1;
          }
          lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
          if (lVar20 == 0) {
            cVar5 = FUN_01524bf0(0);
          }
          else {
            plVar24 = (long *)(lVar20 + 0x48);
            (**(code **)(*plVar24 + 0x10))(plVar24);
            cVar5 = FUN_01524bf0(lVar20);
            (**(code **)(*plVar24 + 0x18))(plVar24);
          }
          if (cVar5 == '\0') {
            return 1;
          }
          return 0;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    else {
      do {
        uVar23 = plVar24[1];
        if (uVar23 == 0x9fbb0f579bfdfd2e) {
          if (plVar24[2] == -0x6044f0a8640202d2) goto LAB_00a7e508;
        }
        else {
          if (uVar18 <= uVar23) {
            uVar2 = 0;
            if (uVar18 != 0) {
              uVar2 = uVar23 / uVar18;
            }
            uVar23 = uVar23 - uVar2 * uVar18;
          }
          if (uVar23 != uVar22) {
            return 1;
          }
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  return 1;
}



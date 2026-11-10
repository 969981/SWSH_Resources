/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ede60; name: FUN_010ede60
 */


void FUN_010ede60(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  plVar5 = *(long **)(param_2 + 0x80);
  for (plVar4 = *(long **)(param_2 + 0x78); plVar5 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
    lVar3 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar3 == 0x53ffffdf53d3dd19) {
      if (*(long **)(param_2 + 0x80) == plVar4) goto LAB_010edf40;
      goto LAB_010edf14;
    }
  }
  plVar4 = plVar5;
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010edf40:
    lVar3 = 0;
  }
  else {
LAB_010edf14:
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_010edf40;
    uVar1 = FUN_010ef6c0(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
  }
  *(long *)(param_1 + 0x70) = lVar3;
  plVar5 = *(long **)(param_2 + 0x80);
  for (plVar4 = *(long **)(param_2 + 0x78); plVar5 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
    lVar3 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar3 == 0x126b3107bd9a75c6) {
      if (*(long **)(param_2 + 0x80) == plVar4) goto LAB_010edfec;
      goto LAB_010edfb0;
    }
  }
  plVar4 = plVar5;
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010edfec:
    *(undefined8 *)(param_1 + 0x80) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee010:
      do {
        plVar5 = plVar4;
        FUN_006cf0c0(&local_70,*plVar5 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == 0x6e3174eac0f87762) {
          if (*(long **)(param_2 + 0x80) == plVar5) goto LAB_010ee098;
          goto LAB_010ee05c;
        }
        plVar4 = plVar5 + 1;
        plVar5 = plVar6;
      } while (plVar6 != plVar4);
    }
  }
  else {
LAB_010edfb0:
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_010edfec;
    uVar1 = FUN_010ef7b0(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee010;
  }
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee098:
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee0bc:
      do {
        plVar5 = plVar4;
        FUN_006cf0c0(&local_70,*plVar5 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == -0x4deda27bb0bc7d61) {
          if (*(long **)(param_2 + 0x80) == plVar5) goto LAB_010ee134;
          goto LAB_010ee108;
        }
        plVar4 = plVar5 + 1;
        plVar5 = plVar6;
      } while (plVar6 != plVar4);
    }
  }
  else {
LAB_010ee05c:
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_010ee098;
    uVar1 = FUN_010ef8a0(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x90) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee0bc;
  }
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee134:
    lVar3 = 0;
  }
  else {
LAB_010ee108:
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_010ee134;
    uVar1 = FUN_010ef990(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
  }
  *(long *)(param_1 + 0xa0) = lVar3;
  local_70 = 0x27356081384a0777;
  pcStack_68 = "menu_gateway";
  local_60 = 0xc;
  local_58 = 0;
  uVar2 = FUN_010ed960(param_2,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  local_70 = 0x44fa23127140ffb6;
  pcStack_68 = "menu_method";
  local_60 = 0xb;
  local_58 = 0;
  uVar2 = FUN_010efa80(param_2,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  plVar5 = *(long **)(param_2 + 0x80);
  for (plVar4 = *(long **)(param_2 + 0x78); plVar5 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
    lVar3 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar3 == -0x1a6dbbee0c15921a) {
      if (*(long **)(param_2 + 0x80) == plVar4) goto LAB_010ee280;
      goto LAB_010ee244;
    }
  }
  plVar4 = plVar5;
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee280:
    *(undefined8 *)(param_1 + 0xd0) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee2a4:
      do {
        plVar5 = plVar4;
        FUN_006cf0c0(&local_70,*plVar5 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == 0x73942199cc4ddd8f) {
          if (*(long **)(param_2 + 0x80) == plVar5) goto LAB_010ee32c;
          goto LAB_010ee2f0;
        }
        plVar4 = plVar5 + 1;
        plVar5 = plVar6;
      } while (plVar6 != plVar4);
    }
  }
  else {
LAB_010ee244:
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_010ee280;
    uVar1 = FUN_010efc70(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0xd0) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee2a4;
  }
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee32c:
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee350:
      do {
        plVar5 = plVar4;
        FUN_006cf0c0(&local_70,*plVar5 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == -0x2f2aa9faf12e8730) {
          if (*(long **)(param_2 + 0x80) == plVar5) goto LAB_010ee3c8;
          goto LAB_010ee39c;
        }
        plVar4 = plVar5 + 1;
        plVar5 = plVar6;
      } while (plVar6 != plVar4);
    }
  }
  else {
LAB_010ee2f0:
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_010ee32c;
    uVar1 = FUN_010efd60(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0xe0) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar4 = *(long **)(param_2 + 0x78);
    plVar6 = plVar5;
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee350;
  }
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee3c8:
    lVar3 = 0;
  }
  else {
LAB_010ee39c:
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_010ee3c8;
    uVar1 = FUN_010efe50(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
  }
  *(long *)(param_1 + 0xf0) = lVar3;
  plVar5 = *(long **)(param_2 + 0x80);
  for (plVar4 = *(long **)(param_2 + 0x78); plVar5 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
    lVar3 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar3 == 0x271ac17d884536c9) {
      if (*(long **)(param_2 + 0x80) == plVar4) goto LAB_010ee474;
      goto LAB_010ee438;
    }
  }
  plVar4 = plVar5;
  if (*(long **)(param_2 + 0x80) == plVar5) {
LAB_010ee474:
    *(undefined8 *)(param_1 + 0x100) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar6 = plVar5;
    plVar4 = *(long **)(param_2 + 0x78);
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee488:
      do {
        plVar6 = plVar4;
        FUN_006cf0c0(&local_70,*plVar6 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == 0x126b3107bd9a75c6) {
          if (*(long **)(param_2 + 0x80) == plVar6) goto LAB_010ee510;
          goto LAB_010ee4d4;
        }
        plVar4 = plVar6 + 1;
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
  }
  else {
LAB_010ee438:
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_010ee474;
    uVar1 = FUN_010eff40(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar6 = plVar5;
    plVar4 = *(long **)(param_2 + 0x78);
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee488;
  }
  if (*(long **)(param_2 + 0x80) == plVar6) {
LAB_010ee510:
    *(undefined8 *)(param_1 + 0x108) = 0;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar6 = plVar5;
    plVar4 = *(long **)(param_2 + 0x78);
    if (plVar5 != *(long **)(param_2 + 0x78)) {
LAB_010ee524:
      do {
        plVar6 = plVar4;
        FUN_006cf0c0(&local_70,*plVar6 + 0x5c0);
        lVar3 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar3 == 0x271ac17d884536c9) {
          if (*(long **)(param_2 + 0x80) == plVar6) goto LAB_010ee59c;
          goto LAB_010ee570;
        }
        plVar4 = plVar6 + 1;
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
  }
  else {
LAB_010ee4d4:
    lVar3 = *plVar6;
    if (lVar3 == 0) goto LAB_010ee510;
    uVar1 = FUN_010ef7b0(lVar3 + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x108) = lVar3;
    plVar5 = *(long **)(param_2 + 0x80);
    plVar6 = plVar5;
    plVar4 = *(long **)(param_2 + 0x78);
    if (plVar5 != *(long **)(param_2 + 0x78)) goto LAB_010ee524;
  }
  if (*(long **)(param_2 + 0x80) != plVar6) {
LAB_010ee570:
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      uVar1 = FUN_010eff40(lVar3 + 0x50);
      if ((uVar1 & 1) == 0) {
        lVar3 = 0;
      }
      goto LAB_010ee5a0;
    }
  }
LAB_010ee59c:
  lVar3 = 0;
LAB_010ee5a0:
  *(long *)(param_1 + 0x110) = lVar3;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009188d0; name: FUN_009188d0
 */


void FUN_009188d0(long param_1,long *param_2,undefined4 *param_3,undefined1 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  
  uVar6 = FUN_00914be0(*(undefined8 *)(param_1 + 0x20),param_5);
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_00914c80(*(undefined8 *)(param_1 + 0x20),param_5);
    lVar8 = FUN_00915240();
    *param_2 = lVar8;
    uVar5 = FUN_00915250(uVar7);
    *param_3 = uVar5;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  switch(param_4) {
  case 4:
    cVar1 = FUN_009511a0(*(undefined8 *)(param_1 + 0x18));
    *(char *)(param_1 + 0x7c) = cVar1;
    if (cVar1 != '\0') {
      uVar6 = 0;
      do {
        uVar2 = FUN_009511b0(*(undefined8 *)(param_1 + 0x18),uVar6 & 0xffffffff);
        *(undefined1 *)(param_1 + 0x7d + uVar6) = uVar2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(param_1 + 0x7c));
    }
    goto LAB_00918a6c;
  case 5:
    cVar1 = FUN_009511a0(*(undefined8 *)(param_1 + 0x18));
    *(char *)(param_1 + 0x7c) = cVar1;
    if (cVar1 != '\0') {
      uVar6 = 0;
      do {
        uVar2 = FUN_009511b0(*(undefined8 *)(param_1 + 0x18),uVar6 & 0xffffffff);
        *(undefined1 *)(param_1 + 0x7d + uVar6) = uVar2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(param_1 + 0x7c));
    }
LAB_00918a6c:
    *param_2 = param_1 + 0x7c;
    uVar5 = 6;
    goto LAB_009189cc;
  case 6:
    *param_2 = param_1 + 0x48;
    uVar5 = 1;
    goto LAB_009189cc;
  case 7:
    FUN_00918e90(*(undefined8 *)(param_1 + 8),local_60);
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
    *(undefined1 *)(param_1 + 0x84) = local_60[0];
    *(undefined1 *)(param_1 + 0x82) = 0;
    break;
  case 8:
    FUN_00918ee0(*(undefined8 *)(param_1 + 8),local_48,*(undefined8 *)(param_1 + 0x30));
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
    *(undefined1 *)(param_1 + 0x84) = local_48[0];
    break;
  case 9:
    FUN_00918f30(*(undefined8 *)(param_1 + 8),local_58,*(undefined8 *)(param_1 + 0x30));
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
    *(undefined1 *)(param_1 + 0x84) = local_58[0];
    break;
  case 10:
    FUN_00918fd0(*(undefined8 *)(param_1 + 8),local_68,*(undefined8 *)(param_1 + 0x30));
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
    *(undefined1 *)(param_1 + 0x84) = local_68[0];
    break;
  case 0xb:
    FUN_00918f80(*(undefined8 *)(param_1 + 8),local_50,*(undefined8 *)(param_1 + 0x30));
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
    *(undefined1 *)(param_1 + 0x84) = local_50[0];
    break;
  case 0xc:
    bVar3 = FUN_00919020(*(undefined8 *)(param_1 + 8));
    *(byte *)(param_1 + 0x83) = bVar3 & 1;
    goto LAB_00918cc4;
  case 0xd:
    FUN_009af890(*(undefined8 *)(param_1 + 0x28),1);
    lVar8 = FUN_009af8d0(*(undefined8 *)(param_1 + 0x28),param_3);
    *param_2 = lVar8;
    break;
  case 0xe:
    FUN_009af890(*(undefined8 *)(param_1 + 0x28),1);
    lVar8 = FUN_009af8f0(*(undefined8 *)(param_1 + 0x28),param_3,*(undefined1 *)(param_1 + 0x82));
    *param_2 = lVar8;
    break;
  case 0xf:
    uVar7 = 5;
    goto LAB_00918c10;
  case 0x10:
    uVar7 = 1;
    uVar9 = 1;
    goto LAB_00918c20;
  case 0x11:
    uVar7 = 2;
    goto LAB_00918c10;
  case 0x12:
    uVar7 = 3;
LAB_00918c10:
    uVar9 = 0;
LAB_00918c20:
    FUN_009af890(*(undefined8 *)(param_1 + 0x28),uVar9);
    lVar8 = *(long *)(param_1 + 0x30);
    if (*(char *)(lVar8 + 0xf0) != '\0') {
      FUN_009af910(*(undefined8 *)(param_1 + 0x28),0);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    if (*(char *)(lVar8 + 0xf1) != '\0') {
      FUN_009af910(*(undefined8 *)(param_1 + 0x28),1,lVar8 + 0x30);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    if (*(char *)(lVar8 + 0xf2) != '\0') {
      FUN_009af910(*(undefined8 *)(param_1 + 0x28),2,lVar8 + 0x60);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    if (*(char *)(lVar8 + 0xf3) != '\0') {
      FUN_009af910(*(undefined8 *)(param_1 + 0x28),3,lVar8 + 0x90);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    if (*(char *)(lVar8 + 0xf4) != '\0') {
      FUN_009af910(*(undefined8 *)(param_1 + 0x28),4,lVar8 + 0xc0);
    }
    lVar8 = FUN_009af9d0(*(undefined8 *)(param_1 + 0x28),uVar7,param_3);
    *param_2 = lVar8;
    return;
  case 0x13:
    lVar8 = FUN_009afa10(*(undefined8 *)(param_1 + 0x28),param_3);
    *param_2 = lVar8;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x25:
    *param_2 = *(long *)(param_1 + 0x38);
    uVar5 = 8;
    goto LAB_009189cc;
  case 0x20:
    uVar4 = FUN_00914660(*(undefined8 *)(param_1 + 0x40),0);
    *(undefined2 *)(param_1 + 0x4a) = uVar4;
    uVar4 = FUN_00914660(*(undefined8 *)(param_1 + 0x40),1);
    *(undefined2 *)(param_1 + 0x4c) = uVar4;
    uVar4 = FUN_00914660(*(undefined8 *)(param_1 + 0x40),2);
    *(undefined2 *)(param_1 + 0x4e) = uVar4;
    uVar4 = FUN_00914660(*(undefined8 *)(param_1 + 0x40),3);
    *(undefined2 *)(param_1 + 0x50) = uVar4;
    uVar4 = FUN_00914660(*(undefined8 *)(param_1 + 0x40),4);
    *(undefined2 *)(param_1 + 0x52) = uVar4;
    *param_2 = param_1 + 0x4a;
    uVar5 = 10;
    goto LAB_009189cc;
  case 0x23:
    *param_2 = param_1 + 0x54;
    uVar5 = 0x28;
LAB_009189cc:
    *param_3 = uVar5;
    break;
  case 0x24:
    FUN_00919070(*(undefined8 *)(param_1 + 8));
LAB_00918cc4:
    lVar8 = FUN_00915350(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar8;
    uVar5 = FUN_00915360(*(undefined8 *)(param_1 + 0x10));
    *param_3 = uVar5;
  }
  return;
}



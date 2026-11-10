/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b7d00; name: FUN_010b7d00
 */


void FUN_010b7d00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0 [3];
  long local_d8;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  
  puVar1 = PTR_DAT_027108d8;
  lVar4 = *(long *)(param_1 + 0x88);
  if (*(int *)(lVar4 + 0x5cc) != 0) {
    switch(*(int *)(lVar4 + 0x5cc)) {
    case 1:
      if (*(int *)(param_1 + 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
        FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
        FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
        lVar4 = *(long *)(param_1 + 0x88);
        FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
        FUN_016b2eb0(*(undefined8 *)(lVar4 + 0x618));
        FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),0);
        FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x7c) = 0x25;
        uVar3 = FUN_010b2870(*(undefined8 *)(param_1 + 0x90));
        FUN_010ae3e0(uVar7,uVar3 & 1,1);
      }
      else {
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_00ffa3d0(lVar4,0);
        FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
        FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
        lVar4 = *(long *)(param_1 + 0x88);
        (**(code **)(**(long **)(lVar4 + 0x618) + 0x50))();
        FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),1);
        FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),1);
        local_f0[0] = (ulong)*(uint *)(lVar4 + 0x610) << 0x20;
        FUN_016b7990(*(undefined8 *)(lVar4 + 0x618),local_f0,1,0);
        FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
        FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
        FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
        FUN_010ae3e0(*(undefined8 *)(param_1 + 0x88),1,0);
      }
      break;
    case 2:
      lVar4 = *(long *)PTR_DAT_027108d8;
      uVar5 = FUN_010b6c90(lVar4 + 0x108);
      if (((uVar5 & 1) != 0) && (iVar2 = FUN_010bc7b0(lVar4 + 0x108), iVar2 != 0)) {
        if (*(int *)(param_1 + 0x80) != 1) {
          FUN_010b2aa0(*(undefined8 *)(param_1 + 0x90),0);
        }
        FUN_010b1600(*(undefined8 *)(param_1 + 0x90),iVar2);
        lVar10 = 0x32;
        pcVar9 = (char *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x11ae8) * 8000 + 0x1f9);
        do {
          while (pcVar9[-0xa0] == '\0') {
            pcVar9[-0xa0] = '\x01';
            if (*pcVar9 == '\0') goto LAB_010b7e94;
LAB_010b7e78:
            pcVar9 = pcVar9 + 0x140;
            lVar10 = lVar10 + -2;
            if (lVar10 == 0) goto LAB_010b7ea4;
          }
          if (*pcVar9 != '\0') goto LAB_010b7e78;
LAB_010b7e94:
          *pcVar9 = '\x01';
          pcVar9 = pcVar9 + 0x140;
          lVar10 = lVar10 + -2;
        } while (lVar10 != 0);
LAB_010b7ea4:
        lVar10 = *(long *)(param_1 + 0x88);
        if (*(char *)(lVar10 + 0x620) != '\0') {
          *(undefined1 *)(lVar10 + 0x620) = 0;
          FUN_00ffcf80(lVar10 + 0x100,"anime_new_out");
        }
        local_f0[0] = -0x5568b94f2d6f6c4a;
        uVar7 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x2b0),local_f0);
        FUN_00ffd840(lVar10 + 0x100,uVar7);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x600),*(undefined1 *)(lVar10 + 0x620));
        lVar13 = *(long *)puVar1;
        lVar10 = *(long *)(param_1 + 0x88);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5e0),*(int *)(lVar13 + 0x11aec) != 0);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5e8),*(int *)(lVar13 + 0x11aec) != 0);
        *(undefined4 *)(param_1 + 0xcc) = 0x96;
        if (*(int *)(param_1 + 0x80) == 1) {
          uVar7 = *(undefined8 *)(param_1 + 0x90);
          uVar6 = 1;
          goto LAB_010b80d8;
        }
        if (*(int *)(lVar4 + 0x11aec) != 0) {
          FUN_010b15f0(*(undefined8 *)(param_1 + 0x90));
          *(undefined4 *)(param_1 + 0x7c) = 0x2f;
        }
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x80) == 0) {
        lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x240);
        if (lVar4 == 0) {
          uVar5 = FUN_0151ef90(0);
        }
        else {
          plVar12 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar5 = FUN_0151ef90(lVar4);
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        if ((uVar5 & 1) == 0) {
          if (*(char *)(param_1 + 0x100) != '\0') {
            FUN_010bced0(param_1);
            break;
          }
          uVar7 = 0x15ff34e7c28a95c6;
        }
        else {
          uVar7 = 0x15ff35e7c28a9779;
        }
        goto LAB_010b8150;
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x80) == 0) {
        lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x240);
        if (lVar4 == 0) {
          uVar5 = FUN_0151ef90(0);
          if ((uVar5 & 1) == 0) goto LAB_010b8294;
LAB_010b7f80:
          uVar5 = 0x35e7c28a9779;
        }
        else {
          plVar12 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar5 = FUN_0151ef90(lVar4);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          if ((uVar5 & 1) != 0) goto LAB_010b7f80;
LAB_010b8294:
          if (*(char *)(param_1 + 0x101) != '\0') {
            uVar5 = FUN_010bd780();
            if ((uVar5 & 1) == 0) {
              uVar8 = 0x13;
              goto LAB_010b83cc;
            }
            *(undefined4 *)(param_1 + 0x7c) = 6;
            uVar8 = 1;
            goto LAB_010b82b0;
          }
          uVar5 = 0x33e7c28a9413;
        }
        FUN_010bc320(param_1,uVar5 | 0x15ff000000000000,0,1,1,0);
        *(undefined4 *)(param_1 + 0x7c) = 0x22;
LAB_010b83b4:
        FUN_010bc6f0(param_1,0,1);
LAB_010b83d0:
        FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
      }
      break;
    case 6:
      if (*(int *)(param_1 + 0x80) == 0) {
        uVar5 = FUN_010bd780();
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x1b;
LAB_010b83cc:
          *(undefined4 *)(param_1 + 0x7c) = uVar8;
          goto LAB_010b83d0;
        }
        *(undefined4 *)(param_1 + 0x7c) = 6;
        uVar8 = 3;
LAB_010b82b0:
        *(undefined4 *)(param_1 + 0xec) = uVar8;
        goto LAB_010b83b4;
      }
      break;
    case 7:
      if (*(int *)(param_1 + 0x80) == 0) {
        uVar5 = FUN_010bd780();
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x7c) = 0x23;
          FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
          FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
          *(undefined4 *)(param_1 + 0x84) = 2;
          break;
        }
        *(undefined4 *)(param_1 + 0x7c) = 6;
        *(undefined4 *)(param_1 + 0xec) = 2;
        goto LAB_010b8170;
      }
      break;
    case 8:
      if (*(int *)(param_1 + 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0x23;
        FUN_00ffa160(lVar4,0,1);
        FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
        *(undefined4 *)(param_1 + 0x84) = 3;
      }
      break;
    case 9:
      FUN_010bd010(param_1,1,0);
      break;
    case 10:
      uVar5 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
      uVar8 = 0x26;
      if ((uVar5 & 1) == 0) {
        uVar8 = 0x27;
      }
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
      FUN_010bd370(*(long *)puVar1 + 0x108);
      FUN_010be440(*(long *)puVar1 + 0x108);
      *(undefined4 *)(*(long *)puVar1 + 0x11ae8) = 1;
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),0);
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e0),0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e8),0);
      if (*(int *)(param_1 + 0x80) == 0) {
        lVar4 = *(long *)(param_1 + 0x88);
        FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
        FUN_016b2eb0(*(undefined8 *)(lVar4 + 0x618));
        FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),0);
        goto LAB_010b83d0;
      }
      FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      uVar6 = 0;
LAB_010b80d8:
      FUN_010b1170(uVar7,uVar6);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x7c) = 0x23;
      FUN_00ffa160(lVar4,0,1);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
      *(undefined4 *)(param_1 + 0x84) = 5;
      FUN_006cf0a0(local_f0,&DAT_02671440);
      FUN_016d3620(local_f0);
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
      }
      break;
    case 0xc:
      uVar7 = 0x820bd9ff88566bc6;
LAB_010b8150:
      FUN_010bc320(param_1,uVar7,0,1,1,0);
      *(undefined4 *)(param_1 + 0x7c) = 0x22;
LAB_010b8170:
      FUN_010bc6f0(param_1,0,1);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
  }
  puVar1 = PTR_DAT_027108d8;
  iVar2 = *(int *)(*(long *)(param_1 + 0x90) + 0x5cc);
  if (iVar2 == 0) {
    return;
  }
  if (5 < iVar2 - 1U) goto LAB_010b8bf8;
  lVar4 = *(long *)PTR_DAT_027108d8;
  switch(iVar2) {
  case 1:
    if (*(int *)(param_1 + 0x80) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      FUN_00ffa3d0(*(long *)(param_1 + 0x90),0);
      FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
      FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
      FUN_016b2eb0(*(undefined8 *)(lVar4 + 0x618));
      FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),0);
      FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x7c) = 0x25;
      uVar3 = FUN_010b2870(*(undefined8 *)(param_1 + 0x90));
      FUN_010ae3e0(uVar7,uVar3 & 1,1);
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
      FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
      lVar4 = *(long *)(param_1 + 0x88);
      (**(code **)(**(long **)(lVar4 + 0x618) + 0x50))();
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),1);
      FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),1);
      local_f0[0] = (ulong)*(uint *)(lVar4 + 0x610) << 0x20;
      FUN_016b7990(*(undefined8 *)(lVar4 + 0x618),local_f0,1,0);
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),*(undefined1 *)(lVar4 + 0x620));
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),1);
      lVar10 = *(long *)puVar1;
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e0),*(int *)(lVar10 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e8),*(int *)(lVar10 + 0x11aec) != 0);
      FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
      FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
      FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
      FUN_010ae3e0(*(undefined8 *)(param_1 + 0x88),1,0);
    }
    goto LAB_010b8bf8;
  case 2:
    lVar4 = *(long *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x7c) = 4;
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),0);
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a80),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a88),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a90),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a98),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1aa0),0);
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a70),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a78),0);
    break;
  case 3:
    uVar5 = FUN_010b6c90(lVar4 + 0x108);
    if (((uVar5 & 1) == 0) || (iVar2 = FUN_010bc7b0(lVar4 + 0x108), iVar2 == 0)) goto LAB_010b8bf8;
    if (*(int *)(param_1 + 0x80) != 1) {
      FUN_010b2aa0(*(undefined8 *)(param_1 + 0x90),0);
    }
    FUN_010b1600(*(undefined8 *)(param_1 + 0x90),iVar2);
    lVar10 = 0x32;
    pcVar9 = (char *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x11ae8) * 8000 + 0x1f9);
    do {
      while (pcVar9[-0xa0] == '\0') {
        pcVar9[-0xa0] = '\x01';
        if (*pcVar9 == '\0') goto LAB_010b8664;
LAB_010b8648:
        pcVar9 = pcVar9 + 0x140;
        lVar10 = lVar10 + -2;
        if (lVar10 == 0) goto LAB_010b8674;
      }
      if (*pcVar9 != '\0') goto LAB_010b8648;
LAB_010b8664:
      *pcVar9 = '\x01';
      pcVar9 = pcVar9 + 0x140;
      lVar10 = lVar10 + -2;
    } while (lVar10 != 0);
LAB_010b8674:
    lVar10 = *(long *)(param_1 + 0x88);
    if (*(char *)(lVar10 + 0x620) != '\0') {
      *(undefined1 *)(lVar10 + 0x620) = 0;
      FUN_00ffcf80(lVar10 + 0x100,"anime_new_out");
    }
    local_f0[0] = -0x5568b94f2d6f6c4a;
    uVar7 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x2b0),local_f0);
    FUN_00ffd840(lVar10 + 0x100,uVar7);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x600),*(undefined1 *)(lVar10 + 0x620));
    lVar13 = *(long *)puVar1;
    lVar10 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5e0),*(int *)(lVar13 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5e8),*(int *)(lVar13 + 0x11aec) != 0);
    *(undefined4 *)(param_1 + 0xcc) = 0x96;
    if (*(int *)(param_1 + 0x80) != 1) {
      if (*(int *)(lVar4 + 0x11aec) != 0) {
        FUN_010b15f0(*(undefined8 *)(param_1 + 0x90));
        *(undefined4 *)(param_1 + 0x7c) = 0x2f;
      }
      goto LAB_010b8bf8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = 1;
    goto LAB_010b8bf4;
  case 4:
    uVar5 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
    uVar8 = 0x26;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0x27;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar8;
    FUN_010bd370(*(long *)puVar1 + 0x108);
    FUN_010be440(*(long *)puVar1 + 0x108);
    *(undefined4 *)(*(long *)puVar1 + 0x11ae8) = 1;
    lVar4 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),0);
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a80),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a88),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a90),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a98),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1aa0),0);
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a70),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a78),0);
    if (*(int *)(param_1 + 0x80) == 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
      FUN_016b2eb0(*(undefined8 *)(lVar4 + 0x618));
      FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),0);
      FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
      goto LAB_010b8bf8;
    }
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
    break;
  case 5:
    if (*(int *)(param_1 + 0x80) != 1) goto LAB_010b8bf8;
    FUN_010b22f0(local_f0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0))
    {
      plVar12 = (long *)(**(code **)*puVar11)(puVar11);
      lVar10 = FUN_010aad10();
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)lVar10) {
          puVar11 = puVar11 + -10;
          goto LAB_010b87e8;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
LAB_010b87e8:
    uVar7 = FUN_0121aff0(&local_98);
    uVar5 = FUN_011f4020(puVar11 + 0x23,uVar7);
    if ((uVar5 & 1) == 0) {
      local_118 = local_98;
      uStack_110 = uStack_90;
      local_f8 = local_78;
      local_108 = local_88;
      uStack_100 = uStack_80;
      uVar5 = FUN_0121b130(lVar4 + 0x11aa0,&local_118);
      if ((uVar5 & 1) != 0) {
        uVar5 = 0x9ec9b9573f2;
        goto LAB_010b8968;
      }
      local_140 = DAT_02163b50;
      uStack_138 = DAT_02163b58;
      local_150 = DAT_02163b40;
      uStack_148 = DAT_02163b48;
      local_120 = DAT_02163b70;
      local_130 = DAT_02163b60;
      uStack_128 = DAT_02163b68;
      *(undefined1 *)(puVar11 + 0x1a) = 1;
      FUN_0077eb10(puVar11[0x22],&local_150,puVar11[0x1b]);
      puVar11[0x13] = puVar11[0x1b];
      FUN_0077eb10(puVar11[0x22],&uStack_148,puVar11[0x1c]);
      puVar11[0x18] = 0;
      puVar11[0x19] = 0;
      puVar11[0x16] = 0;
      puVar11[0x17] = 0;
      puVar11[0x14] = puVar11[0x1c];
      puVar11[0x15] = 0;
      lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(lVar4 + 0x2e8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        FUN_0077d520(0,auStack_70);
      }
      else {
        plVar12 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        FUN_0077d520(lVar10,auStack_70);
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8);
      lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(lVar4 + 0x2e8);
      plVar12 = (long *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      FUN_014c9110(uVar7,0,lVar10,local_9d,local_9e);
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
      FUN_010bc320(param_1,0x126105ec9b956d26,1,0,1,0);
      uVar8 = 0x2a;
    }
    else {
      uVar5 = 0x4ec9b956b73;
LAB_010b8968:
      FUN_010bc320(param_1,uVar5 | 0x1261000000000000,0,1,1,0);
      uVar8 = 0x2c;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar8;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x7c) = 0x23;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
    *(undefined4 *)(param_1 + 0x84) = 5;
    FUN_006cf0a0(local_f0,&DAT_02671440);
    FUN_016d3620(local_f0);
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    }
    goto LAB_010b8bf8;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = 0;
LAB_010b8bf4:
  FUN_010b1170(uVar7,uVar6);
LAB_010b8bf8:
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x5cc) = 0;
  return;
}



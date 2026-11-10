/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd0590; name: FUN_00bd0590
 */


void FUN_00bd0590(undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  int param3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined8 local_a8 [8];
  undefined8 local_68;
  
  lVar8 = *param_4;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_3 + 0x58);
  pbVar1 = (byte *)(param_3 + 0x2dc2);
  *(long *)(param_3 + 0x58) = lVar8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar8 = 0;
  *(undefined8 *)(param_3 + 0x60) = param_5;
  uVar10 = 0xcbf29ce484222645;
  pbVar12 = (byte *)((ulong)local_a8 | 1);
  do {
    param3 = (int)lVar8;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    puVar9 = (ulong *)(param_3 + lVar8 * 0x78 + 0x68);
    *puVar9 = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_icon_poke_00",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x70) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_icon_poke_shadow",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x78) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_N_icon_poke_state_00",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x80) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_icon_bsetting_base_00",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x88) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_icon_lock",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x90) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_icon_lock_live_01",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0x98) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_L_icon_poke_box_%02d_P_check",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xa0) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_lift_default",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xa8) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_release_default",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xb0) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_enable",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xb8) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_black",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xc0) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_disable",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 200) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_default",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xd0) = uVar6;
    snprintf((char *)local_a8,0x40,"anime_L_icon_poke_box_%02d_byebye",param3);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = pbVar12;
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *(ulong *)(param_3 + lVar8 * 0x78 + 0xd8) = uVar6;
    FUN_0167b9b0(*(undefined8 *)(param_3 + 0x58),puVar9,0);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x60);
  *(undefined8 *)(param_3 + 0x2d68) = 0x706050403020100;
  *(undefined8 *)(param_3 + 0x2d70) = 0xf0e0d0c0b0a0908;
  *(undefined2 *)(param_3 + 0x2d78) = 0x1110;
  lVar8 = 0;
  *(undefined8 *)(param_3 + 0x2d7a) = 0x1918171615141312;
  *(undefined4 *)(param_3 + 0x2d82) = 0x1d1c1b1a;
  *(undefined2 *)(param_3 + 0x2d86) = 0x1f1e;
  *(undefined8 *)(param_3 + 0x2d88) = 0x2726252423222120;
  *(undefined4 *)(param_3 + 0x2d90) = 0x2b2a2928;
  *(undefined8 *)(param_3 + 0x2d94) = 0x333231302f2e2d2c;
  *(undefined2 *)(param_3 + 0x2d9c) = 0x3534;
  *(undefined8 *)(param_3 + 0x2d9e) = 0x3d3c3b3a39383736;
  *(undefined4 *)(param_3 + 0x2da6) = 0x41403f3e;
  *(undefined2 *)(param_3 + 0x2daa) = 0x4342;
  *(undefined8 *)(param_3 + 0x2dac) = 0x4b4a494847464544;
  *(undefined4 *)(param_3 + 0x2db4) = 0x4f4e4d4c;
  *(undefined2 *)(param_3 + 0x2db8) = 0x5150;
  *(undefined1 *)(param_3 + 0x2dba) = 0x52;
  *(undefined2 *)(param_3 + 0x2dbb) = 0x5453;
  *(undefined4 *)(param_3 + 0x2dbd) = 0x58575655;
  *(undefined1 *)(param_3 + 0x2dc1) = 0x59;
  pbVar1[0] = 0x5a;
  pbVar1[1] = 0x5b;
  pbVar1[2] = 0x5c;
  pbVar1[3] = 0x5d;
  *(undefined2 *)(param_3 + 0x2dc6) = 0x5f5e;
  do {
    snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",(int)lVar8);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar3 != 0);
    }
    lVar4 = param_3 + lVar8 * 8;
    *(ulong *)(lVar4 + 0x2dc8) = uVar6;
    snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",(int)lVar8 + 0x1e);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar3 = (byte)local_a8[0];
      do {
        uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar3 != 0);
    }
    lVar8 = lVar8 + 1;
    *(ulong *)(lVar4 + 0x2eb8) = uVar6;
  } while (lVar8 != 0x1e);
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x3c);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fa8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x42);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fd8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x3d);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fb0) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x43);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fe0) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x3e);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fb8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x44);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fe8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x3f);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fc0) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x45);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2ff0) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x40);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fc8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x46);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2ff8) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x41);
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar3 = (byte)local_a8[0];
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(ulong *)(param_3 + 0x2fd0) = uVar6;
  snprintf((char *)local_a8,0x40,"pane_N_icon_poke_pos_%02d",0x47);
  if ((byte)local_a8[0] != 0) {
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  lVar4 = 0;
  *(ulong *)(param_3 + 0x3000) = uVar10;
  lVar8 = param_3 + 0x70;
  lVar11 = 0x60;
  do {
    lVar2 = *(long *)(param_3 + 0x60);
    uVar5 = FUN_0103bd80(*(undefined8 *)(param_3 + 0x58),lVar8);
    FUN_0168b110(lVar2 + lVar4,param_6,uVar5,0);
    *(undefined1 *)(*(long *)(param_3 + 0x60) + lVar4 + 0x3c1) = 1;
    lVar2 = *(long *)(param_3 + 0x60);
    uVar5 = FUN_0103bd80(*(undefined8 *)(param_3 + 0x58),lVar8 + 8);
    FUN_0168b110(lVar2 + lVar4 + 0x17400,param_6,uVar5,0);
    lVar2 = *(long *)(param_3 + 0x60) + lVar4;
    lVar4 = lVar4 + 0x3e0;
    lVar8 = lVar8 + 0x78;
    lVar11 = lVar11 + -1;
    *(undefined1 *)(lVar2 + 0x177c1) = 1;
  } while (lVar11 != 0);
  lVar8 = 0;
  do {
    local_a8[0] = *(undefined8 *)(param_3 + 0x2d68 + lVar8 * 8 + 0x60);
    lVar4 = param_3 + (ulong)*(byte *)(param_3 + 0x2d68 + lVar8) * 0x78 + 0x68;
    FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
    FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
    local_68 = 0;
    FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1e);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fa8);
  lVar8 = param_3 + 0x68;
  lVar4 = lVar8 + (ulong)*pbVar1 * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fb0);
  lVar4 = lVar8 + (ulong)*(byte *)(param_3 + 0x2dc3) * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fb8);
  lVar4 = lVar8 + (ulong)*(byte *)(param_3 + 0x2dc4) * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fc0);
  lVar4 = lVar8 + (ulong)*(byte *)(param_3 + 0x2dc5) * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fc8);
  lVar4 = lVar8 + (ulong)*(byte *)(param_3 + 0x2dc6) * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar4);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar4);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar4,&local_68);
  local_a8[0] = *(undefined8 *)(param_3 + 0x2fd0);
  lVar8 = lVar8 + (ulong)*(byte *)(param_3 + 0x2dc7) * 0x78;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar8);
  FUN_0167bfe0(*(undefined8 *)(param_3 + 0x58),local_a8,lVar8);
  local_68 = 0;
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar8,&local_68);
  local_a8[0] = 0xcb5480827303f552;
  uVar13 = FUN_0167b720(*(undefined8 *)(param_3 + 0x58),local_a8);
  *(undefined4 *)(param_3 + 0x30a4) = uVar13;
  *(undefined4 *)(param_3 + 0x30a8) = param_2;
  local_a8[0] = 0xcb5481827303f705;
  uVar13 = FUN_0167b720(*(undefined8 *)(param_3 + 0x58),local_a8);
  *(undefined4 *)(param_3 + 0x30ac) = uVar13;
  *(undefined4 *)(param_3 + 0x30b0) = param_2;
  return;
}



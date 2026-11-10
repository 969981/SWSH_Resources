/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00510a10; name: FUN_00510a10
 */


void FUN_00510a10(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar10 = DAT_0275b524;
  uVar9 = (undefined4)DAT_0275b4bc;
  uVar8 = DAT_0275b4b4._4_4_;
  uVar7 = (undefined4)DAT_0275b49c;
  uVar6 = DAT_0275b494._4_4_;
  uVar5 = (undefined4)DAT_0275b494;
  uVar4 = DAT_0275b480._4_4_;
  uVar1 = DAT_0275b478._4_4_;
  puVar2 = &DAT_0275b494;
  puVar12 = (undefined8 *)&DAT_0275b524;
  puVar3 = &DAT_0275b51c;
  puVar14 = &DAT_0275b49c;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    uVar13 = 0x3e99999a;
    break;
  case 1:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *param_1 = 0x3e9581063f353f7d;
    param_1[1] = 0x3f4c08313e2e147b;
    param_1[2] = 0x3d3c6a7f3e0624dd;
    return;
  case 2:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    uVar13 = 0x3e947ae1;
    break;
  case 4:
    puVar2 = &DAT_0275b4ac;
    puVar14 = &DAT_0275b4b4;
  case 3:
    uVar1 = *(undefined4 *)puVar14;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)puVar2 + 4);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = 0x3eae147b3f2147ae;
    param_1[1] = 0x3f1851ec3e9eb852;
    param_1[2] = 0x3d8f5c293e1eb852;
    return;
  case 5:
    *(undefined4 *)(param_1 + 3) = (undefined4)DAT_0275b478;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = 0x3ea8f5c33f2b851f;
    param_1[1] = 0x3f35c28f3e570a3d;
    param_1[2] = 0x3da3d70a3e0f5c29;
    return;
  case 6:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    uVar11 = 0x3ea8f5c33f23d70a;
    uVar13 = 0x3f35c28f3e570a3d;
    goto LAB_00510cfc;
  case 7:
    *(undefined4 *)(param_1 + 3) = (undefined4)DAT_0275b480;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
    *param_1 = 0x3e87d5673f3c154d;
    param_1[1] = 0x3f538ef33debedfa;
    param_1[2] = 0x3c90ff973e205bc0;
    return;
  case 8:
    *(undefined4 *)(param_1 + 3) = (undefined4)DAT_0275b480;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
    *param_1 = 0x3e87d5673f3c154d;
    param_1[1] = 0x3f5724743e236e2f;
    param_1[2] = 0x38d1b7173d15e9e2;
    return;
  case 9:
    *(undefined4 *)(param_1 + 3) = DAT_0275b490;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    *param_1 = 0x3e87d5673f3c154d;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0xbd9db22d38d1b717;
    return;
  case 10:
    *(undefined4 *)(param_1 + 3) = DAT_0275b490;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    *param_1 = 0x3e9604193f36872b;
    param_1[1] = 0x3f547ae13e28f5c3;
    param_1[2] = 0x3d3439583e03126f;
    return;
  case 0xc:
    puVar12 = &DAT_0275b49c;
    puVar3 = &DAT_0275b494;
  case 0xb:
    uVar1 = *(undefined4 *)puVar12;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)puVar3 + 4);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
    uVar11 = 0x3ea3d70a3f2e147b;
    uVar13 = 0x3f30a3d73e87ae14;
    goto LAB_00510cfc;
  case 0xd:
    *(undefined4 *)(param_1 + 3) = DAT_0275b51c._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
    *param_1 = 0x3e8a3d713f3d70a4;
    param_1[1] = 0x3f47ae143e6147ae;
    param_1[2] = 0xbdb851ec3db851ec;
    return;
  case 0xe:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *param_1 = 0x3e8a3d713f3d70a4;
    param_1[1] = 0x3f91eb853e2e147b;
    param_1[2] = 0xbdcccccd3da3d70a;
    return;
  case 0xf:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *param_1 = 0x3e8f5c293f3ae148;
    param_1[1] = 0x3f5ae1483e0f5c29;
    param_1[2] = 0xbd4ccccd3dcccccd;
    return;
  case 0x10:
    *(undefined4 *)(param_1 + 3) = DAT_0275b494._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *param_1 = 0x3e8ccccd3f441893;
    param_1[1] = 0x3f4ccccd3e666666;
    param_1[2] = 0xbdb22d0e3db645a2;
    return;
  case 0x11:
    *(undefined4 *)(param_1 + 3) = DAT_0275b4b4._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    *param_1 = 0x3e87d5673f3c154d;
    param_1[1] = 0x3f37a7873e8c2f83;
    param_1[2] = 0x3c11d14e3e2a9931;
    return;
  case 0x12:
    *(undefined4 *)(param_1 + 3) = DAT_0275b4b4._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    param_1[2] = 0;
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f80000000000000;
    return;
  case 0x13:
    *(undefined4 *)param_1 = 0x3f565ed2;
    *(undefined4 *)((long)param_1 + 4) = 0x3e2684b5;
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    *(undefined4 *)(param_1 + 1) = 0x40135747;
    *(undefined4 *)((long)param_1 + 0xc) = 0xbfa6ae8f;
    param_1[2] = 0xb6e0ec873e2c05be;
    return;
  case 0x14:
    param_1[1] = 0xbfa6a43c4013521e;
    *(undefined4 *)param_1 = 0x3f565ea1;
    *(undefined4 *)((long)param_1 + 4) = 0x3e26857c;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 2) = 0x3e2c062b;
    *(undefined4 *)((long)param_1 + 0x14) = 0xb6b6c472;
    return;
  case 0x15:
    *(undefined4 *)(param_1 + 3) = DAT_0275b4b4._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    *param_1 = 0x3e9ce4af3f3319d9;
    param_1[1] = 0x3fa14c85beb7094e;
    param_1[2] = 0x3d2b6d623e0b14d4;
    return;
  case 0x16:
    *(undefined4 *)(param_1 + 3) = DAT_0275b4b4._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    *param_1 = 0x3ea1f8283f3186d8;
    param_1[1] = 0x3fbc60d5bf0f4a19;
    param_1[2] = 0x3d8989643e19eb33;
    return;
  case 0x17:
    *(undefined4 *)(param_1 + 3) = DAT_0275b4b4._4_4_;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
    *param_1 = 0x3e96fa663f361c47;
    param_1[1] = 0x402060ebbfbce5c2;
    param_1[2] = 0x3d687faf3e1353e6;
    return;
  default:
    param_1[3] = 0;
    return;
  }
  uVar11 = 0x3ea8f5c33f23d70a;
  uVar13 = uVar13 | 0x3f19999a00000000;
LAB_00510cfc:
  *param_1 = uVar11;
  param_1[1] = uVar13;
  param_1[2] = 0x3d75c28f3e19999a;
  return;
}



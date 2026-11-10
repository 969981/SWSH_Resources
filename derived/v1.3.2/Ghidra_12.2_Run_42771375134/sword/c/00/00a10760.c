/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a10760; name: FUN_00a10760
 */


void FUN_00a10760(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  ulong local_78;
  undefined8 local_68;
  
  plVar2 = (long *)param_2[2];
  lVar4 = param_2[3];
  iVar13 = *(int *)(param_2 + 4);
  uVar3 = *param_2;
  uVar5 = param_2[1];
  lVar16 = lVar4;
  if ((plVar2 != (long *)0x0) && (*(char *)((long)param_2 + 0x24) != '\0')) {
    lVar16 = FUN_00a0a7b0(plVar2,lVar4);
  }
  lVar23 = param_1[2];
  lVar17 = FUN_008e1680(lVar16);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  iVar10 = FUN_0077d480(param_1[0x25]);
  if (iVar10 != 0) {
    lVar21 = param_1[0x13];
    if ((lVar21 != -0x340d631b7bddd9bb) && (lVar21 != 0)) {
      FUN_00a10e20(lVar23,param_1 + 0x13,param_1[0x25],0,lVar17);
    }
  }
  if ((char)param_1[0x24] == '\0') {
    iVar10 = FUN_0077d480(param_1[0x26]);
    if (iVar10 != 0) {
      lVar21 = param_1[0x15];
      if ((lVar21 != -0x340d631b7bddd9bb) && (lVar21 != 0)) {
        lVar21 = param_1[0x26];
        uVar15 = FUN_0087a5f0(lVar17);
        FUN_00a10f20(lVar23,param_1 + 0x15,lVar21,0,uVar15);
      }
    }
  }
  else {
    uVar18 = FUN_0077d470(param_1[0x27]);
    FUN_00ffd700(lVar23,param_1 + 0x15,uVar18,10);
  }
  iVar10 = FUN_008e12a0(lVar4,0xd);
  iVar11 = FUN_008e12a0(lVar4,0xf);
  local_68._0_4_ = 0x3f800000;
  fVar26 = 1.0;
  puVar1 = (uint *)&local_68;
  if (1.0 <= *(float *)(param_1 + 0x23)) {
    puVar1 = (uint *)(param_1 + 0x23);
  }
  local_a0 = (undefined *)(ulong)*puVar1;
  iVar12 = *(int *)((long)param_1 + 0x1c4);
  local_98 = CONCAT44((float)iVar12,(float)iVar11);
  fVar25 = 1.0;
  local_90 = CONCAT44(0x3f800000,(float)iVar10);
  if (1 < iVar13) {
    fVar25 = (float)FUN_00a11f00(&local_a0);
    if (30.0 < fVar25) {
      fVar25 = 30.0;
    }
    iVar12 = *(int *)((long)param_1 + 0x1c4);
  }
  *(int *)(param_1 + 0x38) = iVar11;
  (**(code **)(*param_1 + 0x30))(param_1,uVar3,uVar5,iVar12,iVar10,iVar11,(int)fVar25);
  *(int *)((long)param_1 + 0x1c4) = iVar10;
  uVar8 = FUN_008e1290(lVar16);
  FUN_00864b10(uVar8,*(undefined1 *)(lVar16 + 0x33d));
  iVar10 = FUN_008e12a0(lVar16,0x11);
  iVar11 = FUN_00864ba0();
  iVar12 = FUN_008e12a0(lVar16,0x17);
  iVar10 = FUN_00864ba0(iVar10 + 1);
  local_68 = CONCAT44(local_68._4_4_,0x3f800000);
  puVar1 = (uint *)&local_68;
  if (1.0 <= *(float *)((long)param_1 + 0x11c)) {
    puVar1 = (uint *)((long)param_1 + 0x11c);
  }
  local_a0 = (undefined *)CONCAT44((float)iVar11,*puVar1);
  iVar20 = (int)param_1[0x39];
  local_98 = CONCAT44((float)iVar20,(float)iVar10);
  local_90 = CONCAT44(0x3f800000,(float)iVar12);
  if (1 < iVar13) {
    fVar26 = (float)FUN_00a11f00(&local_a0);
    if (30.0 < fVar26) {
      fVar26 = 30.0;
    }
    iVar20 = (int)param_1[0x39];
  }
  FUN_016a7ae0(&local_78,param_1[0x2c],uVar5,
               iVar20 - iVar11 & (iVar20 - iVar11 >> 0x1f ^ 0xffffffffU),iVar10 - iVar11,
               iVar12 - iVar11,(int)fVar26);
  local_68 = local_78;
  local_78 = 0;
  FUN_015f6330(uVar3,&local_68,0x400);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  *(int *)(param_1 + 0x39) = iVar12;
  iVar13 = FUN_008e12a0(lVar16,0x12);
  if (iVar13 != 0) {
    lVar21 = param_1[0x17];
    if ((lVar21 != -0x340d631b7bddd9bb) && (lVar21 != 0)) {
      FUN_00a11030(lVar23,param_1 + 0x17,param_1[0x29],0,iVar13);
    }
  }
  lVar21 = param_1[0x1e];
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe | iVar13 != 0;
  }
  sVar9 = FUN_008e2d10(lVar16);
  if (sVar9 != 0) {
    lVar21 = param_1[0x18];
    if ((lVar21 != -0x340d631b7bddd9bb) && (lVar21 != 0)) {
      FUN_00a11130(lVar23,param_1 + 0x18,param_1[0x2a],0,sVar9,1);
    }
  }
  lVar21 = param_1[0x1f];
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe | sVar9 != 0;
  }
  lVar21 = param_1[0x2e];
  if (lVar21 != 0) {
    local_7c = 0;
    local_7e = 0;
    local_a0 = PTR_DAT_02718ea0 + 0x10;
    local_80 = (ushort)*(byte *)(param_1 + 0x32);
    bVar6 = 0;
    local_98 = lVar4;
    local_90 = lVar16;
    lStack_88 = lVar4;
    if (*(char *)((long)param_1 + 0x191) != '\0') {
      bVar6 = FUN_008e0a10(lVar4);
      bVar6 = bVar6 & 1;
      lVar21 = param_1[0x2e];
    }
    local_80 = CONCAT11(bVar6,(undefined1)local_80);
    FUN_00a127a0(lVar21,&local_a0);
  }
  lVar21 = *(long *)(lVar23 + 0x438);
  if (lVar21 != 0) {
    plVar24 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar24 + 0x10))(plVar24);
    local_a0 = (undefined *)CONCAT71(local_a0._1_7_,0x12);
    local_68 = CONCAT71(local_68._1_7_,0x12);
    (**(code **)(*plVar2 + 0x750))(plVar2,&local_a0,&local_68,lVar16);
    lVar22 = param_1[0x20];
    if (lVar22 != 0) {
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe | (char)local_a0 != '\x12';
      if ((char)local_a0 != '\x12') {
        FUN_016a7910(lVar21,(ulong)local_a0 & 0xff,1,param_1[0x20],0,0);
      }
    }
    if (param_1[0x21] != 0) {
      *(bool *)(param_1[0x21] + 0x58) = (char)local_68 != '\x12' && (char)local_68 != (char)local_a0
      ;
      if ((char)local_68 != '\x12' && (char)local_68 != (char)local_a0) {
        FUN_016a7910(lVar21,local_68 & 0xff,1,param_1[0x21],0,0);
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  if ((param_1[0x22] != -0x340d631b7bddd9bb) && (param_1[0x22] != 0)) {
    FUN_008e1670(lVar16);
    iVar13 = FUN_0087ccf0();
    uVar15 = 0x3f800000;
    if (iVar13 != 1) {
      uVar15 = 0x40000000;
    }
    uVar27 = 0;
    if (iVar13 != 0) {
      uVar27 = uVar15;
    }
    FUN_00ffd510(uVar27,lVar23,param_1 + 0x22);
  }
  uVar19 = FUN_008e1600(lVar4);
  if ((uVar19 & 1) == 0) {
    if ((param_1[0x33] != 0) && (lVar16 = param_1[0x34], lVar16 != 0)) {
      lVar21 = *(long *)(lVar23 + 0x430);
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
        lVar16 = param_1[0x34];
      }
      bVar6 = FUN_016a6c90(lVar21,lVar4,lVar16,0,0);
      if (*(char *)((long)param_1 + 0x1a9) != '\0') {
        bVar7 = FUN_008e1600(lVar4);
        bVar6 = bVar6 & (bVar7 ^ 1);
      }
      *(byte *)(param_1[0x33] + 0x58) = *(byte *)(param_1[0x33] + 0x58) & 0xfe | bVar6 & 1;
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
      }
    }
    if (param_1[0x36] != 0) {
      uVar14 = FUN_00a0a570(lVar4);
      bVar7 = FUN_00a0a5f0();
      bVar6 = bVar7;
      if (*(char *)((long)param_1 + 0x1a9) != '\0') {
        bVar6 = FUN_008e1600(lVar4);
        bVar6 = bVar7 & (bVar6 ^ 1);
      }
      if ((bVar7 & 1) != 0) {
        FUN_00ffd510((float)uVar14,lVar23,param_1 + 0x37);
      }
      *(byte *)(param_1[0x36] + 0x58) = *(byte *)(param_1[0x36] + 0x58) & 0xfe | bVar6 & 1;
    }
  }
  if (param_1[0x1d] != 0) {
    FUN_00ffd840(lVar23);
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return;
}



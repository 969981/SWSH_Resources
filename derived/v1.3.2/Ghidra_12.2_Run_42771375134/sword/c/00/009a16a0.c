/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a16a0; name: FUN_009a16a0
 */


uint FUN_009a16a0(undefined8 param_1,undefined8 param_2,uint *param_3,ulong param_4,long param_5)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  FUN_009a1bf0();
  iVar4 = FUN_008e19f0(param_2);
  if (iVar4 == 2) {
    uVar7 = FUN_009423e0(param_1);
    uVar8 = FUN_0092ab40(uVar7,param_2,*param_3,2);
    if ((uVar8 & 1) == 0) {
      return 2;
    }
  }
  uVar8 = FUN_009a1cb0(param_1,param_2,*param_3);
  iVar4 = FUN_008e19f0(param_2);
  if (((uVar8 & 1) == 0) && (iVar4 == 3)) {
    return 4;
  }
  uVar7 = FUN_00942380(param_1);
  uVar8 = FUN_008f35c0(uVar7,0x800);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_008e0b50(param_2);
    if ((uVar8 & 1) == 0) {
      return 0x28;
    }
    return 0x29;
  }
  uVar8 = FUN_009a1fd0(param_1,param_2);
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_009a2080(param_1,param_2);
    if ((uVar5 & 0xff) == 4) {
      return 0x16;
    }
    if ((uVar5 & 0xff) == 2) {
      return 0x17;
    }
  }
  if (((param_4 & 1) == 0) && ((*(byte *)(param_5 + 4) >> 3 & 1) == 0)) {
    uVar8 = thunk_FUN_008dd3c0(*param_3);
    lVar1 = 8;
    if ((uVar8 & 1) == 0) {
      lVar1 = 4;
    }
    uVar6 = FUN_008e2890(param_2,*(undefined4 *)((long)param_3 + lVar1));
    if (((uVar6 & 0xff) != 4) && (sVar2 = FUN_008e2480(param_2,uVar6), sVar2 == 0)) {
      return 1;
    }
  }
  uVar8 = FUN_009427e0(param_1,*param_3);
  if ((uVar8 & 1) != 0) {
    return 0x27;
  }
  uVar8 = FUN_00942800(param_1,*param_3);
  if ((uVar8 & 1) != 0) {
    return 0x1a;
  }
  uVar7 = FUN_009423e0(param_1);
  uVar6 = FUN_0092ac00(uVar7,param_2,*param_3,0x20,param_3,0);
  if ((uVar6 & 0xff) != 0) {
    return uVar6;
  }
  uVar8 = FUN_008e2df0(param_2,6);
  if (((uVar8 & 1) != 0) && (*param_3 == 0x108)) {
    return 7;
  }
  uVar8 = FUN_008e2df0(param_2,4);
  if ((uVar8 & 1) != 0) {
    return 6;
  }
  uVar8 = FUN_008e1810(param_2,0xd);
  if ((((uVar8 & 1) != 0) && (uVar8 = FUN_008e0a10(param_2), (uVar8 & 1) == 0)) &&
     (*param_3 != 0xa5)) {
    local_48 = FUN_008e1aa0(param_2,0xd);
    uVar6 = FUN_008ed2f0(&local_48);
    if (*param_3 == (uVar6 & 0xffff)) {
      return 9;
    }
  }
  uVar8 = FUN_008e1810(param_2,0xf);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00880a00(*param_3,0xc), (uVar8 & 1) != 0)) {
    return 0xd;
  }
  uVar8 = FUN_008e1810(param_2,0x18);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00880a00(*param_3,8), (uVar8 & 1) != 0)) {
    return 0x21;
  }
  FUN_00942390(param_1);
  uVar7 = FUN_00931930();
  uVar8 = FUN_00932ae0(uVar7,2);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00880a00(*param_3,9), (uVar8 & 1) != 0)) {
    return 0x14;
  }
  if (*param_3 == 0xa5) {
LAB_009a198c:
    uVar8 = FUN_009a1e80(param_1,param_2,uVar5);
    if ((uVar8 & 1) == 0) {
      iVar4 = FUN_008e19f0(param_2);
      if ((iVar4 == 1) && (iVar4 = FUN_008ec900(0x19), iVar4 != 0)) {
        uVar5 = 3;
      }
      else {
        uVar8 = FUN_008e1810(param_2,7);
        if ((uVar8 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          uVar7 = FUN_009423b0(param_1);
          FUN_009373b0(uVar7,param_2);
          iVar4 = FUN_008ec900(0x32);
          uVar5 = 0;
          if (iVar4 != 0) {
            uVar5 = 8;
          }
        }
      }
    }
    else {
      uVar5 = 5;
    }
  }
  else {
    uVar8 = FUN_008e1810(param_2,0x17);
    if (((uVar8 & 1) == 0) || (uVar8 = FUN_008e0a10(param_2), (uVar8 & 1) != 0)) {
LAB_009a19f4:
      uVar8 = FUN_008e1810(param_2,0x1a);
      if ((uVar8 & 1) == 0) {
        uVar6 = *param_3;
      }
      else {
        uVar6 = FUN_008e4c50(param_2);
        if (uVar6 != *param_3) goto LAB_009a1a58;
      }
      uVar8 = FUN_009a1db0(param_1,param_2,uVar6);
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_008e1810(param_2,0xb);
        if (((uVar8 & 1) != 0) && (uVar8 = FUN_00880c60(*param_3), (uVar8 & 1) == 0)) {
          return 10;
        }
        FUN_00942390(param_1);
        uVar7 = FUN_00931930();
        uVar8 = FUN_00932ae0(uVar7,3);
        if (((uVar8 & 1) != 0) && (uVar8 = FUN_008e0a10(param_2), (uVar8 & 1) == 0)) {
          FUN_00942390(param_1);
          uVar7 = FUN_00931930();
          uVar9 = FUN_00942380(param_1);
          FUN_00942390(param_1);
          uVar10 = FUN_00931920();
          uVar8 = FUN_00932cc0(uVar7,uVar9,uVar10,param_2,*param_3);
          if ((uVar8 & 1) != 0) {
            return 0xc;
          }
        }
        goto LAB_009a198c;
      }
    }
    else {
      local_48 = FUN_008e1aa0(param_2,0x17);
      uVar3 = FUN_008ed2f0(&local_48);
      if ((uVar3 == 0xa5) || (*param_3 == (uint)uVar3)) goto LAB_009a19f4;
    }
LAB_009a1a58:
    uVar5 = 0x11;
  }
  return uVar5;
}



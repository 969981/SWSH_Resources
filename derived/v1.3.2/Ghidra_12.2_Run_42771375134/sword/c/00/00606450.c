/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00606450; name: FUN_00606450
 */


undefined8
FUN_00606450(undefined8 param_1,long *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44 [4];
  
  if ((code *)param_2[5] == (code *)0x0) {
    uVar5 = param_2[1];
    if (uVar5 < param_3) {
      return 0x55;
    }
    sVar2 = uVar5 - param_3;
    param_2[2] = param_3;
    if (uVar5 < param_3 || sVar2 == 0) {
      return 0x55;
    }
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,param_3,0,0);
    if (lVar1 != 0) {
      return 0x55;
    }
    sVar2 = param_2[1] - param_3;
    param_2[2] = param_3;
    if ((ulong)param_2[1] < param_3 || sVar2 == 0) {
      return 0x55;
    }
  }
  puVar7 = (ulong *)(param_2 + 1);
  if ((code *)param_2[5] == (code *)0x0) {
    if (0xf < sVar2) {
      sVar2 = 0x10;
    }
    memcpy(&local_54,(void *)(*param_2 + param_3),sVar2);
    param_2[2] = sVar2 + param_3;
  }
  else {
    sVar2 = (*(code *)param_2[5])(param_2,param_3,&local_54,0x10);
    param_2[2] = sVar2 + param_3;
  }
  if (sVar2 < 0x10) {
    return 0x55;
  }
  if ((char)local_54 < '\0') {
    return 2;
  }
  if ((char)local_50 < '\0') {
    return 2;
  }
  if ((char)local_4c < '\0') {
    return 2;
  }
  if ((char)local_48 < '\0') {
    return 2;
  }
  uVar3 = (long)(int)((uint)local_54 << 0x18) | (ulong)local_53 << 0x10 | (ulong)local_52 << 8 |
          (ulong)local_51;
  *param_5 = uVar3;
  uVar5 = (long)(int)((uint)local_50 << 0x18) | (ulong)local_4f << 0x10 | (ulong)local_4e << 8 |
          (ulong)local_4d;
  if ((int)uVar5 == 0) {
    return 2;
  }
  uVar6 = (long)(int)((uint)local_4c << 0x18) | (ulong)local_4b << 0x10 | (ulong)local_4a << 8 |
          (ulong)local_49;
  lVar1 = (long)(int)((uint)local_48 << 0x18 | (uint)local_47 << 0x10 | (uint)local_46 << 8 |
                     (uint)local_45);
  if ((int)uVar3 < (int)uVar5) {
    if ((long)(uVar5 - uVar6) < (long)uVar3) {
      return 2;
    }
  }
  else if ((long)(uVar3 - lVar1) < (long)uVar5) {
    return 2;
  }
  if ((long)(0x7fffffffffffffff - uVar6) < (long)uVar3) {
    return 2;
  }
  if (0x7fffffffffffffff - lVar1 < (long)uVar5) {
    return 2;
  }
  if ((long)((0x7fffffffffffffff - uVar3) - uVar6) < (long)param_3) {
    return 2;
  }
  if ((long)((0x7fffffffffffffff - uVar5) - lVar1) < (long)param_3) {
    return 2;
  }
  if (*puVar7 < uVar3 + param_3 + uVar6) {
    return 2;
  }
  uVar5 = uVar5 + param_3;
  if (*puVar7 < uVar5 + lVar1) {
    return 2;
  }
  *param_5 = uVar3 + param_3;
  if ((code *)param_2[5] == (code *)0x0) {
    uVar3 = *puVar7;
    if (uVar3 < uVar5) {
      return 0x55;
    }
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,uVar5,0,0);
    if (lVar1 != 0) {
      return 0x55;
    }
    uVar3 = *puVar7;
  }
  local_55 = local_45 + 1;
  param_2[2] = uVar5;
  sVar2 = uVar3 - uVar5;
  if (uVar3 < uVar5 || sVar2 == 0) {
    return 0x55;
  }
  if ((code *)param_2[5] == (code *)0x0) {
    if (0xf < sVar2) {
      sVar2 = 0x10;
    }
    memcpy(&local_64,(void *)(*param_2 + uVar5),sVar2);
    param_2[2] = sVar2 + uVar5;
  }
  else {
    sVar2 = (*(code *)param_2[5])(param_2,uVar5,&local_64,0x10);
    param_2[2] = sVar2 + uVar5;
  }
  if (sVar2 < 0x10) {
    return 0x55;
  }
  if ((local_55 != local_45 ||
       (local_56 != local_46 ||
       (local_57 != local_47 ||
       (local_58 != local_48 ||
       (local_59 != local_49 ||
       (local_5a != local_4a ||
       (local_5b != local_4b ||
       (local_5c != local_4c ||
       (local_5d != local_4d ||
       (local_5e != local_4e ||
       (local_5f != local_4f ||
       (local_60 != local_50 ||
       (local_61 != local_51 ||
       (local_62 != local_52 || (local_63 != local_53 || local_64 != local_54))))))))))))))) &&
     (local_55 != 0 ||
      (local_56 != 0 ||
      (local_57 != 0 ||
      (local_58 != 0 ||
      (local_59 != 0 ||
      (local_5a != 0 ||
      (local_5b != 0 ||
      (local_5c != 0 ||
      (local_5d != 0 ||
      (local_5e != 0 ||
      (local_5f != 0 ||
      (local_60 != 0 || (local_61 != 0 || (local_62 != 0 || (local_63 != 0 || local_64 != 0)))))))))
      ))))))) {
    return 2;
  }
  uVar6 = param_2[2];
  uVar3 = uVar6 + 8;
  if ((code *)param_2[5] == (code *)0x0) {
    if (uVar3 <= *puVar7) goto LAB_00606918;
LAB_00606920:
    if (*puVar7 <= uVar6 + 1) {
      return 0x55;
    }
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,uVar3,0,0);
    if (lVar1 == 0) {
LAB_00606918:
      param_2[2] = uVar3;
      uVar6 = uVar3;
      goto LAB_00606920;
    }
    uVar6 = param_2[2];
    if (*puVar7 <= uVar6 + 1) {
      return 0x55;
    }
  }
  if ((code *)param_2[5] == (code *)0x0) {
    pbVar4 = (byte *)(*param_2 + uVar6);
    if (pbVar4 != (byte *)0x0) goto LAB_00606968;
    param_2[2] = uVar6 + 2;
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,uVar6,local_44,2);
    if (lVar1 != 2) {
      return 0x55;
    }
    uVar6 = param_2[2];
    pbVar4 = local_44;
LAB_00606968:
    uVar3 = (long)(short)((ushort)*pbVar4 << 8) | (ulong)pbVar4[1];
    param_2[2] = uVar6 + 2;
    if ((int)uVar3 < 0) {
      return 2;
    }
    uVar5 = uVar5 + uVar3;
    if ((code *)param_2[5] != (code *)0x0) {
      lVar1 = (*(code *)param_2[5])(param_2,uVar5,0,0);
      if (lVar1 != 0) {
        return 0x55;
      }
      goto LAB_006069c4;
    }
  }
  if (*puVar7 < uVar5) {
    return 0x55;
  }
LAB_006069c4:
  param_2[2] = uVar5;
  *param_4 = uVar5;
  return 0;
}



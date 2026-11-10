/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e1c0; name: FUN_0087e1c0
 */


void FUN_0087e1c0(long param_1,ushort param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  iVar5 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  uVar1 = *(undefined4 *)(&DAT_02144000 + uVar8 * 4);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if ((param_2 != 1) && (iVar5 == 0x22e)) {
      FUN_0087e550(param_1,0x22e,uVar1,param_3);
      goto LAB_0087e270;
    }
    if ((param_2 == 2) || (iVar5 != 0x22f)) goto LAB_0087e270;
    FUN_0087e550(param_1,0x22f,uVar1,param_3);
    uVar7 = *(undefined4 *)(&DAT_0214400c + uVar8 * 4);
  }
  else {
    FUN_0087e550(param_1,0xb8,uVar1,param_3);
LAB_0087e270:
    uVar7 = *(undefined4 *)(&DAT_0214400c + uVar8 * 4);
    if ((param_2 == 0) || (iVar5 != 0x225)) {
      if (param_2 == 1 || iVar5 != 0x22a) {
        if (param_2 == 2 || iVar5 != 0x229) goto LAB_0087e304;
        uVar6 = 0x229;
      }
      else {
        uVar6 = 0x22a;
      }
    }
    else {
      uVar6 = 0x225;
    }
    FUN_0087e550(param_1,uVar6,uVar7,param_3);
  }
LAB_0087e304:
  bVar4 = param_2 == 2;
  bVar3 = param_2 != 1;
  iVar5 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (bVar3 && iVar5 == 0x22e) {
      uVar6 = 0x22e;
      goto LAB_0087e36c;
    }
    if (!bVar4 && iVar5 == 0x22f) {
      uVar6 = 0x22f;
      goto LAB_0087e36c;
    }
    if ((param_2 != 0) && (iVar5 == 0x225)) {
      uVar6 = 0x225;
LAB_0087e514:
      uVar2 = uVar7;
      goto LAB_0087e374;
    }
    if (bVar3 && iVar5 == 0x22a) {
      uVar6 = 0x22a;
      goto LAB_0087e514;
    }
    if (!bVar4 && iVar5 == 0x229) {
      uVar6 = 0x229;
      goto LAB_0087e514;
    }
  }
  else {
    uVar6 = 0xb8;
LAB_0087e36c:
    uVar2 = uVar1;
LAB_0087e374:
    FUN_0087e550(param_1,uVar6,uVar2,param_3);
  }
  iVar5 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (bVar3 && iVar5 == 0x22e) {
      uVar6 = 0x22e;
      goto LAB_0087e3e4;
    }
    if (!bVar4 && iVar5 == 0x22f) {
      uVar6 = 0x22f;
      goto LAB_0087e3e4;
    }
    if ((param_2 != 0) && (iVar5 == 0x225)) {
      uVar6 = 0x225;
LAB_0087e524:
      uVar2 = uVar7;
      goto LAB_0087e3ec;
    }
    if (bVar3 && iVar5 == 0x22a) {
      uVar6 = 0x22a;
      goto LAB_0087e524;
    }
    if (!bVar4 && iVar5 == 0x229) {
      uVar6 = 0x229;
      goto LAB_0087e524;
    }
  }
  else {
    uVar6 = 0xb8;
LAB_0087e3e4:
    uVar2 = uVar1;
LAB_0087e3ec:
    FUN_0087e550(param_1,uVar6,uVar2,param_3);
  }
  iVar5 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (bVar3 && iVar5 == 0x22e) {
      uVar6 = 0x22e;
    }
    else {
      if (bVar4 || iVar5 != 0x22f) {
        if ((param_2 == 0) || (iVar5 != 0x225)) {
          if (bVar3 && iVar5 == 0x22a) {
            uVar6 = 0x22a;
          }
          else {
            if (bVar4 || iVar5 != 0x229) {
              return;
            }
            uVar6 = 0x229;
          }
        }
        else {
          uVar6 = 0x225;
        }
        goto LAB_0087e464;
      }
      uVar6 = 0x22f;
    }
  }
  else {
    uVar6 = 0xb8;
  }
  uVar7 = uVar1;
LAB_0087e464:
  FUN_0087e550(param_1,uVar6,uVar7,param_3);
  return;
}



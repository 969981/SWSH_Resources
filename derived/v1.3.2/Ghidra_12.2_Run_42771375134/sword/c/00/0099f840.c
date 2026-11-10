/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f840; name: FUN_0099f840
 */


void FUN_0099f840(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5
                 ,int *param_6,uint param_7,undefined8 param_8,undefined1 *param_9)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 local_80 [32];
  
  *param_9 = 0;
  uVar7 = FUN_00931920(param_3);
  uVar4 = FUN_008e0a00(param_4);
  uVar5 = FUN_008f9470(param_2,uVar7,uVar4);
  if (*param_6 == 0xae) {
    if (param_6[6] != 7) {
      if ((param_6[6] != 0) || (((param_5 & 0xff) != 5 && ((uVar5 & 0xff) != (param_5 & 0xff)))))
      goto LAB_0099f900;
      uVar5 = FUN_008eca00(param_2,uVar7,param_4,0xae,0);
    }
    param_5 = uVar5;
  }
LAB_0099f900:
  uVar4 = FUN_008e0a00(param_4);
  uVar4 = FUN_008f9470(param_2,uVar7,uVar4);
  switch(param_6[6]) {
  case 0:
  case 3:
    uVar7 = FUN_008df770(uVar7,param_5);
    goto LAB_0099fb70;
  case 1:
    lVar8 = FUN_008df770(uVar7,param_5);
    if (lVar8 == 0) {
LAB_0099f968:
      lVar8 = param_4;
    }
    else {
      uVar10 = FUN_008e1600();
      if ((uVar10 & 1) != 0) goto LAB_0099f968;
    }
    param_4 = lVar8;
    goto LAB_0099fbbc;
  case 2:
    cVar1 = FUN_008f87e0(param_2);
    if (cVar1 == '\x03') {
      return;
    }
    param_4 = FUN_008df770(uVar7,param_5);
    goto LAB_0099fbbc;
  case 4:
    FUN_00943860(local_80,param_2,param_3);
    while (uVar10 = FUN_00943ae0(local_80,&local_88), (uVar10 & 1) != 0) {
      cVar1 = FUN_008e0a00(CONCAT71(uStack_87,local_88));
      cVar2 = FUN_008e0a00(param_4);
      if (cVar1 != cVar2) {
        FUN_0093b0b0(param_8,CONCAT71(uStack_87,local_88));
      }
    }
    break;
  case 5:
    FUN_008e0a00(param_4);
    uVar6 = FUN_008f94e0();
    uVar5 = FUN_008f8cd0(param_2,uVar6);
    if ((uVar5 & 0xff) != 0) {
      uVar11 = 0;
      do {
        uVar6 = FUN_008f9400(param_2,uVar4,uVar11);
        FUN_008f8e50(param_2,uVar6,local_80,&local_88);
        uVar9 = FUN_008df900(uVar7,local_80[0],local_88);
        FUN_0093b0b0(param_8,uVar9);
        uVar11 = uVar11 + 1;
      } while ((uVar11 & 0xff) < (uVar5 & 0xff));
    }
    break;
  case 6:
    FUN_00943860(local_80,param_2,param_3);
    while (uVar10 = FUN_00943ae0(local_80,&local_88), (uVar10 & 1) != 0) {
      uVar10 = FUN_00942690(param_1,param_4,CONCAT71(uStack_87,local_88));
      if ((uVar10 & 1) != 0) {
        FUN_0093b0b0(param_8,CONCAT71(uStack_87,local_88));
      }
    }
    break;
  case 7:
    if ((param_7 & 0xff) != 0x1f) {
      param_4 = FUN_008deea0(uVar7,param_7);
    }
LAB_0099fbbc:
    FUN_0093b0b0(param_8,param_4);
    return;
  case 8:
    FUN_00943860(local_80,param_2,param_3);
    uVar10 = FUN_00943ae0(local_80,&local_88);
    while ((uVar10 & 1) != 0) {
      FUN_0093b0b0(param_8,CONCAT71(uStack_87,local_88));
      uVar10 = FUN_00943ae0(local_80,&local_88);
    }
    break;
  case 9:
    FUN_008e0a00(param_4);
    uVar6 = FUN_008f94e0();
    uVar3 = FUN_008f8cd0(param_2,uVar6);
    uVar6 = FUN_008ebfa0(uVar3);
    uVar4 = FUN_008f9400(param_2,uVar4,uVar6);
    FUN_008f8e50(param_2,uVar4,local_80,&local_88);
    uVar7 = FUN_008df900(uVar7,local_80[0],local_88);
    goto LAB_0099fb70;
  case 0xd:
    if ((param_7 & 0xff) == 0x1f) {
      return;
    }
    uVar7 = FUN_008deea0(uVar7,param_7);
LAB_0099fb70:
    FUN_0093b0b0(param_8,uVar7);
    *param_9 = 1;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eca00; name: FUN_008eca00
 */


ulong FUN_008eca00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte abStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  iVar3 = FUN_008f8110();
  uVar4 = FUN_008e0a00(param_3);
  uVar7 = FUN_008f9470(param_1,param_2,uVar4);
  uVar7 = uVar7 & 0xffffffff;
  uVar5 = FUN_00880f80(param_4);
  if (param_4 == 0xae) {
    uVar8 = FUN_008e29c0(param_3,7);
    uVar5 = 0;
    if ((uVar8 & 1) == 0) {
      uVar5 = 7;
    }
    if (iVar3 == 0) goto LAB_008ecabc;
LAB_008eca80:
    FUN_008ed6f0(auStack_58);
    switch(uVar5) {
    case 0:
    case 3:
    case 9:
      uVar9 = 2;
      break;
    case 1:
      uVar9 = 4;
      break;
    case 2:
      uVar9 = 5;
      break;
    default:
      goto switchD_008ecaa4_caseD_4;
    case 7:
      goto switchD_008ecaa4_caseD_7;
    }
    FUN_008ed700(auStack_60,uVar9,uVar7);
    FUN_008ed710(auStack_58,auStack_60);
    uVar4 = FUN_008f8110(param_1);
    uVar6 = FUN_008f87e0(param_1);
    cVar2 = FUN_008ee2f0(auStack_58,uVar4,uVar6,param_2,auStack_60);
    if (cVar2 != '\0') {
      puVar1 = &DAT_02a4d198;
      if (param_5 != 0) {
        puVar1 = &DAT_02a4d1a0;
      }
      uVar7 = FUN_008ed5b0(*puVar1,cVar2);
      uVar7 = FUN_008f9470(param_1,param_2,auStack_60[uVar7 & 0xff]);
      return uVar7 & 0xffffffff;
    }
    cVar2 = FUN_008ed730(auStack_58,uVar4,uVar6,abStack_68);
    if (cVar2 != '\0') {
      puVar1 = &DAT_02a4d198;
      if (param_5 != 0) {
        puVar1 = &DAT_02a4d1a0;
      }
      uVar7 = FUN_008ed5b0(*puVar1,cVar2);
      return (ulong)abStack_68[uVar7 & 0xff];
    }
  }
  else {
    if (iVar3 != 0) goto LAB_008eca80;
LAB_008ecabc:
    if (uVar5 < 10) {
      uVar5 = 1 << (ulong)(uVar5 & 0x1f);
      if ((uVar5 & 0x239) != 0) {
        uVar7 = FUN_008f9400(param_1,uVar7,0);
        return uVar7;
      }
      if ((uVar5 & 0x82) != 0) {
        return uVar7;
      }
    }
  }
switchD_008ecaa4_caseD_4:
  uVar7 = 5;
switchD_008ecaa4_caseD_7:
  return uVar7;
}



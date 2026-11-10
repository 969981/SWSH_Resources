/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01367ee0; name: FUN_01367ee0
 */


undefined1  [16] FUN_01367ee0(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  
  FUN_01346e80();
  FUN_012e4720();
  local_38 = FUN_0131bec0();
  plVar2 = (long *)FUN_006b92e0(&local_38);
  lVar6 = *plVar2;
  FUN_01346e80(param_1);
  FUN_012e4720();
  uVar1 = FUN_0131c120();
  if (((lVar6 == 0x45033d70413dcabf) || (lVar6 == 0x4a933c2c3d3c49ec)) ||
     (lVar6 == 0x45033e70413dcc72)) {
    switch(uVar1) {
    case 0:
      uVar4 = FUN_01346f80(param_1);
      if (lVar6 != 0x45033d70413dcabf) {
        uVar3 = FUN_01346f80(param_1);
        uVar5 = 9;
        goto LAB_01367fa4;
      }
      break;
    default:
      goto switchD_01367f88_caseD_1;
    case 2:
    case 3:
    case 4:
      uVar4 = FUN_01346f80(param_1);
      uVar3 = FUN_01346f80(param_1);
      uVar5 = 7;
LAB_01367fa4:
      uVar1 = FUN_0131e700(uVar3,uVar5);
      FUN_0131e620(uVar4,uVar1);
      uVar4 = FUN_01346f80(param_1);
      FUN_0131e710(uVar4,0);
      goto LAB_01367fd8;
    }
  }
  else {
switchD_01367f88_caseD_1:
    uVar4 = FUN_01346f80(param_1);
  }
  FUN_0131e480(uVar4,0xd);
LAB_01367fd8:
  return *(undefined1 (*) [16])PTR_DAT_02727ab0;
}



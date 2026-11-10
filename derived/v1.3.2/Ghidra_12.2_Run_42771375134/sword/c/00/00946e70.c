/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946e70; name: FUN_00946e70
 */


void FUN_00946e70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 auStack_38 [8];
  
  uVar5 = FUN_009423e0();
  FUN_0092cd40(uVar5,*param_3);
  local_48 = *param_3;
  local_40 = 0x101;
  FUN_00942450(param_1);
  uVar5 = FUN_009254b0();
  FUN_009489e0(uVar5,auStack_38,&local_48);
  uVar5 = *param_3;
  sVar3 = FUN_008e12a0(uVar5,0x13);
  if (sVar3 == 0x7f) {
LAB_00946f34:
    bVar1 = true;
  }
  else {
    uVar6 = FUN_009423e0(param_1);
    uVar4 = FUN_008e0a00(uVar5);
    bVar2 = FUN_009260c0(uVar6,uVar4,&local_48);
    if (bVar2 != 0) {
      uVar7 = 0;
      do {
        if (*(int *)(auStack_38 + uVar7 * 4 + -0x10) == 0x7f) goto LAB_00946f34;
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar2);
    }
    bVar1 = false;
  }
  FUN_00946fc0(param_1,*param_3);
  FUN_00947060(param_1,*param_3);
  FUN_009470f0(param_1,*param_3);
  uVar5 = *param_3;
  uVar7 = FUN_009426f0(param_1);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_00942710(param_1), (uVar7 & 1) == 0)) && (bVar1)) {
    local_48 = uVar5;
    FUN_00942450(param_1);
    uVar5 = FUN_00925960();
    FUN_00944a90(uVar5,auStack_38,&local_48);
  }
  return;
}



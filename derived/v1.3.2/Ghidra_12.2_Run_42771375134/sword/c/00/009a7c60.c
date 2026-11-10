/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7c60; name: FUN_009a7c60
 */


undefined8 FUN_009a7c60(undefined8 param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char local_28 [8];
  undefined2 local_18 [4];
  
  FUN_009423f0();
  uVar1 = FUN_00943010();
  switch(uVar1) {
  case 0:
    FUN_009423b0(param_1);
    FUN_0093a0b0();
    FUN_009423f0(param_1);
    FUN_00943020();
  case 1:
    FUN_009423f0(param_1);
    FUN_00943020();
    FUN_00942450(param_1);
    uVar3 = FUN_00925cd0();
    FUN_009a9f10(uVar3,local_28,local_18);
    if (local_28[0] != '\0') {
      return 1;
    }
switchD_009a7c9c_caseD_2:
    FUN_009423f0(param_1);
    FUN_00943020();
    uVar2 = FUN_009426f0(param_1);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_00942710(param_1), (uVar2 & 1) == 0)) {
      FUN_009423f0(param_1);
      uVar3 = FUN_00942fe0();
      uVar2 = FUN_00943290(uVar3,5);
      if ((uVar2 & 1) != 0) {
        return 3;
      }
switchD_009a7c9c_caseD_3:
      FUN_009423f0(param_1);
      FUN_00943020();
      FUN_00942430(param_1);
      uVar2 = FUN_00951090();
      if ((uVar2 & 1) != 0) {
        return 2;
      }
switchD_009a7c9c_caseD_4:
      FUN_00942450(param_1);
      uVar3 = FUN_00925ca0();
      FUN_009aa550(uVar3,local_28,local_18);
      FUN_009423f0(param_1);
      FUN_00943020();
switchD_009a7c9c_caseD_5:
      FUN_009423f0(param_1);
      FUN_00943020();
      local_18[0] = 0x94;
      FUN_00942450(param_1);
      uVar3 = FUN_00925c80();
      FUN_009a99f0(uVar3,local_28,local_18);
      if (local_28[0] != '\0') {
        return 1;
      }
switchD_009a7c9c_caseD_6:
      FUN_009423f0(param_1);
      FUN_00943020();
      uVar2 = FUN_009426f0(param_1);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_00942710(param_1), (uVar2 & 1) == 0)) {
        FUN_009423f0(param_1);
        uVar3 = FUN_00942fe0();
        uVar2 = FUN_00943290(uVar3,5);
        if ((uVar2 & 1) != 0) {
          return 3;
        }
switchD_009a7c9c_caseD_7:
        FUN_009423f0(param_1);
        FUN_00943020();
        FUN_00942430(param_1);
        uVar2 = FUN_00951090();
        if ((uVar2 & 1) != 0) {
          return 2;
        }
switchD_009a7c9c_caseD_8:
        FUN_009423f0(param_1);
        FUN_00943020();
        FUN_00942450(param_1);
        uVar3 = FUN_00925cb0();
        FUN_009a8140(uVar3,local_28,local_18);
        if (local_28[0] != '\0') {
          return 1;
        }
switchD_009a7c9c_caseD_9:
        FUN_009423f0(param_1);
        FUN_00943020();
        uVar2 = FUN_009426f0(param_1);
        if (((uVar2 & 1) == 0) || (uVar2 = FUN_00942710(param_1), (uVar2 & 1) == 0)) {
          FUN_009423f0(param_1);
          uVar3 = FUN_00942fe0();
          uVar2 = FUN_00943290(uVar3,5);
          if ((uVar2 & 1) != 0) {
            return 3;
          }
switchD_009a7c9c_caseD_a:
          FUN_009423f0(param_1);
          FUN_00943020();
          FUN_00942430(param_1);
          uVar2 = FUN_00951090();
          if ((uVar2 & 1) != 0) {
            return 2;
          }
switchD_009a7c9c_caseD_b:
          FUN_00942450(param_1);
          uVar3 = FUN_00925cc0();
          FUN_009a97a0(uVar3,local_28,local_18);
          FUN_009423f0(param_1);
          FUN_00943020();
switchD_009a7c9c_caseD_c:
          FUN_00942450(param_1);
          uVar3 = FUN_00925c90();
          FUN_009a9c30(uVar3,local_28,local_18);
          FUN_009423f0(param_1);
          FUN_00943020();
switchD_009a7c9c_caseD_d:
          FUN_009423f0(param_1);
          FUN_00943020();
          local_18[0] = 0x95;
          FUN_00942450(param_1);
          uVar3 = FUN_00925c80();
          FUN_009a99f0(uVar3,local_28,local_18);
          if (local_28[0] != '\0') {
            return 1;
          }
switchD_009a7c9c_caseD_e:
          FUN_009423f0(param_1);
          FUN_00943020();
          uVar2 = FUN_009426f0(param_1);
          if (((uVar2 & 1) == 0) || (uVar2 = FUN_00942710(param_1), (uVar2 & 1) == 0)) {
            FUN_009423f0(param_1);
            uVar3 = FUN_00942fe0();
            uVar2 = FUN_00943290(uVar3,5);
            if ((uVar2 & 1) != 0) {
              return 3;
            }
switchD_009a7c9c_caseD_f:
            FUN_009423f0(param_1);
            FUN_00943020();
            FUN_00942430(param_1);
            uVar2 = FUN_00951090();
            if ((uVar2 & 1) != 0) {
              return 2;
            }
            goto switchD_009a7c9c_caseD_10;
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_009a7c9c_caseD_2;
  case 3:
    goto switchD_009a7c9c_caseD_3;
  case 4:
    goto switchD_009a7c9c_caseD_4;
  case 5:
    goto switchD_009a7c9c_caseD_5;
  case 6:
    goto switchD_009a7c9c_caseD_6;
  case 7:
    goto switchD_009a7c9c_caseD_7;
  case 8:
    goto switchD_009a7c9c_caseD_8;
  case 9:
    goto switchD_009a7c9c_caseD_9;
  case 10:
    goto switchD_009a7c9c_caseD_a;
  case 0xb:
    goto switchD_009a7c9c_caseD_b;
  case 0xc:
    goto switchD_009a7c9c_caseD_c;
  case 0xd:
    goto switchD_009a7c9c_caseD_d;
  case 0xe:
    goto switchD_009a7c9c_caseD_e;
  case 0xf:
    goto switchD_009a7c9c_caseD_f;
  case 0x10:
switchD_009a7c9c_caseD_10:
    local_18[0] = 0x96;
    FUN_00942450(param_1);
    uVar3 = FUN_00925c80();
    FUN_009a99f0(uVar3,local_28,local_18);
    FUN_009423f0(param_1);
    FUN_00943020();
    break;
  default:
    break;
  }
  return 0;
}



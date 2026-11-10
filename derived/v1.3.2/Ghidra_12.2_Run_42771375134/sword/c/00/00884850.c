/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00884850; name: FUN_00884850
 */


int FUN_00884850(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  if ((char)param_1[0x11] == '\0') {
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    if (param_2 == 0) {
      do {
        if (((param_3 & 1) == 0) &&
           (lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar6), lVar2 != 0)) {
          uVar1 = FUN_008787d0();
          iVar5 = iVar5 + (~uVar1 & 1);
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 >> 1 & 0x7f;
      } while (uVar6 < *(byte *)(param_1 + 0x11));
    }
    else {
      do {
        if ((((param_3 & 1) != 0) ||
            (lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar6), lVar2 == 0)) ||
           (uVar3 = FUN_008787d0(), (uVar3 & 1) != 0)) goto switchD_008848c8_default;
        switch(param_2) {
        case 1:
          uVar3 = FUN_0087d610(lVar2,2);
          if ((uVar3 & 1) == 0) {
            uVar1 = FUN_0087b180(lVar2);
            goto LAB_008848f4;
          }
          goto switchD_008848c8_default;
        case 2:
          uVar1 = FUN_0087d610(lVar2,2);
LAB_008848f4:
          uVar1 = ~uVar1;
          goto LAB_00884924;
        case 3:
          uVar4 = 0;
          break;
        case 4:
          uVar4 = 1;
          break;
        case 5:
          uVar4 = 2;
          break;
        default:
          goto switchD_008848c8_default;
        }
        uVar1 = FUN_0087d610(lVar2,uVar4);
LAB_00884924:
        iVar5 = iVar5 + (uVar1 & 1);
switchD_008848c8_default:
        uVar6 = uVar6 + 1;
        param_3 = param_3 >> 1 & 0x7f;
      } while (uVar6 < *(byte *)(param_1 + 0x11));
    }
  }
  return iVar5;
}



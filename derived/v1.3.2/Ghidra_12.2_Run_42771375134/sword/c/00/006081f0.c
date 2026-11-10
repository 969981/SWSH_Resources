/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006081f0; name: FUN_006081f0
 */


undefined8 FUN_006081f0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar4 = (code *)param_1[5];
  if (pcVar4 == (code *)0x0) {
    uVar2 = param_1[2];
    if (((ulong)param_1[1] <= uVar2) || (param_1[1] - uVar2 < param_2)) {
      return 0x55;
    }
    uVar3 = 0;
    lVar5 = uVar2 + param_2;
    param_1[8] = *param_1 + uVar2;
    param_1[9] = *param_1 + uVar2 + param_2;
  }
  else {
    if ((ulong)param_1[1] < param_2) {
      return 0x55;
    }
    lVar5 = param_1[7];
    if ((long)param_2 < 1) {
      if (param_2 != 0) {
        *param_1 = 0;
        return 6;
      }
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)(lVar5 + 8))(lVar5,param_2);
      if (lVar1 == 0) {
        *param_1 = 0;
        return 0x40;
      }
      pcVar4 = (code *)param_1[5];
    }
    *param_1 = lVar1;
    uVar2 = (*pcVar4)(param_1,param_1[2],lVar1,param_2);
    lVar1 = *param_1;
    if (uVar2 < param_2) {
      if (lVar1 != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5);
      }
      lVar1 = 0;
      uVar3 = 0x55;
      *param_1 = 0;
    }
    else {
      uVar3 = 0;
    }
    param_1[8] = lVar1;
    param_1[9] = lVar1 + param_2;
    lVar5 = param_1[2] + uVar2;
  }
  param_1[2] = lVar5;
  return uVar3;
}



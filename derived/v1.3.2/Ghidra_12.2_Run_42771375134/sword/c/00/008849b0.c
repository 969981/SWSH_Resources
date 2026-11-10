/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008849b0; name: FUN_008849b0
 */


uint FUN_008849b0(long *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((char)param_1[0x11] != '\0') {
    uVar3 = 0;
    if (param_2 == 0) {
      do {
        lVar1 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
        if ((((lVar1 != 0) && (uVar2 = FUN_008787d0(), (uVar2 & 1) == 0)) &&
            (uVar2 = FUN_0087d610(lVar1,2), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_0087b180(lVar1), (uVar2 & 1) == 0)) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(param_1 + 0x11));
    }
    else if (param_2 == 1) {
      uVar3 = 0;
      do {
        lVar1 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
        if (((lVar1 != 0) && (uVar2 = FUN_008787d0(), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_0087d610(lVar1,2), (uVar2 & 1) == 0)) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(param_1 + 0x11));
    }
    else {
      uVar3 = 0;
      do {
        lVar1 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
        if (lVar1 != 0) {
          FUN_008787d0();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(param_1 + 0x11));
    }
  }
  return 6;
}



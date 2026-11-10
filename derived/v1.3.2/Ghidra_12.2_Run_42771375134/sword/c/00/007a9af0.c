/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9af0; name: FUN_007a9af0
 */


undefined8 FUN_007a9af0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_02610b2c != '\x04') {
    return 0;
  }
  DAT_02610b2c = (char)param_1;
  uVar4 = *(undefined8 *)PTR_DAT_02716740;
  if ((param_1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_007aad10(uVar4);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar1 = param_1 & 0xff;
    if (uVar1 != 3) {
      FUN_007ab2e0(uVar4,0);
      FUN_007aaac0(uVar4,&DAT_029f4e38);
      if (uVar1 == 1) {
        return 1;
      }
      if (uVar1 == 2) {
        FUN_007ac120(*(undefined8 *)PTR_DAT_02716748,2);
      }
      goto LAB_007a9b80;
    }
    uVar3 = 1;
  }
  FUN_007ab2e0(uVar4,uVar3);
  FUN_007aaac0(uVar4,&DAT_029f4e38);
LAB_007a9b80:
  FUN_007a8550(*(undefined8 *)PTR_DAT_027104a0,param_1);
  FUN_007b47b0(*(undefined8 *)PTR_DAT_027104b0,&DAT_029f4e20,param_2,0);
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2f70; name: FUN_009a2f70
 */


void FUN_009a2f70(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  char local_64 [4];
  byte local_58 [4];
  byte local_54 [4];
  
  local_54[0] = 0;
  local_58[0] = 0;
  local_64[0] = '\0';
  FUN_009423b0();
  FUN_0093a370();
  uVar1 = *param_3;
  piVar5 = (int *)param_3[1];
  bVar2 = FUN_009141c0(uVar1);
  if (bVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = FUN_00914310(uVar1,uVar6 & 0xffffffff);
      uVar4 = FUN_008e18d0();
      if (((uVar4 & 1) != 0) && (*piVar5 != 0)) {
        FUN_008e12a0(uVar3,0x11);
        FUN_009a3350(param_1,uVar3,piVar5);
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 4;
    } while (bVar2 != uVar6);
  }
  FUN_009a30a0(param_1,local_54,local_64,*param_3,param_3[1]);
  if (local_64[0] == '\0') {
    bVar2 = 0;
  }
  else {
    FUN_009a31b0(param_1,local_58,*param_3,param_3[1]);
    bVar2 = local_58[0] & 1;
  }
  FUN_009a32a0(param_1,*param_3,param_3[1]);
  FUN_009423b0(param_1);
  FUN_0093a3d0();
  *param_2 = bVar2 | local_54[0];
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094d760; name: FUN_0094d760
 */


void FUN_0094d760(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_00942390();
  uVar1 = FUN_009319a0();
  uVar2 = FUN_00913dd0(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    if (param_3[0xc] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_009385e0(uVar1,*param_3,8,*(undefined2 *)(param_3 + 2));
    }
    if (param_3[0xd] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_009385e0(uVar1,*param_3,9,*(undefined2 *)(param_3 + 4));
    }
    if (param_3[0xe] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_009385e0(uVar1,*param_3,10,*(undefined2 *)(param_3 + 6));
    }
    if (param_3[0xf] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_009385e0(uVar1,*param_3,0xb,*(undefined2 *)(param_3 + 8));
    }
    if (param_3[0x10] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_009385e0(uVar1,*param_3,0xc,*(undefined2 *)(param_3 + 10));
    }
    uVar1 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar1,param_3 + 0x14);
    *param_2 = 1;
  }
  return;
}



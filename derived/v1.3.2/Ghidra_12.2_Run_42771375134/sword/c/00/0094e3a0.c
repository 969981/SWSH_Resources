/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e3a0; name: FUN_0094e3a0
 */


void FUN_0094e3a0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_008e18d0();
  if (((uVar3 & 1) != 0) || (param_3[4] != '\0')) {
    cVar1 = param_3[3];
    uVar3 = FUN_008e2550(uVar2,param_3[1],cVar1 == '\0');
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_009423b0(param_1);
      FUN_00937da0(uVar4,uVar2,param_3[1],param_3[2],cVar1 == '\0');
      uVar2 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar2,param_3 + 8);
      *param_2 = 1;
    }
  }
  return;
}



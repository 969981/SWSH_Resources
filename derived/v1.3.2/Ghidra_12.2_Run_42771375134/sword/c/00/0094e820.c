/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e820; name: FUN_0094e820
 */


void FUN_0094e820(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  char local_38 [8];
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,*param_3);
  uVar2 = FUN_0094f010();
  if ((uVar2 & 1) == 0) {
    if (param_3[2] != '\0') {
      uVar3 = FUN_009423b0(param_1);
      FUN_00938920(uVar3,uVar1);
    }
    local_47 = param_3[1];
    local_38[0] = '\0';
    local_48 = 1;
    local_50 = uVar1;
    FUN_00942450(param_1);
    uVar3 = FUN_00925300();
    FUN_0094e9c0(uVar3,local_38,&local_50);
    if (local_38[0] != '\0') {
      FUN_009423f0(param_1);
      uVar3 = FUN_00942fe0();
      FUN_00943280(uVar3,5);
      *param_2 = 1;
    }
    if (param_3[2] != '\0') {
      uVar3 = FUN_009423b0(param_1);
      FUN_009389e0(uVar3,uVar1);
    }
  }
  return;
}



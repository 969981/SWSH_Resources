/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1090; name: FUN_009a1090
 */


void FUN_009a1090(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char local_50 [8];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(char *)((long)param_3 + 0xc) == '\x05') {
    local_48 = *param_3;
    FUN_00942450(param_1);
    uVar3 = FUN_00925260();
    FUN_009a13d0(uVar3,local_50,&local_48);
    local_48 = *param_3;
    local_38 = 0;
    local_40 = 1;
    FUN_00942450(param_1);
    uVar3 = FUN_009251d0();
    FUN_0094af90(uVar3,local_50,&local_48);
    if (((local_50[0] != '\0') && (uVar4 = FUN_009426f0(param_1), (uVar4 & 1) != 0)) &&
       (uVar4 = FUN_00942710(param_1), (uVar4 & 1) != 0)) {
      return;
    }
  }
  else {
    FUN_009a1170(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  }
  uVar5 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *(undefined1 *)((long)param_3 + 0xc);
  uVar3 = FUN_009423e0(param_1);
  FUN_0092d2a0(uVar3,uVar5,uVar1,uVar2);
  return;
}



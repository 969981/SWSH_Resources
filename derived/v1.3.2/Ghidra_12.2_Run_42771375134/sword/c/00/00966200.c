/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966200; name: FUN_00966200
 */


void FUN_00966200(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  uVar1 = FUN_009423e0();
  uVar2 = FUN_0092af50(uVar1,*param_3,param_3[1]);
  if ((uVar2 & 1) != 0) {
    local_38 = *param_3;
    local_28 = 0;
    local_30 = 1;
    FUN_00942450(param_1);
    uVar1 = FUN_009251d0();
    FUN_0094af90(uVar1,auStack_40,&local_38);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094dfd0; name: FUN_0094dfd0
 */


void FUN_0094dfd0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  *param_2 = 0;
  FUN_00942390();
  uVar1 = FUN_009319a0();
  uVar2 = FUN_00913dd0(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    local_48 = FUN_009424e0(param_1,*param_3);
    local_38 = 0;
    local_40 = 1;
    FUN_00942450(param_1);
    uVar1 = FUN_009251d0();
    FUN_0094af90(uVar1,auStack_28,&local_48);
    *param_2 = 1;
  }
  return;
}



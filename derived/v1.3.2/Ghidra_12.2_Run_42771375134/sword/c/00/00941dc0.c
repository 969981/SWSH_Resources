/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941dc0; name: FUN_00941dc0
 */


void FUN_00941dc0(undefined8 param_1,undefined1 *param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_48 [8];
  undefined2 local_38;
  undefined1 local_36;
  
  local_38 = *param_3;
  local_36 = *(undefined1 *)(param_3 + 1);
  FUN_00942450();
  uVar2 = FUN_009259c0();
  FUN_00941f90(uVar2,local_48,&local_38);
  *param_2 = local_48[0];
  uVar2 = FUN_009423b0(param_1);
  FUN_0093a200(uVar2,*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1),
               *(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 3));
  uVar1 = *param_2;
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_00942390(param_1);
  uVar4 = FUN_009423b0(param_1);
  FUN_0092f930(uVar2,uVar3,uVar4,0xe,uVar1,0,0);
  FUN_00942390(param_1);
  uVar2 = FUN_00931a80();
  uVar5 = FUN_009324c0(uVar2,0);
  if ((uVar5 & 1) != 0) {
    uVar2 = FUN_00942510(param_1,*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1));
    uVar3 = FUN_009423b0(param_1);
    FUN_00937550(uVar3,uVar2,0x12);
  }
  return;
}



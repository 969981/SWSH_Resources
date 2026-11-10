/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951280; name: FUN_00951280
 */


void FUN_00951280(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined2 local_38;
  
  *param_2 = 0;
  uVar1 = FUN_008e0a00(*param_3);
  FUN_00942390(param_1);
  uVar2 = FUN_009319a0();
  uVar3 = FUN_00913dd0(uVar2,uVar1);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_008e1600(*param_3), (uVar3 & 1) == 0)) {
    local_40 = *param_3;
    local_38 = 0x3c;
    FUN_00942450(param_1);
    uVar2 = FUN_009259e0();
    FUN_00945c60(uVar2,auStack_48,&local_40);
    *param_2 = 1;
  }
  return;
}



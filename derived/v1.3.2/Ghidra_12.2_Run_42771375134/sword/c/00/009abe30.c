/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009abe30; name: FUN_009abe30
 */


void FUN_009abe30(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char local_40 [8];
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *param_2 = 0;
  FUN_009423f0();
  uVar2 = FUN_00942fe0();
  FUN_00943280(uVar2,5);
  FUN_00942380(param_1);
  uVar1 = FUN_008f98a0();
  local_38 = FUN_00942510(param_1,uVar1,0);
  FUN_00942450(param_1);
  uVar2 = FUN_009252f0();
  FUN_009a2da0(uVar2,local_40,&local_38);
  if (local_40[0] != '\0') {
    FUN_00942450(param_1);
    uVar2 = FUN_00925ce0();
    FUN_009a3e50(uVar2,auStack_30,auStack_28);
    *param_2 = 1;
  }
  return;
}



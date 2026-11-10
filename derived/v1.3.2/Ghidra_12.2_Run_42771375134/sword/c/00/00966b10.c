/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966b10; name: FUN_00966b10
 */


void FUN_00966b10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar1 = FUN_00880b40(*(undefined4 *)param_3[1]);
  if (iVar1 == 7) {
    uStack_38 = param_3[1];
    local_30 = param_3[2];
    local_40 = *param_3;
    uStack_28 = local_30;
    FUN_00942450(param_1);
    uVar2 = FUN_00925350();
    FUN_00966c40(uVar2,auStack_48,&local_40);
  }
  return;
}



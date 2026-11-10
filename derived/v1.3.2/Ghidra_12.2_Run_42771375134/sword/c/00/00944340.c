/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944340; name: FUN_00944340
 */


void FUN_00944340(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 auStack_38 [8];
  
  uVar3 = FUN_009423b0();
  puVar1 = param_3 + 3;
  FUN_00937e30(uVar3,param_3[1],*(undefined4 *)(param_3 + 2),puVar1);
  if (*(char *)(param_3 + 4) != '\0') {
    FUN_00944460(param_1,param_3[1],*(undefined4 *)(param_3 + 2));
  }
  if (*(char *)((long)param_3 + 0x21) == '\0') {
    puVar4 = (undefined1 *)param_3[5];
    if (puVar4 == (undefined1 *)0x0) goto LAB_009443e8;
    uVar3 = FUN_009423b0(param_1);
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 2);
    uVar3 = param_3[1];
    FUN_00943e60(&local_68);
    FUN_00944760(param_1,&local_68,uVar3,uVar2,puVar1);
    uVar3 = FUN_009423b0(param_1);
    puVar4 = &local_68;
  }
  FUN_00935bf0(uVar3,puVar4);
LAB_009443e8:
  FUN_00944550(param_1,*(undefined4 *)(param_3 + 2),param_3[1]);
  FUN_00944670(param_1,*param_3,param_3[1],*(undefined4 *)(param_3 + 2),puVar1);
  if (*(char *)(param_3 + 6) == '\0') {
    local_68 = FUN_008e0a00(param_3[1]);
    local_67 = 4;
    FUN_00942450(param_1);
    uVar3 = FUN_00925140();
    FUN_00944c20(uVar3,auStack_38,&local_68);
  }
  return;
}



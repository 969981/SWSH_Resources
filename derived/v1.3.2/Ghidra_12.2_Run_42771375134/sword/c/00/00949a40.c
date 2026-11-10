/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949a40; name: FUN_00949a40
 */


void FUN_00949a40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_40 [8];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  uVar1 = FUN_008e1810(*param_3,0x10);
  if ((uVar1 & 1) == 0) {
    iVar3 = *(int *)(param_3 + 1);
    if ((iVar3 == 0x67) || (*(int *)((long)param_3 + 0xc) == 0x52)) {
      local_38 = FUN_008e0a00(*param_3);
      local_37 = 7;
      FUN_00942450(param_1);
      uVar2 = FUN_00925140();
      FUN_00944c20(uVar2,auStack_40,&local_38);
      iVar3 = *(int *)(param_3 + 1);
    }
    if (iVar3 == 0x7f) {
      local_28 = *param_3;
      FUN_00942450(param_1);
      uVar2 = FUN_00925960();
      FUN_00944a90(uVar2,auStack_30,&local_28);
    }
  }
  return;
}



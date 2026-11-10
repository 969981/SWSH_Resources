/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041e1d0; name: FUN_0041e1d0
 */


void FUN_0041e1d0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  puVar4 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 0x100);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar3 = FUN_0041a230();
    local_58 = FUN_0041b100(*(undefined8 *)(param_1 + 8));
    local_50 = 0;
    local_40 = 0xff;
    local_48 = 0xff;
    local_38 = 0;
    local_60 = uVar3;
    iVar1 = FUN_004b7a70(param_1,&local_60,*puVar4,puVar4[2]);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 != 0) goto LAB_0041e258;
  }
  uVar2 = FUN_00414b90(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
LAB_0041e258:
  FUN_0041dff0(param_1);
  return;
}



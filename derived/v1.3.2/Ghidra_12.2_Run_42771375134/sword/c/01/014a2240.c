/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2240; name: FUN_014a2240
 */


void FUN_014a2240(long param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = DAT_0216fa08;
  local_48 = DAT_0216f9f8;
  uStack_40 = DAT_0216fa00;
  FUN_0077eb10(*param_2,&local_48,*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xf0);
  FUN_0077eb10(*param_2,&uStack_40,*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xf8);
  FUN_0077eb10(*param_2,&local_38,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x100);
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return;
}



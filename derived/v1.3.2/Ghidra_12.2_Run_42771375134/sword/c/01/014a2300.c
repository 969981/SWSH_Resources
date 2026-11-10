/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2300; name: FUN_014a2300
 */


void FUN_014a2300(long param_1)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = FUN_01485a70(*(undefined8 *)(param_1 + 0x60));
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  FUN_014ad910(&local_40,uVar1);
  FUN_01713f70(*(undefined8 *)(param_1 + 0x68),&local_40,1);
  return;
}



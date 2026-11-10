/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132aec0; name: FUN_0132aec0
 */


void FUN_0132aec0(long param_1,undefined8 *param_2)

{
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_0132b6b0(auStack_30,*param_2,*(undefined4 *)(param_1 + 0x80));
  local_48 = 0x2854d33b80ec1509;
  local_40 = "rare_grade";
  local_38 = 10;
  FUN_012b4250(auStack_20,auStack_30,&local_48);
  FUN_012b4420(auStack_20,0);
  return;
}



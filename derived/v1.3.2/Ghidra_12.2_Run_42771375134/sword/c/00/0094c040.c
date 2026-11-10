/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c040; name: FUN_0094c040
 */


void FUN_0094c040(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [8];
  undefined8 local_30;
  uint local_28;
  
  local_28 = (uint)(byte)param_3[1];
  local_30 = FUN_009424e0(param_1,*param_3);
  FUN_00942450(param_1);
  uVar1 = FUN_00925be0();
  FUN_0094c160(uVar1,local_38,&local_30);
  *param_2 = local_38[0];
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951b40; name: FUN_00951b40
 */


undefined8 FUN_00951b40(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  char local_30 [8];
  undefined2 local_28 [4];
  
  local_28[0] = *(undefined2 *)(param_2 + 1);
  FUN_00942450();
  uVar1 = FUN_009250d0();
  FUN_00952250(uVar1,local_30,local_28);
  if (local_30[0] == '\x02') {
    FUN_00951ce0(param_1,*param_2,param_2[0x2c]);
  }
  else if (local_30[0] == '\0') {
    FUN_00951be0(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2 + 8,param_2[0x2c]);
    return 1;
  }
  return 0;
}



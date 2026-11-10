/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc99e0; name: FUN_00bc99e0
 */


undefined8 FUN_00bc99e0(long param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  local_28 = 0x531f9cb6e0867206;
  if ((*(long *)(param_1 + 0x2b0) != 0) &&
     (uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar1 & 1) == 0)) {
    return 0;
  }
  local_28 = 0x3ca252075c61193e;
  FUN_00ffd010(param_1 + 0x100,&local_28);
  *(undefined1 *)(param_1 + 0x620) = 1;
  if (*(int *)(param_1 + 0x5cc) == 0) {
    FUN_00bb5520(param_1,0);
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_28 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_28);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_28);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_28);
    break;
  default:
    FUN_00bbcd10(param_1,&local_28);
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1eb50; name: FUN_00a1eb50
 */


void FUN_00a1eb50(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = param_2[2];
  if (lVar2 == 0 && lVar1 == 0) {
    return;
  }
  FUN_00ffa290(param_1,1,1);
  FUN_00a1ec00(param_1,param_2);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x5d8) == '\0')) {
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    (**(code **)(param_1 + 0x5e0))(param_1 + 0x600);
  }
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x6e8) == '\0')) {
    *(undefined1 *)(param_1 + 0x6e8) = 1;
    (**(code **)(param_1 + 0x6f0))(param_1 + 0x710);
  }
  FUN_00a1fd10(6);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029b30; name: FUN_01029b30
 */


void FUN_01029b30(long param_1,int param_2,int param_3)

{
  time_t tVar1;
  tm tStack_68;
  
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x50);
  localtime_r((time_t *)(param_1 + 0x68),&tStack_68);
  tStack_68.tm_min = param_3;
  tStack_68.tm_hour = param_2;
  tVar1 = mktime(&tStack_68);
  *(time_t *)(param_1 + 0x68) = tVar1;
  return;
}



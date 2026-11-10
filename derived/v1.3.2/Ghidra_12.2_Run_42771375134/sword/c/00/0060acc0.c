/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060acc0; name: FUN_0060acc0
 */


undefined8 FUN_0060acc0(undefined8 *param_1,char *param_2)

{
  FILE *__stream;
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x28;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_2;
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  fseek(__stream,0,2);
  lVar1 = ftell(__stream);
  param_1[1] = lVar1;
  if (lVar1 == 0) {
    fclose(__stream);
    return 0x51;
  }
  fseek(__stream,0,0);
  param_1[3] = __stream;
  param_1[5] = &LAB_0060ad90;
  param_1[6] = &LAB_0060ae10;
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd2520; name: FUN_00bd2520
 */


void FUN_00bd2520(undefined1 param_1 [16],float param_2,long param_3,float *param_4)

{
  float fVar1;
  undefined8 local_38;
  
  if (*(char *)((long)param_4 + 0xb) != '\0') {
    local_38 = 0;
    if (*(char *)((long)param_4 + 10) == '\0') {
      *(undefined1 *)((long)param_4 + 0xb) = 0;
      if (*(char *)(param_4 + 2) == '\x01') {
        FUN_0167b9b0(*(undefined8 *)(param_3 + 0x58),
                     param_3 + (ulong)*(byte *)((long)param_4 + 9) * 0x78 + 0x68,0);
      }
    }
    else {
      fVar1 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),
                                  param_3 + 0x68 + (ulong)*(byte *)((long)param_4 + 9) * 0x78);
      local_38 = CONCAT44(param_4[1] + param_2,fVar1 + *param_4);
      FUN_0167b630(*(undefined8 *)(param_3 + 0x58),
                   param_3 + 0x68 + (ulong)*(byte *)((long)param_4 + 9) * 0x78,&local_38);
      *(char *)((long)param_4 + 10) = *(char *)((long)param_4 + 10) + -1;
    }
  }
  return;
}



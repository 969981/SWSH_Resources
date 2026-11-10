/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed730; name: FUN_008ed730
 */


ulong FUN_008ed730(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  ulong __n;
  undefined4 local_28;
  undefined2 local_24;
  
  cVar1 = (char)param_1[1];
  if (*param_1 == 0) {
    *param_4 = cVar1;
    __n = (ulong)(cVar1 != '\x05');
  }
  else if (cVar1 == '\x05') {
    __n = 0;
    *param_4 = '\x05';
  }
  else {
    local_28 = 0x5050505;
    local_24 = 5;
    if (param_2 == 1) {
      FUN_008ed970(param_1,&local_28);
    }
    else if (param_2 == 2) {
      FUN_008ede10(param_1,&local_28);
    }
    else {
      FUN_008ed800(param_1,&local_28);
    }
    __n = (ulong)local_24._1_1_;
    if (__n != 0) {
      memcpy(param_4,&local_28,__n);
    }
  }
  return __n;
}



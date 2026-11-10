/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01224660; name: FUN_01224660
 */


void FUN_01224660(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  char local_250 [8];
  char local_248;
  char local_238;
  char local_214;
  char local_200;
  char local_1c4;
  char local_170;
  char local_b0;
  char local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_2 != 0) {
    local_250[0] = '\0';
    local_248 = '\0';
    local_238 = '\0';
    local_214 = '\0';
    local_200 = '\0';
    local_1c4 = '\0';
    local_170 = '\0';
    local_b0 = '\0';
    local_60 = '\0';
    local_278 = param_3;
    local_270 = param_4;
    FUN_01225440(local_250,&local_278);
    if (((((local_60 != '\0') && (local_b0 != '\0')) && (local_170 != '\0')) &&
        (((local_1c4 != '\0' && (local_200 != '\0')) &&
         ((local_214 != '\0' && ((local_238 != '\0' && (local_248 != '\0')))))))) &&
       (local_250[0] != '\0')) {
      local_278 = local_58;
      local_258 = local_38;
      local_260 = local_40;
      local_268 = local_48;
      local_270 = local_50;
      if (*(long *)PTR_DAT_02710958 != 0) {
        FUN_01210840(*(long *)PTR_DAT_02710958,local_250);
      }
      plVar1 = (long *)(param_1 + 0x30);
      if ((((*plVar1 != param_2) && (*(long *)(param_1 + 0x60) != param_2)) &&
          (*(long *)(param_1 + 0x90) != param_2)) &&
         (((*(long *)(param_1 + 0xc0) != param_2 && (*(long *)(param_1 + 0xf0) != param_2)) &&
          ((*(long *)(param_1 + 0x120) != param_2 &&
           ((*(long *)(param_1 + 0x150) != param_2 && (*(long *)(param_1 + 0x180) != param_2))))))))
      {
        if ((*plVar1 != 0) &&
           ((((plVar1 = (long *)(param_1 + 0x60), *plVar1 != 0 &&
              (plVar1 = (long *)(param_1 + 0x90), *plVar1 != 0)) &&
             (plVar1 = (long *)(param_1 + 0xc0), *plVar1 != 0)) &&
            (plVar1 = (long *)(param_1 + 0xf0), *plVar1 != 0)))) {
          if (*(long *)(param_1 + 0x120) == 0) {
            plVar1 = (long *)(param_1 + 0x120);
          }
          else if (*(long *)(param_1 + 0x150) == 0) {
            plVar1 = (long *)(param_1 + 0x150);
          }
          else {
            if (*(long *)(param_1 + 0x180) != 0) {
              return;
            }
            plVar1 = (long *)(param_1 + 0x180);
          }
        }
        *plVar1 = param_2;
        plVar1[1] = local_278;
        plVar1[4] = local_260;
        plVar1[5] = local_258;
        plVar1[2] = local_270;
        plVar1[3] = local_268;
      }
    }
  }
  return;
}



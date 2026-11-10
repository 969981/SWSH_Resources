/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103b0a0; name: FUN_0103b0a0
 */


void FUN_0103b0a0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = 0x73129179107f4232;
  lVar1 = FUN_0103bca0(*(undefined8 *)(param_2 + 0x1b0),&local_28);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    local_28 = 0x726adea42ac6066d;
    lVar1 = FUN_0103bca0(*(undefined8 *)(param_2 + 0x1b0),&local_28);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      local_28 = 0x726adda42ac604ba;
      lVar1 = FUN_0103bca0(*(undefined8 *)(param_2 + 0x1b0),&local_28);
      param_1[2] = lVar1;
      if (lVar1 != 0) {
        local_28 = 0xc5640195ff1275d2;
        lVar1 = FUN_0103bd80(*(undefined8 *)(param_2 + 0x1b0),&local_28);
        param_1[3] = lVar1;
        if (lVar1 != 0) {
          local_28 = 0xcb0e7e670c73a343;
          lVar1 = FUN_0103bca0(*(undefined8 *)(param_2 + 0x1b0),&local_28);
          param_1[4] = lVar1;
          if (lVar1 != 0) {
            local_28 = 0x44f6a03711ff6ef2;
            lVar1 = FUN_0103bd80(*(undefined8 *)(param_2 + 0x1b0),&local_28);
            param_1[5] = lVar1;
            if (lVar1 != 0) {
              local_28 = 0x17c8ec242c186194;
              lVar1 = FUN_0103bd80(*(undefined8 *)(param_2 + 0x1b0),&local_28);
              param_1[6] = lVar1;
              if (lVar1 != 0) {
                local_28 = 0x44f6a13711ff70a5;
                lVar1 = FUN_0103bd80(*(undefined8 *)(param_2 + 0x1b0),&local_28);
                param_1[7] = lVar1;
                if (lVar1 != 0) {
                  local_28 = 0x17c8ed242c186347;
                  lVar1 = FUN_0103bd80(*(undefined8 *)(param_2 + 0x1b0),&local_28);
                  param_1[8] = lVar1;
                  if (lVar1 != 0) {
                    lVar1 = FUN_0167b6b0(*(undefined8 *)(param_2 + 0x1b0),&DAT_02162ce8);
                    param_1[9] = lVar1;
                    if (lVar1 != 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}



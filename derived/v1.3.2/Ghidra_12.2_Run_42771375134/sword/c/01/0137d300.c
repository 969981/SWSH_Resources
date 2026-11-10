/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137d300; name: FUN_0137d300
 */


void FUN_0137d300(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar2 = FUN_00794780();
    if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x17c))) &&
       ((float)(int)(*(float *)(param_1 + 0xc0) +
                    (float)(int)(*(float *)(param_1 + 0xbc) +
                                (float)(int)(*(float *)(param_1 + 0xb8) +
                                            (float)(int)(*(float *)(param_1 + 0xb4) +
                                                        (float)(int)(*(float *)(param_1 + 0xb0) +
                                                                    (float)(int)(*(float *)(param_1 
                                                  + 0xac) + (float)(int)(*(float *)(param_1 + 0xa8)
                                                                        + (float)(int)(*(float *)(
                                                  param_1 + 0xa4) +
                                                  (float)(int)(*(float *)(param_1 + 0xa0) +
                                                              (float)(int)(*(float *)(param_1 + 0x9c
                                                                                     ) + 0.0))))))))
                                )) / 10.0 <= 11.0)) {
      FUN_00794700(*(undefined8 *)(param_1 + 0x2b0));
    }
    if ((((*(long *)(param_1 + 0x2b0) == 0) || (lVar2 = FUN_00794780(), lVar2 == 0)) ||
        (*(int *)(lVar2 + 0x17c) < 1)) &&
       (11.0 < (float)(int)(*(float *)(param_1 + 0xc0) +
                           (float)(int)(*(float *)(param_1 + 0xbc) +
                                       (float)(int)(*(float *)(param_1 + 0xb8) +
                                                   (float)(int)(*(float *)(param_1 + 0xb4) +
                                                               (float)(int)(*(float *)(param_1 +
                                                                                      0xb0) +
                                                                           (float)(int)(*(float *)(
                                                  param_1 + 0xac) +
                                                  (float)(int)(*(float *)(param_1 + 0xa8) +
                                                              (float)(int)(*(float *)(param_1 + 0xa4
                                                                                     ) +
                                                                          (float)(int)(*(float *)(
                                                  param_1 + 0xa0) +
                                                  (float)(int)(*(float *)(param_1 + 0x9c) + 0.0)))))
                                                  ))))) / 10.0)) {
      FUN_00794740(*(undefined8 *)(param_1 + 0x2b0));
      FUN_007946a0(*(undefined8 *)(param_1 + 0x2b0),0);
      local_40 = 0x6ad30d88cc7da42;
      local_38 = "Play_Camp_Cooking_MixHard";
      local_30 = 0x19;
      local_28 = 0;
      FUN_012d6d40(&local_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      lVar2 = *(long *)PTR_DAT_02710840;
      uVar1 = FUN_010247a0(lVar2 + 0x390,&DAT_0216c560);
      FUN_01023770(lVar2 + 0x390,uVar1,0);
    }
  }
  return;
}



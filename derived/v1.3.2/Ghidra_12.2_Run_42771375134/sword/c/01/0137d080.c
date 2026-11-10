/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137d080; name: FUN_0137d080
 */


void FUN_0137d080(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        lVar3 = FUN_00c754c0(puVar6 + -10,auStack_58);
        goto joined_r0x0137d2c0;
      }
    }
  }
  lVar3 = FUN_00c754c0(0,auStack_58);
joined_r0x0137d2c0:
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    fVar8 = ((float)(int)(*(float *)(param_1 + 0xc0) +
                         (float)(int)(*(float *)(param_1 + 0xbc) +
                                     (float)(int)(*(float *)(param_1 + 0xb8) +
                                                 (float)(int)(*(float *)(param_1 + 0xb4) +
                                                             (float)(int)(*(float *)(param_1 + 0xb0)
                                                                         + (float)(int)(*(float *)(
                                                  param_1 + 0xac) +
                                                  (float)(int)(*(float *)(param_1 + 0xa8) +
                                                              (float)(int)(*(float *)(param_1 + 0xa4
                                                                                     ) +
                                                                          (float)(int)(*(float *)(
                                                  param_1 + 0xa0) +
                                                  (float)(int)(*(float *)(param_1 + 0x9c) + 0.0)))))
                                                  ))))) / 10.0) / 28.0;
    FUN_006cf0a0(auStack_58,&DAT_02696db0);
    local_38 = FUN_0069d160(lVar3,auStack_58);
    FUN_0069d190(fVar8,lVar3,&local_38);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (0.0 < fVar8) {
      fVar7 = (float)FUN_012dcb90(param_1);
      pfVar5 = (float *)(param_1 + 0xc4);
      fVar8 = *pfVar5 + fVar8 * fVar7;
      *pfVar5 = fVar8;
      if (1.0 < fVar8) {
        do {
          fVar8 = fVar8 + -1.0;
        } while (1.0 < fVar8);
        *pfVar5 = fVar8;
      }
    }
    FUN_006cf0a0(auStack_58,&DAT_02696dc8);
    local_38 = FUN_0069d160(lVar3,auStack_58);
    FUN_0069d190(*(undefined4 *)(param_1 + 0xc4),lVar3,&local_38);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}



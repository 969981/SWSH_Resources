/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00daaed0; name: FUN_00daaed0
 */


void FUN_00daaed0(long param_1,uint param_2,undefined8 *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  puVar1 = PTR_DAT_02710a48;
  if ((int)*(uint *)(param_1 + 0x78) < 7) {
    iVar2 = *(int *)(&DAT_02160578 + (ulong)*(uint *)(param_1 + 0x78) * 4);
  }
  else {
    iVar2 = 3;
  }
  if ((6 < (int)param_2) || (4 < iVar2)) goto LAB_00dab1ac;
  if (param_4 == -1) {
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0x80) == '\0') {
      local_198 = *(long *)(param_1 + (ulong)param_2 * 8 + 0xad78);
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
      }
      FUN_0074f970(uVar4,&local_198,0);
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
        local_198 = 0;
      }
      uVar4 = *param_3;
      local_1a0 = *(long *)(param_1 + (ulong)(param_2 + 7) * 8 + 0xad78);
      if (local_1a0 != 0) {
        (**(code **)(*(long *)(local_1a0 + 0x48) + 0x10))();
      }
      FUN_0074f970(uVar4,&local_1a0,1);
      if (local_1a0 != 0) {
        (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
        local_1a0 = 0;
      }
      goto LAB_00dab0e0;
    }
    local_188 = *(long *)(param_1 + (ulong)(param_2 + 7) * 8 + 0xad78);
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
    }
    FUN_0074f970(uVar4,&local_188,0);
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      local_188 = 0;
    }
    uVar4 = *param_3;
    local_190 = *(long *)(param_1 + (ulong)param_2 * 8 + 0xad78);
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x10))();
    }
    FUN_0074f970(uVar4,&local_190,1);
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x90);
    uVar4 = *param_3;
  }
  else {
    uVar4 = *param_3;
    local_180 = PTR_DAT_02710a48 + 0x10;
    lVar5 = (long)param_4;
    local_178 = *(long *)(param_1 + (long)param_4 * 0x110 + 0xa228);
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
    }
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    pcVar3 = *(code **)(param_1 + lVar5 * 0x110 + 0xa240);
    if (pcVar3 != (code *)0x0) {
      lVar6 = param_1 + lVar5 * 0x110;
      (*pcVar3)(lVar6 + 0xa250,auStack_150);
      local_170 = *(undefined8 *)(lVar6 + 0xa230);
      local_168 = *(code **)(lVar6 + 0xa238);
      local_160 = *(undefined8 *)(lVar6 + 0xa240);
      uStack_158 = *(undefined8 *)(lVar6 + 0xa248);
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    pcVar3 = *(code **)(param_1 + lVar5 * 0x110 + 0xa2c0);
    if (pcVar3 != (code *)0x0) {
      lVar5 = param_1 + lVar5 * 0x110;
      (*pcVar3)(lVar5 + 0xa2d0,auStack_d0);
      local_f0 = *(undefined8 *)(lVar5 + 0xa2b0);
      local_e8 = *(code **)(lVar5 + 0xa2b8);
      local_e0 = *(undefined8 *)(lVar5 + 0xa2c0);
      uStack_d8 = *(undefined8 *)(lVar5 + 0xa2c8);
    }
    local_180 = PTR_DAT_02715e08 + 0x10;
    FUN_0074f790(uVar4,&local_180);
    local_180 = puVar1 + 0x10;
    if (local_178 == 0) {
      local_178 = 0;
      pcVar3 = local_e8;
    }
    else {
      FUN_006e2100(local_178,&local_180);
      lVar5 = local_178;
      local_178 = 0;
      pcVar3 = local_e8;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        pcVar3 = local_e8;
      }
    }
    local_e8 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar3)(auStack_d0);
    }
    pcVar3 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar3)(auStack_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
LAB_00dab0e0:
    uVar4 = *param_3;
    uVar7 = 0;
  }
  FUN_0074fab0(uVar7,uVar4);
LAB_00dab1ac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return;
}



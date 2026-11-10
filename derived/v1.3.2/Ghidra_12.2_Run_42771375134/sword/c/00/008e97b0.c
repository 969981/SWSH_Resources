/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e97b0; name: FUN_008e97b0
 */


void FUN_008e97b0(void *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined1 local_290 [2];
  undefined4 local_28e;
  undefined2 local_28a;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  long local_160;
  undefined1 local_150;
  undefined1 local_14e;
  
  local_290[0] = 0;
  local_178 = 0xcbf29ce484222645;
  puStack_170 = &DAT_01d38550;
  local_168 = 0;
  local_160 = 0;
  local_288 = 0;
  local_28a = 0;
  local_28e = 0;
  local_278 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  local_180 = 0xcbf29ce484222645;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02715198), puVar2 = PTR_DAT_027151a0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar2 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_178 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_170 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_168 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar1 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_160 != 0) {
    plVar4 = (long *)(local_160 + 0x48);
    local_160 = lVar1;
    (**(code **)(*plVar4 + 0x18))();
    lVar1 = local_160;
  }
  local_160 = lVar1;
  memcpy(local_290,param_4,0x160);
  local_150 = 0;
  local_14e = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1,0,0xd00);
}



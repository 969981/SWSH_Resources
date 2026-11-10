/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de36c0; name: FUN_00de36c0
 */


undefined8 FUN_00de36c0(undefined8 param_1,uint param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar7 = *(undefined8 **)(*param_3 + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02715280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02715280), iVar2 != 0))
  {
    uVar6 = FUN_01590a70();
    *(undefined8 *)PTR_DAT_02715288 = uVar6;
    __cxa_guard_release(PTR_DAT_02715280);
  }
  for (; plVar3 != (long *)PTR_DAT_02715288; plVar3 = (long *)*plVar3) {
  }
  uVar10 = puVar7[5];
  uVar6 = puVar7[4];
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      local_100 = &LAB_00de3880;
      local_f8 = FUN_00de3890;
      local_f0 = &LAB_00de38a0;
      puStack_e8 = &LAB_00de38b0;
      uVar4 = FUN_006c7630(param_1,param_3,&local_100,&local_80);
      pcVar1 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        puStack_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar1)(auStack_e0);
      }
      if ((uVar4 & 1) == 0) {
        uVar5 = 1;
        goto joined_r0x00de3800;
      }
      if (*(char *)(puVar7 + 0x2c) != '\0') {
        puVar7[5] = CONCAT44((float)((ulong)puVar7[5] >> 0x20) + (float)((ulong)uStack_78 >> 0x20),
                             (float)puVar7[5] + (float)uStack_78);
        puVar7[4] = CONCAT44((float)((ulong)puVar7[4] >> 0x20) + (float)((ulong)local_80 >> 0x20),
                             (float)puVar7[4] + (float)local_80);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  uVar5 = 0;
joined_r0x00de3800:
  if (param_4 != (undefined8 *)0x0) {
    uVar9 = puVar7[4];
    param_4[1] = CONCAT44((float)((ulong)puVar7[5] >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                          (float)puVar7[5] - (float)uVar10);
    *param_4 = CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar6 >> 0x20),
                        (float)uVar9 - (float)uVar6);
  }
  puVar7[5] = uVar10;
  puVar7[4] = uVar6;
  return uVar5;
}



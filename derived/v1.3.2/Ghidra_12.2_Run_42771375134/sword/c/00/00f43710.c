/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f43710; name: FUN_00f43710
 */


void FUN_00f43710(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,long *param_6
                 )

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  long local_60;
  undefined8 local_58;
  
  if (*param_6 != 0) {
    puVar6 = *(undefined8 **)(*param_6 + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_00f43784;
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_00f41e40();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar6 = puVar6 + -10;
        goto LAB_00f43784;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00f43784:
  fVar7 = *(float *)(param_5 + 0x280) * DAT_01d4bec4;
  if ((float)param_1 + DAT_01d4c6b0 <= *(float *)(param_5 + 0x270)) {
    fVar8 = *(float *)(param_5 + 0x270) + fVar7;
    param_1 = (ulong)(uint)fVar8;
    if ((float)param_3 < fVar8) {
      param_3 = (ulong)(uint)(fVar7 + fVar8);
    }
  }
  if ((float)param_2 + DAT_01d4c6b0 <= *(float *)(param_5 + 0x274)) {
    fVar8 = fVar7 + *(float *)(param_5 + 0x274);
    param_2 = (ulong)(uint)fVar8;
    if ((float)param_4 < fVar8) {
      param_4 = (ulong)(uint)(fVar7 + fVar8);
    }
  }
  if (*(float *)(param_5 + 0x278) <= (float)param_3 + DAT_01d4c708) {
    fVar8 = *(float *)(param_5 + 0x278) - fVar7;
    param_3 = (ulong)(uint)fVar8;
    if (fVar8 < (float)param_1) {
      param_1 = (ulong)(uint)(fVar8 - fVar7);
    }
  }
  if (*(float *)(param_5 + 0x27c) <= (float)param_4 + DAT_01d4c708) {
    fVar8 = *(float *)(param_5 + 0x27c) - fVar7;
    param_4 = (ulong)(uint)fVar8;
    if (fVar8 < (float)param_2) {
      param_2 = (ulong)(uint)(fVar8 - fVar7);
    }
  }
  local_58 = 0;
  uVar4 = FUN_00f43960(param_1,param_2,param_3,param_4,param_5,(long)&local_58 + 4,&local_58);
  *(undefined4 *)(puVar6 + 0xc) = local_58._4_4_;
  *(undefined4 *)((long)puVar6 + 100) = (undefined4)local_58;
  lVar3 = *(long *)(*(long *)(param_5 + 0xf0) + (uVar4 & 0xffffffff) * 8);
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x50))((undefined8 *)(lVar3 + 0x50));
  if (((*PTR_DAT_02720a88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02720a88), iVar1 != 0))
  {
    uVar5 = FUN_00f41f30();
    *(undefined8 *)PTR_DAT_02720a90 = uVar5;
    __cxa_guard_release(PTR_DAT_02720a88);
  }
  do {
    if (plVar2 == (long *)0x0) {
      lVar3 = 0;
      local_60 = *param_6;
joined_r0x00f43904:
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
      }
      FUN_00f427e0(lVar3,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
      return;
    }
    if (plVar2 == (long *)PTR_DAT_02720a90) {
      local_60 = *param_6;
      goto joined_r0x00f43904;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}



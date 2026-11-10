/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f720; name: FUN_00e9f720
 */


bool FUN_00e9f720(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  long local_38;
  
  FUN_00dc7290(*(undefined8 *)(param_1 + 0x628),PTR_DAT_02715088);
  lVar7 = *(long *)(*(long *)(param_1 + 0x628) + 0x80);
  puVar8 = (undefined8 *)0x0;
  local_38 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
    puVar8 = *(undefined8 **)(lVar7 + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715280), iVar3 != 0)) {
        uVar9 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar9;
        __cxa_guard_release(PTR_DAT_02715280);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)PTR_DAT_02715288) {
          puVar8 = puVar8 + -10;
          goto LAB_00e9f7bc;
        }
      }
      puVar8 = (undefined8 *)0x0;
    }
  }
LAB_00e9f7bc:
  *(undefined1 *)(puVar8 + 0xc) = 1;
  puVar1 = (undefined8 *)puVar8[0x38];
  if (puVar1 == (undefined8 *)puVar8[0x39]) {
    FUN_015c3280(puVar8 + 0x37,PTR_DAT_0271f828);
  }
  else {
    uVar9 = puVar8[0x3a];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar1 = 0x15ac62578c201afa;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar8[0x38] = puVar8[0x38] + 8;
  }
  FUN_006cb420(puVar8);
  *(undefined1 *)(puVar8 + 0x36) = 1;
  puVar8[0xf] = *(undefined8 *)(param_1 + 0xb8);
  puVar8[0xe] = *(undefined8 *)(param_1 + 0xb0);
  puVar8[0x11] = *(undefined8 *)(param_1 + 0xa8);
  puVar8[0x10] = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = FUN_00de36c0(*(undefined8 *)(param_1 + 0x288),3,&local_38,param_2);
  bVar6 = false;
  *(undefined1 *)(puVar8 + 0xc) = 0;
  if ((uVar5 & 1) != 0) {
    fVar12 = (float)param_2[1];
    fVar13 = (float)((ulong)param_2[1] >> 0x20);
    fVar10 = (float)*param_2;
    fVar11 = (float)((ulong)*param_2 >> 0x20);
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar13 = fVar13 * fVar13;
    auVar14._4_4_ = fVar11;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar13;
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = fVar12;
    auVar2._12_4_ = fVar13;
    auVar14 = NEON_ext(auVar14,auVar2,8,1);
    bVar6 = DAT_01d4c708 < auVar14._0_4_ + fVar10 + auVar14._4_4_ + fVar11;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return bVar6;
}



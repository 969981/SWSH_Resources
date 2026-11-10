/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc2bf0; name: FUN_00dc2bf0
 */


void FUN_00dc2bf0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  lVar3 = param_1[1] - *param_1 >> 7;
  uVar9 = 0xaaaaaaaaaaaaaa;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 7;
  plVar12 = param_1 + 3;
  plStack_58 = plVar12;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x55555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
      goto LAB_00dc2cb8;
    }
  }
  local_60 = 0;
  lVar4 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar9 * 0x180,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)*plVar12 + 0xb8))();
  }
LAB_00dc2cb8:
  puVar13 = (undefined8 *)(lVar4 + lVar3 * 0x80);
  local_60 = lVar4 + uVar9 * 0x180;
  lVar10 = *plVar12;
  local_78 = lVar4;
  puStack_70 = puVar13;
  local_68 = puVar13;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar13 = *param_2;
  lVar11 = lVar4 + lVar3 * 0x80;
  plVar12 = (long *)(lVar11 + 0x10);
  *plVar12 = (long)(PTR_DAT_027164e0 + 0x10);
  lVar10 = param_2[3];
  *(long *)(lVar11 + 0x18) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar10 = lVar4 + lVar3 * 0x80;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,lVar4 + lVar3 * 0x80 + 0x40);
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[7];
    *(undefined8 *)(lVar10 + 0x30) = param_2[6];
    *(undefined8 *)(lVar10 + 0x38) = uVar8;
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
    *(undefined8 *)(lVar10 + 0x28) = uVar7;
  }
  lVar10 = lVar4 + lVar3 * 0x80;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  if ((code *)param_2[0x16] != (code *)0x0) {
    (*(code *)param_2[0x16])(param_2 + 0x18,lVar4 + lVar3 * 0x80 + 0xc0);
    uVar6 = param_2[0x14];
    uVar7 = param_2[0x15];
    uVar8 = param_2[0x17];
    *(undefined8 *)(lVar10 + 0xb0) = param_2[0x16];
    *(undefined8 *)(lVar10 + 0xb8) = uVar8;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0xa8) = uVar7;
  }
  *plVar12 = (long)(PTR_DAT_027164d8 + 0x10);
  lVar11 = lVar4 + lVar3 * 0x80;
  *(undefined8 *)(lVar11 + 0x120) = param_2[0x24];
  *(undefined8 *)(lVar11 + 0x128) = param_2[0x25];
  *(undefined8 *)(lVar11 + 0x130) = param_2[0x26];
  *(undefined8 *)(lVar11 + 0x138) = param_2[0x27];
  lVar10 = param_2[0x28];
  *(long *)(lVar11 + 0x140) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar4 = lVar4 + lVar3 * 0x80;
  *(undefined8 *)(lVar4 + 0x150) = param_2[0x2a];
  uVar6 = *(undefined8 *)((long)param_2 + 0x16f);
  uVar7 = param_2[0x2b];
  *(undefined8 *)(lVar4 + 0x168) = param_2[0x2d];
  uVar8 = param_2[0x2c];
  *(undefined8 *)(lVar4 + 0x158) = uVar7;
  *(undefined8 *)(lVar4 + 0x160) = uVar8;
  *(undefined8 *)(lVar4 + 0x16f) = uVar6;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_68 = local_68 + 0x30;
  FUN_00dc2e90(param_1,&local_78);
  FUN_00dc30f0(&local_78);
  return;
}



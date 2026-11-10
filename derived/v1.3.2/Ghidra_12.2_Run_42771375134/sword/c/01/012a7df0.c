/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a7df0; name: FUN_012a7df0
 */


void FUN_012a7df0(long *param_1,char *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long local_78;
  char *local_70;
  char *local_68;
  long local_60;
  long *local_58;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar11 = 0xc30c30c30c30c3;
  uVar1 = lVar4 * -0x30c30c30c30c30c3 + 1;
  if (0xc30c30c30c30c3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar5 * -0x30c30c30c30c30c3) < 0x61861861861861) {
    uVar6 = lVar5 * -0x6186186186186186;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      lVar5 = 0;
      goto LAB_012a7ee0;
    }
  }
  local_60 = 0;
  lVar5 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar11 * 0x150,0x10);
  if (lVar5 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_012a7ee0:
  pcVar12 = (char *)(lVar5 + lVar4 * 0x10);
  local_60 = lVar5 + uVar11 * 0x150;
  lVar13 = *plVar2;
  local_78 = lVar5;
  local_70 = pcVar12;
  local_68 = pcVar12;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar13 = lVar5 + lVar4 * 0x10;
  *pcVar12 = '\0';
  *(undefined1 *)(lVar13 + 0xc0) = 0;
  *(undefined1 *)(lVar13 + 0x110) = 0;
  *(undefined1 *)(lVar13 + 0x120) = 0;
  if (param_2[0x120] != '\0') {
    lVar8 = lVar5 + lVar4 * 0x10;
    *(undefined8 *)(lVar8 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    uVar7 = *(undefined8 *)(param_2 + 0x130);
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    uVar10 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(lVar8 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(lVar8 + 0x148) = uVar10;
    *(undefined8 *)(lVar8 + 0x130) = uVar7;
    *(undefined8 *)(lVar8 + 0x138) = uVar9;
    *(undefined1 *)(lVar13 + 0x120) = 1;
  }
  if (param_2[0x110] != '\0') {
    *(undefined8 *)(lVar5 + lVar4 * 0x10 + 0x114) = *(undefined8 *)(param_2 + 0x114);
    *(undefined1 *)(lVar13 + 0x110) = 1;
  }
  if (param_2[0xc0] != '\0') {
    lVar8 = lVar5 + lVar4 * 0x10;
    uVar7 = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)(lVar8 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)(lVar8 + 0xc4) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0xd4);
    uVar9 = *(undefined8 *)(param_2 + 0xdc);
    uVar10 = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar8 + 0xec) = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar8 + 0xe4) = uVar10;
    *(undefined8 *)(lVar8 + 0xdc) = uVar9;
    *(undefined8 *)(lVar8 + 0xd4) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x104);
    uVar9 = *(undefined8 *)(param_2 + 0xf4);
    uVar10 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined4 *)(lVar8 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined8 *)(lVar8 + 0xfc) = uVar10;
    *(undefined8 *)(lVar8 + 0xf4) = uVar9;
    *(undefined8 *)(lVar8 + 0x104) = uVar7;
    *(undefined1 *)(lVar13 + 0xc0) = 1;
  }
  if (*param_2 != '\0') {
    memcpy((void *)(lVar5 + lVar4 * 0x10 + 0x10),param_2 + 0x10,0xb0);
    *pcVar12 = '\x01';
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_68 = local_68 + 0x150;
  FUN_00fc0aa0(param_1,&local_78);
  while (local_68 != local_70) {
    pcVar12 = local_68 + -0x150;
    if (local_68[-0x30] != '\0') {
      local_68[-0x30] = '\0';
    }
    if (local_68[-0x40] != '\0') {
      local_68[-0x40] = '\0';
    }
    if (local_68[-0x90] != '\0') {
      local_68[-0x90] = '\0';
    }
    local_68 = pcVar12;
    if (*pcVar12 != '\0') {
      *pcVar12 = '\0';
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007853a0; name: FUN_007853a0
 */


void FUN_007853a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 auStack_38 [8];
  
  FUN_00700120(param_1,0,0);
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_027162c8;
  *(undefined2 *)(param_1 + 0x17) = 0x100;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x98);
  param_1[10] = (long)(puVar1 + 0xd8);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_019af250(param_1 + 0x1c);
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((long)param_1 + 0x2a5) = 0;
  param_1[0x5c] = 1;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x5d] = -0x100000000;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x6a] = lVar6;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  lVar6 = FUN_007875f0(auStack_38,param_1[1]);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x57] != 0) {
    (**(code **)(*(long *)(param_1[0x57] + 0x48) + 0x18))();
    param_1[0x57] = 0;
  }
  param_1[0x57] = lVar6;
  if (lVar6 != 0) {
    pcVar8 = *(code **)(lVar6 + 0x118);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x120) = 0;
      *(undefined8 *)(lVar6 + 0x128) = 0;
      *(undefined8 *)(lVar6 + 0x110) = 0;
      *(undefined8 *)(lVar6 + 0x118) = 0;
      (*pcVar8)(lVar6 + 0x130);
    }
    puVar4 = PTR_LAB_027162e8;
    puVar3 = PTR_LAB_027162e0;
    puVar2 = PTR_LAB_027162d8;
    *(undefined **)(lVar6 + 0x130) = PTR_LAB_027162d0;
    puVar5 = PTR_LAB_027162f0;
    *(undefined **)(lVar6 + 0x110) = puVar2;
    *(undefined **)(lVar6 + 0x118) = puVar3;
    *(undefined **)(lVar6 + 0x120) = puVar4;
    *(undefined **)(lVar6 + 0x128) = puVar5;
  }
  param_1[0x14] =
       param_1[0x14] & 0xffffe00000000000U |
       param_1[0x14] & 0x1fffffffffU | (ulong)*(byte *)((long)param_1 + 0x2ac) << 0x25;
  plVar9 = (long *)param_1[1];
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,0x2a0,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_007878b0(lVar7,param_1);
  *(long **)(lVar7 + 8) = plVar9;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x2a0;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  FUN_006d1120(lVar7);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar7 + 0x298) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar7;
  return;
}



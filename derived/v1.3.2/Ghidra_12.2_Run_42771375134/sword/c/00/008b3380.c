/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b3380; name: FUN_008b3380
 */


void FUN_008b3380(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_50 [16];
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar8[0xb];
  iVar2 = *(int *)(lVar5 + 0x60);
  uVar6 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if (iVar2 == 1) {
    uVar3 = 6;
    goto LAB_008b34b4;
  }
  if (iVar2 != 0) {
    return;
  }
  uVar1 = (uint)uVar6;
  if (uVar1 == 0x646) {
    uVar3 = 0xc;
    goto LAB_008b34b4;
  }
  if (uVar1 == 0x285) {
    uVar3 = 0xb;
    goto LAB_008b34b4;
  }
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if (iVar2 - 0x4cfU < 0x15) {
    uVar3 = 0xd;
    goto LAB_008b34b4;
  }
  uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  FUN_008885c0(auStack_50,uVar3);
  iVar2 = FUN_00888630(auStack_50,0x11);
  if ((iVar2 == 1) && (iVar2 = FUN_00888630(auStack_50,0x25), 0 < iVar2)) {
    FUN_00888620(auStack_50);
    uVar3 = 10;
    goto LAB_008b34b4;
  }
  FUN_00888620(auStack_50);
  if ((uVar1 - 0x3af < 4) || ((uVar1 - 0x636 < 2 || (uVar1 - 0x274 < 2)))) {
    uVar3 = 9;
    goto LAB_008b34b4;
  }
  uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  FUN_008885c0(auStack_50,uVar3);
  uVar7 = FUN_00888bc0(auStack_50);
  FUN_00888620(auStack_50);
  if ((uVar7 & 1) != 0) {
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),0);
    uVar3 = 2;
    goto LAB_008b34b4;
  }
  FUN_008885c0(auStack_50,uVar6 & 0xffffffff);
  iVar2 = FUN_00888eb0(auStack_50);
  FUN_00888620(auStack_50);
  if (iVar2 != -1) {
    uVar3 = 7;
    goto LAB_008b34b4;
  }
  if (uVar1 == 0x4fe) {
    uVar3 = 0x10;
    goto LAB_008b34b4;
  }
  uVar7 = FUN_008bdbe0(uVar6 & 0xffffffff);
  if ((uVar7 & 1) != 0) {
    *(uint *)(lVar5 + 0x24) = uVar1;
    uVar3 = 0x12;
    goto LAB_008b34b4;
  }
  uVar7 = FUN_008adec0(uVar6 & 0xffffffff);
  if ((uVar7 & 1) != 0) {
    *(uint *)(lVar5 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x80) = 0x11;
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = 3;
  if ((int)uVar1 < 0x235) {
    if ((0x34 < uVar1) || ((1L << (uVar6 & 0x3f) & 0x17e00000000000U) == 0)) {
      uVar1 = uVar1 - 0xa9;
joined_r0x008b35d8:
      if (5 < uVar1) {
        return;
      }
    }
  }
  else if (5 < uVar1 - 0x464) {
    uVar1 = uVar1 - 0x235;
    goto joined_r0x008b35d8;
  }
  uVar3 = 4;
LAB_008b34b4:
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  return;
}



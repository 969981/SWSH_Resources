/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121cd80; name: FUN_0121cd80
 */


void FUN_0121cd80(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  long local_88 [3];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    bVar6 = 0;
    goto LAB_0121ce60;
  }
  uVar2 = param_3 << 3;
  if (uVar2 < 0xc1) {
    uVar4 = 0;
    uVar5 = 0;
joined_r0x0121ce18:
    bVar6 = 0;
joined_r0x0121ce18:
    uVar7 = 0;
  }
  else {
    bVar6 = *(byte *)(param_2 + 3);
    uVar4 = bVar6 & 1;
    uVar5 = bVar6 >> 1 & 1;
    if (uVar2 < 0xc6) goto joined_r0x0121ce18;
    bVar6 = bVar6 >> 2 & 0xf;
    if (10 < bVar6) {
      bVar6 = 0;
    }
    if (uVar2 < 0xd0) goto joined_r0x0121ce18;
    uVar7 = *(undefined1 *)((long)param_2 + 0x19);
  }
  if (0x30 < param_3) {
    local_88[0] = (long)param_2 + 0x1a;
    local_88[1] = 0x17;
  }
LAB_0121ce60:
  FUN_0121d510(local_88 + 2,local_88);
  *(long *)((long)param_1 + 0x26) = local_88[2];
  *(undefined8 *)((long)param_1 + 0x36) = local_68;
  *(ulong *)((long)param_1 + 0x44) = CONCAT62(uStack_58,local_5a);
  *(uint *)((long)param_1 + 0x1c) = uVar4;
  *(uint *)(param_1 + 4) = uVar5;
  *(byte *)((long)param_1 + 0x24) = bVar6;
  *(undefined1 *)((long)param_1 + 0x25) = uVar7;
  *(ulong *)((long)param_1 + 0x3e) = CONCAT26(local_5a,uStack_60);
  *(undefined8 *)((long)param_1 + 0x2e) = uStack_70;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((param_2 != (undefined8 *)0x0) && (0xbf < param_3 << 3)) {
    uVar1 = *param_2;
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    *param_1 = uVar1;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e39d0; name: FUN_008e39d0
 */


undefined8 FUN_008e39d0(long param_1,uint param_2,ulong *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong local_48;
  
  if (((param_2 | 4) == 6) ||
     (puVar6 = (ulong *)(param_1 + (ulong)param_2 * 8 + 0x90), (*(byte *)puVar6 & 7) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar7 = (ulong)param_2;
    bVar2 = FUN_008ed270(param_1 + uVar7 * 8 + 0x90);
    local_48 = *puVar6;
    if (param_3 != (ulong *)0x0) {
      *param_3 = local_48;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    if (param_2 == 0x1c) {
      uVar3 = FUN_008ed2f0(&local_48);
      uVar3 = uVar3 & 0xffff;
      if ((((*(uint *)(param_1 + 0x2d4) != uVar3) && (*(uint *)(param_1 + 0x2f0) != uVar3)) &&
          (*(uint *)(param_1 + 0x30c) != uVar3)) && (*(uint *)(param_1 + 0x328) != uVar3)) {
        uVar4 = FUN_008ed090();
        *puVar6 = uVar4;
        *(undefined1 *)(param_1 + 0x214) = 0;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
      }
    }
    if (bVar2 == 0) {
      uVar4 = *puVar6;
      if (((uVar4 & 7) == 1) && ((uVar4 & 0x3f00) != 0)) {
        bVar2 = *(byte *)(param_1 + uVar7 + 0x1f8);
        if ((uint)bVar2 < ((uint)uVar4 >> 8 & 0x3f)) {
          *(byte *)(param_1 + uVar7 + 0x1f8) = bVar2 + 1;
        }
      }
    }
    else {
      param_1 = param_1 + uVar7;
      bVar1 = *(char *)(param_1 + 0x1f8) + 1;
      *(byte *)(param_1 + 0x1f8) = bVar1;
      if (bVar2 <= bVar1) {
        uVar7 = FUN_008ed090();
        *puVar6 = uVar7;
        *(undefined1 *)(param_1 + 0x1f8) = 0;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



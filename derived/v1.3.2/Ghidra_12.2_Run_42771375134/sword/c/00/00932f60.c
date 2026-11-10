/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932f60; name: FUN_00932f60
 */


undefined8 FUN_00932f60(long param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_28;
  
  if (*(byte *)(param_1 + 0x11) == param_2) {
    return 0;
  }
  local_28 = param_3;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    uVar4 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0x130) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x138) = 0x1f0000001f;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0x1f;
  }
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x1b8) = (ushort)param_2;
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    *(undefined8 *)(param_1 + 0x130) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x138) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0x1f;
    bVar3 = FUN_008ed1f0(&local_28);
    if ((bVar3 != 0x1f) && (*(int *)(param_1 + 0x1a0) != 0)) {
      uVar2 = *(uint *)(param_1 + 0x178);
      if (uVar2 < 5) {
        if (uVar2 != 0) {
          uVar5 = 0;
          do {
            if (*(uint *)(param_1 + uVar5 * 4 + 0x130) == (uint)bVar3) goto LAB_00933060;
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar1;
          } while (uVar1 < uVar2);
        }
        *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x130) = (uint)bVar3;
        *(uint *)(param_1 + 0x178) = uVar2 + 1;
      }
    }
  }
LAB_00933060:
  *(byte *)(param_1 + 0x11) = param_2;
  return 1;
}



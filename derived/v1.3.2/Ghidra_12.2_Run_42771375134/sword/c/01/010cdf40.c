/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cdf40; name: FUN_010cdf40
 */


void FUN_010cdf40(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long local_90;
  long local_88 [7];
  undefined1 local_50;
  undefined4 local_4e;
  long local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  
  FUN_00ffa290(*(undefined8 *)(param_1 + 200),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 200),0);
  local_48[1] = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_010ccbc0(local_88,*(undefined8 *)(param_1 + 0xb0),param_2,*(undefined8 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa8));
  local_48[0] = local_88[0];
  if (local_88[0] != 0) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
  }
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[0] = 0;
  local_50 = 1;
  local_4e = 0xffff;
  local_88[1] = 0;
  local_88[2] = 0;
  iVar1 = FUN_010cd000(*(undefined8 *)(param_1 + 0xb0),param_2);
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      FUN_010cce40(&local_90,*(undefined8 *)(param_1 + 0xb0),param_2,uVar3 & 0xffffffff);
      local_88[uVar3] = local_90;
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_010cd000(*(undefined8 *)(param_1 + 0xb0),param_2);
    } while (uVar3 < (uVar2 & 0xffffffff));
  }
  FUN_01037680(*(undefined8 *)(param_1 + 200),5);
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),local_48,local_88);
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}



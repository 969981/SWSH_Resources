/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010524c0; name: FUN_010524c0
 */


bool FUN_010524c0(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (iVar1 == 3) {
    if (*(long *)(param_1 + 0x1d8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
  }
  else {
    if (iVar1 != 1) {
      bVar2 = iVar1 < 5;
      goto joined_r0x010528b0;
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x298) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x298) = 0;
    }
    if (*(long *)(param_1 + 0x208) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x208) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    if (*(long *)(param_1 + 0x1d0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    if (*(long *)(param_1 + 0x200) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    if (*(long *)(param_1 + 0x1f8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1f8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    if (*(long *)(param_1 + 0x1f0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    if (*(long *)(param_1 + 0x148) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    if (*(long *)(param_1 + 0x140) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    if (*(long *)(param_1 + 0x118) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x118) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xf8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (*(int *)(param_1 + 0x198) != 0) {
      FUN_0073edc0(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0xb0),param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x198) = 0;
      local_24 = 0;
      FUN_0073c7b0(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0xb0),&local_24,param_1 + 0x198);
    }
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_0073edc0(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0xb0),param_1 + 0x19c);
      *(undefined4 *)(param_1 + 0x19c) = 0;
      local_28 = 0;
      FUN_0073c7b0(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0xb0),&local_28,param_1 + 0x19c);
    }
    if (*(long *)(param_1 + 0x1b8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1b8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1b0) = 0;
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    if (*(long *)(param_1 + 0x1a0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1a0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    if (*(long *)(param_1 + 0x1c8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
    if (*(long *)(param_1 + 0x1c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(long *)(param_1 + 400) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 400) = 0;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
    if (*(long *)(param_1 + 0x218) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x218) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
    if (*(long *)(param_1 + 0x220) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x220) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x220) = 0;
    }
    if (*(long *)(param_1 + 0x228) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
    if (*(long *)(param_1 + 0x230) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x230) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
    if (*(long *)(param_1 + 0x238) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x238) = 0;
    }
    if (*(long *)(param_1 + 0x240) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x240) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x240) = 0;
    }
    if (*(long *)(param_1 + 0x248) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x248) = 0;
      iVar1 = *(int *)(param_1 + 0x2a4);
      bVar2 = true;
      goto joined_r0x010528b0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x2a4);
  bVar2 = true;
joined_r0x010528b0:
  if (iVar1 < 6) {
    *(int *)(param_1 + 0x2a4) = iVar1 + 1;
  }
  return bVar2;
}



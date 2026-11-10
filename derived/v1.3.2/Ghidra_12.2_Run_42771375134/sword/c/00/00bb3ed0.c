/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb3ed0; name: FUN_00bb3ed0
 */


void FUN_00bb3ed0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = FUN_00bcc430(&local_38,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x600) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x600) = 0;
  }
  *(long *)(param_1 + 0x600) = lVar1;
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_38 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_40 = 0x24b1606b667538d3;
  uVar2 = FUN_00ffdef0(param_1 + 0x100,&local_40);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x600);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar5 + 0x60);
  *(long *)(lVar5 + 0x60) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar5 + 0x68);
  *(long *)(lVar5 + 0x68) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar5 + 0x90) = 0x409966c0ab82a885;
  *(undefined8 *)(lVar5 + 0x70) = uVar2;
  *(undefined4 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0xd0) = 0x6f10d37858aed32b;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0xffc95db18a8a4391;
  *(undefined8 *)(lVar5 + 0xa8) = 0x6f10d37858aed32b;
  *(undefined8 *)(lVar5 + 0xb0) = 0x6f10d37858aed32b;
  *(undefined8 *)(lVar5 + 0xb8) = 0x6f10d37858aed32b;
  *(undefined8 *)(lVar5 + 0xc0) = 0x6f10d27858aed178;
  *(undefined8 *)(lVar5 + 200) = 0xffc95db18a8a4391;
  FUN_016a98e0(lVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}



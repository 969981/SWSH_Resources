/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01458280; name: FUN_01458280
 */


void FUN_01458280(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  uint local_38;
  undefined2 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_18;
  undefined1 local_14;
  
  local_38 = local_38 & 0xffffff00;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar3 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar3;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  puVar4 = *(undefined8 **)(puVar4[0xd6] + 8);
  *puVar4 = 1;
  puVar4[1] = 0x100000000;
  *(undefined2 *)(puVar4 + 2) = 1;
  *(undefined1 *)((long)puVar4 + 0x12) = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined1 *)((long)puVar4 + 0x17) = local_14;
  *(undefined4 *)((long)puVar4 + 0x13) = local_18;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0xffffffff00000000;
  *(undefined4 *)(puVar4 + 6) = 0xffffffff;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  *(undefined1 *)((long)puVar4 + 0x1f) = local_22;
  *(undefined2 *)((long)puVar4 + 0x1d) = local_24;
  *(undefined4 *)((long)puVar4 + 0x19) = local_28;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 2;
  *(undefined8 *)((long)puVar4 + 0x5c) = 2;
  *(undefined8 *)((long)puVar4 + 100) = 2;
  *(undefined8 *)((long)puVar4 + 0x6c) = 2;
  *(undefined8 *)((long)puVar4 + 0x74) = 2;
  *(undefined2 *)((long)puVar4 + 0x49) = local_2c;
  *(undefined1 *)((long)puVar4 + 0x4b) = local_2a;
  *(undefined8 *)((long)puVar4 + 0x7c) = 2;
  *(undefined8 *)((long)puVar4 + 0x84) = 2;
  *(undefined8 *)((long)puVar4 + 0x8c) = 2;
  *(undefined8 *)((long)puVar4 + 0x94) = 2;
  *(undefined8 *)((long)puVar4 + 0x9c) = 2;
  *(undefined8 *)((long)puVar4 + 0xa4) = 2;
  *(undefined8 *)((long)puVar4 + 0xac) = 2;
  *(undefined4 *)((long)puVar4 + 0xb4) = 2;
  *(undefined4 *)(puVar4 + 0x17) = 0;
  *(undefined8 *)((long)puVar4 + 0xbc) = 2;
  *(undefined8 *)((long)puVar4 + 0xc4) = 2;
  *(undefined8 *)((long)puVar4 + 0xcc) = 2;
  *(undefined8 *)((long)puVar4 + 0xd4) = 2;
  *(undefined8 *)((long)puVar4 + 0xdc) = 2;
  *(undefined8 *)((long)puVar4 + 0xe4) = 2;
  *(undefined8 *)((long)puVar4 + 0xec) = 2;
  *(undefined8 *)((long)puVar4 + 0xf4) = 2;
  *(undefined8 *)((long)puVar4 + 0xfc) = 2;
  *(undefined8 *)((long)puVar4 + 0x104) = 2;
  *(undefined8 *)((long)puVar4 + 0x10c) = 2;
  *(undefined8 *)((long)puVar4 + 0x114) = 2;
  *(undefined8 *)((long)puVar4 + 0x11c) = 2;
  *(undefined8 *)((long)puVar4 + 0x124) = 2;
  *(undefined8 *)((long)puVar4 + 300) = 2;
  *(undefined4 *)((long)puVar4 + 0x134) = 2;
  *(undefined4 *)((long)puVar4 + 0x13c) = 2;
  *(undefined4 *)(puVar4 + 0x27) = 0;
  puVar4[0x28] = 0;
  *(undefined2 *)(puVar4 + 0x29) = 0x1212;
  *(undefined2 *)((long)puVar4 + 0x14a) = local_30;
  *(undefined8 *)((long)puVar4 + 0x14c) = 0;
  *(undefined8 *)((long)puVar4 + 0x154) = 0x1900000000;
  *(undefined8 *)((long)puVar4 + 0x15c) = 3;
  *(undefined8 *)((long)puVar4 + 0x164) = 0x1c00060000;
  *(undefined1 *)((long)puVar4 + 0x16c) = 0;
  if (puVar4[0x2e] != 0) {
    (**(code **)(*(long *)(puVar4[0x2e] + 0x48) + 0x18))();
    puVar4[0x2e] = 0;
  }
  puVar4[0x2e] = 0;
  if (puVar4[0x2f] != 0) {
    (**(code **)(*(long *)(puVar4[0x2f] + 0x48) + 0x18))();
    puVar4[0x2f] = 0;
  }
  puVar4[0x2f] = 0;
  if (puVar4[0x30] != 0) {
    (**(code **)(*(long *)(puVar4[0x30] + 0x48) + 0x18))();
    puVar4[0x30] = 0;
  }
  *(uint *)(puVar4 + 0x32) = local_38;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  *(undefined1 *)((long)puVar4 + 0x194) = 0;
  *(undefined1 *)((long)puVar4 + 0x19b) = local_42;
  *(undefined2 *)((long)puVar4 + 0x199) = local_44;
  *(undefined4 *)((long)puVar4 + 0x195) = local_48;
  *(undefined4 *)((long)puVar4 + 0x19c) = 0;
  *(undefined1 *)(puVar4 + 0x34) = 0;
  *(undefined1 *)((long)puVar4 + 0x1a3) = local_4a;
  *(undefined2 *)((long)puVar4 + 0x1a1) = local_4c;
  *(undefined4 *)((long)puVar4 + 0x1a4) = 0;
  return;
}



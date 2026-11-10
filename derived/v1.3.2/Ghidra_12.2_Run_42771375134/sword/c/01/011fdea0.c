/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fdea0; name: FUN_011fdea0
 */


void FUN_011fdea0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 local_228 [56];
  undefined1 local_1f0 [56];
  undefined1 local_1b8 [56];
  undefined1 local_180 [56];
  undefined1 local_148 [56];
  undefined1 local_110 [56];
  undefined1 local_d8 [56];
  char local_a0 [8];
  long local_98 [7];
  
  local_228[0] = 0;
  local_1f0[0] = 0;
  local_1b8[0] = 0;
  local_180[0] = 0;
  local_148[0] = 0;
  local_110[0] = 0;
  local_d8[0] = 0;
  local_a0[0] = '\0';
  FUN_01200630(param_1 + 0x140,local_228);
  FUN_01200630(param_1 + 0x178,local_1f0);
  FUN_01200630(param_1 + 0x1b0,local_1b8);
  FUN_01200630(param_1 + 0x1e8,local_180);
  FUN_01200630(param_1 + 0x220,local_148);
  FUN_01200630(param_1 + 600,local_110);
  FUN_01200630(param_1 + 0x290,local_d8);
  FUN_01200630(param_1 + 0x2c8,local_a0);
  lVar3 = 0;
  do {
    if (local_a0[lVar3] != '\0') {
      lVar2 = *(long *)((long)local_98 + lVar3 + 0x20);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)local_98 + lVar3 + 0x20) = 0;
      }
      lVar2 = *(long *)((long)local_98 + lVar3 + 0x18);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)local_98 + lVar3 + 0x18) = 0;
      }
      lVar2 = *(long *)((long)local_98 + lVar3 + 0x10);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)local_98 + lVar3 + 0x10) = 0;
      }
      lVar2 = *(long *)((long)local_98 + lVar3 + 8);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)local_98 + lVar3 + 8) = 0;
      }
      if (*(long *)((long)local_98 + lVar3) != 0) {
        (**(code **)(*(long *)(*(long *)((long)local_98 + lVar3) + 0x48) + 0x18))();
        *(undefined8 *)((long)local_98 + lVar3) = 0;
      }
      local_a0[lVar3] = '\0';
    }
    bVar1 = lVar3 != -0x188;
    lVar3 = lVar3 + -0x38;
  } while (bVar1);
  if (*(char *)(param_1 + 0x300) != '\0') {
    if (*(long *)(param_1 + 0x328) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x328) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x328) = 0;
    }
    if (*(long *)(param_1 + 800) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 800) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 800) = 0;
    }
    if (*(long *)(param_1 + 0x318) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x318) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    if (*(long *)(param_1 + 0x310) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x310) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
    if (*(long *)(param_1 + 0x308) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x308) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x308) = 0;
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  if (*(char *)(param_1 + 0x338) != '\0') {
    if (*(long *)(param_1 + 0x360) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x360) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
    if (*(long *)(param_1 + 0x358) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    if (*(long *)(param_1 + 0x350) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x350) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
    if (*(long *)(param_1 + 0x348) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x348) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    if (*(long *)(param_1 + 0x340) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  return;
}



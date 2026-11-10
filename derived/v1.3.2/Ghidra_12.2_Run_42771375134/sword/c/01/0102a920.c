/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102a920; name: FUN_0102a920
 */


void FUN_0102a920(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined2 local_24 [2];
  
  FUN_01029c20(*(undefined8 *)PTR_DAT_027108c0,1);
  puVar1 = PTR_DAT_02710798;
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar2 == 0) {
    FUN_0152e170(0);
    FUN_0152e0d0(0);
    lVar2 = *(long *)(*(long *)puVar1 + 0x240);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0152e170(lVar2);
    FUN_0152e0d0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(*(long *)puVar1 + 0x240);
  }
  if (lVar2 == 0) {
    FUN_0151ef10(0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0151ef10(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_01511210(lVar3,0xb4bbb9216c3b5e62,0);
  FUN_01511120(lVar3,0x3505ce3dfc997003);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0x248);
  if (lVar2 == 0) {
    local_24[0] = 0;
    FUN_01526260(0,local_24);
    lVar2 = *(long *)(*(long *)puVar1 + 0x278);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_24[0] = 0;
    FUN_01526260(lVar2,local_24);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(*(long *)puVar1 + 0x278);
  }
  if (lVar2 == 0) {
    FUN_0152aba0(0);
    return;
  }
  plVar4 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_0152aba0(lVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}



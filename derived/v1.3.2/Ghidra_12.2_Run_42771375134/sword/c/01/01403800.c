/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01403800; name: FUN_01403800
 */


void FUN_01403800(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x78);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x688),0);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x690),0);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_013f9d40();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar3) {
        puVar4 = puVar4 + -10;
        goto LAB_01403894;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_01403894:
  FUN_013fafe0(puVar4,0xa767ecbbb3dae54b,1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  *(undefined4 *)(param_1 + 0x570) = 2;
  pcVar2 = *(code **)(param_1 + 0xd8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar2)(param_1 + 0xf0);
  }
  *(long *)(param_1 + 0xf0) = param_1;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01405b40;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01405ba0;
  pcVar2 = *(code **)(param_1 + 0x158);
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01405bb0;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01405bc0;
  *(undefined4 *)(param_1 + 0x570) = 2;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar2)(param_1 + 0x170);
  }
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined1 **)(param_1 + 0x150) = &LAB_01405800;
  *(undefined1 **)(param_1 + 0x158) = &LAB_014058e0;
  *(undefined1 **)(param_1 + 0x160) = &LAB_01405a80;
  *(undefined1 **)(param_1 + 0x168) = &LAB_01405a90;
  return;
}



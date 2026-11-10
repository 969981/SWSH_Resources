/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a872f0; name: FUN_00a872f0
 */


void FUN_00a872f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710a48;
  *(undefined **)(param_1 + 0x350) = PTR_DAT_02710a48 + 0x10;
  if (*(long *)(param_1 + 0x358) == 0) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    pcVar3 = *(code **)(param_1 + 1000);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x358),param_1 + 0x350);
    lVar2 = *(long *)(param_1 + 0x358);
    *(undefined8 *)(param_1 + 0x358) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 1000);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    (*pcVar3)(param_1 + 0x400);
  }
  pcVar3 = *(code **)(param_1 + 0x368);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    (*pcVar3)(param_1 + 0x380);
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  *(undefined **)(param_1 + 0x240) = puVar1 + 0x10;
  if (*(long *)(param_1 + 0x248) == 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    pcVar3 = *(code **)(param_1 + 0x2d8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x248),param_1 + 0x240);
    lVar2 = *(long *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0x2d8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    (*pcVar3)(param_1 + 0x2f0);
  }
  pcVar3 = *(code **)(param_1 + 600);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    (*pcVar3)(param_1 + 0x270);
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  puVar1 = PTR_DAT_027164e0;
  *(undefined **)(param_1 + 0x130) = PTR_DAT_027164e0 + 0x10;
  if (*(long *)(param_1 + 0x138) == 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    pcVar3 = *(code **)(param_1 + 0x1c8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x138),param_1 + 0x130);
    lVar2 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0x1c8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    (*pcVar3)(param_1 + 0x1e0);
  }
  pcVar3 = *(code **)(param_1 + 0x148);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar3)(param_1 + 0x160);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    pcVar3 = *(code **)(param_1 + 0xb8);
  }
  else {
    FUN_006e2100();
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0xb8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar3)(param_1 + 0xd0);
  }
  pcVar3 = *(code **)(param_1 + 0x38);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar3)(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



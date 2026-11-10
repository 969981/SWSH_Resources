/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114a790; name: FUN_0114a790
 */


void * FUN_0114a790(void *param_1,void *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  memcpy(param_1,param_2,0x1b2);
  memcpy((void *)((long)param_1 + 0x1c0),(void *)((long)param_2 + 0x1c0),0x118);
  *(undefined8 *)((long)param_1 + 0x2d8) = *(undefined8 *)((long)param_2 + 0x2d8);
  *(undefined8 *)((long)param_1 + 0x2e0) = *(undefined8 *)((long)param_2 + 0x2e0);
  *(undefined8 *)((long)param_1 + 0x2e8) = *(undefined8 *)((long)param_2 + 0x2e8);
  lVar6 = *(long *)((long)param_2 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x2f0);
  *(long *)((long)param_1 + 0x2f0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined2 *)((long)param_1 + 0x2f8) = *(undefined2 *)((long)param_2 + 0x2f8);
  uVar3 = *(undefined8 *)((long)param_2 + 0x308);
  *(undefined8 *)((long)param_1 + 0x30d) = *(undefined8 *)((long)param_2 + 0x30d);
  *(undefined8 *)((long)param_1 + 0x308) = uVar3;
  *(undefined8 *)((long)param_1 + 0x300) = *(undefined8 *)((long)param_2 + 0x300);
  *(undefined8 *)((long)param_1 + 800) = *(undefined8 *)((long)param_2 + 800);
  *(undefined8 *)((long)param_1 + 0x328) = *(undefined8 *)((long)param_2 + 0x328);
  *(undefined8 *)((long)param_1 + 0x330) = *(undefined8 *)((long)param_2 + 0x330);
  lVar6 = *(long *)((long)param_2 + 0x338);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x338);
  *(long *)((long)param_1 + 0x338) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined8 *)((long)param_1 + 0x340) = *(undefined8 *)((long)param_2 + 0x340);
  *(undefined8 *)((long)param_1 + 0x348) = *(undefined8 *)((long)param_2 + 0x348);
  *(undefined8 *)((long)param_1 + 0x350) = *(undefined8 *)((long)param_2 + 0x350);
  lVar6 = *(long *)((long)param_2 + 0x358);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x358);
  *(long *)((long)param_1 + 0x358) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined8 *)((long)param_1 + 0x360) = *(undefined8 *)((long)param_2 + 0x360);
  *(undefined8 *)((long)param_1 + 0x368) = *(undefined8 *)((long)param_2 + 0x368);
  *(undefined8 *)((long)param_1 + 0x370) = *(undefined8 *)((long)param_2 + 0x370);
  lVar6 = *(long *)((long)param_2 + 0x378);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x378);
  *(long *)((long)param_1 + 0x378) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined4 *)((long)param_1 + 0x380) = *(undefined4 *)((long)param_2 + 0x380);
  uVar3 = *(undefined8 *)((long)param_2 + 0x388);
  uVar4 = *(undefined8 *)((long)param_2 + 0x390);
  *(undefined8 *)((long)param_1 + 0x398) = *(undefined8 *)((long)param_2 + 0x398);
  *(undefined8 *)((long)param_1 + 0x390) = uVar4;
  *(undefined8 *)((long)param_1 + 0x388) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x3a0);
  uVar4 = *(undefined8 *)((long)param_2 + 0x3a8);
  uVar5 = *(undefined8 *)((long)param_2 + 0x3b0);
  *(undefined4 *)((long)param_1 + 0x3b8) = *(undefined4 *)((long)param_2 + 0x3b8);
  *(undefined8 *)((long)param_1 + 0x3b0) = uVar5;
  *(undefined8 *)((long)param_1 + 0x3a8) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3a0) = uVar3;
  lVar6 = *(long *)((long)param_2 + 0x3c0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x3c0);
  *(long *)((long)param_1 + 0x3c0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3c8);
  *(undefined2 *)((long)param_1 + 0x3cc) = *(undefined2 *)((long)param_2 + 0x3cc);
  *(undefined4 *)((long)param_1 + 0x3c8) = uVar1;
  lVar6 = *(long *)((long)param_2 + 0x3d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x3d0);
  *(long *)((long)param_1 + 0x3d0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3d8);
  *(undefined2 *)((long)param_1 + 0x3dc) = *(undefined2 *)((long)param_2 + 0x3dc);
  *(undefined4 *)((long)param_1 + 0x3d8) = uVar1;
  lVar6 = *(long *)((long)param_2 + 0x3e0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x3e0);
  *(long *)((long)param_1 + 0x3e0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined4 *)((long)param_2 + 1000);
  *(undefined2 *)((long)param_1 + 0x3ec) = *(undefined2 *)((long)param_2 + 0x3ec);
  *(undefined4 *)((long)param_1 + 1000) = uVar1;
  lVar6 = *(long *)((long)param_2 + 0x3f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x3f0);
  *(long *)((long)param_1 + 0x3f0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3f8);
  *(undefined2 *)((long)param_1 + 0x3fc) = *(undefined2 *)((long)param_2 + 0x3fc);
  *(undefined4 *)((long)param_1 + 0x3f8) = uVar1;
  lVar6 = *(long *)((long)param_2 + 0x400);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x400);
  *(long *)((long)param_1 + 0x400) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x408);
  *(undefined2 *)((long)param_1 + 0x40c) = *(undefined2 *)((long)param_2 + 0x40c);
  *(undefined4 *)((long)param_1 + 0x408) = uVar1;
  *(undefined2 *)((long)param_1 + 0x410) = *(undefined2 *)((long)param_2 + 0x410);
  lVar6 = *(long *)((long)param_2 + 0x418);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x418);
  *(long *)((long)param_1 + 0x418) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x420);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x420);
  *(long *)((long)param_1 + 0x420) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x428);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x428);
  *(long *)((long)param_1 + 0x428) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x430);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x430);
  *(long *)((long)param_1 + 0x430) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x438);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x438);
  *(long *)((long)param_1 + 0x438) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  memcpy((void *)((long)param_1 + 0x440),(void *)((long)param_2 + 0x440),0x5a0);
  lVar6 = *(long *)((long)param_2 + 0x9e0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x9e0);
  *(long *)((long)param_1 + 0x9e0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x9e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x9e8);
  *(long *)((long)param_1 + 0x9e8) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x9f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x9f0);
  *(long *)((long)param_1 + 0x9f0) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0x9f8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0x9f8);
  *(long *)((long)param_1 + 0x9f8) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0xa00);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa00);
  *(long *)((long)param_1 + 0xa00) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar3 = *(undefined8 *)((long)param_2 + 0xa08);
  *(undefined2 *)((long)param_1 + 0xa10) = *(undefined2 *)((long)param_2 + 0xa10);
  *(undefined8 *)((long)param_1 + 0xa08) = uVar3;
  lVar6 = *(long *)((long)param_2 + 0xa18);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa18);
  *(long *)((long)param_1 + 0xa18) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0xa20);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa20);
  *(long *)((long)param_1 + 0xa20) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0xa28);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa28);
  *(long *)((long)param_1 + 0xa28) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0xa30);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa30);
  *(long *)((long)param_1 + 0xa30) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)((long)param_2 + 0xa38);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)((long)param_1 + 0xa38);
  *(long *)((long)param_1 + 0xa38) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  memcpy((void *)((long)param_1 + 0xa40),(void *)((long)param_2 + 0xa40),0x2b8);
  return param_1;
}



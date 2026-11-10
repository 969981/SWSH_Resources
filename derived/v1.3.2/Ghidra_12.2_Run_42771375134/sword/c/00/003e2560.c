/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2560; name: FUN_003e2560
 */


void FUN_003e2560(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_78 [40];
  
  lVar1 = param_1 + 0x1b20;
  *(undefined4 *)(param_1 + 0x1b40) = 1;
  *(long *)(param_1 + 0x1b38) = param_1 + 0x17d8;
  (**(code **)(*(long *)(param_1 + 0x17d8) + 0x20))();
  *(undefined8 *)(param_1 + 0x1b30) = *(undefined8 *)(*(long *)(param_1 + 0x1b38) + 0x10);
  *(undefined4 *)(param_1 + 0x1b08) = 1;
  *(long *)(param_1 + 0x1b00) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x1b20) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x1af8) = *(undefined8 *)(*(long *)(param_1 + 0x1b00) + 0x10);
  (**(code **)(**(long **)(param_1 + 0x1b30) + 0xa0))(*(long **)(param_1 + 0x1b30),lVar1);
  (**(code **)(**(long **)(param_1 + 0x1af8) + 0xa0))(*(long **)(param_1 + 0x1af8),param_1 + 0x1ae8)
  ;
  FUN_003e21b0(param_1);
  *(undefined4 *)(param_1 + 0x1ad0) = 1;
  *(long **)(param_1 + 0x1ac8) = param_2;
  if (param_2 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x1ac0);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar4 = *(long **)(*(long *)(param_1 + 0x1ac8) + 0x10);
    *(long **)(param_1 + 0x1ac0) = plVar4;
  }
  (**(code **)(*plVar4 + 0xa0))(plVar4,param_1 + 0x1ab0);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_78);
  uVar2 = *(uint *)(param_1 + 0x11b0);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x110c);
    uVar6 = 0;
    do {
      uVar7 = uVar2 - uVar6;
      if (0xff < uVar7) {
        uVar7 = 0x100;
      }
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar5 = *(undefined8 *)
                   (*(long *)(param_1 + 0x11a8) + (ulong)(uVar6 + (int)uVar8) * 0x10 + 8);
          FUN_003ce740(*(undefined8 *)(param_1 + 0x1048),uVar5,0,1,auStack_78);
          FUN_003fb100(uVar5,0,1,auStack_78,uVar3 >> 4 & 1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar6 = uVar6 + 0x100;
    } while (uVar6 < uVar2);
  }
  return;
}



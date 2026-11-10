/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066c6c0; name: FUN_0066c6c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0066c6c0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  if ((param_2 != (long *)0x0) && (param_5 != 0)) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_5 + 8,1);
    FUN_00682fc0(param_2,0x10);
    FUN_00682fc0(param_2,0x10);
    uVar3 = (**(code **)(*param_2 + 0xf8))(param_2,1);
    *(undefined4 *)(param_5 + 0x40) = uVar3;
    if (0 < *(int *)(param_5 + 0x44)) {
      lVar5 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
        *(undefined1 *)(*(long *)(param_5 + 0x48) + lVar5) = uVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_5 + 0x44));
    }
    FUN_00682fc0(param_2,0x10);
    uVar3 = (**(code **)(*param_2 + 0xf8))(param_2,1);
    *(undefined4 *)(param_5 + 0xa0) = uVar3;
    FUN_00682fc0(param_2,0x10);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0xf8))(param_2,1);
    *(undefined4 *)(param_5 + 0xb0) = 0;
    if (0 < *(int *)(param_5 + 0xb4)) {
      lVar5 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
        *(undefined1 *)(*(long *)(param_5 + 0xb8) + lVar5) = uVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_5 + 0xb4));
    }
    FUN_00682fc0(param_2,0x10);
    uVar3 = (**(code **)(*param_2 + 0xf8))(param_2,1);
    *(undefined4 *)(param_5 + 0x110) = uVar3;
    uVar1 = *(uint *)(param_4 + 8);
    if ((uVar1 & 1) != 0) {
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 0x118) = uVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 0x11c) = uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 0x120) = uVar3;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 0x124) = uVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 0x128) = uVar3;
    }
    if ((uVar1 >> 5 & 1) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_5 + 300) = uVar3;
    }
  }
  return uVar4;
}



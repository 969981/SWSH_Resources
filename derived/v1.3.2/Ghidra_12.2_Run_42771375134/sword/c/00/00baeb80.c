/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00baeb80; name: FUN_00baeb80
 */


undefined8 FUN_00baeb80(long param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x600);
  if (iVar1 == 5) {
    uVar4 = FUN_01689fb0(*(undefined8 *)(param_1 + 0x5e8),param_2,param_3,param_4);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar5 = *param_3;
    if (*param_4 < uVar5) {
      return 0;
    }
    while( true ) {
      uVar2 = FUN_01689f70(*(undefined8 *)(param_1 + 0x5e8),uVar5);
      uVar4 = FUN_0168a940(*(undefined8 *)(param_1 + 0x5e8),uVar2);
      if ((uVar4 & 1) == 0) break;
      uVar5 = uVar5 + 1;
      if (*param_4 < uVar5) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 0) {
        uVar3 = FUN_01689fb0(*(undefined8 *)(param_1 + 0x5d8),param_2,param_3,param_4);
        return uVar3;
      }
      return 0;
    }
    uVar4 = FUN_01689fb0(*(undefined8 *)(param_1 + 0x5e0),param_2,param_3,param_4);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar5 = *param_3;
    if (*param_4 < uVar5) {
      return 0;
    }
    while( true ) {
      uVar2 = FUN_01689f70(*(undefined8 *)(param_1 + 0x5e0),uVar5);
      uVar4 = FUN_0168acc0(*(undefined8 *)(param_1 + 0x5e0),uVar2);
      if ((uVar4 & 1) == 0) break;
      uVar5 = uVar5 + 1;
      if (*param_4 < uVar5) {
        return 0;
      }
    }
  }
  return 1;
}



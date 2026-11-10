/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6e70; name: FUN_006b6e70
 */


void FUN_006b6e70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = FUN_006b9b40(param_3[0x1e]);
  if ((uVar1 & 1) != 0) {
    FUN_006b9c40(param_3[0x1e],*param_3);
    uVar4 = param_3[0x1e];
    uVar3 = param_3[1];
    lVar5 = param_3[3];
    if (lVar5 == 0) {
      lVar5 = FUN_00696de0();
      lVar2 = param_3[4];
    }
    else {
      lVar2 = param_3[4];
    }
    if (lVar2 == 0) {
      lVar2 = FUN_00696de0();
    }
    FUN_006b9d40(param_2,param_1,uVar4,uVar3,lVar5,lVar2);
  }
  uVar3 = FUN_006b9b60(*(undefined8 *)(param_3[0x11] + 0xf0));
  uVar4 = FUN_006b9b60(param_3[0x1e]);
  FUN_006ac3d0(uVar3,uVar4);
  FUN_006b6db0(param_2,param_3);
  return;
}



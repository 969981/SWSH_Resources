/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053260; name: FUN_01053260
 */


void FUN_01053260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_220 [124];
  
  lVar1 = *(long *)(param_1 + 0x148);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xf0) + 0xb0);
  lVar3 = *(long *)(lVar1 + 0x1f0);
  if (lVar3 != 0) {
    FUN_00784060(local_220,uVar2);
    FUN_01061fc0(lVar3,local_220,4);
    FUN_00784490(local_220);
  }
  lVar3 = *(long *)(lVar1 + 0x188);
  if (lVar3 != 0) {
    FUN_00784060(local_220,uVar2);
    FUN_0079b7a0(lVar3,0,local_220);
    FUN_00784490(local_220);
    (**(code **)(**(long **)(lVar1 + 0x1a0) + 0x68))(*(long **)(lVar1 + 0x1a0),0);
    if (*(int *)(lVar1 + 0x198) != 0) {
      FUN_0073edc0(*(undefined8 *)(*(long *)(lVar1 + 0x1b0) + 0xb0),lVar1 + 0x198);
      *(undefined4 *)(lVar1 + 0x198) = 0;
      local_220[0] = 0;
      FUN_0073c7b0(*(undefined8 *)(*(long *)(lVar1 + 0x1b0) + 0xb0),local_220,lVar1 + 0x198);
    }
  }
  return;
}



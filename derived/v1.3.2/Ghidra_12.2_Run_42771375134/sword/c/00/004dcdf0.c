/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dcdf0; name: FUN_004dcdf0
 */


undefined4
FUN_004dcdf0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(long *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  lVar2 = 0;
  if (*(long *)(param_5 + 0x20) != 0) {
    lVar2 = *(long *)(param_5 + 0x20) + -0x18;
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  lVar2 = FUN_004614b0(param_1 + 0x20,*param_3,lVar1);
  if (lVar2 == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*param_3 + 0x30);
  lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x28);
  if (lVar2 != 0) {
    FUN_004c9c70(lVar2,param_5,param_4);
  }
  uVar3 = 1;
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  *(long *)(param_1 + 0x18) = lVar2;
  return uVar3;
}



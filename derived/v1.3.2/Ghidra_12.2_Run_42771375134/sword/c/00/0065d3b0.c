/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065d3b0; name: FUN_0065d3b0
 */


bool FUN_0065d3b0(long param_1,long *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_0065ca50();
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0xd8) = param_2;
    uVar1 = (**(code **)(*param_2 + 0x140))(param_2);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
    uVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x150))
                      (*(long **)(param_1 + 0xd8),param_3,param_4);
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
    *(undefined1 *)(param_1 + 0x10c) = 0;
    FUN_0065ce20(param_1,1,param_3,param_4);
    lVar2 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    *(int *)(param_1 + 0x108) = param_3 + *(int *)(lVar2 + 0x20) * param_4;
  }
  return param_2 != (long *)0x0;
}



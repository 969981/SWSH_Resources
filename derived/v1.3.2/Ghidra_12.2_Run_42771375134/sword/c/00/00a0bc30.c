/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0bc30; name: FUN_00a0bc30
 */


undefined8 FUN_00a0bc30(long *param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 5;
  *param_1 = (long)param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  cVar1 = (**(code **)(*param_2 + 0x730))(param_2,param_3);
  if (cVar1 == '\x05') {
    return 0;
  }
  lVar4 = (**(code **)(*(long *)*param_1 + 0x7f8))((long *)*param_1,(int)param_1[1]);
  param_1[2] = lVar4;
  lVar4 = (**(code **)(*(long *)*param_1 + 0x850))();
  param_1[4] = lVar4;
  uVar2 = FUN_00933080();
  *(undefined1 *)(param_1 + 3) = uVar2;
  uVar2 = FUN_00932760(param_1[4]);
  *(undefined1 *)((long)param_1 + 0x19) = uVar2;
  if (((param_1[2] != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) &&
     (uVar5 = FUN_008e4a80(param_1[2]), (uVar5 & 1) != 0)) {
    uVar3 = FUN_008e4a90(param_1[2]);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  }
  *(char *)(param_1 + 5) = cVar1;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x738))((long *)*param_1,(int)param_1[1]);
  *(undefined1 *)((long)param_1 + 0x29) = uVar2;
  return 1;
}


